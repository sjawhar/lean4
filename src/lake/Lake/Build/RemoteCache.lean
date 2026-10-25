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

/-! # Shared Remote Cache in Builds

How a build reads the input-to-output mappings of the shared remote cache that `LAKE_REMOTE_CACHE`
names after a miss in the local cache (`readRemoteOutputs?`), and how it queues the outputs that it
compiled for `lake cache push` (`queueRemotePush`).
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

/--
**For internal use only.**
Reads the remote mapping of `inputHash` for `target` from the shared remote cache that
`LAKE_REMOTE_CACHE` names, if any, and stores it as the local mapping: over an existing local
mapping only with `replace` (one that could not be used, e.g., because its artifacts were pruned).
A mapping that does not name this input, target and source hash (`srcHash?`, for a module), or
whose artifacts could not be cache files, is refused. Every failure but a missing mapping is
recorded (see `recordRemoteReadFailure`), and each is a miss.
-/
public def readRemoteOutputs?
  (inputHash : Hash) (pkg : Package) (target : String) (srcHash? : Option Hash)
  (replace := false)
: JobM (Option CacheOutput) := do
  let ws ← getWorkspace
  let some serviceName := ws.lakeEnv.remoteCache?
    | return none
  try
    let service ← match ws.lakeConfig.findRemoteCacheService? serviceName with
      | .ok service => pure service
      | .error e => error e
    let scope := remoteCacheScope ws.lakeEnv.leanGithash pkg.cacheScope
    let url := service.remoteMappingUrl scope inputHash
    let contents? ← getUrl? url (cacheToken := service.sendsCacheToken url)
      (maxFileSize? := some remoteCacheMaxFileSize)
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
