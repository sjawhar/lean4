/-
Copyright (c) 2026 Theorem Labs. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
-/
module

prelude
public import Lake.Build.Trace
public import Std.Sync.Mutex
public import Std.Sync.Channel
public import Std.Data.HashMap.Basic
public import Init.System.Promise
import Init.Data.String.TakeDrop
import Lake.Util.Proc

/-!
# Kept-module checker client

A kept-module checker is an external process that decides whether a module's existing `.olean`
still holds against the module's current imports, so that Lake can record it as up to date
without compiling the module. Lake starts it on the first request of a build (the command in
`LAKE_KEPT_CHECKER`, with `LEAN_SYSROOT` set to the toolchain's sysroot, in a process group of its
own), writes one JSON request per line to its standard input, and reads one JSON reply per line from
its standard output, matched to requests by `id`. Requests may be answered in any order.

Request: `{"v": 1, "id": N, "module": "<name>", "olean": "<absolute path>", "src": "<absolute path>",
"setup": <setup>}`, where `src` is the module's source file and `<setup>` is the module's `ModuleSetup`
(its `.setup.json`), whose `importArts` names the `.olean` of every non-toolchain module in its import
closure.

Reply: `{"id": N, "ok": true, "oleanHash": "<hash of the .olean bytes read>"}` or
`{"id": N, "ok": false, "reason": "<text>"}`.

A checker that exits, writes a malformed reply or a reply to a request it was not asked (or answered
already), or sends no reply for the configured timeout while requests are outstanding is killed with
its process group, and every request it holds is a reject. The next request starts a new checker, up
to `maxSpawns` start attempts per build; after that every request is a reject. Requests are written
by one task per checker, outside the client's lock, so a checker that stops reading cannot block the
jobs that ask it, nor the watchdog that kills it; a request that cannot be written is a reject.

The checker does not inherit the workspace build lock (`spawnProc`). Its session is its own, so a
terminal's interrupt does not reach it; when Lake exits, however it exits, the checker's standard
input reaches its end, and a checker is expected to stop then.

The process group is Unix-only: on Windows the checker gets no session of its own, and a kill ends
the checker process alone, not processes it started.
-/

open Lean

namespace Lake

/-- A kept-module checker's verdict on a module's existing `.olean`. -/
public inductive KeptVerdict
  /-- The checker accepted the `.olean` whose bytes have this hash. -/
  | accepted (oleanHash : Hash)
  /-- The `.olean` must not be kept. -/
  | rejected (reason : String)
  deriving Inhabited

/-- The checker process. Its standard input is written only by its writer task. -/
public abbrev KeptChecker.Proc :=
  IO.Process.Child {stdin := .piped, stdout := .piped, stderr := .inherit}

/-- A running checker: its process, the queue of its writer task, and its number (see `spawns`). -/
public structure KeptChecker.Running where
  proc : KeptChecker.Proc
  outbox : Std.CloseableChannel (Nat × String)
  gen : Nat

public structure KeptChecker.State where
  running? : Option KeptChecker.Running := none
  /-- How many checker start attempts this build has made. -/
  spawns : Nat := 0
  nextId : Nat := 0
  /-- The requests the running checker has not answered. -/
  pending : Std.HashMap Nat (IO.Promise KeptVerdict) := {}
  /-- When the running checker last replied, or got a request while it had none outstanding. -/
  lastProgress : Nat := 0
  /-- Why the last checker stopped or could not start. -/
  lastFailure : String := ""
  /-- Whether the watchdog (`KeptChecker.watch`) runs. -/
  watching : Bool := false
  closed : Bool := false

/-- A client of a kept-module checker, shared by the jobs of one build. -/
public structure KeptChecker where
  cmd : String
  /-- The toolchain's sysroot, passed to the checker as `LEAN_SYSROOT`. -/
  sysroot : System.FilePath
  /-- Milliseconds without a reply, while requests are outstanding, before the checker is killed. -/
  timeoutMs : Nat
  state : Std.Mutex KeptChecker.State

