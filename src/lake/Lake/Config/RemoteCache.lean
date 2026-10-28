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
public import Lake.Util.Url
import Lake.Util.JsonObject
import Init.System.Platform

/-! # Shared Remote Cache

The objects of the shared remote cache, which builds read with `LAKE_REMOTE_CACHE` and which
`lake cache push` writes: under a scope for the Lean, the platform and the package
(`remoteCacheScope`), the input-to-output mapping of each input hash (`RemoteCacheMapping`), and
each artifact, named by its SHA-256 digest. Beside them, under the top-level folder `claim/`, a
build that writes the cache claims each input it is about to compile (`RemoteClaim`).
-/

open System Lean

namespace Lake

/-- The version of the input-hash mappings stored in the shared remote cache. -/
public def remoteCacheSchemaVersion : String := "lake-remote-2026-10-24"

/--
The largest remote artifact Lake accepts: four times the largest artifact (134,284,744 bytes, the
archive of a module) in the shared remote cache of the MachCSL build on 2026-10-26.
-/
public def remoteCacheMaxFileSize : Nat := 537138976

/--
The largest remote mapping Lake accepts: 16 MiB, more than 20 times the largest mapping (753,642
bytes, whose log lists a module's axioms) of the 53,861 in the shared remote cache of the MachCSL
build on 2026-10-26, whose median is 692 bytes. A mapping holds the build's log, which has no
bound of its own, so this one is far above what a mapping is. It also bounds how long a read of a
mapping may take (see `TransferLimits.args`).
-/
public def remoteMappingMaxFileSize : Nat := 16777216

/--
How a build reads an object of the shared remote cache (a mapping or an artifact; see
`TransferLimits`): a try gives up after 3 s without progress, or 3 s without a connection
(`transferConnectSecs`), and the read is tried once more, after 1 s. So a read of a remote that
does not answer ends after 7 s, and the build compiles the target. On 2026-10-26, from an Azure
VM, Cloud Storage answered 15,000 reads of mappings with its first byte within 0.35 s (0.18 s at
the 99.9th percentile), and a 134 MB artifact streamed at 100 MB per second or faster.
-/
public def remoteReadLimits : TransferLimits := {stallSecs := 3, retries := 1, retryMaxSecs := 10}

/--
After how many reads of the shared remote cache in a row that failed once their transfers took at
least the stall time of `remoteReadLimits` (3 s; a remote that does not answer) a build stops
reading the remote cache for the rest of the build (see `RemoteReadStatus`): 3. A read whose
transfers failed sooner (the remote refused it) does not count, however long it waited before
them, and any other read resets the count.
-/
public def remoteReadTimeoutLimit : Nat := 3

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

/-! ## Aliases -/

/--
An alias of the shared remote cache: for an input hash with no mapping of its own, the input hash
of the compile whose outputs a build with usage cutoff kept for it (see `queueRemoteAlias`). It
names no outputs, and nothing trusts it: a reader restores the compile's own mapping and runs the
cutoff's check on it before it uses it (see `readRemoteAlias?`).
-/
public structure RemoteAlias where
  /-- The input hash that the alias is for. -/
  inputHash : Hash
  /-- The build key of the module. -/
  target : String
  /-- The hash of the module's source. -/
  srcHash : Hash
  /-- The input hash of the compile whose outputs the build kept. -/
  compiledFor : Hash

namespace RemoteAlias

public protected def toJson (alias : RemoteAlias) : Json :=
  JsonObject.empty
  |>.insert "schemaVersion" remoteCacheSchemaVersion
  |>.insert "inputHash" alias.inputHash
  |>.insert "target" alias.target
  |>.insert "srcHash" alias.srcHash
  |>.insert "compiledFor" alias.compiledFor

public instance : ToJson RemoteAlias := ⟨RemoteAlias.toJson⟩

public protected def fromJson? (json : Json) : Except String RemoteAlias := do
  let obj ← JsonObject.fromJson? json
  let schemaVersion : String ← obj.get "schemaVersion"
  unless schemaVersion == remoteCacheSchemaVersion do
    throw s!"unknown remote cache schema version: {schemaVersion}"
  return {
    inputHash := ← obj.get "inputHash"
    target := ← obj.get "target"
    srcHash := ← obj.get "srcHash"
    compiledFor := ← obj.get "compiledFor"
  }

public instance : FromJson RemoteAlias := ⟨RemoteAlias.fromJson?⟩

end RemoteAlias

/-! ## Claims -/

/--
The scope of the claims of the inputs of `remoteScope`: `claim/<remoteScope>`, in the top-level
folder `claim/`, the only folder where a writer of the cache may replace objects. The claim of an
input hash is `<that scope>/<inputHash>` below the artifact endpoint (see
`CacheService.remoteClaimUrl`).
-/
public def remoteClaimScope (remoteScope : String) : String :=
  s!"claim/{remoteScope}"

/-- What the holder of a claim does with its input. -/
public inductive RemoteClaimState
/-- The holder compiles the input. -/
| building
/--
The holder compiled the input and queued its outputs for its `lake cache push`, which uploads
them after the holder's build may have ended.
-/
| queued
/-- The compile failed, or ended with nothing to publish: a waiting build compiles the input. -/
| failed
/-- The mapping of the input is in the remote cache. -/
| done
deriving DecidableEq, Repr

namespace RemoteClaimState

public def toString : RemoteClaimState → String
| .building => "building"
| .queued => "queued"
| .failed => "failed"
| .done => "done"

public instance : ToString RemoteClaimState := ⟨RemoteClaimState.toString⟩
public instance : ToJson RemoteClaimState := ⟨(toJson ·.toString)⟩

public instance : FromJson RemoteClaimState := ⟨fun json => do
  match (← fromJson? json : String) with
  | "building" => return .building
  | "queued" => return .queued
  | "failed" => return .failed
  | "done" => return .done
  | s => throw s!"unknown claim state: {s}"⟩

end RemoteClaimState

/--
The body of a claim: the build that holds it (`<host>:<pid>`), what it does, and when it wrote the
claim (seconds since the Unix epoch, by its own clock; a build that decides whether a claim is
stale uses the remote cache's times instead).
-/
public structure RemoteClaim where
  holder : String
  state : RemoteClaimState
  writtenAt : Int

namespace RemoteClaim

public protected def toJson (claim : RemoteClaim) : Json :=
  JsonObject.empty
  |>.insert "holder" claim.holder
  |>.insert "state" claim.state
  |>.insert "at" claim.writtenAt

public instance : ToJson RemoteClaim := ⟨RemoteClaim.toJson⟩

public protected def fromJson? (json : Json) : Except String RemoteClaim := do
  let obj ← JsonObject.fromJson? json
  return {
    holder := ← obj.get "holder"
    state := ← obj.get "state"
    writtenAt := ← obj.get "at"
  }

public instance : FromJson RemoteClaim := ⟨RemoteClaim.fromJson?⟩

end RemoteClaim

/--
How often a build that waits for another build's claim looks for the mapping of its input again:
every 5 seconds, in milliseconds.
-/
public def remoteClaimPollMs : Nat := 5000

/--
How often a build that leaves an input to another build of the same targets looks for that
input's mapping again: every second, in milliseconds. It is shorter than `remoteClaimPollMs`
because the build it waits for has not claimed the input yet, so there is nothing to tell this
build when to look (see `Lake.Build.Claim`).
-/
public def remoteClaimDeferPollMs : Nat := 1000

/--
How long a build must see a claim unchanged, by its own clock, before it takes the claim over
because its holder is a process of this host that no longer runs: 5 seconds. A build that ends
normally leaves its last claims `building` until its push, which outlives it, stages those
entries and writes `queued` with its own process ID; that write gives the claim a new
generation, so a waiter's sighting starts again (see `Lake.Build.Claim`).
-/
public def remoteClaimGoneGraceSecs : Nat := 5

/--
How often the holder of a claim rewrites it while it compiles, in seconds: every 60 seconds, or a
quarter of the takeover time (`LAKE_CLAIM_TAKEOVER_SECS`) if that is shorter, so that a claim
whose holder still compiles never looks stale.
-/
public def remoteClaimRefreshSecs (takeoverSecs : Nat) : Nat :=
  max 1 (min 60 (takeoverSecs / 4))
