/-
Copyright (c) 2026 Lean FRO. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Sami Jawhar
-/
module

prelude
public import Lake.Config.Env
public import Lake.Config.LakeConfig
import Lake.Build.Common
import Lake.Build.Module
import Lake.Util.IO
import Lake.Util.JsonObject
import Lake.Util.Proc
import Lake.Util.Sha256
import Init.While

/-! # `lake cache push`

Uploads the write-back queue of the shared remote cache (`Cache.pushQueueFile`), to which builds
with `LAKE_REMOTE_CACHE_QUEUE` append the outputs that they compiled (see `queueRemotePush`).

For each queue entry, the pusher hashes the cache artifacts that the entry names again. It drops
an entry with an artifact whose bytes no longer match its descriptor, and moves that artifact into
the cache's quarantine directory so that no local build restores it again. It also drops an entry
whose artifact is gone. `Cache.pushDroppedFile` records each drop with its reason.

A module's outputs go up as one archive (`.ltar`), which the pusher packs from the bytes it
verified and a trace that it writes from the entry alone: it never reads a file of a workspace.
The pusher names each artifact by its SHA-256 and uploads it, and then the entry's remote mapping
(see `RemoteCacheMapping`), each only if the object is absent. Pushed and dropped entries leave the
queue. An entry whose upload failed stays in the queue for the next push.

One pusher at a time holds `Cache.pushLockFile`. It repeats until the queue holds no entry that it
has not tried, so it pushes an entry that a build appends while it runs. It releases the lock while
it still holds the queue's lock, so that no append can fall between its last look at the queue and
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

/-- How many queue entries the pusher stages, and then uploads with two `curl` runs, at a time. -/
def pushChunkSize : Nat := 64

/-- The MIME type of a remote mapping. -/
def remoteMappingContentType : String := "application/json"

structure PushContext where
  cache : Cache
  env : Env
  lakeCfg : LoadedLakeConfig

/-- A queue entry whose files are staged for upload. -/
structure ReadyEntry where
  /-- The index of the entry in its chunk. -/
  idx : Nat
  service : String
  /-- The artifacts of the entry. -/
  artifacts : Array RemoteUpload
  /-- The remote mapping of the entry, which goes up after all of its artifacts. -/
  mapping : RemoteUpload

/-- The result of preparing a queue entry for upload. -/
inductive StagedEntry
| ready (entry : ReadyEntry)
| dropped
| failed

