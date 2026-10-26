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
the cache's quarantine directory so that no local build restores it again: it first renames the
entry into the quarantine directory, which takes exactly the file that is there at that moment,
and then hashes what it took, so it only ever quarantines bytes that it hashed as wrong (see
`quarantineUnlessReplaced`). It also drops an entry whose artifact is gone.
`Cache.pushDroppedFile` records each drop with its reason.

A module's outputs go up as one archive (`.ltar`), which the pusher packs from the bytes it
verified and a trace that it writes from the entry alone: it never reads a file of a workspace.
The pusher copies the bytes it uploads into a directory of its own below `Cache.pushStagingDir`,
in the cache directory. It stages (and packs) the entries of a chunk with several workers at once
(`pushWorkers`); a failure while one entry is staged fails only that entry. It names each
artifact by its SHA-256 and uploads it, and then the entry's remote mapping (see
`RemoteCacheMapping`) once all of the entry's artifacts are present, each only if the object is
absent. A chunk uploads while the next one stages. Each upload is bounded, and an upload that
failed transiently is tried again (see `CacheService.putRemoteObjects`). Pushed and dropped
entries leave the queue. An entry whose upload failed stays in the queue for the next push.

One pusher at a time holds `Cache.pushLockFile`. It works in passes: each pass reads the queue,
pushes the entries that it has not tried, and removes the pushed and dropped ones from the queue
as it goes, with a rewrite of the queue after a chunk (see `pushFlushFactor`), so that a push that
is stopped keeps its progress, and with one at the start of the next pass. It stops when a pass
finds no entry that it has not tried, so it pushes an entry that a build appends while it runs. It
releases the lock while it still holds the queue's lock, so that no append can fall between its
last look at the queue and the release. At the end, it records its outcome in
`Cache.pushStatusFile`.
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

/--
At most how many queue entries the pusher stages, and then uploads: the artifacts with one `curl`
run and then the mappings with another (and more runs for the uploads that are tried again).
-/
def pushChunkSize : Nat := 64

/--
The staged bytes after which the pusher stages no more entries before it uploads them. A chunk
uploads while the next one stages, so staging takes at most about twice this much space in the
cache directory (plus one entry per worker).
-/
def pushChunkBytes : Nat := 256 * 1024 * 1024

/--
How much longer than its last rewrite of the queue that removed the lines it pushed or dropped
(`removeFromQueue`) a pass waits before the next such rewrite: 10 times. So these rewrites take at
most about a tenth of a push, and a push that is stopped (e.g., by a time limit) redoes at most the
chunks after its last rewrite. A short queue is rewritten after every chunk.
-/
def pushFlushFactor : Nat := 10

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
  The URL of the claim of the entry's input and the generation that the build that queued the
  entry left it with, if the build held the claim: the push marks the claim `queued` as its own
  as soon as a pass reads the line (`takeLineClaims`), and stages the entry with the claim's new
  generation, and marks it `done` after the mapping is uploaded (`markClaimsDone`).
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

/--
Removes the lines of `done` (see `removeDone`) from the queue, under the queue's lock
(`queueLock`), with one rewrite. Returns the number of lines that were left out because they are
not UTF-8 text (see `readQueueLines`).
-/
def removeFromQueue
  (cache : Cache) (queueLock : IO.FS.Handle) (done : Std.HashMap String Nat)
: IO Nat := do
  queueLock.lock
  try
    let (lines, invalid) ← readQueueLines cache
    writeQueue cache (removeDone lines done)
    return invalid
  finally
    queueLock.unlock

/-- Returns the `s3` cache service named `name` in the Lake configuration, with the push's key. -/
def findPushService (ctx : PushContext) (name : String) : Except String CacheService := do
  let service ← ctx.lakeCfg.findRemoteCacheService? name
  return if let some key := ctx.env.cacheKey? then service.withKey key else service

