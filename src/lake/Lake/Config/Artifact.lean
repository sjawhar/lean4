/-
Copyright (c) 2025 Mac Malone. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Mac Malone
-/
module

prelude
public import Lake.Build.Trace

open System Lean

namespace Lake

/-- Returns the relative file path used for an artifact in the Lake cache (i.e., `{hash}.{ext}`). -/
@[inline] public def artifactPath (contentHash : Hash) (ext := "art") : FilePath :=
  if ext.isEmpty then contentHash.toString else s!"{contentHash}.{ext}"

/-- The information needed to identify a single artifact within the Lake cache. -/
public structure ArtifactDescr where
  /-- The artifact's content hash. -/
  hash : Hash
  /-- The artifact's file extension. -/
  ext : String := "art"
  deriving Inhabited, Repr

/--
A content-hashed artifact that should have the file extension `ext`.

Many applications care about the extension of a file (e.g., use it determine
what kind of operation to perform), so the content hash alone may not be sufficient to
produce a useable artifact for consumers.
-/
@[inline] public def artifactWithExt (contentHash : Hash) (ext := "art") : ArtifactDescr :=
  {hash := contentHash, ext}

-- discourage direct use of the constructor
attribute [deprecated artifactWithExt (since := "2025-08-30")] ArtifactDescr.mk

namespace ArtifactDescr

/-- Returns the relative file path used for the output's artifact in the Lake cache (c.f. `artifactPath`). -/
@[inline] public def relPath (self : ArtifactDescr) : FilePath :=
  artifactPath self.hash self.ext

/--
Whether `ext` is one of the extensions Lake writes in its local artifact cache.

Remote mappings are untrusted input. Keeping this list here ensures their descriptors cannot
choose a path outside `Cache.artifactDir`.
-/
public def isCacheExtension (ext : String) : Bool :=
  ext == "" || ext == "art" || ext == "olean" || ext == "olean.server" ||
  ext == "olean.private" || ext == "ilean" || ext == "ir.sig" || ext == "ir" ||
  ext == "c" || ext == "bc" || ext == "o" || ext == "a" || ext == "so" ||
  ext == "dylib" || ext == "dll" || ext == "exe" || ext == "ltar"

public instance : ToString ArtifactDescr := ⟨(·.relPath.toString)⟩
public instance : ToJson ArtifactDescr := ⟨(toJson ·.relPath)⟩

/-- Parse an output's relative file path into an `ArtifactDescr`. -/
public def ofFilePath? (path : FilePath) : Except String ArtifactDescr := do
  let s := path.toString
  let pos := s.find '.'
  if h : pos.IsAtEnd then
    let some hash := Hash.ofString? s
      | throw "expected artifact file name to be a content hash"
    return {hash, ext := ""}
  else
    let some hash := Hash.ofString? <| s.extract s.startPos pos
      | throw "expected artifact file name to be a content hash"
    let ext := s.extract (pos.next h) s.endPos
    return {hash, ext}

public protected def fromJson? (data : Json) : Except String ArtifactDescr := do
  match fromJson? data with
  | .ok (out : String) => ofFilePath? out
  | .error e => throw s!"artifact in unexpected JSON format: {e}"

public instance : FromJson ArtifactDescr := ⟨ArtifactDescr.fromJson?⟩

end ArtifactDescr

/--
Extracts the artifact descriptors of one output value (as a cache mapping records it), failing on
the first one that is malformed. `null` and boolean values are metadata, not artifacts.
-/
public partial def outputArtifactDescrs? (output : Json) : Except String (Array ArtifactDescr) :=
  go #[] output
where
  go descrs output := do
    match output with
    | .null | .bool _ => -- boolean metadata is allowed (as of 2025-03-13)
      return descrs
    | .num n =>
      match Hash.ofJsonNumber? n with
      | .ok hash => return descrs.push {hash}
      | .error reason => throw s!"{reason}: {n}"
    | .str name =>
      return descrs.push (← ArtifactDescr.ofFilePath? name)
    | .arr values =>
      values.foldlM (init := descrs) go
    | .obj values =>
      values.foldlM (init := descrs) fun descrs _ value => go descrs value

/-- A file with a known content hash. -/
public structure Artifact extends descr : ArtifactDescr where
  /-- The preferred path to the artifact on the file system. -/
  path : FilePath
  /-- The artifact's. This is used, for example, as a caption in traces. -/
  name := path.toString
  /-- The artifact's modification time. -/
  mtime : MTime
  deriving Inhabited, Repr

namespace Artifact

/-- Sets the `name` of the artifact. -/
@[inline] public def withName (name : String) (self : Artifact) : Artifact :=
  {self with name := name}

/-- Sets the `name` and `path` of the artifact using the file outside the Lake artifact cache. -/
@[inline] public def useLocalFile (path : FilePath) (self : Artifact) : Artifact :=
  {self with name := path.toString, path}

/--The build trace formed from this single artifact. -/
public def trace (self : Artifact) : BuildTrace :=
  {caption := self.name, mtime := self.mtime, hash := self.hash}