/-- Appends a record of a queue entry that the pusher refused to `Cache.pushDroppedFile`. -/
def recordDrop
  (cache : Cache) (reason : String) (entry : Json) (artifacts : Array ArtifactDescr := #[])
: IO Unit := do
  let line := (JsonObject.empty
    |>.insert "at" (← wallClockSecs)
    |>.insert "reason" reason
    |>.insert "artifacts" (artifacts.map (·.relPath.toString))
    |>.insert "entry" entry : Json).compress
  let h ← IO.FS.Handle.mk cache.pushDroppedFile .append
  h.putStr (line.push '\n')
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
Reads the queue's lines; the caller holds the queue's lock. A line that is not UTF-8 text, which
only an append that died partway can leave, is dropped at once. Returns the lines and the number
of lines dropped.
-/
def takeQueueLines (cache : Cache) : IO (Array String × Nat) := do
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
  if invalid > 0 then
    writeQueue cache lines
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

/-- Returns the `s3` cache service named `name` in the Lake configuration. -/
def findPushService (ctx : PushContext) (name : String) : Except String CacheService := do
  let some service := ctx.lakeCfg.cacheServices.find? (.mkSimple name)
    | throw s!"remote cache service `{name}` is not configured"
  if service.isReservoir then
    throw s!"remote cache service `{name}` must have kind `s3`"
  return if let some key := ctx.env.cacheKey? then service.withKey key else service

/--
Reads the cache artifact of each descriptor, if its bytes still hash to the descriptor.
If they do not, records the entry as dropped with reason `mismatch` and moves each such artifact
into the cache's quarantine directory, so that no local build restores it again.
If an artifact is gone (e.g., deleted from the cache to save space), records the entry as dropped
with reason `missing`.
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
      else
        mismatched := mismatched.push descr
    | .error (.noFileOrDirectory ..) =>
      missing := missing.push descr
    | .error e =>
      error s!"{target}: could not read cache artifact {descr}: {e}"
  if !mismatched.isEmpty then
    for descr in mismatched do
      let path := cache.artifactDir / descr.relPath
      let moved ← match (← (cache.quarantine path descr.relPath.toString).toBaseIO) with
        | .ok (some dest) => pure s!"moved it to {dest}"
        | .ok none => pure "it was already moved away by another process"
        | .error e => pure s!"could not move it into quarantine: {e}"
      logWarning s!"{target}: dropped from the queue: cache artifact {path} changed after the \
        build (it no longer has the hash in its name); {moved}"
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
  (data : Json) (sha256 : JsonObject) (artifacts : Array RemoteUpload)
: IO StagedEntry := do
  let mapping : RemoteCacheMapping := {
    inputHash := entry.inputHash, target := entry.target, srcHash? := entry.srcHash?
    data, sha256, log := entry.log
  }
  let path := dir / "mapping.json"
  IO.FS.writeFile path mapping.toJson.compress
  let url := service.remoteMappingUrl entry.remoteScope entry.inputHash
  return .ready {idx, service := entry.service, artifacts, mapping := {path, url, hash := entry.inputHash}}

/--
Stages the outputs of a target other than a module: a copy of each artifact's verified bytes.
-/
def stageOutputs
  (ctx : PushContext) (dir : FilePath) (idx : Nat) (entry : RemotePushEntry) (json : Json)
  (service : CacheService) (descrs : Array ArtifactDescr)
: LoggerIO StagedEntry := do
  let some contents ← verifyArtifacts ctx.cache entry.target json descrs
    | return .dropped
  let mut sha256 : JsonObject := {}
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
  let args ← match descrs.ltarPackArgs fileName libDir irDir ltar with
    | .ok args => pure args
    | .error e => error s!"{entry.target}: {e}"
  proc (quiet := true) {cmd := ctx.env.lean.leantar.toString, args}
  let bytes ← IO.FS.readBinFile ltar
  let descr := artifactWithExt (Hash.ofByteArray bytes) "ltar"
  let digest := sha256Bytes bytes
  let artifact := {path := ltar, url := service.remoteArtifactUrl entry.remoteScope digest, hash := descr.hash}
  stageMapping dir idx entry service (toJson descr)
    (JsonObject.empty.insert descr.relPath.toString digest) #[artifact]

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
    unless files.all (·.1.isRemoteSafe) do
      return ← invalid s!"{entry.target}: an output has an unsupported extension"
    stageModule ctx dir idx entry json service stem descrs files
  else
    let descrs ← match outputArtifactDescrs? entry.data with
      | .ok descrs => pure descrs
      | .error e => return ← invalid s!"{entry.target}: {e}"
    unless descrs.all (·.isRemoteSafe) do
      return ← invalid s!"{entry.target}: an output has an unsupported extension"
    stageOutputs ctx dir idx entry json service descrs

/--
Pushes the queue lines `lines`: stages each, uploads the artifacts of the staged entries, and then
the mapping of each entry whose artifacts are all present. Returns the outcome of each line.
-/
def pushChunk (ctx : PushContext) (lines : Array String) : LoggerIO (Array PushOutcome) :=
  IO.FS.withTempDir fun dir => do
    let mut outcomes := Array.replicate lines.size PushOutcome.failed
    let mut ready : Array ReadyEntry := #[]
    let mut idx := 0
    for line in lines do
      match (← try stageLine ctx (dir / toString idx) idx line catch _ => pure .failed) with
      | .ready entry => ready := ready.push entry
      | .dropped => outcomes := outcomes.set! idx .dropped
      | .failed => pure ()
      idx := idx + 1
    let names := ready.foldl (init := #[]) fun names e =>
      if names.contains e.service then names else names.push e.service
    for name in names do
      let .ok service := findPushService ctx name
        | continue
      let group := ready.filter (·.service == name)
      -- Each artifact once, although entries can share one
      let (artifacts, _) := group.foldl (init := (#[], ({} : Std.HashSet String)))
        fun (uploads, urls) e => e.artifacts.foldl (init := (uploads, urls)) fun (uploads, urls) u =>
          if urls.contains u.url then (uploads, urls) else (uploads.push u, urls.insert u.url)
      -- Artifacts go up before mappings, so a reader that finds a mapping finds its artifacts
      let uploaded : Std.HashSet String ← (({} : Std.HashSet String).insertMany ·) <$>
        try service.putRemoteObjects artifacts CacheService.artifactContentType "artifact"
        catch _ => pure #[]
      let complete := group.filter (·.artifacts.all (uploaded.contains ·.url))
      let mapped : Std.HashSet String ← (({} : Std.HashSet String).insertMany ·) <$>
        try service.putRemoteObjects (complete.map (·.mapping)) remoteMappingContentType "mapping"
        catch _ => pure #[]
      for e in complete do
        if mapped.contains e.mapping.url then
          outcomes := outcomes.set! e.idx .pushed
    return outcomes

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
Pushes the queue until it holds no line that this push has not tried, then releases `pushLock`
(see the module docs). `failed` holds the lines whose upload failed: they stay in the queue, and
this push does not try them again. Returns the number of lines left in the queue.
-/
partial def pushLoop
  (ctx : PushContext) (pushLock queueLock : IO.FS.Handle)
  (stats : PushStats) (failed : Std.HashSet String)
: LoggerIO Nat := do
  let cache := ctx.cache
  queueLock.lock
  let (lines, invalid) ← takeQueueLines cache
  let stats := {stats with dropped := stats.dropped + invalid}
  let todo := lines.filter (!failed.contains ·)
  if todo.isEmpty then
    if let .error e ← (writePushStatus cache stats lines.size).toBaseIO then
      logWarning s!"could not write {cache.pushStatusFile}: {e}"
    -- Released while the queue is locked: a line appended after this is the next push's
    pushLock.unlock
    queueLock.unlock
    return lines.size
  queueLock.unlock
  logInfo s!"pushing {todo.size} queue entries to the remote cache"
  let mut stats := stats
  let mut failed := failed
  let mut start := 0
  while start < todo.size do
    let chunk := todo.extract start (start + pushChunkSize)
    start := start + pushChunkSize
    let outcomes ← try pushChunk ctx chunk catch _ => pure (Array.replicate chunk.size .failed)
    let mut done : Std.HashMap String Nat := {}
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
    unless done.isEmpty do
      queueLock.lock
      try
        let (lines, invalid) ← takeQueueLines cache
        stats := {stats with dropped := stats.dropped + invalid}
        writeQueue cache (removeDone lines done)
      finally
        queueLock.unlock
  pushLoop ctx pushLock queueLock stats failed

/--
Uploads the write-back queue of `cache` to the shared remote cache (see the module docs).
Returns the number of entries left in the queue, which only failed uploads leave.

If another `lake cache push` holds the push lock, returns `0` at once and changes nothing, since
that push uploads the queue. With `wait`, waits for that push to end instead, then pushes.
-/
public def pushRemoteCache
  (env : Env) (lakeCfg : LoadedLakeConfig) (cache : Cache) (wait : Bool)
: LoggerIO Nat := do
  IO.FS.createDirAll cache.dir
  let pushLock ← IO.FS.Handle.mk cache.pushLockFile .append
  if wait then
    pushLock.lock
  else unless (← pushLock.tryLock) do
    logInfo s!"another `lake cache push` uploads the queue (it holds {cache.pushLockFile})"
    return 0
  let queueLock ← IO.FS.Handle.mk cache.pushQueueLockFile .append
  pushLoop {cache, env, lakeCfg} pushLock queueLock {} {}

end Lake
