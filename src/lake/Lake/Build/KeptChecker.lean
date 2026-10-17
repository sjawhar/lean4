/-
Copyright (c) 2026 Theorem Labs. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
-/
module

prelude
public import Lake.Build.Trace
public import Std.Sync.Mutex
public import Std.Data.HashMap.Basic
public import Init.System.Promise
import Lake.Util.Log
import Init.Data.String.TakeDrop

/-!
# Kept-module checker client

A kept-module checker is an external process that decides whether a module's existing `.olean`
still holds against the module's current imports, so that Lake can record it as up to date
without compiling the module. Lake starts it on the first request of a build (the command in
`LAKE_KEPT_CHECKER`), writes one JSON request per line to its standard input, and reads one JSON
reply per line from its standard output, matched to requests by `id`. Requests may be answered in
any order.

Request: `{"v": 1, "id": N, "module": "<name>", "olean": "<absolute path>", "setup": <setup>}`,
where `<setup>` is the module's `ModuleSetup` (its `.setup.json`), whose `importArts` names the
`.olean` of every non-toolchain module in its import closure.

Reply: `{"id": N, "ok": true, "oleanHash": "<hash of the .olean bytes read>"}` or
`{"id": N, "ok": false, "reason": "<text>"}`.

A checker that exits, writes a malformed reply, or sends no reply for the configured timeout while
requests are outstanding is killed, and every request it holds is a reject. The next request starts
a new checker, up to `maxSpawns` per build; after that every request is a reject.
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

/-- The checker process, without its standard input (held in `KeptChecker.State.stdin?`). -/
public abbrev KeptChecker.Proc :=
  IO.Process.Child {stdin := .null, stdout := .piped, stderr := .inherit}

public structure KeptChecker.State where
  /-- The running checker, its standard input, and its number (see `spawns`). -/
  proc? : Option (KeptChecker.Proc × IO.FS.Handle × Nat) := none
  /-- How many checkers this build has started. -/
  spawns : Nat := 0
  nextId : Nat := 0
  /-- The requests the running checker has not answered. -/
  pending : Std.HashMap Nat (IO.Promise KeptVerdict) := {}
  /-- When the running checker last replied, or got a request while it had none outstanding. -/
  lastProgress : Nat := 0
  /-- Whether the watchdog (`KeptChecker.watch`) runs. -/
  watching : Bool := false
  closed : Bool := false

/-- A client of a kept-module checker, shared by the jobs of one build. -/
public structure KeptChecker where
  cmd : String
  /-- Milliseconds without a reply, while requests are outstanding, before the checker is killed. -/
  timeoutMs : Nat
  state : Std.Mutex KeptChecker.State

namespace KeptChecker

/-- Checkers started per build: the first, and three after one has died. -/
public def maxSpawns : Nat := 4

public def new (cmd : String) (timeoutMs : Nat) : BaseIO KeptChecker := do
  return {cmd, timeoutMs, state := ← Std.Mutex.new {}}

/-- Rejects every outstanding request of checker number `gen`, if it is still the running one. -/
def died (self : KeptChecker) (gen : Nat) (reason : String) : BaseIO Unit := do
  let pending : Std.HashMap Nat (IO.Promise KeptVerdict) ← self.state.atomically do
    let s ← get
    let some (_, _, n) := s.proc? | return {}
    unless n == gen do return {}
    set {s with proc? := none, pending := {}}
    return s.pending
  for (_, promise) in pending do
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
    let promise? ← self.state.atomically do
      let s ← get
      let promise? := s.pending.get? id
      set {s with pending := s.pending.erase id, lastProgress := ← IO.monoMsNow}
      return promise?
    if let some promise := promise? then
      promise.resolve verdict
    readReplies self proc gen
  | .error e =>
    self.died gen s!"the checker wrote a malformed reply ({e}): {line.trimAscii}"
    proc.kill
    discard <| proc.wait

/-- Kills a checker that has sent no reply for `timeoutMs` while requests were outstanding. -/
partial def watch (self : KeptChecker) : IO Unit := do
  IO.sleep 250
  let now ← IO.monoMsNow
  let stalled? ← self.state.atomically do
    let s ← get
    if s.closed then return none
    let some (proc, _, gen) := s.proc? | return some none
    if !s.pending.isEmpty && now - s.lastProgress > self.timeoutMs then
      return some (some (proc, gen))
    return some none
  match stalled? with
  | none => return
  | some none => watch self
  | some (some (proc, gen)) =>
    self.died gen s!"the checker sent no reply for {self.timeoutMs / 1000} s and was killed"
    try proc.kill catch _ => pure ()
    watch self

def spawn (self : KeptChecker) : IO (Proc × IO.FS.Handle) := do
  let child ← IO.Process.spawn {
    cmd := self.cmd
    stdin := .piped, stdout := .piped, stderr := .inherit
  }
  let (stdin, proc) ← child.takeStdin
  return (proc, stdin)

/--
Asks the checker whether `olean`, the existing `.olean` of `module`, holds against the imports
described by `setup`. Blocks until the checker answers or is found dead.
-/
public def check (self : KeptChecker) (module : Name) (olean : System.FilePath) (setup : Json)
: IO KeptVerdict := do
  let promise ← IO.Promise.new
  let failed? ← self.state.atomically do
    let mut s ← get
    if s.proc?.isNone then
      if s.spawns ≥ maxSpawns then
        return some s!"the checker exited {maxSpawns} times in this build"
      match (← (self.spawn).toBaseIO) with
      | .ok (proc, stdin) =>
        let gen := s.spawns
        unless s.watching do
          discard <| IO.asTask (prio := .dedicated) self.watch
        s := {s with proc? := some (proc, stdin, gen), spawns := gen + 1, watching := true}
        set s
        discard <| IO.asTask (prio := .dedicated) (self.readReplies proc gen)
      | .error e =>
        set {s with spawns := s.spawns + 1}
        return some s!"could not start the checker '{self.cmd}': {e}"
    let some (_, stdin, gen) := s.proc? | return some "the checker is not running"
    let id := s.nextId
    let request := Json.mkObj [
      ("v", toJson (1 : Nat)), ("id", toJson id), ("module", toJson module.toString),
      ("olean", toJson olean.toString), ("setup", setup)
    ]
    let lastProgress ← if s.pending.isEmpty then IO.monoMsNow else pure s.lastProgress
    set {s with nextId := id + 1, pending := s.pending.insert id promise, lastProgress}
    match (← (do stdin.putStrLn request.compress; stdin.flush).toBaseIO) with
    | .ok _ => return none
    | .error e =>
      modify fun s => {s with pending := s.pending.erase id}
      return some s!"could not write to the checker (number {gen}): {e}"
  if let some reason := failed? then
    return .rejected reason
  return (← IO.wait promise.result?).getD (.rejected "the checker's reply was lost")

/-- Stops the checker at the end of a build. -/
public def close (self : KeptChecker) : IO Unit := do
  let proc? ← self.state.atomically do
    let s ← get
    set {s with closed := true, proc? := none}
    return s.proc?
  if let some (proc, _, _) := proc? then
    try proc.kill catch _ => pure ()

end KeptChecker
