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

/-- The wall-clock time, in whole seconds since the Unix epoch (e.g., for the `at` of a status file). -/
public def wallClockSecs : IO Int := do
  return Std.Time.Internal.UnitVal.val (α := 1) (← Std.Time.Timestamp.now).toSecondsSinceUnixEpoch

/--
Waits until {lean}`task` has finished or the monotonic clock reaches {lean}`deadline` (in
milliseconds), looking every 20 ms. Returns whether the task finished.
-/
public partial def waitUntil (task : Task α) (deadline : Nat) : BaseIO Bool := do
  if ← IO.hasFinished task then
    return true
  if (← IO.monoMsNow) ≥ deadline then
    return false
  IO.sleep 20
  waitUntil task deadline

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
Write the UTF-8 encoded string {lean}`content` to {lean}`path`.
If the file already exists, does nothing.
-/
public def writeFileIfNew (path : FilePath) (content : String) : IO Unit := do
  let h ← try IO.FS.Handle.mk path IO.FS.Mode.writeNew catch
    | .alreadyExists .. => return
    | e => throw e
  h.putStr content

/--
Write the bytes of {lean}`content` to {lean}`path`.
If the file already exists, does nothing.
-/
public def writeBinFileIfNew (path : FilePath) (content : ByteArray) : IO Unit := do
  let h ← try IO.FS.Handle.mk path IO.FS.Mode.writeNew catch
    | .alreadyExists .. => return
    | e => throw e
  h.write content

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
