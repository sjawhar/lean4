/-
Copyright (c) 2026 Theorem Labs. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: LINUX-30 build-platform
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
import Std.Time

/-! # Build-service mode for Lake (client side, contract C5.1)

Service mode (`LAKE_REMOTE_EXEC=<endpoint>`) turns a module compile into a REAPI action with
relative paths and the toolchain as a platform property, and asks the build service for its result
through `lean-remote bridge` (see `Lake.Util.RemoteExec`). This module holds the per-process
session, the path rewriting of contract C2.1, and the typed `run`/`materialize` calls. The parts
that need `Build/Module.lean`'s private helpers (`remoteHead`, `remoteRunRequest`, `fetchRemote`)
live in that file's `section RemoteExec`.
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

/--
The platform and path part of a module's action: the part that does not depend on the module's
source bytes, reused by the service key (slice 3).
-/
public structure RemoteHead where
  platform : Array (String × String)
  sysroot : String
  leanPath : String
  plugins : Array (String × Option RemoteExec.Digest)
  dynlibs : Array (String × Option RemoteExec.Digest)
  /--
  Local path and input-root-relative path of every plugin/dynlib that is an input file (not a
  toolchain file under the sysroot); slice 1 sends these as inputs by path.
  -/
  inputFiles : Array (FilePath × String)

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

/-- This process's verdict on the build service, made once (see `ensureDecision`). -/
public inductive SessionDecision
  /-- The service answered and its toolchain runs this Lake's Lean: in use. -/
  | active
  /-- The service did not answer; `LAKE_REMOTE_EXEC_FALLBACK` decides what a module that needs it does
  (see `useService`). -/
  | unreachable (message : String)
  /-- The service must not be used, whatever the fallback: the client cannot run, the daemon refuses
  the protocol, or it did not verify that its toolchain runs this Lake's Lean. -/
  | refused (message : String)

/-- This process's decision: `none` until the first `hello`. -/
builtin_initialize remoteDecisionRef : Std.Mutex (Option SessionDecision) ← Std.Mutex.new none

/--
How many times this process found the build service answering again after it had not (fallback
`wait`, `awaitService`). A job reads it before it sends a request; when the request fails and the
count has moved since, another job already probed and found the service, so this one only sends the
request again. Jobs whose requests failed together therefore cause one probe, not one each.
-/
builtin_initialize remoteEpochRef : IO.Ref Nat ← IO.mkRef 0

/--
The verdict of one `hello` answer (contract C5.1). No output is recorded unless the daemon answers
`toolchainVerified = true`, which it sets only when the toolchain image's `lean --githash` equals
`leanGithash` (fails closed: a missing field is false), so a wrong toolchain fails the build instead
of recording another Lean's outputs.
-/
def helloVerdict (endpoint leanGithash : String) (j : Json) : SessionDecision := Id.run do
  let str? (k : String) : Option String :=
    (j.getObjValAs? String k).toOption.filter (!·.isEmpty)
  unless (j.getObjValAs? Bool "reachable").toOption.getD false do
    return .unreachable s!"build service at {endpoint} did not answer: \
      {(str? "reason").getD "no reason given"}"
  if (j.getObjValAs? Bool "toolchainVerified").toOption.getD false then
    return .active
  match str? "toolchainGithash" with
  | some g =>
    return .refused s!"build service at {endpoint} runs Lean {g}, but this Lake uses Lean \
      {leanGithash}; refusing to record its outputs (check LAKE_REMOTE_EXEC_TOOLCHAIN and \
      LAKE_REMOTE_EXEC_SYSROOT)"
  | none =>
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
An unreachable `hello` is recorded too, except under `wait`: there the connection can be one that a
probe (`awaitService`) has already replaced, and its stale answer must not undo the probe's newer
verdict. The refused request then answers `UNAVAILABLE`, and `fetchRemote`'s epoch rule handles it.
-/
def admitHello (endpoint leanGithash : String) (fallback : RemoteFallback) (j : Json) :
    BaseIO (Option String) := do
  match helloVerdict endpoint leanGithash j with
  | .active => return none
  | .unreachable msg =>
    unless fallback == .wait do
      noteUnusable (.unreachable msg)
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

/--
The decision, made once per process while holding the lock: every worker waits for the one `hello`
instead of starting a bridge of its own, and a failed decision is kept like a good one.
-/
def ensureDecision (client : RemoteExec.ClientConfig) (endpoint leanGithash : String) :
    BaseIO SessionDecision :=
  remoteDecisionRef.atomically do
    if let some d ← getThe (Option SessionDecision) then return d
    let d ← decide client endpoint leanGithash
    set (some d : Option SessionDecision)
    return d

