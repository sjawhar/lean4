/-
Copyright (c) 2026 Lean FRO. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Sami Jawhar
-/
module

prelude
public import Lake.Config.Env
public import Lake.Config.LakeConfig
import Lake.Config.PushQueue
import Lake.Config.RemoteCache
import Lake.Build.Common
import Lake.Build.Module
import Lake.Build.RemoteCache
import Lake.Build.Claim
import Lake.Util.IO
import Lake.Util.JsonObject
import Lake.Util.Proc
import Lake.Util.Sha256
import Init.While
import Std.Sync.Mutex
import Std.Internal.UV.System

/-! # `lake cache push`

Uploads the write-back queue of the shared remote cache (`Cache.pushQueueFile`), to which builds
with `LAKE_REMOTE_CACHE_QUEUE` append the outputs that they compiled (see `queueRemotePush`).

For each queue entry, the pusher hashes the cache artifacts that the entry names again. It drops
an entry with an artifact whose bytes no longer match its descriptor, and moves that artifact into
the cache's quarantine directory so that no local build restores it again. It also drops an entry
whose artifact is gone. `Cache.pushDroppedFile` records each drop with its reason.

A module's outputs go up as one archive (`.ltar`), which the pusher packs from the bytes it
verified and a trace that it writes from the entry alone: it never reads a file of a workspace.
The pusher copies the bytes it uploads into a directory of its own below `Cache.pushStagingDir`,
in the cache directory. It stages (and packs) the entries of a chunk with several workers at once
(`pushWorkers`); a failure while one entry is staged fails only that entry. It names each
artifact by its SHA-256 and uploads it, and then the entry's remote mapping (see
`RemoteCacheMapping`) once all of the entry's artifacts are present, each only if the object is
absent. Pushed and dropped entries leave the queue. An entry whose upload failed stays in the
queue for the next push.

One pusher at a time holds `Cache.pushLockFile`. It works in passes: each pass reads the queue,
pushes the entries that it has not tried, and removes the pushed and dropped ones with one rewrite
of the queue at the start of the next pass. It stops when a pass finds no entry that it has not
tried, so it pushes an entry that a build appends while it runs. It releases the lock while it
still holds the queue's lock, so that no append can fall between its last look at the queue and
the release. At the end, it records its outcome in `Cache.pushStatusFile`.
-/

open System Lean

namespace Lake

/-- The counts of the queue entries that one `lake cache push` handled. -/
structure PushStats where
  pushed : Nat := 0
  failed : Nat := 0
  dropped : Nat := 0

/-- What `lake cache push` did with a queue entry. -/
inductive PushOutcome
| pushed
| failed
| dropped

/-- At most how many queue entries the pusher stages, and then uploads with two `curl` runs. -/
def pushChunkSize : Nat := 64

/--
The staged bytes after which the pusher stages no more entries before it uploads them, so that
staging takes at most about this much space in the cache directory (plus one entry per worker).
-/
def pushChunkBytes : Nat := 256 * 1024 * 1024

/--
How many entries the pusher stages at once: one per CPU, at most 16. Packing a module's archive
takes one CPU (`leantar`), and staging reads and hashes the entry's artifacts.
-/
def pushWorkers : BaseIO Nat := do
  match (← Std.Internal.UV.System.cpuInfo.toBaseIO) with
  | .ok cpus => return max 1 (min 16 cpus.size)
  | .error _ => return 1

/-- The MIME type of a remote mapping. -/
def remoteMappingContentType : String := "application/json"

structure PushContext where
  cache : Cache
  env : Env
  lakeCfg : LoadedLakeConfig
  /-- The staging directory of this push, below `Cache.pushStagingDir` (see `pushRemoteCache`). -/
  stagingDir : FilePath
  /-- How many entries the push stages at once (see `pushWorkers`). -/
  workers : Nat

/-- A queue entry whose files are staged for upload. -/
structure ReadyEntry where
  /-- The index of the entry in its chunk. -/
  idx : Nat
  /-- The name of the service, as the entry names it. -/
  serviceName : String
  service : CacheService
  /-- The artifacts of the entry. -/
  artifacts : Array RemoteUpload
  /-- The remote mapping of the entry, which goes up after all of its artifacts. -/
  mapping : RemoteUpload
  /-- The number of bytes of the entry's staged artifacts. -/
  bytes : Nat
  /--
  The URL of the claim of the entry's input and the generation that the build that queued the entry
  gave it, if the build held the claim: the push marks it `done` after the mapping is uploaded.
  -/
  claim? : Option (String × String) := none

