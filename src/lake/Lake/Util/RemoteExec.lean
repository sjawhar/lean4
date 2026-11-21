/-
Copyright (c) 2026 Theorem Labs. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: LINUX-30 build-platform
-/
module

prelude
public import Lean.Data.Json
public import Lake.Util.Log
public import Lake.Util.JsonObject
public import Lake.Util.String
import Lake.Util.Proc
public import Std.Sync.Mutex
import Std.Data.HashMap
import Init.Data.String.Basic
import Init.Data.String.Legacy
import Init.Data.String.Search

/-! # The `lean-remote` client (contract C5.1)

Lake speaks newline-delimited JSON to `lean-remote bridge` over stdio: one bridge per process,
started on the first request (with its `hello`), its responses multiplexed back to the requests
that wait for them. A bridge that exits ends every waiting request as `unavailable`; the next
request starts a new one.
-/

open System Lean

namespace Lake.RemoteExec

/-- A content digest: the SHA-256 of a blob and its byte size (wire form `"<64 hex>/<size>"`). -/
public structure Digest where
  hash : String
  size : Nat
  deriving BEq, Hashable, Inhabited, Repr

namespace Digest
public def toString (d : Digest) : String := s!"{d.hash}/{d.size}"
public instance : ToString Digest := ⟨Digest.toString⟩
public def ofString? (s : String) : Option Digest := do
  let [h, n] := s.splitOn "/" | none
  guard (h.utf8ByteSize == 64 && Lake.isHex h)
  return {hash := h, size := ← n.toNat?}
public instance : ToJson Digest := ⟨(toJson ·.toString)⟩
public instance : FromJson Digest := ⟨fun j => do
  let s ← j.getStr?
  match ofString? s with | some d => pure d | none => throw s!"malformed digest '{s}'"⟩
/-- The digest of the empty blob. -/
public def empty : Digest := ⟨"e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855", 0⟩
end Digest

public inductive ErrorCode
  | unavailable | notFound | oom | timeout | diskLimit | invalid | unauthenticated | permissionDenied | internal
  deriving DecidableEq, Repr, Inhabited

public def ErrorCode.ofString : String → ErrorCode
  | "UNAVAILABLE" => .unavailable | "NOT_FOUND" => .notFound | "OOM" => .oom | "TIMEOUT" => .timeout
  | "DISK_LIMIT" => .diskLimit
  | "INVALID" => .invalid | "UNAUTHENTICATED" => .unauthenticated
  | "PERMISSION_DENIED" => .permissionDenied | _ => .internal

/-- The code's text on the wire (`ErrorCode.ofString` reads it back). -/
public def ErrorCode.toString : ErrorCode → String
  | .unavailable => "UNAVAILABLE" | .notFound => "NOT_FOUND" | .oom => "OOM" | .timeout => "TIMEOUT"
  | .diskLimit => "DISK_LIMIT" | .invalid => "INVALID" | .unauthenticated => "UNAUTHENTICATED"
  | .permissionDenied => "PERMISSION_DENIED" | .internal => "INTERNAL"

public structure Error where
  code : ErrorCode
  /-- The code as the bridge sent it, a code that `ErrorCode` does not know included (`code` is then
  `internal`); for an error that Lake made itself, `code`'s text. -/
  codeText : String := code.toString
  message : String
  missing : Array Digest := #[]
  /-- The fields of a `TIMEOUT` error (contract C5.1 v7), each `none` when the bridge sent none. -/
  action? : Option String := none
  stdoutDigest? : Option Digest := none
  stderrDigest? : Option Digest := none
  terminationSignal? : Option String := none
  limits? : Option JsonObject := none
  deriving Inhabited

public instance : ToString Error := ⟨(·.message)⟩

public structure ClientConfig where
  exe : FilePath
  socket? : Option FilePath := none
  /-- The `hello` params each new bridge connection starts with (contract C5.1). -/
  helloParams : Json
  /-- Whether requests may go on a connection whose `hello` answered this: `none` admits them,
  `some why` refuses each request with `why` (Lake: `Lake.admitHello`). Every connection is
  checked, a bridge started again after the first included. -/
  admit : Json → BaseIO (Option String) := fun _ => pure none

