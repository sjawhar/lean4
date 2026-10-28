/-
Copyright (c) 2026 Lean FRO. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Sami Jawhar
-/
module

prelude
public import Lake.Build.Job.Monad
public import Lake.Config.Monad
import Lake.Config.PushQueue
import Lake.Config.RemoteCache
import Lake.Util.Url
import Lake.Util.ReadBroker

/-! # Shared Remote Cache in Builds

How a build reads the input-to-output mappings of the shared remote cache that `LAKE_REMOTE_CACHE`
names after a miss in the local cache (`readRemoteOutputs?`), and how it queues the outputs that it
compiled for `lake cache push` (`queueRemotePush`).

Each read is bounded (`remoteReadLimits`). A build stops reading the remote cache once
`remoteReadTimeoutLimit` reads in a row waited for a remote that did not answer (see
`noteRemoteRead`): its other targets then compile.
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
Records how a read of the shared remote cache ended, whose transfers took `transferMs`
milliseconds in all (see `ReadBroker.Outcome.transferMs`). A read that failed after its transfers
took at least the stall time of `remoteReadLimits` (the remote did not answer) adds one to the
build's reads in a row that did so; any other read resets them. The time a read waited before a
transfer (for the token command, for a run of the read broker, or for a retry) does not count:
reads that the remote refuses at once can wait long behind others, and are not reads that waited
for the remote. The read that makes them `remoteReadTimeoutLimit` stops the build's reads of the
remote cache (`remoteReadsStopped`), and that is logged once, at verbose level, and kept in the
read status (`Cache.readStatusFile`).
-/
public def noteRemoteRead (transferMs : Nat) (failed : Bool) : JobM Unit := do
  let timedOut := failed && transferMs ≥ remoteReadLimits.stallSecs * 1000
  let status := (← getBuildContext).remoteReadStatus
  let stopped? ← liftM (m := BaseIO) <| status.modifyGet fun s =>
    if !timedOut then
      (none, {s with timeoutsInRow := 0})
    else
      let n := s.timeoutsInRow + 1
      if s.stopped?.isNone && n ≥ remoteReadTimeoutLimit then
        let msg := s!"stopped reading the remote cache for the rest of this build: {n} reads in \
          a row waited for it and failed (the transfers of the last one took {transferMs} ms)"
        (some msg, {s with timeoutsInRow := n, stopped? := some msg})
      else
        (none, {s with timeoutsInRow := n})
  if let some msg := stopped? then
    logVerbose msg

/--
Runs `read`, a read of the shared remote cache, with a counter of the milliseconds that its
transfers take, which it adds to, and records how the read ended (see `noteRemoteRead`).
-/
@[inline] public def timeRemoteRead (read : IO.Ref Nat → JobM α) : JobM α := do
  let transferMs ← IO.mkRef 0
  try
    let a ← read transferMs
    noteRemoteRead (← transferMs.get) false
    return a
  catch e =>
    noteRemoteRead (← transferMs.get) true
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
    let contents? ← timeRemoteRead fun transferMs => liftM <|
      ReadBroker.getUrl? url tmpDir (cacheToken := service.sendsCacheToken url)
        remoteMappingMaxFileSize remoteReadLimits transferMs
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

With usage cutoff on (`Env.usageCutoff`), the queued outputs are still a compile of exactly this
input: outputs that the cutoff kept for another input never reach this function. The cutoff setting
is a local input of every module (`usageCutoffTrace`), so readers with the cutoff off never read
them. The data of a module names its usage sidecars, which `lake cache push` uploads with it.
-/
public def queueRemotePush
  (pkg : Package) (inputHash : Hash) (target : String) (srcHash? : Option Hash)
  (data : Json) (log : Log) (claimGeneration? : Option String := none)
: JobM Bool := do
  let ws ← getWorkspace
  let some service := ws.lakeEnv.remoteCacheQueueService?
    | return false
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

/--
**For internal use only.**
Queues the alias of a module that usage cutoff kept for the input `inputHash` (`RemoteAlias`): the
input hash `compiledFor` of the compile whose outputs it kept, which `lake cache push` uploads if
absent. Only with the queue on and `LAKE_REMOTE_CACHE_ALIASES` set (`Env.remoteCacheAliases`).
An alias names no outputs and vouches for nothing: a reader checks the compile it names with the
cutoff before it uses it (`readRemoteAlias?`), so the shared remote cache still holds only the
outputs of fresh compiles.
-/
public def queueRemoteAlias
  (pkg : Package) (inputHash : Hash) (target : String) (srcHash compiledFor : Hash)
: JobM Unit := do
  let ws ← getWorkspace
  unless ws.lakeEnv.remoteCacheAliases do return
  let some service := ws.lakeEnv.remoteCacheQueueService?
    | return
  let entry : RemotePushEntry := {
    service, inputHash, target, srcHash? := some srcHash, data := Json.null, log := {}
    compiledFor? := some compiledFor
    remoteScope := remoteCacheScope ws.lakeEnv.leanGithash pkg.cacheScope
  }
  if let .error e ← (ws.lakeCache.appendPushQueue entry).toBaseIO then
    logWarning s!"could not queue the alias of `{target}` for the remote cache: {e}"

/--
**For internal use only.**
Reads the alias of `inputHash` for the module `target` with the source hash `srcHash` from the
shared remote cache that `LAKE_REMOTE_CACHE` names (`RemoteAlias`, see `queueRemoteAlias`), and
returns the input hash of the compile it names, or `none` if there is none. An alias that does not
name this input, module and source hash is refused. Every failure but a missing alias is recorded
(see `recordRemoteReadFailure`), and each is a miss. The read is bounded as a mapping's is.
-/
public def readRemoteAlias?
  (inputHash : Hash) (pkg : Package) (target : String) (srcHash : Hash)
: JobM (Option Hash) := do
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
    let url := service.remoteAliasUrl scope inputHash
    let tmpDir := (← getLakeCache).dir
    let contents? ← timeRemoteRead fun transferMs => liftM <|
      ReadBroker.getUrl? url tmpDir (cacheToken := service.sendsCacheToken url)
        remoteMappingMaxFileSize remoteReadLimits transferMs
    let some contents := contents?
      | logVerbose s!"remote cache alias miss for input `{inputHash}` at {url}"
        return none
    let json ← match Json.parse contents with
      | .ok json => pure json
      | .error e => error s!"remote alias is invalid JSON: {e}"
    let alias ← match RemoteAlias.fromJson? json with
      | .ok alias => pure alias
      | .error e => error s!"remote alias is invalid: {e}"
    unless alias.inputHash == inputHash do
      error s!"remote alias inputHash mismatch: expected {inputHash}, got {alias.inputHash}"
    unless alias.target == target do
      error s!"remote alias target mismatch: expected {target}, got {alias.target}"
    unless alias.srcHash == srcHash do
      error s!"remote alias srcHash mismatch"
    return some alias.compiledFor
  catch e =>
    let msg ← recordRemoteReadFailure (← takeLogFrom e) "remote cache alias read failed"
    logVerbose s!"remote cache alias read for input `{inputHash}` failed:\n{msg}"
    return none