/-- The result of preparing a queue entry for upload. -/
inductive StagedEntry
| ready (entry : ReadyEntry)
| dropped
| failed

/-- Serializes this process's appends to `Cache.pushDroppedFile`, which concurrent workers make. -/
builtin_initialize dropFileLock : Std.Mutex Unit ← Std.Mutex.new ()

/-- Appends a record of a queue entry that the pusher refused to `Cache.pushDroppedFile`. -/
def recordDrop
  (cache : Cache) (reason : String) (entry : Json) (artifacts : Array ArtifactDescr := #[])
: IO Unit := do
  let line := (JsonObject.empty
    |>.insert "at" (← wallClockSecs)
    |>.insert "reason" reason
    |>.insert "artifacts" (artifacts.map (·.relPath.toString))
    |>.insert "entry" entry : Json).compress
  dropFileLock.atomically (m := IO) do
    let h ← IO.FS.Handle.mk cache.pushDroppedFile .append
    h.write (line.push '\n').toUTF8
    h.flush

/-- Splits `bytes` into lines, without their line feeds. -/
def splitLines (bytes : ByteArray) : Array ByteArray := Id.run do
  let mut lines := #[]
  let mut start := 0
  for i in [0:bytes.size] do
    if bytes.get! i == 10 then
      lines := lines.push (bytes.extract start i)
      start := i + 1
  if start < bytes.size then
    lines := lines.push (bytes.extract start bytes.size)
  return lines

/-- Replaces the queue with `lines`. -/
def writeQueue (cache : Cache) (lines : Array String) : IO Unit :=
  writeFileAtomic cache.pushQueueFile <| lines.foldl (init := "") fun s line => s ++ line ++ "\n"

/--
Reads the queue's non-empty lines; the caller holds the queue's lock. A line that is not UTF-8
text, which only an append that died partway can leave, is recorded as dropped and left out.
Returns the lines and the number of lines left out.
-/
def readQueueLines (cache : Cache) : IO (Array String × Nat) := do
  let bytes ← match (← IO.FS.readBinFile cache.pushQueueFile |>.toBaseIO) with
    | .ok bytes => pure bytes
    | .error (.noFileOrDirectory ..) => return (#[], 0)
    | .error e => throw e
  let mut lines := #[]
  let mut invalid := 0
  for line in splitLines bytes do
    match String.fromUTF8? line with
    | some line =>
      unless line.trimAscii.isEmpty do
        lines := lines.push line
    | none =>
      recordDrop cache "invalid" (toJson s!"a line of {line.size} bytes that is not UTF-8")
      invalid := invalid + 1
  return (lines, invalid)

/--
Removes one line from `lines` for each count of the line in `done` (each entry that was pushed or
dropped), keeping the rest in order.
-/
def removeDone (lines : Array String) (done : Std.HashMap String Nat) : Array String := Id.run do
  let mut done := done
  let mut kept := #[]
  for line in lines do
    match done[line]? with
    | some (n + 1) => done := done.insert line n
    | _ => kept := kept.push line
  return kept

/-- Returns the `s3` cache service named `name` in the Lake configuration, with the push's key. -/
def findPushService (ctx : PushContext) (name : String) : Except String CacheService := do
  let service ← ctx.lakeCfg.findRemoteCacheService? name
  return if let some key := ctx.env.cacheKey? then service.withKey key else service

/-- The bytes of `file`, if they hash to `hash`. -/
def bytesIfHash (file : FilePath) (hash : Hash) : BaseIO (Option ByteArray) := do
  match (← (IO.FS.readBinFile file).toBaseIO) with
  | .ok bytes => return if Hash.ofByteArray bytes == hash then some bytes else none
  | .error _ => return none

/--
Moves the cache artifact of `descr`, whose bytes did not hash to its name, into the cache's
quarantine directory, unless another process (e.g., a build that inserts the same entry) has
replaced it with the right bytes meanwhile: then returns those bytes and keeps the file. The
bytes are checked again right before the move, and the moved file right after it, which it puts
back if it has the right bytes, so a replacement between the check and the move is never lost.
-/
def quarantineUnlessReplaced
  (cache : Cache) (target : String) (descr : ArtifactDescr)
: LoggerIO (Option ByteArray) := do
  let path := cache.artifactDir / descr.relPath
  if let some bytes ← bytesIfHash path descr.hash then
    return some bytes
  let moved ← match (← (cache.quarantine path descr.relPath.toString).toBaseIO) with
    | .ok (some dest) =>
      if let some bytes ← bytesIfHash dest descr.hash then
        -- Replaced between the check and the move: the right file goes back
        discard <| (IO.FS.hardLink dest path).toBaseIO
        discard <| (removeFileIfExists dest).toBaseIO
        return some bytes
      pure s!"moved it to: {dest}"
    | .ok none => pure "it was already moved away by another process"
    | .error e => pure s!"could not move it into quarantine: {e}"
  logWarning s!"{target}: dropped from the queue: cache artifact {path} changed after the \
    build (it no longer has the hash in its name); {moved}"
  return none

/--
Reads the cache artifact of each descriptor, if its bytes still hash to the descriptor.
If they do not, records the entry as dropped with reason `mismatch` and moves each such artifact
into the cache's quarantine directory (see `quarantineUnlessReplaced`), so that no local build
restores it again. If an artifact is gone (e.g., deleted from the cache to save space), records
the entry as dropped with reason `missing`.
-/
def verifyArtifacts
  (cache : Cache) (target : String) (json : Json) (descrs : Array ArtifactDescr)
: LoggerIO (Option (Array ByteArray)) := do
  let mut contents := #[]
  let mut missing := #[]
  let mut mismatched := #[]
  for descr in descrs do
    match (← IO.FS.readBinFile (cache.artifactDir / descr.relPath) |>.toBaseIO) with
    | .ok bytes =>
      if Hash.ofByteArray bytes == descr.hash then
        contents := contents.push bytes
      else if let some bytes ← quarantineUnlessReplaced cache target descr then
        contents := contents.push bytes
      else
        mismatched := mismatched.push descr
    | .error (.noFileOrDirectory ..) =>
      missing := missing.push descr
    | .error e =>
      error s!"{target}: could not read cache artifact {descr}: {e}"
  if !mismatched.isEmpty then
    recordDrop cache "mismatch" json mismatched
    return none
  if !missing.isEmpty then
    let names := ", ".intercalate (missing.map (·.relPath.toString)).toList
    logWarning s!"{target}: dropped from the queue: artifacts no longer in the cache: {names}"
    recordDrop cache "missing" json missing
    return none
  return some contents

/-- Writes the remote mapping of `entry` into `dir`, and makes the entry ready for upload. -/
def stageMapping
  (dir : FilePath) (idx : Nat) (entry : RemotePushEntry) (service : CacheService)
  (data : Json) (sha256 : Sha256Map) (artifacts : Array RemoteUpload) (bytes : Nat)
: IO StagedEntry := do
  let mapping : RemoteCacheMapping := {entry.toRemoteOutputs with data, sha256}
  let path := dir / "mapping.json"
  IO.FS.writeFile path mapping.toJson.compress
  let url := service.remoteMappingUrl entry.remoteScope entry.inputHash
  let claim? := entry.claimGeneration?.map fun generation =>
    (service.remoteClaimUrl entry.remoteScope entry.inputHash, generation)
  return .ready {
    idx, serviceName := entry.service, service, artifacts, bytes, claim?
    mapping := {path, url, hash := entry.inputHash}
  }

/--
Stages the outputs of a target other than a module: a copy of each artifact's verified bytes.
-/
def stageOutputs
  (ctx : PushContext) (dir : FilePath) (idx : Nat) (entry : RemotePushEntry) (json : Json)
  (service : CacheService) (descrs : Array ArtifactDescr)
: LoggerIO StagedEntry := do
  let some contents ← verifyArtifacts ctx.cache entry.target json descrs
    | return .dropped
  let mut sha256 : Sha256Map := {}
  let mut artifacts := #[]
  for descr in descrs, bytes in contents do
    -- A private copy, so the upload sends exactly the bytes that were verified
    let path := dir / descr.relPath
    IO.FS.writeBinFile path bytes
    let digest := sha256Bytes bytes
    sha256 := sha256.insert descr.relPath.toString digest
    artifacts := artifacts.push {
      path, url := service.remoteArtifactUrl entry.remoteScope digest, hash := descr.hash
    }
  stageMapping dir idx entry service entry.data sha256 artifacts
    (contents.foldl (· + ·.size) 0)

/--
Stages the outputs of a module as one archive, as `Module.packLtar` packs it, from the verified
bytes of its artifacts and a trace written from the entry alone: the outputs, the log and the
input hash (which `-s` strips, and which a reader supplies again when it unpacks).
-/
def stageModule
  (ctx : PushContext) (dir : FilePath) (idx : Nat) (entry : RemotePushEntry) (json : Json)
  (service : CacheService) (stem : String) (descrs : ModuleOutputDescrs)
  (files : Array (ArtifactDescr × Bool))
: LoggerIO StagedEntry := do
  let some contents ← verifyArtifacts ctx.cache entry.target json (files.map (·.1))
    | return .dropped
  -- As `Module.fileName`, for the module's own directories, which are the archive's bases
  let fileName (ext : String) := FilePath.mk stem |>.addExtension ext |>.toString
  let libDir := dir / "lib"
  let irDir := dir / "ir"
  IO.FS.createDirAll libDir
  IO.FS.createDirAll irDir
  for (descr, inIrDir) in files, bytes in contents do
    IO.FS.writeBinFile ((if inIrDir then irDir else libDir) / fileName descr.ext) bytes
  (BuildMetadata.ofFetch entry.inputHash (toJson descrs) entry.log).writeFile
    (libDir / fileName "trace")
  let ltar := dir / "outputs.ltar"
  let args := ltarPackArgs files fileName libDir irDir ltar
  proc (quiet := true) {cmd := ctx.env.lean.leantar.toString, args}
  let bytes ← IO.FS.readBinFile ltar
  let descr := artifactWithExt (Hash.ofByteArray bytes) "ltar"
  let digest := sha256Bytes bytes
  let artifact := {path := ltar, url := service.remoteArtifactUrl entry.remoteScope digest, hash := descr.hash}
  stageMapping dir idx entry service (toJson descr)
    (({} : Sha256Map).insert descr.relPath.toString digest) #[artifact]
    (contents.foldl (· + ·.size) bytes.size)

/--
The file name stem of a module's outputs (the last component of its name), if `target` names a
module whose outputs can be staged under that stem.
-/
def moduleFileStem? (target : String) : Option String :=
  match target.toName with
  | .str _ stem =>
    if stem.isEmpty || stem == "." || stem == ".." || stem.any (fun c => c == '/' || c == '\\') then
      none
    else
      some stem
  | _ => none

/-- Prepares the queue line `line`, the `idx`-th of its chunk, for upload in `dir`. -/
def stageLine (ctx : PushContext) (dir : FilePath) (idx : Nat) (line : String) : LoggerIO StagedEntry := do
  let json ← match Json.parse line with
    | .ok json => pure json
    | .error e =>
      logWarning s!"dropped a queue line that is not JSON: {e}"
      recordDrop ctx.cache "invalid" (toJson line)
      return .dropped
  let invalid (msg : String) : LoggerIO StagedEntry := do
    logWarning s!"dropped an invalid queue entry: {msg}"
    recordDrop ctx.cache "invalid" json
    return .dropped
  let entry ← match fromJson? json with
    | .ok (entry : RemotePushEntry) => pure entry
    | .error e => return ← invalid e
  let service ← match findPushService ctx entry.service with
    | .ok service => pure service
    | .error e =>
      logError s!"{entry.target}: {e}"
      return .failed
  IO.FS.createDirAll dir
  if entry.srcHash?.isSome then
    let some stem := moduleFileStem? entry.target
      | return ← invalid s!"`{entry.target}` is not a module name"
    let descrs ← match fromJson? entry.data with
      | .ok (descrs : ModuleOutputDescrs) => pure {descrs with ltar? := none}
      | .error e => return ← invalid s!"{entry.target}: {e}"
    let files ← match descrs.ltarFiles with
      | .ok files => pure files
      | .error e => return ← invalid s!"{entry.target}: {e}"
    unless files.all (ArtifactDescr.isCacheExtension ·.1.ext) do
      return ← invalid s!"{entry.target}: an output has an unsupported extension"
    stageModule ctx dir idx entry json service stem descrs files
  else
    let descrs ← match outputArtifactDescrs? entry.data with
      | .ok descrs => pure descrs
      | .error e => return ← invalid s!"{entry.target}: {e}"
    unless descrs.all (ArtifactDescr.isCacheExtension ·.ext) do
      return ← invalid s!"{entry.target}: an output has an unsupported extension"
    stageOutputs ctx dir idx entry json service descrs

/-- The uploads of `uploads`, each URL once (entries can share an artifact, or an input). -/
def uniqueUploads (uploads : Array RemoteUpload) : Array RemoteUpload :=
  (uploads.foldl (init := (#[], ({} : Std.HashSet String))) fun (kept, urls) u =>
    if urls.contains u.url then (kept, urls) else (kept.push u, urls.insert u.url)).1

/--
Stages a prefix of the queue lines `lines` in `dir` with `ctx.workers` workers, each in its own
thread, since staging a module runs `leantar`. A worker takes the next line in order until every
line is taken or `pushChunkBytes` are staged, so the lines staged are a prefix of `lines` (at least
one). A failure while a line is staged fails only that line. Returns the result of each staged
line with the log of its staging, in order.
-/
def stageLines (ctx : PushContext) (dir : FilePath) (lines : Array String)
: BaseIO (Array (StagedEntry × Log)) := do
  -- The index of the next line to take, and the bytes staged so far
  let progress ← IO.mkRef ((0 : Nat), (0 : Nat))
  let results ← IO.mkRef (Array.replicate lines.size (none : Option (StagedEntry × Log)))
  let worker : BaseIO Unit := do
    repeat
      let idx? ← progress.modifyGet fun (next, staged) =>
        if next < lines.size && staged < pushChunkBytes then
          (some next, (next + 1, staged))
        else
          (none, (next, staged))
      let some idx := idx?
        | break
      let (r?, log) ← (stageLine ctx (dir / toString idx) idx lines[idx]!).captureLog
      let r := r?.getD .failed
      if let .ready entry := r then
        progress.modify fun (next, staged) => (next, staged + entry.bytes)
      results.modify (·.set! idx (some (r, log)))
  let tasks ← (Array.range ctx.workers).mapM fun _ =>
    IO.asTask (prio := .dedicated) (monadLift worker)
  for task in tasks do
    discard <| IO.wait task
  return (← results.get).filterMap id

/--
Marks the claim of each entry that names one `done` (see `markClaimDone`), now that the entry's
mapping is uploaded, with `ctx.workers` workers. A claim that another build changed meanwhile
(HTTP 412) or that could not be written is left as it is, and logged: the outcome of the entry
does not change, since what other builds wait for is the mapping.
-/
def markClaimsDone (ctx : PushContext) (entries : Array ReadyEntry) : LoggerIO Unit := do
  let claims := entries.filterMap fun e =>
    e.claim?.map fun (url, generation) => (e.service, url, generation)
  if claims.isEmpty then
    return
  let holder ← claimHolder
  let next ← IO.mkRef 0
  let results ← IO.mkRef (Array.replicate claims.size (none : Option String))
  let worker : BaseIO Unit := do
    repeat
      let i ← next.modifyGet fun i => (i, i + 1)
      let some (service, url, generation) := claims[i]?
        | break
      let msg? := match ← tryLogIO (markClaimDone service url generation holder) with
        | .ok 200 => none
        | .ok code => some s!"left the claim {url} as it is (HTTP {code})"
        | .error msg => some s!"could not mark the claim {url} done:\n{msg}"
      results.modify (·.set! i msg?)
  let tasks ← (Array.range (min ctx.workers claims.size)).mapM fun _ =>
    IO.asTask (prio := .dedicated) (monadLift worker)
  for task in tasks do
    discard <| IO.wait task
  for msg? in ← results.get do
    if let some msg := msg? then
      logVerbose msg

/--
Pushes a prefix of the queue lines `lines`, staged in the push's own staging directory: it stages
lines until it has staged `pushChunkBytes` (see `stageLines`), uploads the artifacts of the staged
entries, and then the mapping of each entry whose artifacts are all present. Returns the outcome
of each line that it handled, at least one.
-/
def pushChunk (ctx : PushContext) (lines : Array String) : LoggerIO (Array PushOutcome) := do
  let dir := ctx.stagingDir
  removeDirAllIfExists dir
  IO.FS.createDirAll dir
  try
    let mut outcomes : Array PushOutcome := #[]
    let mut ready : Array ReadyEntry := #[]
    for (staged, log) in ← stageLines ctx dir lines do
      log.replay
      match staged with
      | .ready entry =>
        ready := ready.push entry
        outcomes := outcomes.push .failed -- until its mapping is uploaded
      | .dropped => outcomes := outcomes.push .dropped
      | .failed => outcomes := outcomes.push .failed
    let services := ready.foldl (init := #[]) fun services e =>
      if services.any (·.1 == e.serviceName) then services else services.push (e.serviceName, e.service)
    for (name, service) in services do
      let group := ready.filter (·.serviceName == name)
      -- Artifacts go up before mappings, so a reader that finds a mapping finds its artifacts
      let artifacts := uniqueUploads (group.flatMap (·.artifacts))
      let uploaded : Std.HashSet String ← (({} : Std.HashSet String).insertMany ·) <$>
        try service.putRemoteObjects artifacts CacheService.artifactContentType "artifact"
        catch _ => pure #[]
      -- An entry with an artifact that did not go up sends no mapping, and stays queued
      let complete := group.filter (·.artifacts.all (uploaded.contains ·.url))
      let mappings := uniqueUploads (complete.map (·.mapping))
      let mapped : Std.HashSet String ← (({} : Std.HashSet String).insertMany ·) <$>
        try service.putRemoteObjects mappings remoteMappingContentType "mapping"
        catch _ => pure #[]
      for e in complete do
        if mapped.contains e.mapping.url then
          outcomes := outcomes.set! e.idx .pushed
      -- The builds that wait for these claims look for the mappings, which are there now
      markClaimsDone ctx (complete.filter (mapped.contains ·.mapping.url))
    return outcomes
  finally
    discard <| (removeDirAllIfExists dir).toBaseIO

/-- Records the outcome of a push in `Cache.pushStatusFile`. -/
def writePushStatus (cache : Cache) (stats : PushStats) (queued : Nat) : IO Unit := do
  writeFileAtomic cache.pushStatusFile <| (JsonObject.empty
    |>.insert "at" (← wallClockSecs)
    |>.insert "rc" (if queued == 0 then 0 else 1)
    |>.insert "pushed" stats.pushed
    |>.insert "failed" stats.failed
    |>.insert "dropped" stats.dropped
    |>.insert "queued" queued : Json).pretty

/--
Whether the build that holds the lock on its follow file `file` (see `startBuildPush`) still
runs: it holds the lock until its build ends, or its process does. A missing file is a build that
has ended.
-/
def followedBuildRuns (file : FilePath) : IO Bool := do
  let h ← match (← IO.FS.Handle.mk file .read |>.toBaseIO) with
    | .ok h => pure h
    | .error (.noFileOrDirectory ..) => return false
    | .error e => throw e
  if ← h.tryLock then
    h.unlock
    return false
  return true

/-- How often a push that follows a build looks at the queue again while the build runs. -/
def followPollMs : UInt32 := 1000

/--
How long a push that follows a build waits before it tries again the lines whose upload failed
(e.g., on a transient error of the remote cache), in milliseconds: 30 seconds.
-/
def followRetryMs : Nat := 30000

/--
Runs passes of the push until a pass finds no queue line that this push has not tried, then
releases `pushLock` (see the module docs). `done` counts the lines that the last pass pushed or
dropped, which this pass removes from the queue. `failed` holds the lines whose upload failed:
they stay in the queue. Returns the number of lines left in the queue.

With `follow?` (the follow file of a build; see `startBuildPush`), a pass that finds nothing to
push waits `followPollMs` and looks again while that build runs, so the build's one push uploads
every output the build queues. While it follows, it tries the failed lines again once
`followRetryMs` have passed since the last failure (`retryAt`, a monotonic time); the passes after
the build has ended do not. Whether the build runs is read before the queue, so the pass that sees
it ended also sees every line it queued.
-/
partial def pushLoop
  (ctx : PushContext) (pushLock queueLock : IO.FS.Handle)
  (stats : PushStats) (failed : Std.HashSet String) (done : Std.HashMap String Nat)
  (follow? : Option FilePath := none) (retryAt : Nat := 0)
: LoggerIO Nat := do
  let cache := ctx.cache
  let following ← match follow? with
    | some file => followedBuildRuns file
    | none => pure false
  queueLock.lock
  let (lines, invalid) ← try readQueueLines cache catch e => queueLock.unlock; throw e
  let lines := removeDone lines done
  if invalid > 0 || !done.isEmpty then
    try writeQueue cache lines catch e => queueLock.unlock; throw e
  let stats := {stats with dropped := stats.dropped + invalid}
  let todo := lines.filter (!failed.contains ·)
  if todo.isEmpty then
    if following then
      queueLock.unlock
      if !failed.isEmpty && (← IO.monoMsNow) ≥ retryAt then
        -- Tries them again: they no longer count as failed unless they fail again
        logInfo s!"trying {failed.size} failed queue entries again"
        let stats := {stats with failed := stats.failed - failed.size}
        return ← pushLoop ctx pushLock queueLock stats {} {} follow? retryAt
      IO.sleep followPollMs
      return ← pushLoop ctx pushLock queueLock stats failed {} follow? retryAt
    if let .error e ← (writePushStatus cache stats lines.size).toBaseIO then
      logWarning s!"could not write {cache.pushStatusFile}: {e}"
    -- Released while the queue is locked: a line appended after this is the next push's
    pushLock.unlock
    queueLock.unlock
    if let some file := follow? then
      discard <| (removeFileIfExists file).toBaseIO
    return lines.size
  queueLock.unlock
  logInfo s!"pushing {todo.size} queue entries to the remote cache"
  let mut stats := stats
  let mut failed := failed
  let mut retryAt := retryAt
  let mut done : Std.HashMap String Nat := {}
  let mut start := 0
  while start < todo.size do
    let chunk := todo.extract start (start + pushChunkSize)
    let outcomes ← try pushChunk ctx chunk catch _ => pure (Array.replicate chunk.size .failed)
    for line in chunk, outcome in outcomes do
      match outcome with
      | .pushed =>
        stats := {stats with pushed := stats.pushed + 1}
        done := done.alter line fun n? => some (n?.getD 0 + 1)
      | .dropped =>
        stats := {stats with dropped := stats.dropped + 1}
        done := done.alter line fun n? => some (n?.getD 0 + 1)
      | .failed =>
        stats := {stats with failed := stats.failed + 1}
        failed := failed.insert line
        retryAt := (← IO.monoMsNow) + followRetryMs
    start := start + max 1 outcomes.size
  pushLoop ctx pushLock queueLock stats failed done follow? retryAt

/--
Uploads the write-back queue of `cache` to the shared remote cache (see the module docs).
Returns the number of entries left in the queue, which only failed uploads leave.

If another `lake cache push` holds the push lock, returns `0` at once and changes nothing, since
that push uploads the queue. With `wait`, waits for that push to end instead, then pushes.

With `follow?`, the follow file of a build that started this push (see `startBuildPush`), the push
keeps looking for new queue lines while that build runs, and ends after the build has ended and
the queue holds nothing this push has not tried.
-/
public def pushRemoteCache
  (env : Env) (lakeCfg : LoadedLakeConfig) (cache : Cache) (wait : Bool)
  (follow? : Option FilePath := none)
: LoggerIO Nat := do
  IO.FS.createDirAll cache.dir
  let pushLock ← IO.FS.Handle.mk cache.pushLockFile .append
  if wait then
    pushLock.lock
  else unless (← pushLock.tryLock) do
    logInfo s!"another `lake cache push` uploads the queue (it holds {cache.pushLockFile})"
    return 0
  /-
  The lock proves that no other push runs, so any staging directory is a dead push's. The `curl`
  of a push that was killed can outlive it and still open the files it was given: this push
  stages in a directory of its own, so such a `curl` can never upload this push's files under the
  dead push's URLs (and finds its own files gone).
  -/
  removeDirAllIfExists cache.pushStagingDir
  let stagingDir := cache.pushStagingDir /
    s!"{← IO.Process.getPID}-{(Hash.ofByteArray (← IO.getRandomBytes 8)).hex}"
  logVerbose s!"staging uploads in {stagingDir}"
  let workers ← pushWorkers
  logVerbose s!"staging with {workers} workers"
  let queueLock ← IO.FS.Handle.mk cache.pushQueueLockFile .append
  pushLoop {cache, env, lakeCfg, stagingDir, workers} pushLock queueLock {} {} {} follow?

end Lake