namespace KeptChecker

/-- Checker start attempts per build: the first, and three after a checker died or failed to start. -/
public def maxSpawns : Nat := 4

public def new (cmd : String) (sysroot : System.FilePath) (timeoutMs : Nat) : BaseIO KeptChecker := do
  return {cmd, sysroot, timeoutMs, state := ← Std.Mutex.new {}}

/-- Rejects every outstanding request of checker number `gen`, if it is still the running one. -/
def died (self : KeptChecker) (gen : Nat) (reason : String) : BaseIO Unit := do
  let stopped? ← self.state.atomically do
    let s ← get
    let some r := s.running? | return none
    unless r.gen == gen do return none
    set {s with running? := none, pending := {}, lastFailure := reason}
    return some (r, s.pending)
  let some (r, pending) := stopped? | return
  discard <| r.outbox.close.toBaseIO
  for (_, promise) in pending do
    promise.resolve (.rejected reason)

/-- Rejects request `id` of checker number `gen`, if it is still outstanding. -/
def reject (self : KeptChecker) (gen id : Nat) (reason : String) : BaseIO Unit := do
  let promise? ← self.state.atomically do
    let s ← get
    let some r := s.running? | return none
    unless r.gen == gen do return none
    let promise? := s.pending.get? id
    set {s with pending := s.pending.erase id}
    return promise?
  if let some promise := promise? then
    promise.resolve (.rejected reason)

def parseReply (line : String) : Except String (Nat × KeptVerdict) := do
  let json ← Json.parse line
  let id ← json.getObjValAs? Nat "id"
  if (← json.getObjValAs? Bool "ok") then
    return (id, .accepted (← json.getObjValAs? Hash "oleanHash"))
  else
    return (id, .rejected ((json.getObjValAs? String "reason").toOption.getD "no reason given"))

partial def readReplies (self : KeptChecker) (proc : Proc) (gen : Nat) : IO Unit := do
  let line ← proc.stdout.getLine
  if line.isEmpty then
    self.died gen "the checker exited"
    discard <| proc.wait
    return
  match parseReply line.trimAscii.copy with
  | .ok (id, verdict) =>
    -- only a reply to a request in flight is progress (`watch`)
    let promise? ← self.state.atomically do
      let s ← get
      let some promise := s.pending.get? id | return none
      set {s with pending := s.pending.erase id, lastProgress := ← IO.monoMsNow}
      return some promise
    if let some promise := promise? then
      promise.resolve verdict
      readReplies self proc gen
    else
      self.died gen s!"the checker replied to request {id}, which it was not asked or had already \
        answered"
      proc.kill
      discard <| proc.wait
  | .error e =>
    self.died gen s!"the checker wrote a malformed reply ({e}): {line.trimAscii}"
    proc.kill
    discard <| proc.wait

/--
Writes the requests queued for checker number `gen` to its standard input, until its queue is
closed. A request that cannot be written is rejected.
-/
partial def writeRequests (self : KeptChecker) (stdin : IO.FS.Handle)
    (outbox : Std.CloseableChannel (Nat × String)) (gen : Nat) : IO Unit := do
  let some (id, line) ← IO.wait (← outbox.recv) | return
  if let .error e ← (do stdin.putStrLn line; stdin.flush).toBaseIO then
    self.reject gen id s!"could not write to the checker (number {gen}): {e}"
  writeRequests self stdin outbox gen

/-- Kills a checker that has sent no reply for `timeoutMs` while requests were outstanding. -/
partial def watch (self : KeptChecker) : IO Unit := do
  IO.sleep 250
  let now ← IO.monoMsNow
  let stalled? ← self.state.atomically do
    let s ← get
    if s.closed then return none
    let some r := s.running? | return some none
    if !s.pending.isEmpty && now - s.lastProgress > self.timeoutMs then
      return some (some r)
    return some none
  match stalled? with
  | none => return
  | some none => watch self
  | some (some r) =>
    self.died r.gen s!"the checker sent no reply for {self.timeoutMs / 1000} s and was killed"
    try r.proc.kill catch _ => pure ()
    watch self