/-- The bytes of `file`, if they hash to `hash`. -/
def bytesIfHash (file : FilePath) (hash : Hash) : BaseIO (Option ByteArray) := do
  match (← (IO.FS.readBinFile file).toBaseIO) with
  | .ok bytes => return if Hash.ofByteArray bytes == hash then some bytes else none
  | .error _ => return none

/-- What `quarantineUnlessReplaced` found when it took a cache artifact with wrong bytes. -/
inductive Captured
/-- Another process put the right bytes there (e.g., a build that repairs the entry). -/
| good (bytes : ByteArray)
/-- The wrong bytes are in the quarantine directory (or could not be moved; the message says). -/
| quarantined (msg : String)
/-- The entry was gone when the push took it: another process removes or repairs it. -/
| gone

/--
Moves the cache artifact of `descr`, whose bytes did not hash to its name, into the cache's
quarantine directory, so that no local build restores it again, and never moves bytes that are
right: another process (e.g., a build that repairs the entry) can replace the entry at any moment,
and takes no lock that this push could share.

The push first renames the entry to a name of its own in the quarantine directory, which takes
exactly the file that is at the entry's name at that moment, and then hashes the file that it
took. Wrong bytes stay in quarantine (as `<name>.<n>`). Right bytes (a replacement that came after
the first read) go back to the entry's name, unless another process put an entry there meanwhile,
and the push uses them. From the rename until the right bytes are back, the entry is absent: a
build that looks for it then misses and compiles the target again, and never reads wrong bytes.
A file of the push's own name that a killed push left in quarantine is never read.
-/
def quarantineUnlessReplaced (cache : Cache) (descr : ArtifactDescr) : BaseIO Captured := do
  let path := cache.artifactDir / descr.relPath
  let name := descr.relPath.toString
  -- Repaired since the first read: nothing to take
  if let some bytes ← bytesIfHash path descr.hash then
    return .good bytes
  let took : IO (Option FilePath) := do
    IO.FS.createDirAll cache.quarantineDir
    let captured ← uniqueTmpPath (cache.quarantineDir / name)
    try
      IO.FS.rename path captured
      return some captured
    catch
      | .noFileOrDirectory .. => return none
      | e => throw e
  match (← took.toBaseIO) with
  | .error e =>
    return .quarantined s!"could not move it into quarantine: {e}"
  | .ok none =>
    if let some bytes ← bytesIfHash path descr.hash then
      return .good bytes
    return .gone
  | .ok (some captured) =>
    if let some bytes ← bytesIfHash captured descr.hash then
      -- A replacement came between the first read and the rename: its bytes go back
      match (← (IO.FS.hardLink captured path).toBaseIO) with
      | .ok _ | .error (.alreadyExists ..) => discard <| (removeFileIfExists captured).toBaseIO
      | .error _ => discard <| (IO.FS.rename captured path).toBaseIO
      return .good bytes
    match (← (cache.quarantine captured name).toBaseIO) with
    | .ok (some dest) => return .quarantined s!"moved it to: {dest}"
    | .ok none => return .quarantined s!"moved it to: {captured}"
    | .error e => return .quarantined s!"moved it to: {captured} ({e})"

/-- The outcome of `verifyArtifacts`. -/
inductive Verified
/-- The bytes of each artifact, which hash to its descriptor. -/
| ok (contents : Array ByteArray)
/-- The entry is dropped from the queue (and recorded in `Cache.pushDroppedFile`). -/
| dropped
/-- Another process removes or repairs an artifact right now: the entry stays in the queue. -/
| retry

/--
Reads the cache artifact of each descriptor, if its bytes still hash to the descriptor.
If they do not, moves each such artifact into the cache's quarantine directory (see
`quarantineUnlessReplaced`), so that no local build restores it again, and records the entry as
dropped with reason `mismatch`; but uses the right bytes that another process put there meanwhile,
and keeps the entry in the queue (as failed, for a later pass) if the artifact vanished while it
was moved. If an artifact is gone (e.g., deleted from the cache to save space), records the entry
as dropped with reason `missing`.
-/
def verifyArtifacts
  (cache : Cache) (target : String) (json : Json) (descrs : Array ArtifactDescr)