/-! ## One bridge per process, with its requests multiplexed -/

structure Conn where
  /-- Tells this connection from a later one, so a reader of an older bridge cannot drop it. -/
  serial : Nat
  /-- The bridge's standard input; `none` once closed (`stopBridge`). It has no other owner, so
  dropping it closes the pipe. -/
  stdin : IO.Ref (Option IO.FS.Handle)
  /-- The bridge child, kept so `shutdown` can stop it and let this process exit. -/
  child : IO.Process.Child {stdin := .null, stdout := .piped, stderr := .inherit}
  pending : Std.Mutex (Std.HashMap Nat (IO.Promise (Except Error Json)))
  nextId : IO.Ref Nat
  writeLock : Std.Mutex Unit
  /-- This connection's `hello` result. -/
  hello : Json

builtin_initialize connRef : Std.Mutex (Option Conn) ← Std.Mutex.new none

/-- The serial of the last connection started (see `Conn.serial`). -/
builtin_initialize connSerial : IO.Ref Nat ← IO.mkRef 0

/-- Kills a bridge process (with its process group, if it has one of its own) and reaps it. -/
def reap {cfg : IO.Process.StdioConfig} (child : IO.Process.Child cfg) : BaseIO Unit := do
  let _ ← child.kill.toBaseIO
  let _ ← child.wait.toBaseIO

/--
How long Lake waits for a bridge to exit after closing its standard input, before it kills it. End
of input tells the bridge that Lake is gone: its daemon cancels the requests in flight, starts no
further write into the workspace, and closes the connection once they have returned, and only then
does the bridge exit (measured: 12 ms). The bridge inherits the workspace build lock, so the lock is
held until no write of this Lake can land. The bound is the bridge's own limit for reaching its
daemon (10 s, contract C5.1): far above that time, and it caps how long a wedged daemon can delay
Lake's exit.
-/
def bridgeExitTimeoutMs : Nat := 10000

/-- Whether the child exited before `deadline` (`IO.monoMsNow`). -/
partial def awaitExit {cfg : IO.Process.StdioConfig} (child : IO.Process.Child cfg) (deadline : Nat) :
    BaseIO Bool := do
  match ← child.tryWait.toBaseIO with
  | .ok (some _) | .error _ => return true
  | .ok none =>
    if (← IO.monoMsNow) ≥ deadline then return false
    IO.sleep 10
    awaitExit child deadline

/-- How many requests wait for their answer with a build worker lent to the task pool, at once
(see `call`): as many as the read broker lends for reads and a slot wait lends (`maxLentSlotWaits`),
so that a build whose jobs are all in a daemon round trip cannot take an unbounded number of threads. -/
def maxLentCalls : Nat := 1024

/-- How many requests wait with their worker lent (see `call`). -/
builtin_initialize waiters : IO.Ref Nat ← IO.mkRef 0

def decodeResponse (j : Json) : Except Error Json :=
  match j.getObjVal? "error" with
  | .ok e =>
    let str? (k : String) := (e.getObjValAs? String k).toOption
    let digest? (k : String) := (e.getObjValAs? Digest k).toOption
    let codeText := (str? "code").getD "INTERNAL"
    .error {
      code := .ofString codeText, codeText
      message := (str? "message").getD ""
      missing := (e.getObjValAs? (Array Digest) "missing").toOption.getD #[]
      action? := str? "action"
      stdoutDigest? := digest? "stdoutDigest", stderrDigest? := digest? "stderrDigest"
      terminationSignal? := str? "terminationSignal"
      limits? := (e.getObjValAs? JsonObject "limits").toOption }
  | .error _ => .ok ((j.getObjVal? "result").toOption.getD .null)

/-- Ends a bridge: closes its standard input, waits up to `bridgeExitTimeoutMs` for it to exit, and
kills it only then. -/
def stopBridge (conn : Conn) : BaseIO Unit := do
  conn.writeLock.atomically (m := BaseIO) do conn.stdin.set none
  unless ← awaitExit conn.child ((← IO.monoMsNow) + bridgeExitTimeoutMs) do
    reap conn.child