/-- The fallback `wait`'s first delay between two probes of the service, in milliseconds; each
next one is twice the last, up to `remoteProbeMaxDelayMs`. -/
def remoteProbeFirstDelayMs : UInt32 := 1000

/-- The fallback `wait`'s longest delay between two probes of the service, in milliseconds. -/
def remoteProbeMaxDelayMs : UInt32 := 30000

/-- How often the fallback `wait` says again that it still waits, in milliseconds. -/
def remoteWaitNoticeMs : Nat := 60000

/-- The current time in UTC as ISO 8601 text, e.g. `2026-11-02T17:40:01Z`. -/
def utcNowText : BaseIO String := do
  match ← Std.Time.Timestamp.now.toBaseIO with
  | .ok now => return (Std.Time.DateTime.ofTimestampWithZone now .UTC).toISO8601String
  | .error _ => return "an unknown time"

/-- The verdict of a `hello` on a bridge of its own (`RemoteExec.probe`), as `decide` makes it. -/
def probeVerdict (client : RemoteExec.ClientConfig) (endpoint leanGithash : String) :
    BaseIO SessionDecision := do
  return helloOutcome endpoint leanGithash (← RemoteExec.probe client)

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

/-- `remoteEpochRef`'s count, read by a job before each request it sends (see `awaitService`). -/
public def remoteEpoch : BaseIO Nat :=
  remoteEpochRef.get

/-- This process's current service decision, if it has sent a `hello`. -/
public def remoteDecision? : BaseIO (Option SessionDecision) :=
  remoteDecisionRef.atomically (getThe (Option SessionDecision))

/--
The fallback `wait` for a job whose request answered `UNAVAILABLE` (see `awaitService`): returns once
the service answers again, so the job sends the request again. `epoch` is `remoteEpoch` read before
the request was sent.
-/
public def awaitServiceAgain (s : RemoteSession) (epoch : Nat) : JobM Unit := do
  if let .error msg ← awaitService s.client s.cfg.endpoint s.leanGithash (some epoch) then
    error msg

/-- Records one Lean module that failed because the build service did not answer, under
`LAKE_REMOTE_EXEC_FALLBACK=fail` (for exit code 75, `Lake.finalizeBuild`). -/
public def recordUnavailableFailure : JobM Unit := do
  (← (·.remoteStats) <$> getBuildContext).modify (·.addUnavailableFailure)

/--
Whether a module that needs the build service sends its request (contract C5.1): says `hello` once
per process (`ensureDecision`) and applies `LAKE_REMOTE_EXEC_FALLBACK` when the service does not
answer. `true`: send it. `false`: the fallback is `local` (the default), and the module compiles on
this machine; once the service did not answer, every later module of this process does so without a
request, and the next build asks again. Under `fail` it errors with the decision's message, counted
(`recordUnavailableFailure`); under `wait` it returns `true` once the service answers
(`awaitService`). A refused service fails the module whatever the fallback.
-/
public def useService (s : RemoteSession) : JobM Bool := do
  match ← ensureDecision s.client s.cfg.endpoint s.leanGithash with
  | .active => return true
  | .refused msg => error msg
  | .unreachable msg =>
    match s.cfg.fallback with
    | .compileLocally => return false
    | .fail =>
      recordUnavailableFailure
      error msg
    | .wait =>
      if let .error msg ← awaitService s.client s.cfg.endpoint s.leanGithash none then
        error msg
      return true

/--
The `hello` that `lake build` sends at its start (with `command := build`), so that every build's
GetCapabilities carries the build's invocation id; it makes this process's decision. A refused
service (a client that cannot run, or an unverified toolchain) fails the build here.
-/
public def startRemoteSession (ws : Workspace) : IO Unit := do
  let some cfg := ws.lakeEnv.remoteExec?
    | return
  let some _ := cfg.toolchain?
    | throw (IO.userError "LAKE_REMOTE_EXEC is set but LAKE_REMOTE_EXEC_TOOLCHAIN is not")
  let sysroot ← match cfg.sysroot? with
    | some s => pure s
    | none => IO.FS.realPath ws.lakeEnv.lean.sysroot
  let leanGithash := ws.lakeEnv.lean.githash
  let helloParams ← mkHelloParams cfg sysroot leanGithash (command? := some "build")
  let client : RemoteExec.ClientConfig := {exe := cfg.client, socket? := cfg.socket?, helloParams}
  let decision ← ensureDecision client cfg.endpoint leanGithash
  -- This bridge starts before the build does, so it does not hold the workspace build lock, and it
  -- carried nothing but `hello`, so no write of it can land: it is killed at once, and a stuck daemon
  -- does not delay the build's start. The build's first request starts the bridge again, which then
  -- holds the lock for as long as it can write into `.lake/build` (`RemoteExec.bridgeExitTimeoutMs`).
  RemoteExec.killBridge
  if let .refused msg := decision then
    throw (IO.userError msg)

