/-
Copyright (c) 2026 Theorem Labs. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
-/
module

prelude
public import Lake.Util.RemoteExec
public import Lake.Version
public import Lake.Build.RemoteStats
public import Lake.Build.Common
public import Lake.Build.Job.Monad
public import Lake.Config.Monad
public import Lake.Config.Module
public import Lean.Setup
import Lake.Build.InputLock
import Lake.Util.Proc
import Lean.Compiler.FFI
import Std.Data.HashMap
import Std.Time

/-! # Build-service mode for Lake (client side, contract C5.1)

Service mode (`LAKE_REMOTE_EXEC=<endpoint>`) turns a module compile into a REAPI action with
relative paths and the toolchain as a platform property, and asks the build service for its result
through `lean-remote bridge` (see `Lake.Util.RemoteExec`). This module holds the per-process
session, the path rewriting of contract C2.1, the typed `run`/`materialize` calls, the promotion of
service inputs that have no service record, and the native actions of contract C3.1 (a module's C
object, a module's shared library, a library's shared library) with their build. The parts that need
`Build/Module.lean`'s private helpers (`remoteHead`, `remoteRunRequest`, `fetchRemote`, a module's
promotion) live in that file's `section RemoteExec`.
-/

open System Lean

namespace Lake

/-- A build-service session for this process: the settings, the client, the remote sysroot
(`LAKE_REMOTE_EXEC_SYSROOT`, default the local one) and the local Lean's githash. -/
public structure RemoteSession where
  cfg : RemoteExecConfig
  client : RemoteExec.ClientConfig
  sysroot : FilePath
  toolchain : String
  leanGithash : String

/-- The platform of every action of the session (contract C2.1), a Lean module's and a native one's, as the request's
`platform` object. -/
public def RemoteSession.platformJson (s : RemoteSession) : Json :=
  Json.mkObj [("arch", "x86_64"), ("memory", "std"), ("os", "linux"), ("toolchain", s.toolchain)]

/--
`t` with the session's timeout mixed in (the timeout rule of a service-mode job's trace): unchanged for the default,
so that a build with the default has the traces of a build outside service mode and replays its tree.
-/
public def RemoteSession.mixTimeout (s : RemoteSession) (t : BuildTrace) : BuildTrace :=
  if s.cfg.timeoutSecs == defaultRemoteTimeoutSecs then t else t.mix (pureTrace s.cfg.timeoutSecs "remote timeout")

/--
The path part of a module's action (its plugins, dynlibs and `LEAN_PATH`): the part that does not depend on the
module's source bytes.
-/
public structure RemoteHead where
  sysroot : String
  leanPath : String
  /-- Each plugin's and dynlib's name in the action: in the input root, or under the remote sysroot. -/
  plugins : Array String
  dynlibs : Array String
  /-- Local path and input-root-relative path of each plugin/dynlib that the action takes by path (an `extern_lib`). -/
  inputFiles : Array (FilePath × String)
  /--
  Local path, input-root-relative path and output on the service of each plugin/dynlib that is a native artifact
  (`nativeServiceOutput`): the action takes it by the digest and executable bit of the service's output, so that no
  local output is an input of the action.
  -/
  digestInputs : Array (FilePath × String × RemoteExec.RecordOutput)

/-! ## Per-process invocation id and `hello` params -/

def hexChars : Array Char :=
  #['0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f']

def byteHex (b : UInt8) : String :=
  String.ofList [hexChars[(b.toNat / 16)]!, hexChars[(b.toNat % 16)]!]

def mkRemoteInvocationId : IO String := do
  let bytes ← IO.getRandomBytes 16
  let mut s := ""
  let mut i := 0
  for b in bytes do
    if i == 4 || i == 6 || i == 8 || i == 10 then s := s ++ "-"
    s := s ++ byteHex b
    i := i + 1
  return s

/-- A fresh invocation id for this Lake process (contract C5.1, `hello.invocationId`). -/
builtin_initialize remoteInvocationId : String ← mkRemoteInvocationId

/-- Builds the `hello` params of a connection (contract C5.1). -/
public def mkHelloParams (cfg : RemoteExecConfig) (sysroot : FilePath)
    (leanGithash : String) (command? : Option String) : BaseIO Json := do
  let clientLabel? := (← IO.getEnv "LEAN_REMOTE_CLIENT_LABEL").filter (!·.isEmpty)
  let client := Json.mkObj [("tool", "lake"), ("version", Lake.versionString)]
  let o := JsonObject.empty
  let o := o.insert "protocol" (1 : Nat)
  let o := o.insert "endpoint" cfg.endpoint
  let o := o.insert "instance" cfg.instanceName
  let o := o.insertSome "toolchain" cfg.toolchain?
  let o := o.insert "sysroot" sysroot.toString
  let o := o.insert "leanGithash" leanGithash
  let o := o.insert "client" client
  let o := o.insertSome "clientLabel" clientLabel?
  let o := o.insert "invocationId" remoteInvocationId
  let o := o.insertSome "repo" cfg.repo?
  let o := o.insert "skipCache" cfg.skipCache
  let o := o.insertSome "command" command?
  return (o : Json)

/-! ## Session -/

/-- This process's verdict on the build service: made by the first `hello` (`ensureDecision`), then
changed by a refusing `hello` (`admitHello`), a request that the service did not answer
(`noteUnreachable`), a probe of the fallback `wait` (`awaitService`) or the re-probe timer of the
fallback `local` (`endProbeTimer`). -/
public inductive SessionDecision
  /-- The service answered and its toolchain runs this Lake's Lean: in use. -/
  | active
  /-- The service did not answer; `LAKE_REMOTE_EXEC_FALLBACK` decides what a job that needs it does
  (see `useService`). -/
  | unreachable (message : String)
  /-- The service answered with a different Lean githash. Only `local` may fall back. -/
  | toolchainMismatch (message : String)
  /-- The service must not be used, whatever the fallback: the client cannot run, the daemon refuses
  the protocol, or it did not verify that its toolchain runs this Lake's Lean. -/
  | refused (message : String)

/-- This process's decision: `none` until the first `hello`. -/
builtin_initialize remoteDecisionRef : Std.Mutex (Option SessionDecision) ← Std.Mutex.new none

builtin_initialize remoteMismatchWarned : Std.Mutex Bool ← Std.Mutex.new false

def warnToolchainMismatch (message : String) : BaseIO Unit :=
  remoteMismatchWarned.atomically do
    unless (← getThe Bool) do
      set true
      (IO.eprintln s!"warning: {message}; falling back to local compilation").catchExceptions
        fun _ => pure ()

/--
How many times this process found the build service answering again after it had not (fallback
`wait`, `awaitService`; fallback `local`, the re-probe timer, `startProbeTimer`). A job reads it
before it sends a request; when the request fails and the count has moved since, a probe has found
the service after the request was sent, so this job only sends the request again. Under `wait`, jobs
whose requests failed together therefore cause one probe, not one each.
-/
builtin_initialize remoteEpochRef : IO.Ref Nat ← IO.mkRef 0

/--
The verdict of one `hello` answer (contract C5.1). No output is recorded unless the daemon answers
`toolchainVerified = true`, which it sets only when the toolchain image's `lean --githash` equals
`leanGithash` (fails closed: a missing field is false). A confirmed different hash may select the
local fallback, but the service's outputs are never recorded under this Lean's input hash.
-/
def helloVerdict (endpoint leanGithash : String) (j : Json) : SessionDecision := Id.run do
  let str? (k : String) : Option String :=
    (j.getObjValAs? String k).toOption.filter (!·.isEmpty)
  unless (j.getObjValAs? Bool "reachable").toOption.getD false do
    return .unreachable s!"build service at {endpoint} did not answer: \
      {(str? "reason").getD "no reason given"}"
  if let some g := str? "toolchainGithash" then
    if !leanGithash.isEmpty && g != leanGithash then
      return .toolchainMismatch s!"build service at {endpoint} runs Lean {g}, but this Lake uses Lean \
        {leanGithash}; refusing to record its outputs (check LAKE_REMOTE_EXEC_TOOLCHAIN and \
        LAKE_REMOTE_EXEC_SYSROOT)"
  if (j.getObjValAs? Bool "toolchainVerified").toOption.getD false then
    return .active
  return .refused s!"build service at {endpoint} did not verify its toolchain: \
    {(str? "reason").getD "no reason given"}; refusing to record its outputs"

/-- Records that a service in use can no longer be used, so that the end-of-build line says so
(`remoteDecisionState`). A decision that did not put the service in use is kept. -/
def noteUnusable (d : SessionDecision) : BaseIO Unit :=
  remoteDecisionRef.atomically do
    if let some .active ← getThe (Option SessionDecision) then
      set (some d : Option SessionDecision)

/--
Whether requests may go on a connection whose `hello` answered `j` (`ClientConfig.admit`): only if
it passes the decision's check. `lake build` decides before it waits for the workspace build lock
and starts the bridge that carries its actions after the wait, so that bridge's own `hello` can find
the service gone or another toolchain. Such a `hello` refuses every request; a refusal is recorded.
An unreachable `hello` is recorded here only under `fail`: under `wait` and `local` the connection
can be one that a probe (`awaitService`, the re-probe timer) has already replaced, and its stale
answer must not undo the probe's newer verdict. The refused request then answers `UNAVAILABLE`, and
`callService` (under `local`) and `retryWhileUnavailable` apply the epoch rule.
-/
def admitHello (endpoint leanGithash : String) (fallback : RemoteFallback) (j : Json) :
    BaseIO (Option String) := do
  match helloVerdict endpoint leanGithash j with
  | .active => return none
  | .unreachable msg =>
    if fallback == .fail then
      noteUnusable (.unreachable msg)
    return some msg
  | .toolchainMismatch msg =>
    noteUnusable (.toolchainMismatch msg)
    if fallback == .compileLocally then warnToolchainMismatch msg
    return some msg
  | .refused msg =>
    noteUnusable (.refused msg)
    return some msg

/-- The build-service session of this build, built from the environment without any request.
`none` when service mode is off; errors when it is on but the toolchain is not named. -/
public def remoteSession? : JobM (Option RemoteSession) := do
  let some cfg := (← getLakeEnv).remoteExec?
    | return none
  let toolchain ← match cfg.toolchain? with
    | some t => pure t
    | none => error "LAKE_REMOTE_EXEC is set but LAKE_REMOTE_EXEC_TOOLCHAIN is not"
  let sysroot ← match cfg.sysroot? with
    | some s => pure s
    | none => IO.FS.realPath (← getLeanInstall).sysroot
  let leanGithash := (← getLeanInstall).githash
  let helloParams ← mkHelloParams cfg sysroot leanGithash (command? := none)
  let client : RemoteExec.ClientConfig := {
    exe := cfg.client, socket? := cfg.socket?, helloParams
    admit := admitHello cfg.endpoint leanGithash cfg.fallback }
  return some {cfg, client, sysroot, toolchain, leanGithash}

/-- The verdict of a `hello` call's outcome: a call that failed with `invalid` (the client cannot
run, or the daemon refuses the protocol) refuses the service; any other failure did not reach it. -/
def helloOutcome (endpoint leanGithash : String) (r : Except RemoteExec.Error Json) : SessionDecision :=
  match r with
  | .error e =>
    if e.code == .invalid then .refused e.message
    else .unreachable s!"build service at {endpoint} did not answer: {e.message}"
  | .ok j => helloVerdict endpoint leanGithash j

/-- The verdict of the `hello` of this process's connection (started if there is none). -/
def decide (client : RemoteExec.ClientConfig) (endpoint leanGithash : String) : BaseIO SessionDecision := do
  return helloOutcome endpoint leanGithash (← RemoteExec.hello client)