: LoggerIO Verified := do
  let mut contents := #[]
  let mut missing := #[]
  let mut mismatched := #[]
  let mut vanished := #[]
  for descr in descrs do
    let path := cache.artifactDir / descr.relPath
    match (← IO.FS.readBinFile path |>.toBaseIO) with
    | .ok bytes =>
      if Hash.ofByteArray bytes == descr.hash then
        contents := contents.push bytes
      else match ← quarantineUnlessReplaced cache descr with
        | .good bytes => contents := contents.push bytes
        | .gone => vanished := vanished.push descr
        | .quarantined msg =>
          logWarning s!"{target}: dropped from the queue: cache artifact {path} changed after \
            the build (it no longer has the hash in its name); {msg}"
          mismatched := mismatched.push descr
    | .error (.noFileOrDirectory ..) =>
      missing := missing.push descr
    | .error e =>
      error s!"{target}: could not read cache artifact {descr}: {e}"
  if !mismatched.isEmpty then
    recordDrop cache "mismatch" json mismatched
    return .dropped
  if !vanished.isEmpty then
    let names := ", ".intercalate (vanished.map (·.relPath.toString)).toList
    logWarning s!"{target}: kept in the queue: another process removes or repairs the cache \
      artifacts {names}"
    return .retry
  if !missing.isEmpty then
    let names := ", ".intercalate (missing.map (·.relPath.toString)).toList
    logWarning s!"{target}: dropped from the queue: artifacts no longer in the cache: {names}"
    recordDrop cache "missing" json missing
    return .dropped
  return .ok contents

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
  let contents ← match ← verifyArtifacts ctx.cache entry.target json descrs with
    | .ok contents => pure contents
    | .dropped => return .dropped
    | .retry => return .failed
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
  let contents ← match ← verifyArtifacts ctx.cache entry.target json (files.map (·.1)) with
    | .ok contents => pure contents
    | .dropped => return .dropped
    | .retry => return .failed
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

/-- What `takeLineClaim` did with the claim of a queue line. -/
inductive LineClaim
/-- The push took the claim; it now has this generation. -/
| taken (generation : String)
/-- The line names no claim, or another build changed the claim: there is nothing to take. -/
| none
/-- The request failed (the message says how): a later round tries again. -/
| retry (msg : String)

/--
Marks the claim that the queue line `line` names, if any, `queued` with this push as its holder
(see `markClaimQueued`). A claim that another build changed is left as it is: its outputs are
still uploaded, and `markClaimsDone` then writes against the line's generation.
-/
def takeLineClaim (ctx : PushContext) (line : String) (holder : String) : BaseIO LineClaim := do
  let .ok (entry : RemotePushEntry) := Json.parse line >>= fromJson?
    | return .none
  let some generation := entry.claimGeneration?
    | return .none
  let .ok service := findPushService ctx entry.service
    | return .none
  let url := service.remoteClaimUrl entry.remoteScope entry.inputHash
  match ← tryLogIO (markClaimQueued service url generation holder) with
  | .ok (some new) => return .taken new
  | .ok none => return .none
  | .error msg => return .retry s!"could not take the claim {url}:\n{msg}"

/-- What a push has done with the claim that a queue line names (see `TakenClaims`). -/
inductive TakenClaim
/-- A worker of this push is taking it now: wait for it before the line is staged. -/
| taking
/-- This push took it, and it now has this generation. -/
| taken (generation : String)
/-- There was nothing to take: the line names no claim, or another build changed it. -/
| none
/-- The claim request failed. Do not race a retry against this pass's staging. -/
| retry
  deriving Inhabited

/--
What a push has done with the claim of each queue line it has read (see `takeLineClaims`),
shared by the push's passes and its claim taker (`claimTaker`), with the messages of the
requests that failed, which the passes log.
-/
structure TakenClaims where
  claims : IO.Ref (Std.HashMap String TakenClaim)
  messages : IO.Ref (Array String)