/-- The service's state for the end-of-build line (contract C5.1): `idle` when no `hello` was sent. -/
public def remoteDecisionState : BaseIO RemoteState := do
  match ← (remoteDecisionRef.atomically (getThe (Option SessionDecision)) : BaseIO _) with
  | none => return .idle
  | some .active => return .ok
  | some (.unreachable _) => return .unreachable
  | some (.refused msg) => return .off msg

/-! ## Statistics and the per-target log -/

/-- The build's remote-statistics reference (for the end-of-build line). -/
public def getRemoteStats : JobM (IO.Ref RemoteStats) :=
  (·.remoteStats) <$> getBuildContext

/-- Records one Lean module result. -/
public def recordRemoteModule (cached : Bool) : JobM Unit := do
  (← getRemoteStats).modify (·.addLean cached)

/-- Records one Lean module that the fallback `local` compiled on this machine. -/
public def recordRemoteLocal : JobM Unit := do
  (← getRemoteStats).modify (·.addLeanLocal)

/-- Appends one line to `LAKE_REMOTE_EXEC_LOG`, if set (contract C5.1: `kind`, `target`, `result`,
`action`, `outputs` by extension, `exitCode`, `wallMs`). `result` is `cached` or `executed` for a
result of the service, and `local` for a module the fallback compiled (no action, no outputs). -/
public def appendRemoteLog (s : RemoteSession) (kind target result action : String) (exitCode : Int)
    (outputs : Array (String × RemoteExec.Digest)) (wallMs : Nat) : JobM Unit := do
  let some path := s.cfg.log?
    | return
  let outs := Json.mkObj (outputs.toList.map fun (ext, d) => (ext, (toJson d : Json)))
  let line := (Json.mkObj [
    ("kind", kind), ("target", target), ("result", result), ("action", action),
    ("outputs", outs), ("exitCode", (toJson exitCode : Json)), ("wallMs", (toJson wallMs : Json))]).compress
  (do let h ← IO.FS.Handle.mk path .append; h.putStrLn line : IO Unit)

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

/-- Sends one request on the session's connection. An `UNAVAILABLE` answer means the service did
not answer (contract C5.1), so the end-of-build line says `unreachable` and every later module takes
the fallback. Under `wait` the decision is left alone, here and in `admitHello`: an answer that a
request got before a probe (`awaitService`) found the service again must not undo that verdict; the
job sends the request again or probes, by `fetchRemote`'s epoch rule. -/
def callService (s : RemoteSession) (method : String) (params : Json) :
    BaseIO (Except RemoteExec.Error Json) := do
  let r ← RemoteExec.call s.client method params
  if let .error e := r then
    if e.code == .unavailable && s.cfg.fallback != .wait then
      noteUnusable (.unreachable s!"build service at {s.cfg.endpoint} did not answer: {e.message}")
  return r

/-- Sends a `run` request and parses its result. -/
public def runAction (s : RemoteSession) (params : Json) :
    JobM (Except RemoteExec.Error RemoteExec.RunResult) := do
  match ← callService s "run" params with
  | .error e => return .error e
  | .ok j => match RemoteExec.RunResult.ofJson? j with
    | .ok r => return .ok r
    | .error msg => return .error {code := .internal, message := s!"malformed run result: {msg}"}

/-- Materializes output blobs to local paths through the daemon. -/
public def materializeFiles (s : RemoteSession) (files : Array (RemoteExec.Digest × FilePath × Bool)) :
    JobM (Except RemoteExec.Error RemoteExec.MaterializeResult) := do
  let arr := files.map fun (d, p, exe) =>
    Json.mkObj [("digest", (toJson d : Json)), ("path", p.toString), ("executable", exe)]
  match ← callService s "materialize" (Json.mkObj [("files", Json.arr arr)]) with
  | .error e => return .error e
  | .ok j => match RemoteExec.MaterializeResult.ofJson? j with
    | .ok r => return .ok r
    | .error msg => return .error {code := .internal, message := s!"malformed materialize result: {msg}"}

end Lake
