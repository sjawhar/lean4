/-
Copyright (c) 2021 Mac Malone. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Mac Malone
-/
module

prelude
public import Init.System.IO
import Init.Data.ToString.Macro
import Std.Time.DateTime.Timestamp

open System

set_option doc.verso true

namespace Lake

/-- Creates any missing parent directories of {lean}`path`. -/
public def createParentDirs (path : FilePath) : IO Unit := do
  if let some dir := path.parent then IO.FS.createDirAll dir

/-- Remove the file at {lean}`path` if it exists. -/
public def removeFileIfExists (path : FilePath) : IO Unit := do
  try IO.FS.removeFile path catch
    | .noFileOrDirectory .. => pure ()
    | e => throw e

/-- Counts the temporary names returned in this process, so that each is new. -/
builtin_initialize tmpPathCount : IO.Ref Nat ← IO.mkRef 0

/--
Returns a new suffix for a temporary file, {lit}`.<pid>.<n>.<random>.tmp`, where {lit}`<n>` counts
the suffixes that this process returned, and {lit}`<random>` is 64 random bits in hexadecimal.
Appended to a path, it names a temporary file next to it (see {lean}`uniqueTmpPath`). No other call
in this process returns the same suffix. A call in another process returns it only by chance, also
in one with the same process ID (e.g., in another container that shares the directory, or on
another host). A caller that must not use another process's file creates the file with
{lean}`IO.FS.Mode.writeNew`.
-/
public def uniqueTmpSuffix : IO String := do
  let n ← tmpPathCount.modifyGet fun n => (n, n + 1)
  let r := (← IO.getRandomBytes 8).foldl (init := 0) fun r b => r * 256 + b.toNat
  return s!".{← IO.Process.getPID}.{n}.{String.ofList (Nat.toDigits 16 r)}.tmp"

/--
Returns a new temporary path next to {lean}`path`, {lit}`<path>.<pid>.<n>.<random>.tmp`: the path
followed by {lean}`uniqueTmpSuffix`, with the same uniqueness.
-/
public def uniqueTmpPath (path : FilePath) : IO FilePath :=
  return path.toString ++ (← uniqueTmpSuffix)

/-- Writes {lean}`content` to a new temporary file next to {lean}`path`, then releases its handle. -/
partial def writeBinFileToNewTmp (path : FilePath) (content : ByteArray) : IO FilePath := do
  let tmp ← uniqueTmpPath path
  let h ← try IO.FS.Handle.mk tmp .writeNew catch
    | .alreadyExists .. => return ← writeBinFileToNewTmp path content
    | e => throw e
  try
    h.write content
    h.flush
  catch e =>
    removeFileIfExists tmp
    throw e
  return tmp

/--
Writes the bytes of {lean}`content` to the new file {lean}`path`. If a file already has that name,
does nothing.

The name never holds part of {lean}`content` where the file system supports hard links. The bytes
go to a new temporary file next to {lean}`path` (see {lean}`uniqueTmpPath`), which is then
hard-linked to {lean}`path` and removed. A hard link never replaces a file. A write that fails
(e.g., on a full disk) leaves no file; one that stops part way (e.g., when the process is killed)
leaves only the temporary file.

Where the file system cannot hard-link, the helper creates {lean}`path` exclusively and writes
{lean}`content` into it, as it did before it used a temporary file. The first of two concurrent
writers wins. The temporary copy is removed. On this fallback, a write that fails or stops can
leave a partial file under {lean}`path`; atomicity needs hard links.