/--
Takes the claims that the queue lines `lines` name (see `takeLineClaim`), with `ctx.workers`
workers, each line once. A failed request stays reserved for this pass, so the claim taker cannot
change its generation while this pass stages it. If its upload fails and the line stays queued,
the next retry pass may take the claim again.
-/
def takeLineClaims (ctx : PushContext) (taken : TakenClaims) (lines : Array String) : BaseIO Unit := do
  let holder ← claimHolder
  let next ← IO.mkRef 0
  let worker : BaseIO Unit := do
    repeat
      let i ← next.modifyGet fun i => (i, i + 1)
      let some line := lines[i]?
        | break
      -- Each line is taken once, by whichever of the passes and the taker reserves it first
      let reserved ← taken.claims.modifyGet fun m =>
        if m.contains line then (false, m) else (true, m.insert line .taking)
      unless reserved do
        continue
      match ← takeLineClaim ctx line holder with
      | .taken generation => taken.claims.modify (·.insert line (.taken generation))
      | .none => taken.claims.modify (·.insert line .none)
      | .retry msg =>
        taken.claims.modify (·.insert line .retry)
        taken.messages.modify (·.push msg)
  let tasks ← (Array.range (min ctx.workers lines.size)).mapM fun _ =>
    IO.asTask (prio := .dedicated) worker
  for task in tasks do
    discard <| IO.wait task

/--
Waits until no line of `lines` is being taken (`TakenClaim.taking`), so that each is staged with
the generation its claim has now: a line whose claim the taker took while a pass read the queue
would otherwise be staged with the generation of its queue line, and the `done` write after its
upload would be refused. A request can take 160 seconds (two token runs and two sends), so this
wait has no shorter timeout: its worker set the state to a terminal `taken`, `none`, or retried
it before this returns.
-/
partial def waitForLineClaims (taken : TakenClaims) (lines : Array String) : BaseIO Unit := do
  let claims ← taken.claims.get
  if lines.any (claims[·]? matches some .taking) then
    IO.sleep 10
    waitForLineClaims taken lines

/--
Stages a prefix of the queue lines `lines` in `dir` with `ctx.workers` workers, each in its own
thread, since staging a module runs `leantar`. A worker takes the next line in order until every
line is taken or `pushChunkBytes` are staged, so the lines staged are a prefix of `lines` (at least
one). A staged entry names the generation that this push gave its claim (`taken`, see
`takeLineClaims`). A failure while a line is staged fails only that line. Returns the result of
each staged line with the log of its staging, in order.
-/
def stageLines
  (ctx : PushContext) (dir : FilePath) (lines : Array String)
  (taken : Std.HashMap String TakenClaim)
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
      let line := lines[idx]!
      let (r?, log) ← (stageLine ctx (dir / toString idx) idx line).captureLog
      let r := match r?.getD .failed with
        | .ready entry =>
          match entry.claim?, taken[line]? with
          | some (url, _), some (.taken generation) =>
            .ready {entry with claim? := some (url, generation)}
          | _, _ => .ready entry
        | r => r
      if let .ready entry := r then
        progress.modify fun (next, staged) => (next, staged + entry.bytes)
      results.modify (·.set! idx (some (r, log)))
  let tasks ← (Array.range ctx.workers).mapM fun _ =>
    IO.asTask (prio := .dedicated) (monadLift worker)
  for task in tasks do
    discard <| IO.wait task
  return (← results.get).filterMap id

