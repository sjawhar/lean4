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
Appended to a path, it names a temporary file next to it (see {lit}`uniqueTmpPath`). No other call
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
Writes {lean}`content` to a new temporary file next to {lean}`path` and hard-links that to
{lean}`path`, unless a file already has the name. If the hard link fails for another reason than
an existing file, renames the temporary file to {lean}`path` if {lean}`renameIfNoLink` is set, and
otherwise returns the link's error. Removes the temporary file on every path.
-/
def publishNewFile (path : FilePath) (content : ByteArray) (renameIfNoLink : Bool) :
    IO (Except IO.Error Unit) := do
  if (← path.pathExists) then return .ok ()
  let tmp ← writeBinFileToNewTmp path content
  -- `tmp` is this call's own file, so it removes it on every path
  try
    match (← (IO.FS.hardLink tmp path).toBaseIO) with
    | .ok _ | .error (.alreadyExists ..) => return .ok () -- or another process created `path` first
    | .error e =>
      unless renameIfNoLink do return .error e
      IO.FS.rename tmp path
      return .ok ()
  finally
    discard <| (removeFileIfExists tmp).toBaseIO

/--
Writes the bytes of {lean}`content` to the new file {lean}`path`, unless a file already has that
name. Returns {lean}`Except.ok` if a file has the name afterwards (this call's, or one that had
it, which it keeps), or the error of the hard link if that failed for another reason than an
existing file; then this call wrote nothing.

The name never holds part of {lean}`content`. The bytes go to a new temporary file next to
{lean}`path` (see {lean}`uniqueTmpPath`), which is then hard-linked to {lean}`path` and removed. A
hard link publishes a whole file, and never replaces one, so the first of two concurrent writers
wins. A write that fails (e.g., on a full disk) leaves no file; one that stops part way (e.g., when
the process is killed) leaves only the temporary file.

Where the hard link fails (e.g., the file system cannot hard-link), nothing else publishes a whole
file without replacing one: a file created under the name holds part of the bytes until the write
ends, and keeps that part if the write fails or stops. So the call then writes nothing.

The bytes are flushed to the operating system, not synced to the disk: after a power loss, the
name can hold a file whose data the disk did not keep.
-/
public def writeBinFileIfNew (path : FilePath) (content : ByteArray) : IO (Except IO.Error Unit) :=
  publishNewFile path content (renameIfNoLink := false)

/--
Writes the UTF-8 encoded string {lean}`content` to the new file {lean}`path`, unless a file already
has that name, as {lean}`writeBinFileIfNew` writes bytes: the name never holds part of
{lean}`content`. Where the hard link fails for another reason than an existing file (e.g., the file
system cannot hard-link), this renames the temporary file to {lean}`path`, which still publishes a
whole file, but replaces a file that another writer put under the name in the meantime. So it suits
whole files that are equivalent for one name, such as Lake's input-to-output mappings: a reader gets
one of them, whole.
-/
public def writeFileIfNew (path : FilePath) (content : String) : IO Unit :=
  discard <| publishNewFile path content.toUTF8 (renameIfNoLink := true)

/--
Writes the bytes of {lean}`content` to {lean}`path`, replacing a file that has the name. The bytes
go to a new temporary file next to {lean}`path`, which is then renamed to it, so the name holds
either its old file or all of {lean}`content`, and needs no hard link.
-/
public def writeBinFileReplacing (path : FilePath) (content : ByteArray) : IO Unit := do
  let tmp ← writeBinFileToNewTmp path content
  try
    IO.FS.rename tmp path
  finally
    discard <| (removeFileIfExists tmp).toBaseIO

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