/-- Ends every waiting request as `unavailable`; the next request starts a new bridge. Only the
connection still current is dropped (and its bridge stopped): a reader of an older connection must
not clear a newer one or leave its bridge running. -/
def closeConn (conn : Conn) (why : String) : BaseIO Unit := do
  connRef.atomically do
    if let some c ← getThe (Option Conn) then
      if c.serial == conn.serial then
        set (none : Option Conn)
        stopBridge conn
  let ps ← conn.pending.atomically (modifyGet fun m => (m.toArray, {}))
  for (_, p) in ps do p.resolve (.error {code := .unavailable, message := why})

partial def readLoop (out : IO.FS.Handle) (conn : Conn) : BaseIO Unit := do
  match ← out.getLine.toBaseIO with
  | .ok line =>
    if line.isEmpty then return ← closeConn conn "lean-remote bridge exited"
    if let .ok j := Json.parse line then
      if let .ok (id : Nat) := j.getObjValAs? Nat "id" then
        let p? ← conn.pending.atomically (modifyGet fun m => (m[id]?, m.erase id))
        if let some p := p? then p.resolve (decodeResponse j)
    readLoop out conn
  | .error e => closeConn conn s!"reading the lean-remote bridge: {e}"

/--
Ends probes (`probe`) from another task: once `stop` has run, the bridge of a probe made with it that
waits for its `hello` answer is killed with its process group, and each later probe made with it
fails at once as `unavailable`. Probes made without one, and the probes of another `ProbeStop`, go on.
-/
public structure ProbeStop where
  /-- Whether `stop` has run, and the bridge of the probe that waits for its `hello` answer. -/
  state : Std.Mutex (Bool × Option (IO.Process.Child {stdin := .piped, stdout := .piped, stderr := .inherit}))

public def ProbeStop.new : BaseIO ProbeStop :=
  return {state := ← Std.Mutex.new (false, none)}

public def ProbeStop.isStopped (s : ProbeStop) : BaseIO Bool :=
  s.state.atomically do return (← get).1

/-- Only kills the bridge's process group: `probe`, which waits for its `hello` answer, reaps the
bridge, so the group's id (the bridge's pid) cannot be reused before the kill. -/
public def ProbeStop.stop (s : ProbeStop) : BaseIO Unit :=
  s.state.atomically do
    if let some child := (← get).2 then
      discard <| (child.kill.toBaseIO : BaseIO _)
    modify fun _ => (true, none)

/-- Registers the bridge of a probe that waits for its `hello` answer; `false` if `stop` has run. -/
def ProbeStop.watch (s : ProbeStop)
    (child : IO.Process.Child {stdin := .piped, stdout := .piped, stderr := .inherit}) : BaseIO Bool :=
  s.state.atomically do
    if (← get).1 then return false
    set (false, some child)
    return true

def ProbeStop.unwatch (s : ProbeStop) : BaseIO Unit :=
  s.state.atomically do modify fun (stopped, _) => (stopped, none)

/-- Starts a bridge (`lean-remote bridge`, with `--socket` if set) with `spawnProc`, its messages on
Lake's standard error; with `setsid`, in a session and process group of its own. -/
def spawnBridge (cfg : ClientConfig) (setsid : Bool) (inheritBuildLock := true) :
    BaseIO (Except Error (IO.Process.Child {stdin := .piped, stdout := .piped, stderr := .inherit})) := do
  let args := #["bridge"] ++ (cfg.socket?.elim #[] fun s => #["--socket", s.toString])
  match ← (spawnProc (inheritBuildLock := inheritBuildLock)
      {cmd := cfg.exe.toString, args, stdin := .piped, stdout := .piped, stderr := .inherit, setsid}).toBaseIO with
  | .ok c => return .ok c
  | .error e => return .error {code := .invalid, message := s!"LAKE_REMOTE_EXEC is set but `{cfg.exe}` cannot run: {e}"}

