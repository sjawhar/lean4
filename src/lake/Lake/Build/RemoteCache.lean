/-
Copyright (c) 2026 Lean FRO. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Sami Jawhar
-/
module

prelude
public import Lake.Build.Job.Monad
public import Lake.Config.Monad
public import Lake.Util.ReadBroker
import Lake.Config.PushQueue
import Lake.Config.RemoteCache
import Lake.Util.Url

/-! # Shared Remote Cache in Builds

How a build reads the input-to-output mappings of the shared remote cache that `LAKE_REMOTE_CACHE`
names after a miss in the local cache (`readRemoteOutputs?`), and how it queues the outputs that it
compiled for `lake cache push` (`queueRemotePush`).

Each read is bounded (`remoteReadLimits`). A build stops reading the remote cache once
`remoteReadTimeoutLimit` reads in a row got no answer from it for the stall time: they waited for a
remote that did not answer, or could not reach it (see `noteRemoteRead`). Its other targets then
compile.
-/

open System Lean

namespace Lake

/--
Returns the `s3` cache service named `name`, which the shared remote cache uses (see
`LAKE_REMOTE_CACHE`), or an error if no service has that name or the service has another kind.
-/
public def LoadedLakeConfig.findRemoteCacheService?
  (cfg : LoadedLakeConfig) (name : String)
: Except String CacheService := do
  let some service := cfg.cacheServices.find? (.mkSimple name)
    | throw s!"remote cache service `{name}` is not configured"
  if service.isReservoir then
    throw s!"remote cache service `{name}` must have kind `s3`"
  return service

/-- The build key of the current job's target, which names the target in remote mappings. -/
public def currentRemoteCacheTarget : JobM String := do
  let key :: _ ← getCallStack
    | error "could not determine the current build key for remote cache lookup"
  return key.toString

/--
Records a failed read from the shared remote cache in the build's read status (which
`finalizeBuild` writes to `Cache.readStatusFile`) and returns its description: the messages of
`log`, the log of the read, or `default` if it has none.
-/
public def recordRemoteReadFailure (log : Log) (default : String) : JobM String := do
  let msg := log.entries.foldl (init := "") fun msg entry =>
    if msg.isEmpty then entry.message else s!"{msg}\n- {entry.message}"
  let msg := if msg.isEmpty then default else msg
  let status := (← getBuildContext).remoteReadStatus
  liftM (m := BaseIO) <| status.modify (·.add msg)
  return msg

/-- Whether this build has stopped reading the shared remote cache (see `noteRemoteRead`). -/
public def remoteReadsStopped : JobM Bool := do
  return (← (← getBuildContext).remoteReadStatus.get).stopped?.isSome

/--
Fails the current job as canceled if the build was canceled (`--fail-fast` after a failure).
Lake checks a job between its steps (see `Job.bindM`), but a read of the shared remote cache
gives this job's worker up and can take seconds, in which another job's failure can end the
build: without this check, every job that was reading would still compile.
-/
public def cancelIfBuildCanceled : JobM Unit := do
  if let some tk := (← getBuildContext).cancelTk? then
    if ← tk.isSet then
      Job.cancelJob

/--
Records how a read of the shared remote cache ended, from what its sends saw (`meter`, see
`ReadBroker.Meter`). A read that failed adds one to the build's reads in a row that got no answer
if its transfers took at least the stall time of `remoteReadLimits` (the remote did not answer),
or if no try of it got an HTTP answer and its last try could not reach the remote (a name that did
not resolve, or a refused connection). Any other read resets them: a read that got an HTTP answer
at once, of any status (a 404 miss, a 403), was answered. The time a read waited before a transfer
(for the token command, for a run of the read broker, or for a retry) is not in its transfers'
time: a read can wait long behind others without waiting for the remote.

The build stops reading the remote cache (`remoteReadsStopped`) at the first read that makes the
row both `remoteReadTimeoutLimit` reads long and the stall time long; that is logged once, at
verbose level, and kept in the read status (`Cache.readStatusFile`). A read starts the row its
transfers' time before it was recorded (the wait before a retry is not in it), but at most the stall
time, so a row of reads that each waited the stall time is always that long. A read that could not
reach the remote fails within about a second (a refused connection at once, a name that did not
resolve after one retry), so a remote that is unreachable for the whole build would otherwise cost
such a read for each target. But many reads go at once, and an outage of a moment (e.g., while a
proxy restarts) can fail many of them together: such reads stop the reads only once they have gone
on for the stall time with no answered read between them.
-/
public def noteRemoteRead (meter : ReadBroker.Meter) (failed : Bool) : JobM Unit := do
  let stallMs := remoteReadLimits.stallSecs * 1000
  let timedOut := failed && meter.transferMs ≥ stallMs
  let unreachable := failed && meter.unreachable && !meter.answered
  let now ← IO.monoMsNow
  let start := now - min meter.transferMs stallMs
  let status := (← getBuildContext).remoteReadStatus
  let stopped? ← liftM (m := BaseIO) <| status.modifyGet fun s =>
    if !(timedOut || unreachable) then
      (none, {s with unansweredInRow := 0})
    else
      let n := s.unansweredInRow + 1
      let since := if s.unansweredInRow == 0 then start else min s.unansweredSince start
      let s := {s with unansweredInRow := n, unansweredSince := since}
      if s.stopped?.isNone && n ≥ remoteReadTimeoutLimit && now - since ≥ stallMs then
        let msg := s!"stopped reading the remote cache for the rest of this build: {n} reads in \
          a row waited for it and failed (the transfers of the last one took {meter.transferMs} ms)"
        (some msg, {s with stopped? := some msg})
      else
        (none, s)
  if let some msg := stopped? then
    logVerbose msg