/-- The first delay between two probes of the service (the fallback `wait`'s and the re-probe
timer's), in milliseconds; each next one is twice the last, up to `remoteProbeMaxDelayMs`. -/
def remoteProbeFirstDelayMs : UInt32 := 1000

/-- The longest delay between two probes of the service, in milliseconds. -/
def remoteProbeMaxDelayMs : UInt32 := 30000

/-- How often the fallback `wait` says again that it still waits, in milliseconds. -/
def remoteWaitNoticeMs : Nat := 60000

/-- The current time in UTC as ISO 8601 text, e.g. `2026-11-02T17:40:01Z`. -/
def utcNowText : BaseIO String := do
  match ← Std.Time.Timestamp.now.toBaseIO with
  | .ok now => return (Std.Time.DateTime.ofTimestampWithZone now .UTC).toISO8601String
  | .error _ => return "an unknown time"

/-- The verdict of a `hello` on a bridge of its own (`RemoteExec.probe`, which `stop?` can end), as
`decide` makes it. -/
def probeVerdict (client : RemoteExec.ClientConfig) (endpoint leanGithash : String)
    (stop? : Option RemoteExec.ProbeStop := none) : BaseIO SessionDecision := do
  return helloOutcome endpoint leanGithash (← RemoteExec.probe client stop?)

/-! ## The re-probe timer of the fallback `local` -/

/-- A running re-probe timer (`startProbeTimer`). -/
structure ProbeTimer where
  serial : Nat
  /-- Ends its sleep and kills the bridge of its probe in flight with its process group
  (`stopProbeTimer`). -/
  stop : RemoteExec.ProbeStop
  task : Task Unit

/-- The re-probe timer while it runs. -/
builtin_initialize remoteProbeTimer : Std.Mutex (Option ProbeTimer) ← Std.Mutex.new none

/-- The serial of the last re-probe timer started. -/
builtin_initialize remoteProbeTimerSerial : IO.Ref Nat ← IO.mkRef 0

/-- Sleeps `ms` milliseconds in slices of at most 100 ms; `false` as soon as `stop` has run. -/
def sleepUnlessStopped (stop : RemoteExec.ProbeStop) (ms : Nat) : BaseIO Bool := do
  let deadline := (← IO.monoMsNow) + ms
  repeat
    if ← stop.isStopped then return false
    let now ← IO.monoMsNow
    if now ≥ deadline then return true
    IO.sleep (min 100 (deadline - now)).toUInt32
  return true

/-- Ends the re-probe timer with its verdict `d` unless `stopProbeTimer` removed it first, in one
section of `remoteDecisionRef`: removes the timer and writes `d` if the decision is still `.unreachable`
(`.active` also moves `remoteEpochRef` on). A failure noted after the verdict then starts a new timer. -/
def endProbeTimer (serial : Nat) (d : SessionDecision) : BaseIO Unit :=
  remoteDecisionRef.atomically do
    let running ← remoteProbeTimer.atomically (m := BaseIO) do
      if let some t ← getThe (Option ProbeTimer) then
        if t.serial == serial then
          set (none : Option ProbeTimer)
          return true
      return false
    unless running do return
    if let some (.unreachable _) ← getThe (Option SessionDecision) then
      set (some d : Option SessionDecision)
      if d matches .active then remoteEpochRef.modify (· + 1)

/-- The re-probe timer's loop (see `startProbeTimer`). -/
def probeTimerLoop (client : RemoteExec.ClientConfig) (endpoint leanGithash : String) (serial : Nat)
    (stop : RemoteExec.ProbeStop) : BaseIO Unit := do
  let mut delay := remoteProbeFirstDelayMs
  repeat
    unless ← sleepUnlessStopped stop delay.toNat do return
    delay := min (2 * delay) remoteProbeMaxDelayMs
    let verdict ← probeVerdict client endpoint leanGithash (some stop)
    if ← stop.isStopped then return
    match verdict with
    | .active =>
      -- A connection whose own `hello` refuses requests goes; the next request starts a new one
      RemoteExec.dropUnless fun h => helloVerdict endpoint leanGithash h matches .active
      endProbeTimer serial .active
      return
    | .toolchainMismatch msg =>
      endProbeTimer serial (.toolchainMismatch msg)
      return
    -- A refused service stays unused and fails nothing
    | .unreachable _ | .refused _ => pure ()

/--
Starts the re-probe timer of the fallback `local`, unless one runs. Its callers hold
`remoteDecisionRef` and have just made the decision `.unreachable`: the first `hello`
(`ensureDecision`), or a request that answered `UNAVAILABLE` (`noteUnreachable`; a connection whose
`hello` `admitHello` finds unreachable refuses its requests so). The timer probes on a bridge of its
own (`RemoteExec.probe`) 1 s after that, then 2, 4, 8, 16 and 30 s after each probe's answer, then
every 30 s. It holds no lock while it sleeps or probes, so `useService` answers `false` at once
meanwhile, and it takes `remoteDecisionRef` only to write a verdict (`endProbeTimer`): a service in
use makes the decision `.active` and moves `remoteEpochRef` on, after the connection whose `hello`
refuses requests is dropped; another Lean makes it `.toolchainMismatch`; either ends the timer. A
refused or unreachable service is probed again. `stopProbeTimer` stops it.
-/
def startProbeTimer (client : RemoteExec.ClientConfig) (endpoint leanGithash : String) : BaseIO Unit :=
  remoteProbeTimer.atomically do
    if (← getThe (Option ProbeTimer)).isSome then return
    let serial ← remoteProbeTimerSerial.modifyGet fun n => (n + 1, n + 1)
    let stop ← RemoteExec.ProbeStop.new
    let task ← BaseIO.asTask (prio := .dedicated) (probeTimerLoop client endpoint leanGithash serial stop)
    set (some {serial, stop, task : ProbeTimer})

/-- The longest the re-probe timer may delay Lake's exit: how long `stopProbeTimer` waits for its end,
in milliseconds. -/
def probeStopWaitMs : Nat := 1000

/-- See `remoteProbeAbandoned`. -/
builtin_initialize remoteProbeAbandonedRef : IO.Ref Bool ← IO.mkRef false

/-- Whether `stopProbeTimer` abandoned a re-probe timer in this process. Its task may still run, and
the runtime waits for every task when `main` returns, so `Lake.cli` then ends the process with
`exitProcess` instead. -/
public def remoteProbeAbandoned : BaseIO Bool :=
  remoteProbeAbandonedRef.get

/--
Stops the re-probe timer, if one runs, and waits at most `probeStopWaitMs` for its end. The stop ends
its sleep within 100 ms, or kills the bridge of its probe in flight, which carries no request but
`hello`, with its process group. A process that the bridge command moved out of that group can hold
the probe until the service answers its `hello`; the timer is then abandoned (`remoteProbeAbandoned`),
and once its probe returns it writes no verdict and starts nothing. Lake's ends of that probe's pipes
close only when the probe ends or Lake exits, as the kill needs the child that `spawn` returned, which
keeps its standard input.
-/
def stopProbeTimer : BaseIO Unit := do
  let some t ← remoteProbeTimer.atomically (modifyGet fun t => (t, (none : Option ProbeTimer)))
    | return
  t.stop.stop
  unless ← waitUntil t.task ((← IO.monoMsNow) + probeStopWaitMs) do
    remoteProbeAbandonedRef.set true

/-- Ends this process's use of the build service, so that Lake can go on or exit: stops the re-probe
timer (`stopProbeTimer`) and then the bridge (`RemoteExec.shutdown`); either's task would otherwise
keep the process alive, as the task of a timer that `stopProbeTimer` abandons still does (see
`exitProcess`). Called at a build's end and however a Lake command ends. -/
public def shutdownRemote : BaseIO Unit := do
  stopProbeTimer
  RemoteExec.shutdown

/--
Ends the process with exit code `rc`. It first waits for the remote cache's probe read in flight for
at most one try (`awaitRemoteReadProbe`, `remoteReadProbeTryMs`), as the runtime does when `main`
returns. Once `stopProbeTimer` has abandoned a re-probe (`remoteProbeAbandoned`), it flushes
Lake's standard output and error and uses `IO.Process.forceExit`: `IO.Process.exit` would wait for
the probe, as glibc's `exit` flushes every stdio stream and takes each stream's lock, and the
abandoned probe's `getLine` holds the lock of the probe's stdout. Each file Lake still holds open
then is flushed as it is written.
-/
public def exitProcess (rc : UInt8) : IO α := do
  awaitRemoteReadProbe
  if ← remoteProbeAbandoned then
    try
      (← IO.getStdout).flush
      (← IO.getStderr).flush
    catch _ => pure ()
    IO.Process.forceExit rc
  else
    IO.Process.exit rc

/--
The decision, made once per process while holding the lock: every worker waits for the one `hello`
instead of starting a bridge of its own, and a failed decision is kept like a good one. Under the
fallback `local` a decision `.unreachable` starts the re-probe timer, which may change it later.
-/
def ensureDecision (client : RemoteExec.ClientConfig) (endpoint leanGithash : String)
    (fallback : RemoteFallback) : BaseIO SessionDecision :=
  remoteDecisionRef.atomically do
    if let some d ← getThe (Option SessionDecision) then return d
    let d ← decide client endpoint leanGithash
    set (some d : Option SessionDecision)
    if (d matches .unreachable _) && fallback == .compileLocally then
      startProbeTimer client endpoint leanGithash
    return d

/-- Prints the fallback `wait`'s line on standard error (a job's log shows only when the job ends). -/
def printWaiting (endpoint since : String) : BaseIO Unit :=
  (IO.eprintln s!"waiting for the build service at {endpoint} since {since}").catchExceptions
    fun _ => pure ()

/--
The fallback `wait` (`LAKE_REMOTE_EXEC_FALLBACK=wait`): returns once the build service answers.
`epoch?` is `remoteEpoch` when the caller's request that answered `UNAVAILABLE` was sent; `none` when
no request failed and the decision is not `active`. One job probes at a time, holding the decision's
lock, which the others wait for. It sleeps 1, 2, 4 … 30 s before each probe (the failed `hello` or
request was the first try), and prints `waiting for the build service at <endpoint> since <UTC time>`
on standard error when the first probe fails and then once a minute. Each probe says `hello` on a
bridge of its own (`RemoteExec.probe`), so the requests in flight on this process's connection go on.
When a probe finds the service, that connection is dropped only if its own `hello` would refuse
requests; the next request then starts a new one. Errors when a `hello` refuses the service, as a
refused decision does whatever the fallback.
-/
def awaitService (client : RemoteExec.ClientConfig) (endpoint leanGithash : String)
    (epoch? : Option Nat) : BaseIO (Except String Unit) :=
  remoteDecisionRef.atomically do
    let cur ← getThe (Option SessionDecision)
    match epoch? with
    | some epoch =>
      -- Another job found the service again after this request was sent: send it again.
      if (← remoteEpochRef.get) != epoch then return .ok ()
    | none =>
      if let some .active := cur then return .ok ()
    if let some (.refused msg) := cur then return .error msg
    if let some (.toolchainMismatch msg) := cur then return .error msg
    let mut delay := remoteProbeFirstDelayMs
    let mut waiting : Option (String × Nat) := none
    repeat
      IO.sleep delay
      delay := min (2 * delay) remoteProbeMaxDelayMs
      match ← probeVerdict client endpoint leanGithash with
      | .active =>
        RemoteExec.dropUnless fun h => helloVerdict endpoint leanGithash h matches .active
        set (some SessionDecision.active)
        remoteEpochRef.modify (· + 1)
        return .ok ()
      | .toolchainMismatch msg =>
        set (some (SessionDecision.toolchainMismatch msg))
        return .error msg
      | .refused msg =>
        set (some (SessionDecision.refused msg))
        return .error msg
      | .unreachable msg =>
        set (some (SessionDecision.unreachable msg))
        let now ← IO.monoMsNow
        match waiting with
        | none =>
          let since ← utcNowText
          printWaiting endpoint since
          waiting := some (since, now)
        | some (since, last) =>
          if now - last ≥ remoteWaitNoticeMs then
            printWaiting endpoint since
            waiting := some (since, now)
    return .ok ()