/-- Says `hello` on a bridge just started, before any other request (contract C5.1): writes the
request with `cfg.helloParams` to `stdin`, and returns the result of the answer that `stdout` brings. -/
def sayHello (cfg : ClientConfig) (stdin stdout : IO.FS.Handle) : BaseIO (Except Error Json) := do
  let r ← (do
    stdin.putStrLn (Json.mkObj [("id", (0 : Nat)), ("method", "hello"), ("params", cfg.helloParams)]).compress
    stdin.flush
    stdout.getLine).toBaseIO
  let .ok line := r
    | return .error {code := .unavailable, message := "the lean-remote bridge did not answer hello"}
  match Json.parse line with
  | .ok j => return decodeResponse j
  | .error _ => return .error {code := .unavailable, message := "the lean-remote bridge exited before answering hello"}

/-- Starts a bridge and says `hello` on it (`sayHello`); a bridge started again after one exited says
`hello` again with the same params, so the invocation id stays the build's. -/
def connect (cfg : ClientConfig) : BaseIO (Except Error Conn) := do
  -- The bridge writes its messages to Lake's standard error. A reader of that stream (a pipe, `tee`)
  -- therefore sees it end only when the bridge exits too, which after a killed Lake is once the
  -- daemon has cancelled that Lake's requests; no limit of Lake's applies then.
  -- It stays in Lake's process group (unlike a probe's bridge), so a signal to the group reaches it
  -- as the build lock design expects: a connected bridge ignores it and outlives Lake until end of input.
  let spawnedChild ← match ← spawnBridge cfg (setsid := false) with
    | .ok c => pure c
    | .error e => return .error e
  let (stdin, child) ← match ← spawnedChild.takeStdin.toBaseIO with
    | .ok r => pure r
    | .error e => return .error {code := .internal, message := s!"taking the lean-remote bridge's stdin: {e}"}
  -- A bridge that has not answered `hello` carries no write into the workspace, so it is killed.
  let hello ← match ← sayHello cfg stdin child.stdout with
    | .ok h => pure h
    | .error e =>
      reap child
      return .error e
  let serial ← connSerial.modifyGet fun n => (n + 1, n + 1)
  let stdin ← IO.mkRef (some stdin)
  let pending ← Std.Mutex.new {}
  let nextId ← IO.mkRef 1
  let writeLock ← Std.Mutex.new ()
  let conn : Conn := {serial, stdin, child, pending, nextId, writeLock, hello}
  discard <| BaseIO.asTask (prio := .dedicated) (readLoop child.stdout conn)
  return .ok conn

/-- The live connection, started (with its `hello`) if there is none. -/
def getConn (cfg : ClientConfig) : BaseIO (Except Error Conn) :=
  connRef.atomically do
    if let some c ← getThe (Option Conn) then return .ok c
    let c? ← connect cfg
    if let .ok c := c? then set (some c : Option Conn)
    return c?

/-- The `hello` result of this process's connection, connecting first if needed. -/
public def hello (cfg : ClientConfig) : BaseIO (Except Error Json) :=
  return (← getConn cfg).map (·.hello)

/--
Asks whether the service answers now, on a bridge of its own: it says `hello` and is killed at once
with its process group, so it carries no request and no write into the workspace, and this process's
connection (and the requests in flight on it) stays as it is. `stop?` can end it from another task
(`ProbeStop`).
-/
public def probe (cfg : ClientConfig) (stop? : Option ProbeStop := none) : BaseIO (Except Error Json) := do
  -- A process group of its own, so that a kill also reaches a bridge that the bridge command runs as
  -- its child (a wrapper without `exec`), which would otherwise hold its standard output open until it
  -- answers; the daemon that a bridge may start is in a session of its own, which the kill never reaches.
  -- Without the build lock: it carries no write into the workspace, and one that hangs on its `hello`
  -- after a killed Lake must not keep the workspace locked
  let child ← match ← spawnBridge cfg (setsid := true) (inheritBuildLock := false) with
    | .ok c => pure c
    | .error e => return .error e
  if let some stop := stop? then
    unless ← stop.watch child do
      reap child
      return .error {code := .unavailable, message := "the probe of the build service was stopped"}
  -- On the child `spawnProc` returned: the one `Child.takeStdin` returns has lost `setsid`, so its
  -- `kill` would reach the bridge command only
  let hello ← sayHello cfg child.stdin child.stdout
  -- Before the reap, so that `ProbeStop.stop` never kills the group of a bridge that was reaped
  if let some stop := stop? then stop.unwatch
  reap child
  return hello