/-- Starts checker number `gen` with its reader and writer tasks. -/
def start (self : KeptChecker) (gen : Nat) : IO Running := do
  -- The writer task writes to this child's `stdin`: the child `Child.takeStdin` returns has lost
  -- `setsid`, so its `kill` would reach the checker only
  let proc ← spawnProc (inheritBuildLock := false) {
    cmd := self.cmd
    env := #[("LEAN_SYSROOT", some self.sysroot.toString)]
    stdin := .piped, stdout := .piped, stderr := .inherit
    -- a process group of its own, so that a kill also reaches the checker's own children, which
    -- would otherwise hold its pipes open
    setsid := true
  }
  let outbox : Std.CloseableChannel (Nat × String) ← Std.CloseableChannel.new
  discard <| IO.asTask (prio := .dedicated) (self.readReplies proc gen)
  discard <| IO.asTask (prio := .dedicated) (self.writeRequests proc.stdin outbox gen)
  return {proc, outbox, gen}

/--
The running checker, started (as number `spawns`) if none runs, or why there is none: `maxSpawns`
start attempts were made, or this one failed.
-/
def ensureRunning (self : KeptChecker) : Std.AtomicT State IO (Except String Running) := do
  let s ← get
  if let some r := s.running? then return .ok r
  if s.spawns ≥ maxSpawns then
    return .error s!"no checker left in this build after {maxSpawns} start attempts; the last: \
      {s.lastFailure}"
  let gen := s.spawns
  match (← (self.start gen).toBaseIO) with
  | .ok r =>
    unless s.watching do
      discard <| IO.asTask (prio := .dedicated) self.watch
    set {s with running? := some r, spawns := gen + 1, watching := true}
    return .ok r
  | .error e =>
    let reason := s!"could not start the checker '{self.cmd}': {e}"
    set {s with spawns := gen + 1, lastFailure := reason}
    return .error reason

/--
Asks the checker whether `olean`, the existing `.olean` of `module` (compiled from `src`), holds
against the imports described by `setup`. Blocks until the checker answers or is found dead.
-/
public def check (self : KeptChecker) (module : Name) (olean src : System.FilePath) (setup : Json)
: IO KeptVerdict := do
  let promise ← IO.Promise.new
  let registered : Except String (Nat × Running) ← self.state.atomically do
    match ← self.ensureRunning with
    | .error reason => return .error reason
    | .ok r =>
      let s ← get
      let id := s.nextId
      let lastProgress ← if s.pending.isEmpty then IO.monoMsNow else pure s.lastProgress
      set {s with nextId := id + 1, pending := s.pending.insert id promise, lastProgress}
      return .ok (id, r)
  match registered with
  | .error reason => return .rejected reason
  | .ok (id, r) =>
    let request := Json.mkObj [
      ("v", toJson (1 : Nat)), ("id", toJson id), ("module", toJson module.toString),
      ("olean", toJson olean.toString), ("src", toJson src.toString), ("setup", setup)
    ]
    unless (← r.outbox.trySend (id, request.compress)) do
      self.reject r.gen id s!"the checker (number {r.gen}) stopped before the request was sent"
    return (← IO.wait promise.result?).getD (.rejected "the checker's reply was lost")

/-- Stops the checker at the end of a build. -/
public def close (self : KeptChecker) : IO Unit := do
  let running? ← self.state.atomically do
    let s ← get
    set {s with closed := true, running? := none}
    return s.running?
  if let some r := running? then
    discard <| r.outbox.close.toBaseIO
    try r.proc.kill catch _ => pure ()

end KeptChecker