/-- `remoteEpochRef`'s count, read by a job before each request it sends (see `remoteEpochRef`). -/
public def remoteEpoch : BaseIO Nat :=
  remoteEpochRef.get

/-- This process's current service decision, if it has sent a `hello`. -/
public def remoteDecision? : BaseIO (Option SessionDecision) :=
  remoteDecisionRef.atomically (getThe (Option SessionDecision))

/-- The result of the line of a job that the fallback `local` builds on this machine: `toolchain-mismatch` when the
service runs another Lean, else `local`. -/
public def fallbackResult : BaseIO String := do
  return if (← remoteDecision?) matches some (.toolchainMismatch _) then "toolchain-mismatch" else "local"

/-- Records one job (a module's, a C object's or a shared library's) that failed because the service
was unavailable under `fail`, or its toolchain mismatched under `wait` or `fail` (for exit code 75,
`Lake.finalizeBuild`). -/
public def recordUnavailableFailure : JobM Unit := do
  (← (·.remoteStats) <$> getBuildContext).modify (·.addUnavailableFailure)

/-! ## The per-target log (`LAKE_REMOTE_EXEC_LOG`) -/

/-- One line of `LAKE_REMOTE_EXEC_LOG` but its `kind`, `target` and times (see `appendRemoteLog`). -/
public structure RemoteOutcome where
  /-- `cached`, `executed`, `local-cache`, `local`, `toolchain-mismatch`, `bucket`, `import-failed`,
  `timeout`, `oom`, `disk-limit` or `error`. -/
  result : String
  action? : Option String := none
  outputs? : Option (Array (String × RemoteExec.Digest)) := none
  exitCode? : Option Int := none
  terminationSignal? : Option String := none
  stdoutDigest? : Option RemoteExec.Digest := none
  stderrDigest? : Option RemoteExec.Digest := none
  /-- For `error` only: the bridge's code as it sent it, or a Lake code (`setup`, `request`, …). -/
  code? : Option String := none
  limits? : Option JsonObject := none
  deriving Inhabited

namespace RemoteOutcome

public def error (code : String) : RemoteOutcome := {result := "error", code? := code}

/-- The line `o` as an `error` with the code `code`, with `o`'s other fields. -/
public def asError (o : RemoteOutcome) (code : String) : RemoteOutcome := {o with result := "error", code? := code}

/-- The result a `limits` object gives (contract C5.1 v7): `oom` when the sandbox killed a process for
its memory, else `disk-limit` when the action filled its disk, whatever the exit code. -/
def limitsResult? (limits : JsonObject) : Option String :=
  if (limits.getD "oomKills" (0 : Nat)).toOption.getD 0 > 0 then some "oom"
  else if (limits.getD "diskLimitExceeded" false).toOption.getD false then some "disk-limit"
  else none

/-- The line of a `run` result, with the outputs it names by extension: `oom` or `disk-limit` when its
`limits` say so, else `cached` or `executed`. -/
public def ofRun (r : RemoteExec.RunResult) (outputs : Array (String × RemoteExec.Digest)) :
    RemoteOutcome where
  result := (r.limits?.bind limitsResult?).getD (if r.cached then "cached" else "executed")
  action? := if r.action.isEmpty then none else some r.action
  outputs? := if outputs.isEmpty then none else some outputs
  exitCode? := some r.exitCode
  terminationSignal? := r.terminationSignal?
  stdoutDigest? := r.stdoutDigest?
  stderrDigest? := r.stderrDigest?
  limits? := r.limits?

/-- The line of an error of the bridge that is the module's result: `timeout`, `oom` or `disk-limit` with the error's
action, termination signal, stream digests and limits, or `error` with the bridge's code as it sent it. -/
public def ofError (e : RemoteExec.Error) : RemoteOutcome :=
  let killed (result : String) : RemoteOutcome := {
    result, action? := e.action?, terminationSignal? := e.terminationSignal?
    stdoutDigest? := e.stdoutDigest?, stderrDigest? := e.stderrDigest?, limits? := e.limits? }
  match e.code with
  | .timeout => killed "timeout"
  | .oom => killed "oom"
  | .diskLimit => killed "disk-limit"
  | _ => error e.codeText

/-- The line of outputs found without a compile (`local-cache`, `bucket`), with the action and
outputs of their service record, if any. -/
public def ofRecord (result : String) (record? : Option RemoteExec.Record) : RemoteOutcome where
  result
  action? := record?.bind fun r => if r.action.isEmpty then none else some r.action
  outputs? := record?.bind fun r =>
    if r.outputs.isEmpty then none
    else some (r.outputs.foldl (init := #[]) fun outs ext o => outs.push (ext, o.digest))

end RemoteOutcome

/-- When a job's work started, for its line: since the Unix epoch and on the monotonic clock, in
milliseconds. -/
public structure RemoteLogStart where
  epochMs : Nat
  monoMs : Nat

open Std.Time.Internal in
public def RemoteLogStart.now : BaseIO RemoteLogStart := do
  let epochMs ← match ← Std.Time.Timestamp.now.toBaseIO with
    | .ok t => pure (UnitVal.val t.toMillisecondsSinceUnixEpoch).toNat
    | .error _ => pure 0
  return {epochMs, monoMs := ← IO.monoMsNow}

builtin_initialize remoteLogLock : Std.Mutex Unit ← Std.Mutex.new ()

/--
Appends one line to the log at `path` (`LAKE_REMOTE_EXEC_LOG`): a JSON object with every field, `null`
for a field with no value; `wallMs` runs from `start` to now. Jobs write their lines at once, so each
line goes out under a process-wide lock, as one write of the line and its newline.
-/
public def appendRemoteLog (path : FilePath) (kind target : String) (start : RemoteLogStart)
    (o : RemoteOutcome) : IO Unit := do
  let outputs? := o.outputs?.map fun outs => Json.mkObj (outs.toList.map fun (ext, d) => (ext, toJson d))
  let line := Json.mkObj [
    ("kind", kind), ("target", target), ("result", o.result), ("action", toJson o.action?),
    ("outputs", toJson outputs?), ("exitCode", toJson o.exitCode?),
    ("terminationSignal", toJson o.terminationSignal?), ("stdoutDigest", toJson o.stdoutDigest?),
    ("stderrDigest", toJson o.stderrDigest?), ("code", toJson o.code?), ("limits", toJson o.limits?),
    ("wallMs", toJson ((← IO.monoMsNow) - start.monoMs)), ("startMs", toJson start.epochMs)]
  let text := line.compress.push '\n'
  remoteLogLock.atomically (m := IO) do
    let h ← IO.FS.Handle.mk path .append
    h.putStr text
    h.flush

/-- The message that the job for `target` could not append its line to `LAKE_REMOTE_EXEC_LOG` (`e`). -/
public def remoteLineAppendFailure (target : String) (e : IO.Error) : String :=
  s!"{target}: could not append its line to LAKE_REMOTE_EXEC_LOG: {e}"

/--
Runs `act`, the work of a job for `target` that writes its one line of `LAKE_REMOTE_EXEC_LOG` with `write`: when `act`
fails, the line is `error` with code `canceled` for a canceled job, else `outcome`; when `act` returns a result that
`done` accepts, it is `outcome`. A line that cannot be written fails the job.
-/
public def withRemoteLine (target : String) (write : RemoteOutcome → IO Unit) (outcome : IO.Ref RemoteOutcome)
    (act : JobM α) (done : α → Bool := fun _ => true) : JobM α := do
  let writeLine (o : RemoteOutcome) : JobM Unit := do
    if let .error e ← (write o).toBaseIO then
      error (remoteLineAppendFailure target e)
  let r ← tryCatch act fun e => do
    writeLine (← if (← getThe JobState).canceled then pure (RemoteOutcome.error "canceled") else outcome.get)
    throw e
  if done r then writeLine (← outcome.get)
  return r

/-! ## Failing a job for the service -/

/-- Whether this process printed the message of its refused or mismatched service yet (see
`decisionError`). -/
builtin_initialize remoteDecisionReported : IO.Ref Bool ← IO.mkRef false

/-- The error of a job that a refused service or a confirmed toolchain mismatch fails: the decision's
message `msg` the first time this process reports it, then `short`, so that the message shows once. -/
def decisionError (msg short : String) : BaseIO String := do
  if ← remoteDecisionReported.swap true then return short
  return msg

/-- Fails a job because the service did not answer under `fail` (code `UNAVAILABLE` in `outcome`),
counted for exit code 75. -/
public def failUnavailable (outcome : IO.Ref RemoteOutcome) (msg : String) : JobM α := do
  recordUnavailableFailure
  outcome.set (.error "UNAVAILABLE")
  error msg

/-- Fails a job because of a confirmed toolchain mismatch under `wait` or `fail` (code
`toolchain-mismatch` in `outcome`), counted for exit code 75. -/
public def failMismatch (s : RemoteSession) (outcome : IO.Ref RemoteOutcome) (msg : String) : JobM α := do
  recordUnavailableFailure
  outcome.set (.error "toolchain-mismatch")
  error (← decisionError msg s!"build service at {s.cfg.endpoint} runs another Lean (see the error above)")

/-- Fails a job because the service is refused, whatever the fallback (code `toolchain-unverified` in
`outcome`). -/
public def failRefused (s : RemoteSession) (outcome : IO.Ref RemoteOutcome) (msg : String) : JobM α := do
  outcome.set (.error "toolchain-unverified")
  error (← decisionError msg s!"build service at {s.cfg.endpoint} is refused (see the error above)")

/-- Fails a job whose wait for the service (`awaitService`) ended in a refusal or a mismatch. -/
def failAwait (s : RemoteSession) (outcome : IO.Ref RemoteOutcome) (msg : String) : JobM α := do
  if let some (.toolchainMismatch _) ← remoteDecision? then failMismatch s outcome msg
  failRefused s outcome msg

/--
The fallback `wait` for a job whose request answered `UNAVAILABLE` (see `awaitService`): returns once
the service answers again, so the job sends the request again. `epoch` is `remoteEpoch` read before
the request was sent. A refusal or a mismatch fails the job, with its code in `outcome`.
-/
public def awaitServiceAgain (s : RemoteSession) (outcome : IO.Ref RemoteOutcome) (epoch : Nat) :
    JobM Unit := do
  if let .error msg ← awaitService s.client s.cfg.endpoint s.leanGithash (some epoch) then
    failAwait s outcome msg

/--
Whether a job that needs the build service (a module's, a C object's or a shared library's) sends
its request (contract C5.1): says `hello` once per process (`ensureDecision`) and applies
`LAKE_REMOTE_EXEC_FALLBACK` when the service does not answer. `true`: send it. `false`: the fallback
is `local` (the default), and the job builds on this machine; while the service does not answer,
every later job does so at once without a request, until the re-probe timer (`startProbeTimer`)
finds the service again. Under `fail` it errors with the decision's message, counted
(`recordUnavailableFailure`); under `wait` it returns `true` once the service answers
(`awaitService`). A refused service fails the job whatever the fallback. A confirmed toolchain
mismatch falls back only under `local`; `wait` and `fail` fail with exit code 75. A failure puts its
code in `outcome`.
-/
public def useService (s : RemoteSession) (outcome : IO.Ref RemoteOutcome) : JobM Bool := do
  match ← ensureDecision s.client s.cfg.endpoint s.leanGithash s.cfg.fallback with
  | .active => return true
  | .toolchainMismatch msg =>
    if s.cfg.fallback == .compileLocally then
      warnToolchainMismatch msg
      return false
    failMismatch s outcome msg
  | .refused msg => failRefused s outcome msg
  | .unreachable msg =>
    match s.cfg.fallback with
    | .compileLocally => return false
    | .fail => failUnavailable outcome msg
    | .wait =>
      if let .error msg ← awaitService s.client s.cfg.endpoint s.leanGithash none then
        failAwait s outcome msg
      return true

/--
Whether the build uses the service: not `--no-build`, which sends no request, and the service answers by this process's
decision (`ensureDecision`, as `useService` reads it), so that `useService` would answer `true` at once, with no wait
for the service and no failure of the job. `NativeAction.fetch` and `Module.fetchRemote` read it to decide whether a
local output with no service record goes to the service in its own job.
-/
public def buildUsesService (s : RemoteSession) : JobM Bool := do
  if (← getNoBuild) then return false
  return (← ensureDecision s.client s.cfg.endpoint s.leanGithash s.cfg.fallback) matches .active

/--
Exit code of a build whose every failure is an unavailable service under `fail`, or a confirmed
toolchain mismatch under `wait` or `fail`: 75 (`EX_TEMPFAIL`), distinct from a broken build.
-/
public def remoteUnavailableCode : ExitCode := 75

/--
The `hello` that `lake build` sends at its start (with `command := build`), so that every build's
GetCapabilities carries the build's invocation id; it makes this process's decision. Returns the
message of a decision that fails each module that needs a build, for the caller to print once, with the build's exit
code: a refused service (1), or a confirmed mismatch under `wait` or `fail` (`remoteUnavailableCode`). The build still
runs, so that each module writes its line; the modules' own errors then refer to the message (`decisionError`). A
confirmed mismatch under `local` warns and returns `none`.
-/
public def startRemoteSession (ws : Workspace) : IO (Option (String × ExitCode)) := do
  let some cfg := ws.lakeEnv.remoteExec?
    | return none
  let some _ := cfg.toolchain?
    | throw (IO.userError "LAKE_REMOTE_EXEC is set but LAKE_REMOTE_EXEC_TOOLCHAIN is not")
  let sysroot ← match cfg.sysroot? with
    | some s => pure s
    | none => IO.FS.realPath ws.lakeEnv.lean.sysroot
  let leanGithash := ws.lakeEnv.lean.githash
  let helloParams ← mkHelloParams cfg sysroot leanGithash (command? := some "build")
  let client : RemoteExec.ClientConfig := {exe := cfg.client, socket? := cfg.socket?, helloParams}
  let decision ← ensureDecision client cfg.endpoint leanGithash cfg.fallback
  -- This bridge starts before the build does, so it does not hold the workspace build lock, and it
  -- carried nothing but `hello`, so no write of it can land: it is killed at once, and a stuck daemon
  -- does not delay the build's start. The build's first request starts the bridge again, which then
  -- holds the lock for as long as it can write into `.lake/build` (`RemoteExec.bridgeExitTimeoutMs`).
  RemoteExec.killBridge
  match decision with
  | .refused msg =>
    remoteDecisionReported.set true
    return some (msg, 1)
  | .toolchainMismatch msg =>
    if cfg.fallback != .compileLocally then
      remoteDecisionReported.set true
      return some (msg, remoteUnavailableCode)
    warnToolchainMismatch msg
    return none
  | _ => return none

/-- The service's state for the end-of-build line (contract C5.1): `idle` when no `hello` was sent. -/
public def remoteDecisionState : BaseIO RemoteState := do
  match ← (remoteDecisionRef.atomically (getThe (Option SessionDecision)) : BaseIO _) with
  | none => return .idle
  | some .active => return .ok
  | some (.unreachable _) => return .unreachable
  | some (.toolchainMismatch msg) => return .off msg
  | some (.refused msg) => return .off msg

/-! ## Statistics -/

/-- The build's remote-statistics reference (for the end-of-build line). -/
public def getRemoteStats : JobM (IO.Ref RemoteStats) :=
  (·.remoteStats) <$> getBuildContext

/-- Records one Lean module result. -/
public def recordRemoteModule (cached : Bool) : JobM Unit := do
  (← getRemoteStats).modify (·.addLean cached)

/-- Records one Lean module that the fallback `local` compiled on this machine. -/
public def recordRemoteLocal : JobM Unit := do
  (← getRemoteStats).modify (·.addLeanLocal)

/-- Records one result of the service for a C object or a shared library. -/
public def recordRemoteNative (cached : Bool) : JobM Unit := do
  (← getRemoteStats).modify (·.addOther cached)

/-- Records one C object or shared library that the fallback `local` built on this machine. -/
public def recordRemoteNativeLocal : JobM Unit := do
  (← getRemoteStats).modify (·.addOtherLocal)

/-! ## Path rewriting (contract C2.1) -/

/-- `lib/<pkg>/<Module/Path>.<ext>` in the action's input root (contract C2.1). -/
public def remoteLibPath (mod : Module) (ext : String) : String :=
  (Lean.modToFilePath s!"lib/{mod.pkg.keyName}" mod.name ext).toString

/-- `ir/<pkg>/<Module/Path>.<ext>` in the action's input root. -/
public def remoteIrPath (mod : Module) (ext : String) : String :=
  (Lean.modToFilePath s!"ir/{mod.pkg.keyName}" mod.name ext).toString

/-- `src/<Module/Path>.lean` in the action's input root. -/
public def remoteSrcPath (mod : Module) : String :=
  (Lean.modToFilePath "src" mod.name "lean").toString

/--
The rest of `p` below the directory `dir`, in canonical form: its components without the empty ones and `.`, joined
by `/`. `none` when `p` is not below `dir`, when no component is left, or when a component is `..`, since then `p`
may leave `dir`.
-/
public def pathBelow? (dir p : FilePath) : Option String := do
  let rest ← p.toString.dropPrefix? (dir.toString ++ "/")
  let parts := (FilePath.mk rest.toString).components.filter fun c => c != "" && c != "."
  if parts.isEmpty || parts.contains ".." then none else some (String.intercalate "/" parts)

/--
The path in the action's input root of `file`, a file of `pkg`'s build (contract C2.1): `lib/<pkg>/<rest>` with the
rest of `file` below the package's `leanLibDir` (`pathBelow?`), else `native/<pkg>/<rest>` with its rest below the
package's `buildDir`, else `none`: such a file has no path in the input root.
-/
public def remoteBuildPath (pkg : Package) (file : FilePath) : Option String :=
  match pathBelow? pkg.leanLibDir file with
  | some rel => some s!"lib/{pkg.keyName}/{rel}"
  | none => (pathBelow? pkg.buildDir file).map fun rel => s!"native/{pkg.keyName}/{rel}"

/-- The extensions of `ImportArtifacts` by position (Lean `Setup.lean:69-93`). -/
public def importArtExts : Array (Array String) :=
  #[#["olean", "olean.server", "olean.private"], #["ir.sig", "ir"]]

/--
Rewrites a setup's `importArts` to input-root-relative paths (contract C2.1), returning the new
map and, for each file, its local path paired with its relative path (so the caller can send it
as an input).
-/
public def rewriteImportArts (arts : NameMap ImportArtifacts) :
    JobM (NameMap ImportArtifacts × Array (FilePath × String)) := do
  let mut out : NameMap ImportArtifacts := {}
  let mut files := #[]
  for (n, a) in arts do
    let some imp ← findModule? n
      | error s!"import {n} of a setup is not a module of the workspace"
    let mut arrays := #[]
    for h : i in [0:a.toArrays.size] do
      let mut row := #[]
      for h' : j in [0:a.toArrays[i].size] do
        let rel := remoteLibPath imp importArtExts[i]![j]!
        files := files.push (a.toArrays[i][j], rel)
        row := row.push (FilePath.mk rel)
      arrays := arrays.push row
    out := out.insert n (.ofArrays arrays)
  return (out, files)

/-! ## Typed `run` and `materialize` -/

/--
Records that the service in use did not answer a request sent at `epoch` (`remoteEpoch`, read before
the request was sent), so that the end-of-build line says `unreachable` and every later job takes
the fallback; under `local` this starts the re-probe timer (`startProbeTimer`). A failure is not
recorded when the timer found the service again after the request was sent (the epoch moved): the
job sends the request again (`retryWhileUnavailable`).
-/
def noteUnreachable (s : RemoteSession) (epoch : Nat) (msg : String) : BaseIO Unit :=
  remoteDecisionRef.atomically do
    if let some .active ← getThe (Option SessionDecision) then
      if (← remoteEpochRef.get) == epoch then
        set (some (SessionDecision.unreachable msg))
        if s.cfg.fallback == .compileLocally then
          startProbeTimer s.client s.cfg.endpoint s.leanGithash

/-- Sends one request on the session's connection; `epoch` is `remoteEpoch`, read before the request
was sent. An `UNAVAILABLE` answer means the service did not answer (contract C5.1): see
`noteUnreachable`. Under `wait` the decision is left alone, here and in `admitHello`: an answer that a
request got before a probe (`awaitService`) found the service again must not undo that verdict; the
job sends the request again or probes, by `retryWhileUnavailable`'s epoch rule. An `UNAVAILABLE`
answer whose `missing` names one of `lost`, inputs that the caller can make again
(`runRetryingLost`), came from a service that answered, and is not noted either. -/
def callService (s : RemoteSession) (epoch : Nat) (method : String) (params : Json)
    (lost : Array RemoteExec.Digest := #[]) : BaseIO (Except RemoteExec.Error Json) := do
  let r ← RemoteExec.call s.client method params
  if let .error e := r then
    if e.code == .unavailable && s.cfg.fallback != .wait && !e.missing.any lost.contains then
      noteUnreachable s epoch s!"build service at {s.cfg.endpoint} did not answer: {e.message}"
  return r

/-- Sends a `run` request and parses its result; `epoch` is `remoteEpoch`, read before, and `lost` the
inputs whose loss the caller handles (see `callService`). A result that does not parse is an `internal`
error whose code text is Lake's `malformed-result`, the code of its line. -/
public def runAction (s : RemoteSession) (epoch : Nat) (params : Json) (lost : Array RemoteExec.Digest := #[]) :
    JobM (Except RemoteExec.Error RemoteExec.RunResult) := do
  match ← callService s epoch "run" params lost with
  | .error e => return .error e
  | .ok j => match RemoteExec.RunResult.ofJson? j with
    | .ok r => return .ok r
    | .error msg => return .error {
        code := .internal, codeText := "malformed-result", message := s!"malformed run result: {msg}"}

/-- Materializes output blobs to local paths through the daemon; `epoch` is `remoteEpoch`, read
before (see `callService`). -/
public def materializeFiles (s : RemoteSession) (epoch : Nat)
    (files : Array (RemoteExec.Digest × FilePath × Bool)) :
    JobM (Except RemoteExec.Error RemoteExec.MaterializeResult) := do
  let arr := files.map fun (d, p, exe) =>
    Json.mkObj [("digest", (toJson d : Json)), ("path", p.toString), ("executable", exe)]
  match ← callService s epoch "materialize" (Json.mkObj [("files", Json.arr arr)]) with
  | .error e => return .error e
  | .ok j => match RemoteExec.MaterializeResult.ofJson? j with
    | .ok r => return .ok r
    | .error msg => return .error {code := .internal, message := s!"malformed materialize result: {msg}"}

/--
Leaves the build action of a service action (`Module.buildRemote`, `NativeAction.buildRemote`) after a request
answers `UNAVAILABLE`, either after the daemon's retries (contract C5.1) or because the bridge rejected its `hello`.
`epoch` is `remoteEpoch`, read just before that request was sent. A failed bridge `hello` also rejects requests as
`UNAVAILABLE`; its saved verdict distinguishes an unverified service (always fatal) from a confirmed toolchain
mismatch (local fallback only under `local`, otherwise exit 75). An unavailable service under `fail` also errors with
`msg`, counted for exit 75 (`recordUnavailableFailure`). These failures put their code in `outcome`. Otherwise it
notes `msg` and `epoch` in `why` and fails without a log entry, from `pos`, where the action started;
`retryWhileUnavailable` drops what the action logged and sends the request again or takes the fallback. Either way the
action writes no trace.
-/
public def remoteUnavailable (s : RemoteSession) (outcome : IO.Ref RemoteOutcome)
    (why : IO.Ref (Option (String × Nat))) (pos : Log.Pos) (epoch : Nat) (msg : String) : JobM α := do
  match ← remoteDecision? with
  | some (.refused refusal) => failRefused s outcome refusal
  | some (.toolchainMismatch mismatch) =>
    if s.cfg.fallback != .compileLocally then
      failMismatch s outcome mismatch
  | _ => pure ()
  if s.cfg.fallback == .fail then
    failUnavailable outcome msg
  why.set (some (msg, epoch))
  throw pos

/--
Runs `build`, the build action of a service action, until its result is the job's. When the action leaves through
`remoteUnavailable`, which notes why in the reference that `build` gets, the job drops what the action logged and sends
the request again: under `wait` once the service answers again (`awaitServiceAgain`), otherwise when a probe found the
service again after the request was sent (the epoch moved). Else it returns `none`, and the fallback `local` builds on
this machine. Every other failure is the job's.
-/
public def retryWhileUnavailable (s : RemoteSession) (outcome : IO.Ref RemoteOutcome)
    (build : IO.Ref (Option (String × Nat)) → JobM α) : JobM (Option α) := do
  repeat
    let why ← IO.mkRef (none : Option (String × Nat))
    try
      return some (← build why)
    catch pos =>
      let some (_, epoch) ← why.get | throw pos
      dropLogFrom pos
      if s.cfg.fallback == .wait then
        awaitServiceAgain s outcome epoch
      else if (← remoteEpoch) == epoch then
        return none
  return none

/--
Leaves the build action of a service action for `target`, which started at the log position `pos`, because its `run`
request, sent at `epoch`, failed with `e`: through `remoteUnavailable` for `UNAVAILABLE`, else with `e` as the job's
result, counted with `count` when the service ran the action and it failed there.
-/
public def leaveRunError (s : RemoteSession) (outcome : IO.Ref RemoteOutcome) (why : IO.Ref (Option (String × Nat)))
    (pos : Log.Pos) (epoch : Nat) (target : String) (count : Bool → JobM Unit) (e : RemoteExec.Error) : JobM α := do
  let msg := s!"the build service's run of {target} failed: {e.message}"
  if e.code == .unavailable then
    remoteUnavailable s outcome why pos epoch msg
  -- These answers say the service ran the action and it failed there (contract C5.1).
  if e.code == .oom || e.code == .timeout || e.code == .diskLimit then
    count false
  outcome.set (.ofError e)
  error msg

/--
Materializes `files`, the outputs of the service action for `target` whose build action started at the log position
`pos`, and counts the service's result (`cached` or not) with `count`: once the outputs are here, or when `materialize`
fails for another reason than `UNAVAILABLE`. An `UNAVAILABLE` answer leaves through `remoteUnavailable`, counted first
under `fail`.
-/
public def materializeOrLeave (s : RemoteSession) (outcome : IO.Ref RemoteOutcome)
    (why : IO.Ref (Option (String × Nat))) (pos : Log.Pos) (target : String) (count : Bool → JobM Unit) (cached : Bool)
    (files : Array (RemoteExec.Digest × FilePath × Bool)) : JobM Unit := do
  let epoch ← remoteEpoch
  match ← materializeFiles s epoch files with
  | .ok _ => count cached
  | .error e =>
    let msg := s!"materializing {target} from the build service failed: {e.message}"
    if e.code == .unavailable then
      -- Under `fail` the service's result stays the job's; otherwise the fallback replaces it.
      if s.cfg.fallback == .fail then
        count cached
      remoteUnavailable s outcome why pos epoch msg
    count cached
    error msg

/-! ## Promotion of the inputs of service actions

No local output is an input of a service action, except a shared library that stays on this machine (an `extern_lib`'s,
another one that build code of its own makes, or one that `buildNativeSharedLib` links here), which goes in by path
(`remoteHead`), and the files that a module's `leanir` step writes. An input that has no service record is promoted
before a service action takes it (`Module.serviceFor`, `NativeArtifact.serviceOutput`): its own action runs on the
service, its own inputs promoted first, and the service's outputs are materialized over the local files (the bridge
renames each into place, so a process that has an old file open keeps it); the `.hash` files, the trace, the Lake cache
entry (when the package writes the Lake cache) and the `-o` entry (when there is one) then follow the service's bytes,
and the trace and the Lake cache entry hold the service's record (`Module.promote`, `NativeAction.promote`). A
promotion writes no line of `LAKE_REMOTE_EXEC_LOG` (the job of its target wrote that), and one promotion serves every
job of the process (`promoteOnce`). Under `--no-build` no service action runs, so nothing is promoted. A local output
with no record that goes to the service in its own job is not promoted here (`NativeAction.fetch`,
`Module.fetchRemote`). A service action whose request promoted inputs (its own, or those of a promotion's request)
writes its trace, and its Lake cache entry and its `-o` entry where it writes them, under the hash of its inputs after
the promotion, which the next build computes from the files (`Module.retrace`, `NativeAction.retrace`). Another job of
the build that took the hash of an output before its promotion keeps that hash.

Where the input's package writes the artifact cache, a promotion holds the input lock of its input (`acquireInputLock?`,
under the hash from before the promotion of the input's own inputs, as a module's build takes it) over its run, the
materialize and the writes, so that Lake processes that share the cache promote each input once: under the lock it
reads the input's cache entry again, and restores another process's promotion, with its record, in place of a request;
the restore leaves the records that a promotion of its own leaves. No promotion waits for a lock while it holds one, so
two promotions never wait on each other: it takes the lock only once its request is made, which promotes the request's
inputs first, and releases it while it makes a lost input again (`promotionRun`).
-/

/-- Why a promotion (`promoteOnce`) gave its input no service record. -/
public inductive PromotionError
  /-- A request of the promotion answered `UNAVAILABLE`; `epoch` is `remoteEpoch`, read before it was sent. -/
  | unavailable (epoch : Nat) (msg : String)
  /-- Any other failure. -/
  | failed (msg : String)
  deriving Inhabited

/-- The error of a promotion whose request, sent at `epoch`, failed with `e`; `msg` says so. -/
public def PromotionError.ofError (e : RemoteExec.Error) (epoch : Nat) (msg : String) : PromotionError :=
  if e.code == .unavailable then .unavailable epoch msg else .failed msg

/-- The error of `target`'s request when one of its `names` in the action's input root is absolute or has a `..`
component, which could name a file outside the root. -/
public def checkInputRootNames (target : String) (names : Array String) : Except PromotionError Unit :=
  match names.find? fun n => let p := FilePath.mk n; p.isAbsolute || p.components.contains ".." with
  | some name => .error (.failed s!"{target}: the request names {name}, which is not a path below the action's \
      input root")
  | none => .ok ()

/--
Leaves the build action of a service action, which started at the log position `pos`, because a promotion of one of
its inputs failed, as its own request would: a service that did not answer through `remoteUnavailable` (the fallback
`local` builds here, `fail` fails with `UNAVAILABLE`, `wait` waits and sends the request again), any other failure with
its message.
-/
public def PromotionError.leave (e : PromotionError) (s : RemoteSession) (outcome : IO.Ref RemoteOutcome)
    (why : IO.Ref (Option (String × Nat))) (pos : Log.Pos) : JobM α :=
  match e with
  | .unavailable epoch msg => remoteUnavailable s outcome why pos epoch msg
  | .failed msg => error msg

/--
Runs `act`, the promotion of the input `key`, once in this process (`promises`): a job that needs the input while it
runs waits for its result, and every later job gets that result. A promotion that met a service that did not answer is
not kept, so a later request promotes again. A promotion that fails with an error ends as `failed` with the error's
messages, which leave the log of the job that ran it.
-/
public def promoteOnce [BEq κ] [Hashable κ]
    (promises : Std.Mutex (Std.HashMap κ (IO.Promise (Except PromotionError α)))) (key : κ)
    (act : JobM (Except PromotionError α)) : JobM (Except PromotionError α) := do
  let (promise, owner) ← (promises.atomically (m := BaseIO) do
    if let some p := (← get)[key]? then return (p, false)
    let p ← IO.Promise.new
    modify (·.insert key p)
    return (p, true) : BaseIO _)
  unless owner do
    return (← IO.wait promise.result?).getD (.error (.failed "the promotion of an input ended with no result"))
  let r ← try act catch pos => do
    let log ← takeLogFrom pos
    let msg := "\n".intercalate (log.entries.map (·.message)).toList
    pure (.error (.failed (if msg.isEmpty then "the promotion of an input failed" else msg)))
  if r matches .error (.unavailable ..) then
    promises.atomically (m := BaseIO) (modify (·.erase key))
  promise.resolve r
  return r

/-! ## Native actions (contract C3.1) -/

/-- A native action of service mode: a module's C object, a module's shared library, or a library's shared library. -/
public inductive NativeKind
  | cCompile | linkShared | linkSharedLibrary
  deriving Inhabited

/-- The `mnemonic` of the action's request. -/
public def NativeKind.mnemonic : NativeKind → String
  | .cCompile => "CCompile" | .linkShared => "LinkShared" | .linkSharedLibrary => "LinkSharedLibrary"

/-- The `kind` of the job's line: `c` or `shared`. -/
public def NativeKind.lineKind : NativeKind → String
  | .cCompile => "c" | _ => "shared"

/-- The name of the action's output in the job's line and in the service record: `o` or `so`. -/
public def NativeKind.outputName : NativeKind → String
  | .cCompile => "o" | _ => "so"

/-- The extension of the action's output in the Lake cache: `o`, or the platform's shared library extension. -/
public def NativeKind.cacheExt : NativeKind → String
  | .cCompile => "o" | _ => sharedLibExt

/-- What a native action reads. -/
public inductive NativeInputs
  /--
  `CCompile`: the C file, an input by path: its local path and its path in the input root. `promote` gives the module
  that wrote it a service record, promoting the module if it has none (`Module.serviceFor`), and returns the module's C
  file after a promotion of this process.
  -/
  | source (file : FilePath) (rel : String)
    (promote : RemoteSession → JobM (Except PromotionError (Option Artifact)))
  /-- A link: the objects' local paths, each the output of a native action of this build (`nativeArtifact?`), which
  the request takes by their service digest, and the local paths of the libraries that the link's trace takes
  (`linkLibs`), none of which is an input of the request. -/
  | objects (files libs : Array FilePath)

public instance : Inhabited NativeInputs := ⟨.objects #[] #[]⟩

/-- A native action of service mode: the data its `run` request is built from (`NativeAction.request`). -/
public structure NativeAction where
  kind : NativeKind
  /-- The request's and the line's target: `<module>:c.o.export`, `<module>:c.o.noexport`, `<module>:dynlib` or
  `<package>/<library>:shared`. -/
  target : String
  /-- The output's local path. -/
  file : FilePath
  /-- The output's path in the action's input root (contract C2.1). -/
  rel : String
  inputs : NativeInputs
  /-- The arguments after the fixed ones: `CCompile`'s are the module's `weakLeancArgs` and `leancArgs`, a link's the
  `weakLinkArgs` and `linkArgs`. -/
  args : Array String
  deriving Inhabited

/-- A native artifact of this process: its action; the package and trace of its job (`NativeAction.fetch`, with the
timeout rule); the service's record of the file when the file holds the service's output; and the file's hash after this
process promoted it (`NativeAction.promote`), which then holds the service's output in place of the one its job
hashed. -/
public structure NativeArtifact where
  action : NativeAction
  pkg : Package
  depTrace : BuildTrace
  record? : Option RemoteExec.Record
  promotedHash? : Option Hash := none
  deriving Inhabited

/-- The service's output that the artifact's file holds, from its record. -/
def NativeArtifact.output? (a : NativeArtifact) : Option RemoteExec.RecordOutput :=
  a.record?.bind (·.outputs.get? a.action.kind.outputName)

/-- The native artifacts of this process by their local path: each native job of service mode registers its artifact
however it got it (a replay, a restore, the service, the fallback), and a promotion registers its record. -/
builtin_initialize nativeArtifacts : Std.Mutex (Std.HashMap FilePath NativeArtifact) ← Std.Mutex.new {}

/-- Registers a native artifact of this process (`nativeArtifacts`). -/
public def registerNativeArtifact (a : NativeArtifact) : BaseIO Unit :=
  nativeArtifacts.atomically (modify (·.insert a.action.file a))

/-- The native artifact of this process at `file`, if a native job of service mode got it. -/
public def nativeArtifact? (file : FilePath) : BaseIO (Option NativeArtifact) :=
  nativeArtifacts.atomically ((·[file]?) <$> get)

/-- The trace file of the native artifact at `file`, as `buildArtifactUnlessUpToDate` names it. -/
def nativeTraceFile (file : FilePath) : FilePath :=
  FilePath.mk (file.toString ++ ".trace")

/-- Ends a promotion of the native artifact `a`, whose file now holds the service's output `art` with the service's
record `record`, and whose job's trace after the promotion of the action's inputs is `depTrace`
(`NativeAction.retrace`): writes the record into the file's trace, which keeps the log of `savedTrace` and, when
`savedTrace` has another hash, takes `depTrace`; removes the trace of a `--no-build` run; makes the artifact's `-o`
entry, which its job wrote under the job's trace, `depTrace`'s hash mapped to the file; and writes the record into
`nativeArtifacts`, with `depTrace` and the file's hash. -/
def NativeArtifact.notePromoted (a : NativeArtifact) (depTrace : BuildTrace) (savedTrace : SavedTrace) (art : Artifact)
    (record : RemoteExec.Record) : JobM Unit := do
  let traceFile := nativeTraceFile a.action.file
  let data := match savedTrace with
    | .ok data =>
      if data.depHash == depTrace.hash then {data with outputs? := some (toJson art.descr), remote? := some record}
      else .ofBuild depTrace (toJson art.descr) data.log (remote? := some record)
    | _ => BuildMetadata.ofFetch depTrace.hash (toJson art.descr) {} (remote? := some record)
  data.writeFile traceFile
  removeFileIfExists (traceFile.addExtension "nobuild")
  if let some ref ← Internal.getOutputsRef? a.pkg then
    ref.replace a.depTrace.hash depTrace.hash art.descr
  registerNativeArtifact {a with depTrace, record? := some record, promotedHash? := some art.hash}

/--
Another Lake process's promotion of the native artifact `a`, if the Lake cache entry of `depTrace`, the trace of its job
after the promotion of the action's inputs (`NativeAction.retrace`), has the service's record (`NativeAction.promote`
reads it under the input lock): restores the entry's output to the artifact's file with the record's executable bit,
ends the promotion as `NativeAction.promote` does (`NativeArtifact.notePromoted`), and returns the output on the
service.
-/
def NativeArtifact.restorePromoted? (a : NativeArtifact) (depTrace : BuildTrace) :
    JobM (Option RemoteExec.RecordOutput) := do
  let file := a.action.file
  let out? ← try (← getLakeCache).readOutputs? a.pkg.cacheScope depTrace.hash catch e => do
    dropLogFrom e
    pure none
  let some out := out? | return none
  let some record := out.remote? | return none
  let some o := record.outputs.get? a.action.kind.outputName | return none
  let art? ← try some <$> resolveArtifactOutput (.ofData out.data) (exe := o.executable) catch e => do
    dropLogFrom e
    pure none
  let some art := art? | return none
  let savedTrace ← readTraceFile (nativeTraceFile file)
  -- The file has the local build's bytes, which `restoreArtifact` would replace only with a warning
  removeFileIfExists file
  clearFileHash file
  let art ← restoreArtifact file art o.executable
  a.notePromoted depTrace savedTrace art record
  return some o

/-- The promotions of this process's native artifacts by their local path (`NativeArtifact.serviceOutput`). -/
builtin_initialize nativePromotions :
    Std.Mutex (Std.HashMap FilePath (IO.Promise (Except PromotionError RemoteExec.RecordOutput))) ←
  Std.Mutex.new {}

/-- The runs again of native actions whose output the service lost, by the output's digest (`rerunLostBlob`). -/
builtin_initialize lostBlobRuns :
    Std.Mutex (Std.HashMap RemoteExec.Digest (IO.Promise (Except PromotionError RemoteExec.RecordOutput))) ←
  Std.Mutex.new {}

/-- A native action's inputs as its request takes them (`NativeAction.serviceInputs`). -/
public inductive NativeRequestInputs
  /-- `CCompile`'s C file by path: its local path and its path in the input root. -/
  | source (file : FilePath) (rel : String)
  /-- A link's objects by their service digest: each one's path in the input root, its output on the service and its
  local path. -/
  | objects (objs : Array (String × RemoteExec.RecordOutput × FilePath))

/-- The inputs that the request takes by digest, each with the local path of the native artifact that made it. -/
public def NativeRequestInputs.byDigest : NativeRequestInputs → Array (RemoteExec.Digest × FilePath)
  | .source .. => #[]
  | .objects objs => objs.map fun (_, o, file) => (o.digest, file)

/-- The inputs by digest of a `run` request (`byDigest`) whose blobs the service lost, as its answer `r` names them
(contract C5.1): the `missing` digests of an `UNAVAILABLE` answer. -/
def lostInputs (r : Except RemoteExec.Error RemoteExec.RunResult) (byDigest : Array (RemoteExec.Digest × FilePath)) :
    Array (RemoteExec.Digest × FilePath) :=
  match r with
  | .error e => if e.code == .unavailable then byDigest.filter (e.missing.contains ·.1) else #[]
  | .ok _ => #[]

/-- A `run` request's input that it takes by path: its path in the input root and its local path. -/
public def remoteInputByPath (rel : String) (path : FilePath) : Json :=
  Json.mkObj [("rel", rel), ("path", path.toString)]

/-- A `run` request's input that it takes by digest: its path in the input root and its output on the service. -/
public def remoteInputByDigest (rel : String) (o : RemoteExec.RecordOutput) : Json :=
  Json.mkObj [("rel", rel), ("digest", toJson o.digest), ("executable", o.executable)]

/--
The `run` request of a native action (contract C3.1) with its inputs `ins` (`NativeAction.serviceInputs`); with
`skipCacheLookup`, the service runs it past its action cache. The arguments are in the order of a local build's
(`compileO`, `compileSharedLib`, `mkLeanLinkArgs`), with `LAKE_REMOTE_EXEC_CC` as the compiler and the linker, the remote
sysroot's headers and libraries, and Lean's C and link flags (`getCFlags'`, `getLinkerFlags'`), which name no path of
this machine; a link's arguments are in a response file inline in the request. A link searches the sysroot's
`lib/lean` (Lean's libraries) and its `lib`, where a standalone toolchain keeps the static C and C++ libraries that
Lean's link flags name (`-lc++`, `-lc++abi`, `-luv`, `-lgmp`, ...), as a local link with the bundled compiler does
(`getInternalLinkerFlags`): `LAKE_REMOTE_EXEC_CC` need not have them. The action runs with `LAKE_REMOTE_EXEC_PATH` as
its `PATH`, on the platform of the session's Lean actions.
-/
public def NativeAction.request (act : NativeAction) (s : RemoteSession) (ins : NativeRequestInputs)
    (skipCacheLookup := false) : Json := Id.run do
  let cc := s.cfg.cc.toString
  let (argv, inputs, files) : Array String × Array Json × Array Json := match ins with
    | .source file rel =>
      let argv := #[cc, "-c", "-o", act.rel, rel, "-I", s!"{s.sysroot}/include"] ++
        Lean.Compiler.FFI.getCFlags' ++ #["-Wno-unused-command-line-argument"] ++ act.args
      (argv, #[remoteInputByPath rel file], #[])
    | .objects objs =>
      let rsp := act.rel ++ ".rsp"
      let args := objs.map (·.1) ++ act.args ++ #["-L", s!"{s.sysroot}/lib/lean", "-L", s!"{s.sysroot}/lib"] ++
        Lean.Compiler.FFI.getLinkerFlags' (linkStatic := false)
      let inputs := objs.map fun (rel, o, _) => remoteInputByDigest rel o
      let rspFile := Json.mkObj [("rel", rsp), ("contents", rspContents args)]
      (#[cc, "-shared", "-o", act.rel, s!"@{rsp}"], inputs, #[rspFile])
  let params : List (String × Json) := [
    ("argv", toJson argv),
    ("env", Json.mkObj [("PATH", s.cfg.path)]),
    ("workingDirectory", ""),
    ("inputs", Json.arr inputs),
    ("inputDirs", Json.arr #[]),
    ("files", Json.arr files),
    ("outputs", toJson #[act.rel]),
    ("platform", s.platformJson),
    ("timeoutSecs", toJson s.cfg.timeoutSecs),
    ("mnemonic", act.kind.mnemonic),
    ("target", act.target)]
  return Json.mkObj (if skipCacheLookup then params ++ [("skipCacheLookup", (true : Json))] else params)

/--
The trace `depTrace` of the native action's job (`NativeAction.fetch`) as the next build computes it from the files,
once a request of the action resolved its inputs (`NativeAction.serviceInputs`), which can promote them: a link's
object or library that this process promoted (`NativeArtifact.promotedHash?`), or the C file of a `CCompile` whose
module it promoted (`NativeInputs.source`), has the hash of the service's output in place of the one that its job
hashed. The first two inputs of a link's `depTrace` are the objects' trace and the libraries' trace, each with each
one's job's trace in order (`buildNativeSharedLib`); the first input of a `CCompile`'s is the trace of the C file's
job, whose first input is the C file's (`buildModuleO`, the module's `c` facet). With no input promoted, `depTrace` is
unchanged, and so it is when it is not that mix: the action has run, and a trace that keeps the hash from before the
promotion costs one more build of the artifact. A verbose line says so.
-/
def NativeAction.retrace (act : NativeAction) (s : RemoteSession) (depTrace : BuildTrace) : JobM BuildTrace := do
  let keep : JobM BuildTrace := do
    logVerbose s!"{act.target}: its trace keeps the hash from before the promotion of its inputs: it is not the one \
      that its build makes"
    return depTrace
  match act.inputs with
  | .source _ _ promote =>
    let .ok (some c) ← promote s | return depTrace
    let some cJob := depTrace.inputs[0]? | keep
    let some cTrace := cJob.inputs[0]? | keep
    if c.hash == cTrace.hash then return depTrace
    let some cJob := cJob.withInput? 0 {cTrace with hash := c.hash} | keep
    let some trace := depTrace.withInput? 0 cJob | keep
    return trace
  | .objects files libFiles =>
    let promotedHashes (paths : Array FilePath) : BaseIO (Array (Option Hash)) :=
      paths.mapM fun path => return (← nativeArtifact? path).bind (·.promotedHash?)
    let objHashes ← promotedHashes files
    let libHashes ← promotedHashes libFiles
    if objHashes.all (·.isNone) && libHashes.all (·.isNone) then return depTrace
    let some objs := depTrace.inputs[0]? >>= (·.withHashes? objHashes) | keep
    let some libs := depTrace.inputs[1]? >>= (·.withHashes? libHashes) | keep
    let some trace := depTrace.withInputs? ((depTrace.inputs.set! 0 objs).set! 1 libs) | keep
    return trace

mutual

/--
The output on the service of the native artifact of this process at `file`, as a request takes it by digest: from its
service record or its promotion (`NativeArtifact.serviceOutput`). A file that no native job of this process made has
the output of its trace's record, if that record describes the file (`SavedTrace.fileRecord?`), and else none: a
request takes such a file by path.
-/
public partial def nativeServiceOutput (s : RemoteSession) (file : FilePath) :
    JobM (Except PromotionError (Option RemoteExec.RecordOutput)) := do
  let some a ← nativeArtifact? file | do
    let record? ← (← readTraceFile (nativeTraceFile file)).fileRecord? file
    -- The record of a native artifact has its one output
    return .ok (record?.bind (·.outputs.toList.head?.map (·.2)))
  return (← a.serviceOutput s).map some

/-- The output on the service of the native artifact `a`: from its service record, else from its promotion
(`NativeAction.promote`, once per file in this process). -/
partial def NativeArtifact.serviceOutput (a : NativeArtifact) (s : RemoteSession) :
    JobM (Except PromotionError RemoteExec.RecordOutput) := do
  if let some o := a.output? then return .ok o
  promoteOnce nativePromotions a.action.file (a.action.promote s)

/--
The inputs of a native action as its request takes them: a `CCompile`'s C file once its module has a service record,
and a link's objects by their output on the service (`NativeArtifact.serviceOutput`), each promoted first if it has no
record.
-/
public partial def NativeAction.serviceInputs (act : NativeAction) (s : RemoteSession) :
    JobM (Except PromotionError NativeRequestInputs) := do
  match act.inputs with
  | .source file rel promote =>
    -- The run reads the C file by path while nothing writes it: the `c` facet waits for `irArts`, and `promote`
    -- waits for any running promotion of the module (`promoteOnce`)
    return (← promote s).map fun promoted? => .source ((promoted?.map (·.path)).getD file) rel
  | .objects files _ =>
    let mut objs := #[]
    for file in files do
      let some a ← nativeArtifact? file
        | return .error (.failed s!"{act.target}: the object {file} is no native artifact of this build")
      match ← a.serviceOutput s with
      | .ok o => objs := objs.push (a.action.rel, o, file)
      | .error e => return .error e
    return .ok (.objects objs)

/-- The `run` request of a native action with its inputs (`NativeAction.serviceInputs`, `NativeAction.request`), and
each input that it takes by digest with its local path. It fails when one of its names in the input root is absolute
or has a `..` component (`checkInputRootNames`). -/
partial def NativeAction.serviceRequest (act : NativeAction) (s : RemoteSession) (skipCacheLookup := false) :
    JobM (Except PromotionError (Json × Array (RemoteExec.Digest × FilePath))) := do
  let ins ← match ← act.serviceInputs s with
    | .ok ins => pure ins
    | .error e => return .error e
  let names := match ins with
    | .source _ rel => #[act.rel, rel]
    | .objects objs => #[act.rel] ++ objs.map (·.1)
  if let .error e := checkInputRootNames act.target names then
    return .error e
  return .ok (act.request s ins skipCacheLookup, ins.byDigest)

/--
Sends the `run` request that `build` makes (its params, and each input that it takes by digest with the local path of
the native artifact of this process that made it), and returns the answer with `remoteEpoch`, read before the request
was sent. When the answer is `UNAVAILABLE` with `missing` naming one of those digests, the service lost that blob
(contract C5.1): the native action that made it runs once more past the action cache, and `build` makes the request
again (`remakeLost`), which is sent once more; that answer is the result.
-/
public partial def runRetryingLost (s : RemoteSession)
    (build : JobM (Except PromotionError (Json × Array (RemoteExec.Digest × FilePath)))) :
    JobM (Except PromotionError (Nat × Except RemoteExec.Error RemoteExec.RunResult)) := do
  let (params, byDigest) ← match ← build with
    | .ok r => pure r
    | .error e => return .error e
  let epoch ← remoteEpoch
  let r ← runAction s epoch params (lost := byDigest.map (·.1))
  let lost := lostInputs r byDigest
  if lost.isEmpty then return .ok (epoch, r)
  let (params, _) ← match ← remakeLost s lost build with
    | .ok r => pure r
    | .error e => return .error e
  let epoch ← remoteEpoch
  return .ok (epoch, ← runAction s epoch params)

/-- Runs once more each native action that made a `lost` input of a request (`rerunLostBlob`), then makes the request
again with `build`. -/
partial def remakeLost (s : RemoteSession) (lost : Array (RemoteExec.Digest × FilePath))
    (build : JobM (Except PromotionError (Json × Array (RemoteExec.Digest × FilePath)))) :
    JobM (Except PromotionError (Json × Array (RemoteExec.Digest × FilePath))) := do
  for (digest, file) in lost do
    if let .error pe ← rerunLostBlob s digest file then return .error pe
  build

/-- Runs the native action of this process that made the blob `digest` that the service lost, whose artifact is at
`file`, once more past the service's action cache (`NativeAction.promote`), once per blob in this process. -/
public partial def rerunLostBlob (s : RemoteSession) (digest : RemoteExec.Digest) (file : FilePath) :
    JobM (Except PromotionError Unit) := do
  let some a ← nativeArtifact? file
    | return .error (.failed s!"{file}: no native job of this build made it")
  return (← promoteOnce lostBlobRuns digest (a.action.promote s (skipCacheLookup := true))).map fun _ => ()

/--
Runs the action of a promotion of the input `inputHash` of `pkg` with the request that `build` makes, and ends the
promotion with `finish` on the run's result: a request that failed, or a run that exited with a nonzero code, is the
promotion's error, with the message that `msg` makes. Where `pkg` writes the artifact cache, the run and `finish` hold
the input lock (`acquireInputLock?`), under which `found?` first looks for another process's promotion of the input:
what it finds ends the promotion with no request. So that no promotion waits for a lock while it holds one, the lock
is taken after `build`, which promotes the request's inputs, and released while a lost input is made again
(`remakeLost`), which can promote it; then it is taken again and `found?` looks again.
-/
public partial def promotionRun (s : RemoteSession) (msg : String → String) (pkg : Package) (inputHash : Hash)
    (build : JobM (Except PromotionError (Json × Array (RemoteExec.Digest × FilePath))))
    (found? : Option (JobM (Option α))) (finish : RemoteExec.RunResult → JobM (Except PromotionError α)) :
    JobM (Except PromotionError α) := do
  let (params, byDigest) ← match ← build with
    | .ok r => pure r
    | .error e => return .error e
  let held ← IO.mkRef (none : Option InputLock)
  -- Takes the lock unless it is off, and under it returns what `found?` finds
  let lock : JobM (Option α) := do
    unless (← pkg.isArtifactCacheWritable) do return none
    let some l ← acquireInputLock? pkg.cacheScope inputHash | return none
    held.set (some l)
    found?.getD (pure none)
  let unlock : BaseIO Unit := do
    if let some l ← held.swap none then l.release
  try
    if let some a ← lock then return .ok a
    let mut epoch ← remoteEpoch
    let mut answer ← runAction s epoch params (lost := byDigest.map (·.1))
    let lost := lostInputs answer byDigest
    unless lost.isEmpty do
      unlock
      let (params, _) ← match ← remakeLost s lost build with
        | .ok r => pure r
        | .error e => return .error e
      if let some a ← lock then return .ok a
      epoch ← remoteEpoch
      answer ← runAction s epoch params
    let result ← match answer with
      | .ok r => pure r
      | .error e => return .error (.ofError e epoch (msg s!"the build service's run failed: {e.message}"))
    unless result.exitCode == 0 do
      return .error (.failed (msg s!"the build service's run exited with code {result.exitCode}"))
    finish result
  finally
    unlock

/--
Promotes the native artifact of `act` (see "Promotion of the inputs of service actions"): runs its action on the
service, its inputs promoted first (`NativeAction.serviceInputs`), and, with `skipCacheLookup`, past the service's
action cache; then materializes the output over the artifact's file with the output's executable bit, and writes the
service's record into the file's trace, its Lake cache entry (`cacheServiceArtifact`) and `nativeArtifacts`, the trace
and the entry under the hash of the action's inputs after their promotion (`NativeAction.retrace`). The trace of a
`--no-build` run goes, and the artifact's `-o` entry, which its job wrote under the job's trace, becomes that hash mapped
to the promoted file (`NativeArtifact.notePromoted`). The run, the materialize and the writes hold the input lock of
the artifact's input under the hash from before that promotion (`promotionRun`); under it, a cache entry that has the
service's record (another process promoted the artifact) is restored instead, with no request, and leaves the same
records (`NativeArtifact.restorePromoted?`), but not with `skipCacheLookup`, whose run puts a lost blob back on the
service. Returns the output.
-/
public partial def NativeAction.promote (act : NativeAction) (s : RemoteSession) (skipCacheLookup := false) :
    JobM (Except PromotionError RemoteExec.RecordOutput) := do
  let some a ← nativeArtifact? act.file
    | return .error (.failed s!"{act.target}: no native job of this build made it")
  let msg (what : String) := s!"promoting {act.target}: {what}"
  let found? : Option (JobM (Option RemoteExec.RecordOutput)) :=
    if skipCacheLookup then none else some do a.restorePromoted? (← act.retrace s a.depTrace)
  promotionRun s msg a.pkg a.depTrace.hash (act.serviceRequest s skipCacheLookup) found? fun result => do
  let some out := result.outputs.find? (·.rel == act.rel)
    | return .error (.failed (msg "the build service's run made no output"))
  let materializeEpoch ← remoteEpoch
  let materialized ← materializeFiles s materializeEpoch #[(out.digest, act.file, out.executable)]
  -- The file can hold other bytes now
  clearFileHash act.file
  if let .error e := materialized then
    return .error (.ofError e materializeEpoch (msg s!"materializing failed: {e.message}"))
  let record := RemoteExec.Record.ofOutputs result.action #[(act.kind.outputName, out.digest, out.executable)]
  let depTrace ← act.retrace s a.depTrace
  let savedTrace ← readTraceFile (nativeTraceFile act.file)
  let art ← cacheServiceArtifact a.pkg depTrace.hash act.file act.kind.cacheExt out.executable (some record)
    savedTrace.log
  a.notePromoted depTrace savedTrace art record
  return .ok {digest := out.digest, executable := out.executable}

end

/-- A native artifact that a service action made (`NativeAction.buildRemote`), with the service's record of it, the
job's line, and the trace of the action's inputs after the request promoted them (`NativeAction.retrace`). -/
structure NativeBuild where
  art : Artifact
  record : RemoteExec.Record
  outcome : RemoteOutcome
  depTrace : BuildTrace

instance : ToOutputJson NativeBuild := ⟨(ToOutputJson.toOutputJson ·.art)⟩

/--
The build action of a native artifact on the service (`buildNativeArtifact`): `run` the action, its inputs promoted
first and a lost input made again (`NativeAction.serviceRequest`, `runRetryingLost`), replay its output and fail on a
bad exit as a local build does (`proc`), then materialize its output at the artifact's file with the output's
executable bit and hash it (as an artifact with the extension `NativeKind.cacheExt`), and compute the job's trace
`depTrace` again from its inputs after their promotion (`NativeAction.retrace`). A request that answers
`UNAVAILABLE`, or a promotion whose request does, leaves through `remoteUnavailable`. The service's result counts once,
when it is the job's, as a Lean module's does (`Module.buildRemote`). Each step sets the line the job writes if it fails
there (`outcome`).
-/
def NativeAction.buildRemote (act : NativeAction) (s : RemoteSession) (depTrace : BuildTrace)
    (outcome : IO.Ref RemoteOutcome) (why : IO.Ref (Option (String × Nat))) : JobM NativeBuild := do
  let pos ← getLogPos
  outcome.set (.error "request")
  let (runEpoch, r) ← match ← runRetryingLost s (act.serviceRequest s) with
    | .ok r => pure r
    | .error e => e.leave s outcome why pos
  let result ← match r with
    | .ok r => pure r
    | .error e => leaveRunError s outcome why pos runEpoch act.target recordRemoteNative e
  let name := act.kind.outputName
  if let some o := result.outputs.find? (·.rel != act.rel) then
    outcome.set ((RemoteOutcome.ofRun result #[]).asError "undeclared-output")
    error s!"the build service returned an unexpected output {o.rel} for {act.target}"
  let out? := result.outputs[0]?
  let run := RemoteOutcome.ofRun result (out?.toArray.map fun o => (name, o.digest))
  -- Replay the action's output and fail on a bad exit, as a local build does.
  try
    withLogErrorPos do
      logOutput {exitCode := 0, stdout := result.stdout, stderr := result.stderr} logInfo
      unless result.exitCode == 0 do
        error s!"the build service's run of {act.target} exited with code {result.exitCode}"
  catch e =>
    recordRemoteNative result.cached
    outcome.set run
    throw e
  -- From here on, a failure is the job's with the run's fields
  outcome.set (run.asError "materialize")
  let some out := out?
    | recordRemoteNative result.cached
      error s!"the build service's run of {act.target} made no output"
  removeFileIfExists act.file
  clearFileHash act.file
  materializeOrLeave s outcome why pos act.target recordRemoteNative result.cached
    #[(out.digest, act.file, out.executable)]
  let art ← computeArtifact act.file act.kind.cacheExt
  let record := RemoteExec.Record.ofOutputs result.action #[(name, out.digest, out.executable)]
  return {art, record, outcome := run, depTrace := ← act.retrace s depTrace}

/-- The job of `buildNativeArtifact` but its line: returns the artifact and its entry of `nativeArtifacts`. -/
def NativeAction.fetch (act : NativeAction) (s : RemoteSession) (build : JobM PUnit)
    (outcome : IO.Ref RemoteOutcome) : JobM (Artifact × NativeArtifact) := do
  modifyTrace s.mixTimeout
  let depTrace ← getTrace
  let inputHash := depTrace.hash
  let file := act.file
  let ext := act.kind.cacheExt
  let traceFile := nativeTraceFile file
  let savedTrace ← readTraceFile traceFile
  let some pkg ← getCurrPackage?
    | error s!"{act.target}: a native artifact of service mode belongs to no package"
  let name := act.kind.outputName
  let finish (art : Artifact) (record? : Option RemoteExec.Record) (depTrace : BuildTrace) :
      JobM (Artifact × NativeArtifact) := do
    if let some ref ← Internal.getOutputsRef? pkg then
      ref.insert depTrace.hash art.descr
    setTrace art.trace
    return (← Internal.withTraceMTime art traceFile, {action := act, pkg, depTrace, record?})
  -- A replay or a restore that fails did not bring the output into the tree
  outcome.set (.error "materialize")
  if (← savedTrace.fileUpToDate inputHash file) then
    -- A file that a local build made has no record: a build that uses the service builds it there (below), so that
    -- each consumer of this build takes the hash of the service's bytes, as the next build does
    let toService ← do
      if savedTrace.remote?.isSome then pure false else buildUsesService s
    unless toService do
      discard <| savedTrace.replayCachedIfUpToDate inputHash
      let (art, record?) ← replayServiceArtifact pkg inputHash savedTrace file ext name
      outcome.set (.ofRecord "local-cache" record?)
      return ← finish art record? depTrace
  else if let some (art, record) ← restoreServiceArtifact? pkg inputHash savedTrace file traceFile name then
    outcome.set (.ofRecord "local-cache" record)
    return ← finish art (some record) depTrace
  let useIt ← do
    if (← getNoBuild) then
      -- `buildAction` fails before any request
      outcome.set (.error "no-build")
      pure true
    else useService s outcome
  if useIt then
    let built? ← retryWhileUnavailable s outcome fun why =>
      buildAction depTrace traceFile (act.buildRemote s depTrace outcome why) (remote? := (some ·.record))
        (finalTrace := (·.depTrace))
    if let some b := built? then
      let art ← cacheServiceArtifact pkg b.depTrace.hash file ext (b.record.executable name) (some b.record)
        (← readTraceFile traceFile).log
      outcome.set b.outcome
      return ← finish art (some b.record) b.depTrace
  let result ← fallbackResult
  -- A local build that fails gives the line no exit code
  outcome.set {result}
  let built ← trackBuilds
  -- Native outputs are always at their path, which a link's request names
  let art ← buildArtifactUnlessUpToDate file build (ext := ext) (restore := true) (remoteRead := false)
  if (← built) then
    recordRemoteNativeLocal
    outcome.set {result, exitCode? := some 0}
  else
    outcome.set (.ofRecord "local-cache" none)
  return (art, {action := act, pkg, depTrace, record? := none})

/--
Builds the native artifact of `act` in service mode (contract C3.1) as `buildArtifactUnlessUpToDate` builds it with
`build` (under the extension `NativeKind.cacheExt` in the Lake cache), with the current job's trace and the timeout
rule (`RemoteSession.mixTimeout`). The artifact is up to date when its trace has the job's input hash and describes
the file (`SavedTrace.fileUpToDate`): the job replays it (`replayServiceArtifact`) with the trace's service record. A
file that a local build made has no record: while the build does not use the service (`buildUsesService`: under
`--no-build`, or the service does not answer, is refused or runs another Lean), it replays with none, and goes to
the service later in this build only when a service action takes it as an input (`NativeArtifact.serviceOutput`);
otherwise the job builds it on the service as below (its promotion), so that each consumer of this build takes the hash
of the service's bytes, as the next build does. An artifact that is not up to date is restored from the Lake cache when
its trace or entry has a service record (`restoreServiceArtifact?`; the shared remote cache is not read, because its
native bytes come from another machine's compiler). Else `useService` decides: the service runs the action
(`NativeAction.buildRemote`, its inputs promoted first), its output is materialized at the file's path, and the trace
and the Lake cache entry (`cacheServiceArtifact`) get the service's record, under the hash of the action's inputs after
their promotion (`NativeAction.retrace`). The fallback `local` builds the artifact here with `build` on
`buildArtifactUnlessUpToDate`'s path, with no record (it replays a file that is up to date, or restores one from the
Lake cache, without the shared remote cache); under `fail` and `wait` it follows the rules of a Lean module
(`useService`, `retryWhileUnavailable`). Under `--no-build` it sends no request. The job writes one line to
`LAKE_REMOTE_EXEC_LOG`, also when it fails (`withRemoteLine`), and registers the artifact (`nativeArtifacts`).
-/
public def buildNativeArtifact (s : RemoteSession) (act : NativeAction) (build : JobM PUnit) : JobM Artifact := do
  let start ← RemoteLogStart.now
  let outcome ← IO.mkRef (RemoteOutcome.error "materialize")
  let write (o : RemoteOutcome) : IO Unit := do
    if let some log := s.cfg.log? then appendRemoteLog log act.kind.lineKind act.target start o
  withRemoteLine act.target write outcome do
    let (art, native) ← act.fetch s build outcome
    registerNativeArtifact native
    return art

/--
Builds the object file `oFile` of a module from its C file as `Internal.buildLeanO` does (with `srcName?`); in service
mode on the build service (`CCompile`, `buildNativeArtifact`), with the same trace but for the identity of the local C
compiler (`addCcTrace`), which Lake does not run in service mode. `facet` is the object's facet, `c.o.export` or
`c.o.noexport`; `promote` gives the module a service record before the service takes its C file (see
`NativeInputs.source`).
-/
public def buildModuleO (mod : Module) (facet : String) (oFile : FilePath) (cJob : Job FilePath)
    (weakArgs traceArgs : Array String) (leanIncludeDir? : Option (FilePath × BuildTrace))
    (srcName? : Option FilePath)
    (promote : RemoteSession → JobM (Except PromotionError (Option Artifact))) : SpawnM (Job FilePath) := do
  if (← getLakeEnv).remoteExec?.isNone then
    return ← Internal.buildLeanO oFile cJob weakArgs traceArgs leanIncludeDir? srcName?
  let args := Internal.leanOArgs (← getLeanInstall) weakArgs traceArgs leanIncludeDir?
  cJob.mapM fun cFile => do
    Internal.addLeanOTrace traceArgs leanIncludeDir?
    let compile := Internal.compileLeanO oFile cFile args srcName?
    let art ← match ← remoteSession? with
      | none => buildArtifactUnlessUpToDate oFile compile (ext := "o")
      | some s =>
        let act : NativeAction := {
          kind := .cCompile, target := s!"{mod.name}:{facet}", file := oFile, rel := remoteIrPath mod facet
          inputs := .source cFile (remoteIrPath mod "c") promote, args := weakArgs ++ traceArgs }
        buildNativeArtifact s act compile
    return art.path

/--
Links a Lean shared library as `buildLeanSharedLib` does, with the same trace; in service mode on the build service
(`buildNativeArtifact`) as the action `kind` with `target`, whose output is `rel?` in the input root
(`remoteBuildPath`). A request takes the link's objects and no library of `linkLibs`, as a link on Linux does
(`linkDeps` is false there). So the link stays here, as `buildLeanSharedLib` does it, and writes no line, when its
output has no path in the input root, or when it takes a file that a request cannot carry: an object that is no native
artifact of the build (a library's `moreLinkObjs`, an LLVM object), or, on Windows, where the link takes its libraries
as arguments (`linkDeps`), any library. This is the one rule for the shared libraries of modules and of libraries.
-/
public def buildNativeSharedLib (kind : NativeKind) (target : String) (rel? : Option String) (libName : String)
    (libFile : FilePath) (linkObjs : Array (Job FilePath)) (linkLibs : Array (Job Dynlib))
    (weakArgs traceArgs : Array String) (plugin : Bool) : SpawnM (Job Dynlib) :=
  (Job.collectArray linkObjs "linkObjs").bindM (sync := true) fun objs => do
  (Job.collectArray linkLibs "linkLibs").mapM fun libs => do
    addPureTrace traceArgs "traceArgs"
    let args := weakArgs ++ traceArgs
    -- The default `linkDeps` of `buildLeanSharedLibSync`: whether the link takes `libs` as arguments
    let linkDeps := System.Platform.isWindows
    let linkHere := buildLeanSharedLibSync libName libFile objs libs args plugin (linkDeps := linkDeps)
    let some s ← remoteSession?
      | linkHere
    let some rel := rel?
      | linkHere
    let registered ← objs.allM fun obj => do return (← nativeArtifact? obj).isSome
    unless registered && !(linkDeps && !libs.isEmpty) do
      return ← linkHere
    Internal.addLeanSharedLibTrace
    let act : NativeAction :=
      {kind, target, file := libFile, rel, inputs := .objects objs (libs.map (·.path)), args}
    let art ← buildNativeArtifact s act (Internal.linkLeanSharedLib libFile objs libs args (linkDeps := linkDeps))
    return {name := libName, path := art.path, deps := libs, plugin}

end Lake