/--
Runs `read`, a read of the shared remote cache, with a `ReadBroker.Meter` of its sends, which it
adds to, and records how the read ended (see `noteRemoteRead`).
-/
@[inline] public def timeRemoteRead (read : IO.Ref ReadBroker.Meter → JobM α) : JobM α := do
  let meter ← IO.mkRef ({} : ReadBroker.Meter)
  try
    let a ← read meter
    noteRemoteRead (← meter.get) false
    return a
  catch e =>
    noteRemoteRead (← meter.get) true
    throw e

/--
**For internal use only.**
Reads the remote mapping of `inputHash` for `target` from the shared remote cache that
`LAKE_REMOTE_CACHE` names, if any, and stores it as the local mapping: over an existing local
mapping only with `replace` (one that could not be used, e.g., because its artifacts were pruned).
A mapping that does not name this input, target and source hash (`srcHash?`, for a module), or
whose artifacts could not be cache files, is refused. Every failure but a missing mapping is
recorded (see `recordRemoteReadFailure`), and each is a miss. The read is bounded
(`remoteReadLimits`), and none is sent once the build has stopped reading the remote cache
(`remoteReadsStopped`).
-/
public def readRemoteOutputs?
  (inputHash : Hash) (pkg : Package) (target : String) (srcHash? : Option Hash)
  (replace := false)
: JobM (Option CacheOutput) := do
  let ws ← getWorkspace
  let some serviceName := ws.lakeEnv.remoteCache?
    | return none
  if ← remoteReadsStopped then
    return none
  try
    let service ← match ws.lakeConfig.findRemoteCacheService? serviceName with
      | .ok service => pure service
      | .error e => error e
    let scope := remoteCacheScope ws.lakeEnv.leanGithash pkg.cacheScope
    let url := service.remoteMappingUrl scope inputHash
    let tmpDir := (← getLakeCache).dir
    let contents? ← timeRemoteRead fun meter => liftM <|
      ReadBroker.getUrl? url tmpDir (cacheToken := service.sendsCacheToken url)
        remoteMappingMaxFileSize remoteReadLimits meter
    let some contents := contents?
      | logVerbose s!"remote cache mapping miss for input `{inputHash}` at {url}"
        return none
    let json ← match Json.parse contents with
      | .ok json => pure json
      | .error e => error s!"remote mapping is invalid JSON: {e}"
    let mapping ← match RemoteCacheMapping.fromJson? json with
      | .ok mapping => pure mapping
      | .error e => error s!"remote mapping is invalid: {e}"
    unless mapping.inputHash == inputHash do
      error s!"remote mapping inputHash mismatch: expected {inputHash}, got {mapping.inputHash}"
    unless mapping.target == target do
      error s!"remote mapping target mismatch: expected {target}, got {mapping.target}"
    unless mapping.srcHash? == srcHash? do
      error s!"remote mapping srcHash mismatch"
    match mapping.checkedArtifactDescrs with
    | .ok _ => pure ()
    | .error e => error s!"remote mapping is invalid: {e}"
    let cache ← getLakeCache
    let act := cache.writeOutputs pkg.cacheScope inputHash mapping.data service.name?
      (some (.ofString scope)) (log := mapping.log) (sha256? := some mapping.sha256)
      (overwrite := replace)
    if let .error e ← act.toBaseIO then
      error s!"could not write remote mapping to local cache: {e}"
    cache.readOutputs? pkg.cacheScope inputHash
  catch e =>
    let msg ← recordRemoteReadFailure (← takeLogFrom e) "remote cache read failed"
    -- Cache failures remain verbose so --wfail and --iofail builds still compile locally.
    logVerbose s!"remote cache read for input `{inputHash}` failed:\n{msg}"
    return none

/--
**For internal use only.**
Appends outputs that this Lake process just compiled to the write-back queue of the shared remote
cache (`Cache.appendPushQueue`), which `lake cache push` uploads, if the queue is on (see
`Env.remoteCacheQueueService?`), with the generation of the input's claim (`claimGeneration?`) if
the build held it. Call it only where this process ran the compiler or linker that produced
`data` (see `JobState.built`): never for outputs that were replayed, unpacked, fetched or
restored. Returns whether the outputs were queued.

Nothing is queued while usage cutoff is on (`Env.usageCutoff`): a build with usage cutoff can keep
outputs that were compiled for another input, and only fresh compiles with usage cutoff off are
published.
-/
public def queueRemotePush
  (pkg : Package) (inputHash : Hash) (target : String) (srcHash? : Option Hash)
  (data : Json) (log : Log) (claimGeneration? : Option String := none)
: JobM Bool := do
  let ws ← getWorkspace
  let some service := ws.lakeEnv.remoteCacheQueueService?
    | return false
  if ws.lakeEnv.usageCutoff then
    return false
  let entry : RemotePushEntry := {
    service, inputHash, target, srcHash?, data, claimGeneration?
    remoteScope := remoteCacheScope ws.lakeEnv.leanGithash pkg.cacheScope
    -- As in the local mapping, verbose entries (which name the tree's paths) are not kept
    log := log.filter (·.level ≥ .info)
  }
  if let .error e ← (ws.lakeCache.appendPushQueue entry).toBaseIO then
    logWarning s!"could not queue the outputs of `{target}` for the remote cache: {e}"
    return false
  return true