/--
Stops this process's bridge (`stopBridge`) if its `hello` does not pass `admits`, in one section of
the connection lock, so a newer connection that another job started meanwhile is never the one
stopped. A connection whose `hello` passes stays, with its requests in flight.
-/
public def dropUnless (admits : Json → Bool) : BaseIO Unit :=
  connRef.atomically do
    if let some conn ← getThe (Option Conn) then
      unless admits conn.hello do
        stopBridge conn
        set (none : Option Conn)

/-- Stops this process's bridge, if any (`stopBridge`), so Lake can exit: the bridge's read task
would otherwise keep the process alive. Called at a build's end and however a Lake command ends. -/
public def shutdown : BaseIO Unit :=
  connRef.atomically do
    if let some conn ← getThe (Option Conn) then
      stopBridge conn
    set (none : Option Conn)

/-- Kills this process's bridge, if any, without `shutdown`'s wait: for a bridge that carried no
request but `hello`, so that no write of it can land in the workspace. Its input is closed first:
a client that runs the bridge as its child (a wrapper without `exec`, `timeout`, `strace -f`) passes
the kill to the wrapper only, and the child exits at end of input. -/
public def killBridge : BaseIO Unit :=
  connRef.atomically do
    if let some conn ← getThe (Option Conn) then
      conn.writeLock.atomically (m := BaseIO) do conn.stdin.set none
      reap conn.child
    set (none : Option Conn)

/-- Sends one request and waits for its answer, lending this build's worker to the task pool while
the daemon answers — by the base's one rule `Lake.lendingWorkers`, the same bounded `IO.wait`/
`IO.waitAny` path a broker read (`ReadBroker.send`) and a slot wait (`takeBuildSlot`) use. Without
it, a job blocked on a round trip would keep a worker from compiling the modules whose results are
already in; only `maxLentCalls` requests lend at once, the rest wait holding their worker. -/
public def call (cfg : ClientConfig) (method : String) (params : Json) : BaseIO (Except Error Json) := do
  let conn ← match ← getConn cfg with
    | .ok c => pure c
    | .error e => return .error e
  if let some why ← cfg.admit conn.hello then
    return .error {code := .unavailable, message := why}
  let id ← conn.nextId.modifyGet fun n => (n, n + 1)
  let promise ← IO.Promise.new
  conn.pending.atomically (modify (·.insert id promise))
  let line := (Json.mkObj [("id", id), ("method", method), ("params", params)]).compress
  if let .error e ← (conn.writeLock.atomically (m := IO) do
      let some h ← conn.stdin.get
        | throw (IO.userError "the bridge is closed")
      h.putStrLn line; h.flush).toBaseIO then
    conn.pending.atomically (modify (·.erase id))
    return .error {code := .unavailable, message := s!"writing to the lean-remote bridge: {e}"}
  lendingWorkers.set true
  let borrow ← waiters.modifyGet fun n => if n < maxLentCalls then (true, n + 1) else (false, n)
  let r? ← if borrow then
      (try IO.wait promise.result? finally waiters.modify (· - 1))
    else
      IO.waitAny [promise.result?]
  return r?.getD (.error {code := .unavailable, message := "the lean-remote bridge dropped the request"})

/-! ## Typed results (contract C5.1) -/

/-- One output file of a `run` result. -/
public structure OutputFile where
  rel : String
  digest : Digest
  executable : Bool := false
  deriving Inhabited, Repr