The bytes are flushed to the operating system, not synced to the disk: after a power loss, the
name can hold a file whose data the disk did not keep.
-/
public partial def writeBinFileIfNew (path : FilePath) (content : ByteArray) : IO Unit := do
  if (← path.pathExists) then return
  let tmp ← writeBinFileToNewTmp path content
  -- `tmp` is this call's own file, so it removes it on every path
  try
    match (← (IO.FS.hardLink tmp path).toBaseIO) with
    | .ok _ | .error (.alreadyExists ..) => pure () -- another process created `path` first
    | .error _ =>
      -- `writeBinFileToNewTmp` returned only after it released the temporary handle.
      removeFileIfExists tmp
      let h ← try IO.FS.Handle.mk path .writeNew catch
        | .alreadyExists .. => return -- another process created `path` first
        | e => throw e
      h.write content
      h.flush
  finally
    discard <| (removeFileIfExists tmp).toBaseIO

/--
Writes the UTF-8 encoded string {lean}`content` to the new file {lean}`path`, as
{lean}`writeBinFileIfNew` writes bytes. If a file already has that name, does nothing.
-/
public def writeFileIfNew (path : FilePath) (content : String) : IO Unit :=
  writeBinFileIfNew path content.toUTF8

/-- The wall-clock time, in whole seconds since the Unix epoch (e.g., for the `at` of a status file). -/
public def wallClockSecs : IO Int := do
  return Std.Time.Internal.UnitVal.val (α := 1) (← Std.Time.Timestamp.now).toSecondsSinceUnixEpoch

/--
Replaces the contents of {lean}`path` with {lean}`content`: writes a temporary file next to it
(see {lean}`uniqueTmpPath`) and renames it into place, so that a reader sees either the old or
the new contents, never a part.
-/
public def writeFileAtomic (path : FilePath) (content : String) : IO Unit := do
  createParentDirs path
  let tmp ← uniqueTmpPath path
  try
    IO.FS.writeFile tmp content
    IO.FS.rename tmp path
  finally
    discard <| (removeFileIfExists tmp).toBaseIO

/--
Remove a directory and all its contents.
Like {lean}`IO.FS.removeDirAll`, but does not fail if {lean}`path` does not exist
or if a file is first deleted by a racing process.
-/
public partial def removeDirAllIfExists (path : FilePath) : IO Unit := do
  let ents ← try path.readDir catch
    | .noFileOrDirectory .. => return -- path did not exist or something else was faster
    | e => throw e
  for ent in ents do
    -- Do not follow symlinks
    let mdata ← try ent.path.symlinkMetadata catch
      | .noFileOrDirectory .. => continue -- something else was faster
      | e => throw e
    if mdata.type == .dir then
      removeDirAllIfExists ent.path
    else
      removeFileIfExists ent.path
  try IO.FS.removeDir path catch
    | .noFileOrDirectory .. => return -- something else was faster
    | e => throw e

/-- Copy a file from {lean}`src` to {lean}`dst`. -/
public def copyFile (src dst : FilePath) : IO Unit := do
  let contents ← IO.FS.readBinFile src
  IO.FS.writeBinFile dst contents

/-- Copy a directory and all its contents from {lean}`src` to {lean}`dst`. -/
public partial def copyDirAll (src dst : FilePath) : IO Unit := do
  IO.FS.createDirAll dst
  let ents ← src.readDir
  for ent in ents do
    let srcPath := src / ent.fileName
    let dstPath := dst / ent.fileName
    if (← srcPath.isDir) then
      copyDirAll srcPath dstPath
    else
      copyFile srcPath dstPath

/-- Returns the normalized real path of a file if it exists. Otherwise, returns {lean}`""`. -/
public def resolvePath (path : FilePath) : BaseIO FilePath := do
  match (← (IO.FS.realPath path).toBaseIO) with
  | .ok path =>
    -- Real path does not guarantee the file exists on Windows
    if (← path.pathExists) then
      return path.normalize
    else
      return ""
  | _ =>
    return ""

/-- Returns the normalized real path of a file if and only if it exists. -/
@[inline] public def resolvePath? (path : FilePath) : BaseIO (Option FilePath) := do
  let path ← resolvePath path
  return if path.toString.isEmpty then none else some path
