/-
Copyright (c) 2026 Lean FRO. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Sami Jawhar
-/
module

prelude
public import Lake.Config.Artifact
public import Lake.Util.Log
public import Lake.Util.Sha256
import Lake.Util.JsonObject
import Init.System.Platform

/-! # Shared Remote Cache

The objects of the shared remote cache, which builds read with `LAKE_REMOTE_CACHE` and which
`lake cache push` writes: under a scope for the Lean, the platform and the package
(`remoteCacheScope`), the input-to-output mapping of each input hash (`RemoteCacheMapping`), and
each artifact, named by its SHA-256 digest.
-/

open System Lean

namespace Lake

/-- The version of the input-hash mappings stored in the shared remote cache. -/
public def remoteCacheSchemaVersion : String := "lake-remote-2026-10-24"

/--
The largest remote artifact Lake accepts: four times the largest artifact (29,899,080 bytes)
measured in a full MachCSL build on 2026-10-25.
-/
public def remoteCacheMaxFileSize : Nat := 119596320

/-- The namespace of a package's input-hash mappings in the shared remote cache. -/
public def remoteCacheScope (githash packageScope : String) : String :=
  s!"v1/{githash}/{System.Platform.target}/{packageScope}"

/--
The outputs of a target for one input, as a remote mapping (`RemoteCacheMapping`) and an entry of
the write-back queue (`RemotePushEntry`) both record them.
-/
public structure RemoteOutputs where
  /-- The input hash of the outputs. -/
  inputHash : Hash
  /-- The build key of the target (for a module, its name). -/
  target : String
  /-- The source hash of a module, or `none` for any other target. -/
  srcHash? : Option Hash
  /-- The artifact descriptors of the outputs, as JSON. -/
  data : Json
  /-- The log of the build that produced the outputs. -/
  log : Log

/-- An input-to-output mapping of the shared remote cache. -/
public structure RemoteCacheMapping extends RemoteOutputs where
  /-- The SHA-256 digest of each artifact of `data`, which names it in the remote cache. -/
  sha256 : Sha256Map

namespace RemoteCacheMapping

public protected def fromJson? (json : Json) : Except String RemoteCacheMapping := do
  let obj ← JsonObject.fromJson? json
  let schemaVersion : String ← obj.get "schemaVersion"
  unless schemaVersion == remoteCacheSchemaVersion do
    throw s!"unknown remote cache schema version: {schemaVersion}"
  return {
    inputHash := ← obj.get "inputHash"
    target := ← obj.get "target"
    srcHash? := ← obj.get "srcHash"
    data := ← obj.get "data"
    sha256 := ← obj.get "sha256"
    log := ← obj.get "log"
  }

public instance : FromJson RemoteCacheMapping := ⟨RemoteCacheMapping.fromJson?⟩

/-- The JSON of the mapping as `lake cache push` uploads it, which `fromJson?` reads back. -/
public protected def toJson (mapping : RemoteCacheMapping) : Json :=
  JsonObject.empty
  |>.insert "schemaVersion" remoteCacheSchemaVersion
  |>.insert "inputHash" mapping.inputHash
  |>.insert "target" mapping.target
  |>.insert "srcHash" mapping.srcHash?
  |>.insert "data" mapping.data
  |>.insert "sha256" mapping.sha256
  |>.insert "log" mapping.log

public instance : ToJson RemoteCacheMapping := ⟨RemoteCacheMapping.toJson⟩

/--
The artifact descriptors of the mapping's outputs, each checked before it can become a local
cache path: it has an extension of the local cache, and the mapping has its SHA-256 digest.
-/
public def checkedArtifactDescrs
  (mapping : RemoteCacheMapping)
: Except String (Array ArtifactDescr) := do
  let descrs ← outputArtifactDescrs? mapping.data
  for descr in descrs do
    unless ArtifactDescr.isCacheExtension descr.ext do
      throw s!"remote mapping has unsupported artifact extension `{descr.ext}`"
    unless mapping.sha256.contains descr.relPath.toString do
      throw s!"remote mapping has no SHA-256 for artifact `{descr}`"
  return descrs

end RemoteCacheMapping

/-- A file to upload to the shared remote cache (see `CacheService.putRemoteObjects`). -/
public structure RemoteUpload where
  /-- The file to upload. -/
  path : FilePath
  /-- The URL of the object to create. -/
  url : String
  /-- The Lake content hash that names the file in messages (for a mapping, its input hash). -/
  hash : Hash