public def OutputFile.ofJson? (j : Json) : Except String OutputFile := do
  let o ← JsonObject.fromJson? j
  return {
    rel := ← o.get "rel"
    digest := ← o.get "digest"
    executable := ← o.getD "executable" false
  }
public instance : FromJson OutputFile := ⟨OutputFile.ofJson?⟩

/-- The result of a `run` request; only the fields Lake reads. -/
public structure RunResult where
  action : String := ""
  cached : Bool := false
  exitCode : Int := 0
  terminationSignal? : Option String := none
  stdout : String := ""
  stderr : String := ""
  /-- The digests of the streams; an empty stream has none. -/
  stdoutDigest? : Option Digest := none
  stderrDigest? : Option Digest := none
  /-- The sandbox's use of its limits (`{oomKills, writtenBytes, diskLimitExceeded}`, contract C5.1 v7),
  as the bridge sent it. -/
  limits? : Option JsonObject := none
  outputs : Array OutputFile := #[]
  deriving Inhabited

public def RunResult.ofJson? (j : Json) : Except String RunResult := do
  let o ← JsonObject.fromJson? j
  return {
    action := ← o.getD "action" ""
    cached := ← o.getD "cached" false
    exitCode := ← o.getD "exitCode" (0 : Int)
    terminationSignal? := ← o.get? "terminationSignal"
    stdout := ← o.getD "stdout" ""
    stderr := ← o.getD "stderr" ""
    stdoutDigest? := ← o.get? "stdoutDigest"
    stderrDigest? := ← o.get? "stderrDigest"
    limits? := ← o.get? "limits"
    outputs := ← o.getD "outputs" #[]
  }
public instance : FromJson RunResult := ⟨RunResult.ofJson?⟩

/-- One output of a service record (`Record`). -/
public structure RecordOutput where
  digest : Digest
  executable : Bool := false
  deriving Inhabited, Repr

public instance : ToJson RecordOutput :=
  ⟨fun o => Json.mkObj [("digest", toJson o.digest), ("executable", o.executable)]⟩

public instance : FromJson RecordOutput := ⟨fun j => do
  let o ← JsonObject.fromJson? j
  return {digest := ← o.get "digest", executable := ← o.getD "executable" false}⟩

/--
The build service's record of a target's outputs, the `remote` field of its trace and of its Lake
cache entry: the action that made them and each output's digest and executable bit, by extension.
Lake writes it only for outputs that a service action made.
-/
public structure Record where
  action : String
  outputs : Std.TreeMap String RecordOutput
  deriving Inhabited

public instance : ToJson Record :=
  ⟨fun r => Json.mkObj [("action", r.action), ("outputs", toJson r.outputs)]⟩

public instance : FromJson Record := ⟨fun j => do
  let o ← JsonObject.fromJson? j
  return {action := ← o.get "action", outputs := ← o.get "outputs"}⟩

/-- The record of the action `action` with `outputs`, each output's name, digest and executable bit. -/
public def Record.ofOutputs (action : String) (outputs : Array (String × Digest × Bool)) : Record where
  action
  outputs := outputs.foldl (init := {}) fun outs (name, digest, executable) => outs.insert name {digest, executable}

/-- Whether the record's output `name` is executable (`false` when the record has no such output). -/
public def Record.executable (r : Record) (name : String) : Bool :=
  (r.outputs.get? name).any (·.executable)

/-- The result of a `materialize` request. -/
public structure MaterializeResult where
  written : Nat := 0
  present : Nat := 0
  bytes : Nat := 0
  deriving Inhabited

public def MaterializeResult.ofJson? (j : Json) : Except String MaterializeResult := do
  let o ← JsonObject.fromJson? j
  return {
    written := ← o.getD "written" 0
    present := ← o.getD "present" 0
    bytes := ← o.getD "bytes" 0
  }
public instance : FromJson MaterializeResult := ⟨MaterializeResult.ofJson?⟩

/-- The `digests` array of a `digest` result. -/
public def parseDigests (j : Json) : Except String (Array Digest) := do
  (← JsonObject.fromJson? j).get "digests"

end Lake.RemoteExec