/--
Runs `act` on each entry that names a claim, with `ctx.workers` workers, and returns what it
returned for each (in the entries' order, `none` for an entry with no claim). A claim write is
one request, so the writes go in parallel as the uploads do.
-/
def forEachClaim
  (ctx : PushContext) (entries : Array ReadyEntry)
  (act : CacheService → (url generation holder : String) → BaseIO α)
: LoggerIO (Array (Option α)) := do
  let holder ← claimHolder
  let next ← IO.mkRef 0
  let results ← IO.mkRef (Array.replicate entries.size (none : Option α))
  let worker : BaseIO Unit := do
    repeat
      let i ← next.modifyGet fun i => (i, i + 1)
      let some entry := entries[i]?
        | break
      let some (url, generation) := entry.claim?
        | continue
      let a ← act entry.service url generation holder
      results.modify (·.set! i (some a))
  let tasks ← (Array.range (min ctx.workers entries.size)).mapM fun _ =>
    IO.asTask (prio := .dedicated) (monadLift worker)
  for task in tasks do
    discard <| IO.wait task
  results.get

/--
Marks the claim of each entry that names one `done` (see `markClaimDone`), now that the entry's
mapping is uploaded, with `ctx.workers` workers. A claim that another build changed meanwhile
(HTTP 412) or that could not be written is left as it is, and logged: the outcome of the entry
does not change, since what other builds wait for is the mapping.
-/
def markClaimsDone (ctx : PushContext) (entries : Array ReadyEntry) : LoggerIO Unit := do
  let msgs ← forEachClaim ctx entries fun service url generation holder => do
    match ← tryLogIO (markClaimDone service url generation holder) with
    | .ok 200 => return none
    | .ok code => return some s!"left the claim {url} as it is (HTTP {code})"
    | .error msg => return some s!"could not mark the claim {url} done:\n{msg}"
  for msg? in msgs do
    if let some (some msg) := msg? then
      logVerbose msg

/-- A prefix of some queue lines, staged for upload (see `stageChunk`). -/
structure StagedChunk where
  /-- The lines that were staged: a prefix of the lines given, at least one. -/
  lines : Array String
  /-- The outcome of each line: `failed` for a ready entry, until its mapping is uploaded. -/
  outcomes : Array PushOutcome
  /-- The entries ready for upload. -/
  ready : Array ReadyEntry
  /-- The directory that holds the staged files. -/
  dir : FilePath

/--
Stages a prefix of the queue lines `lines` in `dir`, which it empties first: it stages lines until
it has staged `pushChunkBytes` (see `stageLines`; `taken` holds the generations of the claims this
push took).
-/
def stageChunk
  (ctx : PushContext) (dir : FilePath) (lines : Array String)
  (taken : Std.HashMap String TakenClaim)
: LoggerIO StagedChunk := do
  removeDirAllIfExists dir
  IO.FS.createDirAll dir
  let mut outcomes : Array PushOutcome := #[]
  let mut ready : Array ReadyEntry := #[]
  for (staged, log) in ← stageLines ctx dir lines taken do
    log.replay
    match staged with
    | .ready entry =>
      ready := ready.push entry
      outcomes := outcomes.push .failed -- until its mapping is uploaded
    | .dropped => outcomes := outcomes.push .dropped
    | .failed => outcomes := outcomes.push .failed
  return {lines := lines.extract 0 outcomes.size, outcomes, ready, dir}

/--
Uploads the artifacts of the entries of `chunk`, and then the mapping of each entry whose artifacts
are all present, and removes the chunk's staging directory. Returns the outcome of each line of the
chunk.
-/
def uploadChunk (ctx : PushContext) (chunk : StagedChunk) : LoggerIO (Array PushOutcome) := do
  try
    let mut outcomes := chunk.outcomes
    let ready := chunk.ready
    let services := ready.foldl (init := #[]) fun services e =>
      if services.any (·.1 == e.serviceName) then services else services.push (e.serviceName, e.service)
    for (name, service) in services do
      -- Each claim of these entries is this push's now (`takeLineClaims`)
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
    discard <| (removeDirAllIfExists chunk.dir).toBaseIO

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
Takes the claims of the lines that appear in the queue every `followPollMs`, apart from the
push's passes, which can take long (staging and uploads): so each claim is the push's within
about a second of its line, however long the uploads take, and well within
`remoteClaimGoneGraceSecs`. Every push runs this; the last pass stops it and waits for it before
it lets the push lock go (`pushLoop`), so a claim this push took always names a push that is
still there to upload that line. It reads the queue under the queue lock with a handle of its
own (a `flock` excludes only other handles). It tries the lock instead of blocking for it, and
checks `stop` before and after it takes the lock: the final pass can therefore stop and join it
while it holds the queue lock without a deadlock.
-/
partial def claimTaker (ctx : PushContext) (taken : TakenClaims) (stop : IO.Ref Bool) : BaseIO Unit := do
  let .ok queueLock ← (IO.FS.Handle.mk ctx.cache.pushQueueLockFile .append).toBaseIO
    | return
  let rec read : BaseIO (Option (Array String)) := do
    if ← stop.get then
      return none
    let .ok locked ← queueLock.tryLock.toBaseIO
      | return none
    unless locked do
      IO.sleep 10
      return ← read
    if ← stop.get then
      discard <| queueLock.unlock.toBaseIO
      return none
    let read : IO (Array String) := try (·.1) <$> readQueueLines ctx.cache finally queueLock.unlock
    match ← read.toBaseIO with
    | .ok lines => return some lines
    | .error _ => return some #[]
  let rec loop : BaseIO Unit := do
    IO.sleep followPollMs
    let some lines ← read
      | return
    let known ← taken.claims.get
    let fresh := lines.filter (!known.contains ·)
    unless fresh.isEmpty do
      takeLineClaims ctx taken fresh
    loop
  loop

/--
Runs passes of the push until a pass finds no queue line that this push has not tried, then
stops its claim taker and releases `pushLock` (see the module docs). `done` counts the lines
that the last pass pushed or dropped and has not yet removed from the queue (it removes them as
it goes; see `pushFlushFactor`), which this pass removes. `failed` holds the
lines whose upload failed: they stay in the queue. `taken` holds the claims this push took (see
`takeLineClaims`): each pass first takes the claims of its lines that it has not taken yet, and
stages each entry with its claim's new generation. `taker` is the claim taker's task and the
flag that stops it (`claimTaker`); the last pass stops it and waits for it while it still holds
the queue, so no claim of this push names it after it has let the queue go. Returns the number
of lines left in the queue.

With `follow?` (the follow file of a build; see `startBuildPush`), a pass that finds nothing to
push waits `followPollMs` and looks again while that build runs, so the build's one push uploads
every output the build queues. While it follows, it tries the failed lines again once
`followRetryMs` have passed since the last failure (`retryAt`, a monotonic time); the passes after
the build has ended do not. Whether the build runs is read before the queue, so the pass that sees
it ended also sees every line it queued.
-/
partial def pushLoop
  (ctx : PushContext) (pushLock queueLock : IO.FS.Handle) (taken : TakenClaims)
  (taker : IO.Ref Bool × Task Unit)
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
  -- The lines that left the queue need no generation any more
  unless done.isEmpty do
    taken.claims.modify (·.filter fun line _ => !done.contains line)
  for msg in ← taken.messages.modifyGet (·, #[]) do
    logVerbose msg
  if todo.isEmpty then
    if following then
      queueLock.unlock
      if !failed.isEmpty && (← IO.monoMsNow) ≥ retryAt then
        -- The retry states protected this pass's staging. A failed entry stays queued, so its
        -- next pass may try its claim again.
        taken.claims.modify fun claims =>
          claims.filter fun line state =>
            if failed.contains line then
              match state with
              | .retry => false
              | _ => true
            else true
        logInfo s!"trying {failed.size} failed queue entries again"
        let stats := {stats with failed := stats.failed - failed.size}
        return ← pushLoop ctx pushLock queueLock taken taker stats {} {} follow? retryAt
      IO.sleep followPollMs
      return ← pushLoop ctx pushLock queueLock taken taker stats failed {} follow? retryAt
    -- The taker stops while this pass holds the queue, so that it cannot take the claim of a
    -- line that this push leaves behind
    taker.1.set true
    discard <| IO.wait taker.2
    for msg in ← taken.messages.modifyGet (·, #[]) do
      logVerbose msg
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
  takeLineClaims ctx taken todo
  -- Stages the chunk of `todo` that starts at `start` in the staging directory `slot`
  let stageAt (start slot : Nat) : LoggerIO (Option StagedChunk) := do
    if start ≥ todo.size then
      return none
    let lines := todo.extract start (start + pushChunkSize)
    -- A claim that the taker is taking now decides the generation this chunk stages with
    waitForLineClaims taken lines
    let claims ← taken.claims.get
    let dir := ctx.stagingDir / toString slot
    try
      some <$> stageChunk ctx dir lines claims
    catch _ =>
      discard <| (removeDirAllIfExists dir).toBaseIO
      return some {lines, outcomes := Array.replicate lines.size .failed, ready := #[], dir}
  let mut stats := stats
  let mut failed := failed
  let mut retryAt := retryAt
  let mut done : Std.HashMap String Nat := {}
  let mut flushAt := 0
  let mut start := 0
  let mut slot := 0
  let mut next? ← stageAt start slot
  repeat
    let some chunk := next?
      | break
    -- The chunk uploads while the next one stages, in the other staging directory
    let upload ← BaseIO.asTask (prio := .dedicated) (uploadChunk ctx chunk).captureLog
    start := start + max 1 chunk.lines.size
    slot := 1 - slot
    next? ← stageAt start slot
    let (outcomes?, log) ← IO.wait upload
    log.replay
    let outcomes := outcomes?.getD (Array.replicate chunk.lines.size .failed)
    for line in chunk.lines, outcome in outcomes do
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
    -- So that a push that is stopped keeps its progress, the lines it pushed or dropped leave the
    -- queue as it goes (see `pushFlushFactor`)
    let now ← IO.monoMsNow
    if now ≥ flushAt && !done.isEmpty then
      match ← (removeFromQueue cache queueLock done).toBaseIO with
      | .ok invalid =>
        stats := {stats with dropped := stats.dropped + invalid}
        taken.claims.modify (·.filter fun line _ => !done.contains line)
        done := {}
        flushAt := now + pushFlushFactor * ((← IO.monoMsNow) - now)
      | .error e =>
        logWarning s!"could not remove the pushed entries from {cache.pushQueueFile}: {e}"
  pushLoop ctx pushLock queueLock taken taker stats failed done follow? retryAt

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
  and `leantar` of a push that was killed can outlive it: this push stages in a directory of its
  own, so such a `curl` can never upload this push's files under the dead push's URLs (and finds
  its own files gone), and a `leantar` that writes into the dead push's directory while this push
  removes it only leaves that directory behind, which the next push removes.
  -/
  if let .error e ← (removeDirAllIfExists cache.pushStagingDir).toBaseIO then
    logVerbose s!"could not remove {cache.pushStagingDir}: {e}"
  let stagingDir := cache.pushStagingDir /
    s!"{← IO.Process.getPID}-{(Hash.ofByteArray (← IO.getRandomBytes 8)).hex}"
  logVerbose s!"staging uploads in {stagingDir}"
  let workers ← pushWorkers
  logVerbose s!"staging with {workers} workers"
  let queueLock ← IO.FS.Handle.mk cache.pushQueueLockFile .append
  let ctx : PushContext := {cache, env, lakeCfg, stagingDir, workers}
  let taken : TakenClaims := {claims := ← IO.mkRef {}, messages := ← IO.mkRef #[]}
  -- Every push takes the claims of the lines it reads as they come (see `claimTaker`), and the
  -- loop's last pass stops this task and waits for it before it lets the push lock go
  let stop ← IO.mkRef false
  let taker ← BaseIO.asTask (prio := .dedicated) (claimTaker ctx taken stop)
  try
    pushLoop ctx pushLock queueLock taken (stop, taker) {} {} {} follow?
  finally
    stop.set true
    discard <| IO.wait taker
    discard <| (removeDirAllIfExists stagingDir).toBaseIO

end Lake
