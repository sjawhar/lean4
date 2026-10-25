/-
Copyright (c) 2026 Lean FRO. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Sami Jawhar
-/
module

prelude
public import Lake.Config.Cache
import Lake.Util.JsonObject

/-! # Write-Back Queue

The queue of outputs that builds compiled, for upload to the shared remote cache by
`lake cache push`, and the other files of the push in the Lake cache directory.
-/

open System Lean

namespace Lake

/--
Outputs that a build compiled, queued for upload to the shared remote cache: one line of the
write-back queue (`Cache.pushQueueFile`), which `lake cache push` empties.
-/
public structure RemotePushEntry where
  /-- The name of the cache service that `LAKE_REMOTE_CACHE` named for the build. -/
  service : String
  /-- The remote scope of the outputs (see `remoteCacheScope`). -/
  remoteScope : String
  /-- The input hash of the outputs. -/
  inputHash : Hash
  /-- The build key of the target (see `RemoteCacheMapping`). -/
  target : String
  /-- The source hash of a module, or `none` for any other target. -/
  srcHash? : Option Hash
  /-- The outputs, as the local mapping records them (for a module, its per-file descriptors). -/
  data : Json
  /-- The log of the build that produced the outputs. -/
  log : Log

namespace RemotePushEntry

public protected def toJson (entry : RemotePushEntry) : Json :=
  JsonObject.empty
  |>.insert "service" entry.service
  |>.insert "remoteScope" entry.remoteScope
  |>.insert "inputHash" entry.inputHash
  |>.insert "target" entry.target
  |>.insert "srcHash" entry.srcHash?
  |>.insert "data" entry.data
  |>.insert "log" entry.log

public instance : ToJson RemotePushEntry := ⟨RemotePushEntry.toJson⟩

public protected def fromJson? (json : Json) : Except String RemotePushEntry := do
  let obj ← JsonObject.fromJson? json
  return {
    service := ← obj.get "service"
    remoteScope := ← obj.get "remoteScope"
    inputHash := ← obj.get "inputHash"
    target := ← obj.get "target"
    srcHash? := ← obj.get "srcHash"
    data := ← obj.get "data"
    log := ← obj.get "log"
  }

public instance : FromJson RemotePushEntry := ⟨RemotePushEntry.fromJson?⟩

end RemotePushEntry

namespace Cache

/--
The write-back queue of the shared remote cache: one `RemotePushEntry` per line, for the outputs
that builds compiled, which `lake cache push` uploads and removes.
-/
@[inline] public def pushQueueFile (cache : Cache) : FilePath :=
  cache.dir / "push.jsonl"

/-- The file whose exclusive lock guards each append to, and each rewrite of, `pushQueueFile`. -/
@[inline] public def pushQueueLockFile (cache : Cache) : FilePath :=
  cache.dir / "push.jsonl.lock"

/-- The file whose exclusive lock the one running `lake cache push` holds. -/
@[inline] public def pushLockFile (cache : Cache) : FilePath :=
  cache.dir / "push.lock"

/-- The queue entries that `lake cache push` refused, one JSON object per line, with the reason. -/
@[inline] public def pushDroppedFile (cache : Cache) : FilePath :=
  cache.dir / "push-dropped.jsonl"

/-- The outcome of the last `lake cache push`. -/
@[inline] public def pushStatusFile (cache : Cache) : FilePath :=
  cache.dir / "remote-status-push.json"

/--
The directory where `lake cache push` copies the bytes it uploads. It is in the cache directory,
on the file system of the artifacts it copies. Each push stages in a directory of its own below
it, `<pid>-<random>`, and removes all of it first, once it holds `pushLockFile`.
-/
@[inline] public def pushStagingDir (cache : Cache) : FilePath :=
  cache.dir / "push-staging"

/--
Appends `entry` to the write-back queue (`pushQueueFile`) under an exclusive lock on
`pushQueueLockFile`, writing the whole line with one write of one buffer, so a reader that holds
the lock never sees part of it.

The line starts with a line feed as well as ending with one. A writer killed during its write
can leave part of a line with no line feed after it; the next line then still starts on a line
of its own, so only the partial line is lost (`lake cache push` drops and records it).
`lake cache push` skips the empty lines this leaves.
-/
public def appendPushQueue (cache : Cache) (entry : RemotePushEntry) : IO Unit := do
  IO.FS.createDirAll cache.dir
  let line := ("\n" ++ (toJson entry).compress ++ "\n").toUTF8
  let lock ← IO.FS.Handle.mk cache.pushQueueLockFile .append
  lock.lock
  try
    let h ← IO.FS.Handle.mk cache.pushQueueFile .append
    h.write line
    h.flush
  finally
    lock.unlock

end Cache

end Lake
