/-
Copyright (c) 2025 Mac Malone. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Mac Malone
-/
module

prelude
import Init.Control.Do
public import Lake.Util.Git
public import Lake.Util.Log
public import Lake.Util.Version
public import Lake.Config.Artifact
public import Lake.Config.RemoteCache
public import Lake.Util.Sha256
import Lake.Config.InstallPath
import Lake.Build.Actions
import Lake.Util.Url
import Lake.Util.Proc
import Lake.Util.CacheToken
import Lake.Util.Reservoir
import Lake.Util.JsonObject
import Lake.Util.IO
import Init.System.Platform
import Init.Data.String.Lemmas
import Init.Data.String.Legacy

open Lean System

namespace Lake

/-! ## Cache Map -/

public structure CacheMap.Entry where
  private mk ::
    out : Json
    platformIndependent : Bool

/--
Maps an input hash to a structure of output artifact content hashes.

These mappings are stored in a per-package JSON Lines file in the Lake cache.
-/
public abbrev CacheMap := Std.HashMap Hash CacheMap.Entry

namespace CacheMap

/-- The current version of the input-to-output mappings file format. -/
public def schemaVersion : Date := {year := 2026, month := 3, day := 17}

def checkSchemaVersion (inputName : String) (line : String) : LogIO Unit := do
  if line.isEmpty then
    error s!"{inputName}: expected schema version on line 1"
  match Json.parse line >>= fromJson? with
  | .ok (ver : Date) =>
    if ver < schemaVersion then
      logWarning s!"{inputName}: unknown schema version '{ver}'; may not parse correctly"
  | .error e =>
    logWarning s!"{inputName}: invalid header on line 1: {e}"

def parseCacheEntry [Monad m] [MonadLog m]
  (inputName : String) (lineNo : Nat) (cache : CacheMap) (line : String)
  (platformIndependent : Bool)
: m CacheMap := do
  match go with
  | .ok cache =>
    return cache
  | .error e =>
    logWarning s!"{inputName}: invalid JSON on line {lineNo}: {e}"
    return cache
where go : Except String CacheMap := do
  let json ← Json.parse line
  let a : Array Json ← fromJson? json
  let inputHash ← a[0]?.elim (throw "expected array of size > 0") (fromJson? ·)
  let out ← a[1]?.elim (throw "expected array of size > 1") (fromJson? ·)
  return cache.insert inputHash {out, platformIndependent}

/--
Parse a `Cache` from a JSON Lines string.

If `platformIndependent := true`, all mappings within the file are considered
platform-independent. Otherwise, they are considered platform-dependent.
-/
public partial def parse
  (inputName : String) (contents : String) (platformIndependent := false)
: LoggerIO CacheMap := do
  let rec loop (i : Nat) (cache : CacheMap) {contents : String} (pos : contents.Pos) := do
    let lfPos := pos.find '\n'
    let line := contents.slice pos lfPos (by simp [lfPos])
    if line.trimAscii.isEmpty then
      return cache
    let cache ← parseCacheEntry inputName i cache line.copy platformIndependent
    if h : lfPos.IsAtEnd then
      return cache
    else
      loop (i+1) cache (lfPos.next h)
  let lfPos := contents.find '\n'
  let line := contents.sliceTo lfPos
  checkSchemaVersion inputName line.trimAscii.copy
  if h : lfPos.IsAtEnd then
    return {}
  else
    loop 2 {} (lfPos.next h)

@[inline] partial def loadCore
  (h : IO.FS.Handle) (fileName : String) (platformIndependent : Bool)
: LogIO CacheMap := do
  let rec loop (i : Nat) (cache : CacheMap) := do
    let line ← h.getLine
    if line.isEmpty then
      return cache
    let cache ← parseCacheEntry fileName i cache line platformIndependent
    loop (i+1) cache
  let line ← h.getLine
  checkSchemaVersion fileName line
  loop 2 {}

/--
Loads a `CacheMap` from a JSON Lines file.
Errors if the file is ill-formatted or the read fails for other reasons.

If `platformIndependent := true`, all mappings within the file are considered
platform-independent. Otherwise, they are considered platform-dependent.
-/
public def load (file : FilePath) (platformIndependent := false) : LogIO CacheMap := do
  match (← IO.FS.Handle.mk file .read |>.toBaseIO) with
  | .ok h =>
    h.lock (exclusive := false)
    loadCore h file.toString platformIndependent
  | .error e =>
    error s!"{file}: failed to open file: {e}"

/--
Loads a `CacheMap` from a JSON Lines file. Returns `none` if the file does not exist.
Errors if the manifest is ill-formatted or the read fails for other reasons.

If `platformIndependent := true`, all mappings within the file are considered
platform-independent. Otherwise, they are considered platform-dependent.
-/
public def load? (file : FilePath) (platformIndependent := false) : LogIO (Option CacheMap) := do
  match (← IO.FS.Handle.mk file .read |>.toBaseIO) with
  | .ok h =>
    h.lock (exclusive := false)
    loadCore h file.toString platformIndependent
  | .error (.noFileOrDirectory ..) =>
    return none
  | .error e =>
    error s!"{file}: failed to open file: {e}"

def writeCacheEntries
  (h : IO.FS.Handle) (cache : CacheMap) (platformIndependent : Bool)
: LogIO Unit :=
  if platformIndependent then
    cache.forM fun k ⟨v, platformIndependentMapping⟩ => do
      -- skip platform-dependent outputs in platform-independent maps
      if platformIndependentMapping then
        h.putStrLn (Json.arr #[toJson k, toJson v]).compress
  else
    cache.forM fun k ⟨v, _⟩ => do
      h.putStrLn (Json.arr #[toJson k, toJson v]).compress

/--
Save a `CacheMap` to a JSON Lines file.
Entries already in the file but not in the map will not be removed.
-/
public def updateFile
  (file : FilePath) (cache : CacheMap)
: LogIO Unit := do
  createParentDirs file
  discard <| IO.FS.Handle.mk file .append -- ensure file exists
  match (← IO.FS.Handle.mk file .readWrite |>.toBaseIO) with
  | .ok h =>
    h.lock (exclusive := true)
    let currEntries ← loadCore h file.toString false
    let cache := cache.fold (fun m k v => m.insert k v) currEntries
    h.rewind
    writeCacheEntries h cache false
  | .error e =>
    error s!"{file}: failed to open file: {e}"

/--
Write a `CacheMap` to a JSON Lines file.

If `platformIndependent := true`, platform-dependent mappings within the map
will not be written to the file.
-/
public def writeFile
  (file : FilePath) (cache : CacheMap) (platformIndependent := false)
: LogIO Unit := do
  createParentDirs file
  match (← IO.FS.Handle.mk file .write |>.toBaseIO) with
  | .ok h =>
    h.lock (exclusive := true)
    h.putStrLn (toJson schemaVersion).compress
    writeCacheEntries h cache platformIndependent
  | .error e =>
    error s!"{file}: failed to open file: {e}"

/-- Returns the output data associated with the input hash in the cache. -/
public nonrec def get? (inputHash : Hash) (cache : CacheMap) : Option Json :=
  cache.get? inputHash >>= (·.out) -- specializes `get?`

/-- Associate output data (as JSON) with the given the input hash. -/
def insertCore
  (inputHash : Hash) (out : Json) (cache : CacheMap)
  (platformIndependent : Bool)
: CacheMap := cache.insert inputHash {out, platformIndependent}

/-- Associate output data with the given the input hash. -/
@[inline] public def insert
  [ToJson α] (inputHash : Hash) (val : α) (cache : CacheMap)
  (platformIndependent := false)
: CacheMap := cache.insertCore inputHash (toJson val) platformIndependent

/-- Extract each output from their structured data into a flat array of artifact descriptions. -/
public def collectOutputDescrs (map : CacheMap) : LogIO (Array ArtifactDescr) := do
  throwIfLogs <| map.foldM (init := #[]) fun as _ e => do
    match outputArtifactDescrs? e.out with
    | .ok descrs =>
      return as ++ descrs
    | .error err =>
      logError s!"unsupported output: {err}"
      return as

end CacheMap

/-! ## Cache Ref -/

/-- A mutable reference to a `CacheMap`. -/
public abbrev CacheRef := IO.Ref CacheMap

namespace CacheRef

@[inline] public def mk (init : CacheMap := {}) : BaseIO CacheRef :=
  IO.mkRef init

@[inline, inherit_doc CacheMap.get?]
public def get? (inputHash : Hash) (cache : CacheRef) : BaseIO (Option Json) :=
  cache.modifyGet fun m => (m.get? inputHash, m)

@[inline, inherit_doc CacheMap.insert]
public def insert
  [ToJson α] (inputHash : Hash) (val : α) (cache : CacheRef)
  (platformIndependent := false)
: BaseIO Unit := cache.modify (·.insert inputHash (toJson val) platformIndependent)

end CacheRef

/-! ## Cache Service Name -/

/-- The type of service identifiers used by the Lake ache. -/
public structure CacheServiceName where
  private mk ::
    private raw : String

namespace CacheServiceName

/-- The identifier used for the default Reservoir service (i.e., `reservoir`). -/
public def reservoir : CacheServiceName := ⟨"reservoir"⟩

/-- Constructs a service identifier from a user-provided name. -/
@[inline] public def ofString (s : String) : CacheServiceName := ⟨s⟩

/-- Returns the string representation of the service identifier. -/
@[inline] public protected def toString (self : CacheServiceName) : String :=
  self.raw

public instance : ToString CacheServiceName := ⟨CacheServiceName.toString⟩

@[inline] protected def fromJson? (j : Json) : Except String CacheServiceName :=
  .mk <$> fromJson? j

instance : FromJson CacheServiceName := ⟨CacheServiceName.fromJson?⟩

@[inline] protected def toJson (self : CacheServiceName) : Json :=
  toJson self.raw

instance : ToJson CacheServiceName := ⟨CacheServiceName.toJson⟩

end CacheServiceName

/-! ## Cache Service Scope -/

inductive CacheServiceScopeImpl
| str (s : String)
| repo (s : String)

/-- The type of artifact prefixes in a Lake cache service. -/
public structure CacheServiceScope where
  private mk ::
    private impl : CacheServiceScopeImpl

namespace CacheServiceScope

/-- Constructs a generic service scope from a user-provided string. -/
public def ofString (s : String) : CacheServiceScope := ⟨.str s⟩

/-- Constructs a service scope from a GitHub repository name. -/
public def ofRepo (fullName : String) : CacheServiceScope := ⟨.repo fullName⟩

/-- Returns whether this is a repository scope. -/
public protected def isRepo (self : CacheServiceScope) : Bool :=
  match self.impl with
  | .repo .. => true
  | _ => false

/-- Returns a string representation of the scope. -/
public protected def toString (self : CacheServiceScope) : String :=
  match self.impl with
  | .str s => s
  | .repo s => s

public instance : ToString CacheServiceScope := ⟨CacheServiceScope.toString⟩

/-- Returns a JSON representation of the scope. -/
protected def toJson (self : CacheServiceScope) : Json :=
  match self.impl with
  | .str s => s
  | .repo s => s

instance : ToJson CacheServiceScope := ⟨CacheServiceScope.toJson⟩

end CacheServiceScope

/-! ## Cache Output -/

/-- The current version of the output file format. -/
public def CacheOutput.schemaVersion : String := "2026-02-25"

public structure CacheOutput where
  private mk ::
    data : Json
    service? : Option CacheServiceName := none
    scope? : Option CacheServiceScope := none
    /-- The log of the build that produced the outputs, replayed when they are restored. -/
    log? : Option Log := none
    /-- SHA-256 digests of remote artifacts, keyed by `ArtifactDescr.relPath`. -/
    sha256? : Option Sha256Map := none
    deriving Inhabited

namespace CacheOutput

/-- **For internal use only.** -/
@[inline] public def ofData (data : Json) : CacheOutput := {data}

public protected def toJson (out : CacheOutput) : Json := Id.run do
  let mut obj :=
    JsonObject.empty
    |>.insert "schemaVersion" schemaVersion
    |>.insert "service" out.service?
  if let some scope := out.scope? then
    obj := obj.insert (if scope.isRepo then "repo" else "scope") scope.toJson
  obj := obj.insertSome "log" out.log?
  obj := obj.insertSome "sha256" out.sha256?
  return obj.insert "data" out.data

public instance : ToJson CacheOutput := ⟨CacheOutput.toJson⟩

public protected def fromJson? (json : Json) : Except String CacheOutput := do
  if let .obj obj := json then
    let obj := JsonObject.mk obj
    if obj.contains "schemaVersion" then
      -- presumably the new format
      -- (the edge case of a custom output with a `schemaVersion` is not worth covering)
      let data ← obj.get "data"
      let service? ← obj.get? "service"
      let repo? : Option String ← obj.get? "repo"
      let scope? ← id do
        if let some repo := repo? then
          return some (.ofRepo repo)
        else if let some scope ← obj.get? "scope" then
          return some (.ofString scope)
        else
          return none
      let log? ← obj.get? "log"
      let sha256? ← obj.get? "sha256"
      return {data, service?, scope?, log?, sha256?}
  -- old format: just the data
  return .ofData json

public instance : FromJson CacheOutput := ⟨CacheOutput.fromJson?⟩

end CacheOutput

/-! ## Local Cache -/

/-- The Lake cache directory. -/
public structure Cache where
  dir : FilePath
  deriving Inhabited

namespace Cache

/-- Returns the artifact directory for the Lake cache. -/
@[inline] public def artifactDir (cache : Cache) : FilePath :=
  cache.dir / "artifacts"

/-- Returns the path to artifact in the Lake cache with extension `ext`. -/
@[inline] public protected def artifactPath (cache : Cache) (contentHash : Hash) (ext := "art")  : FilePath :=
  cache.artifactDir / artifactPath contentHash ext

/-- Returns the artifact in the Lake cache corresponding the given artifact description. -/
@[deprecated "Deprecated without replacement." (since := "2025-03-04")]
public def getArtifact? (cache : Cache) (descr : ArtifactDescr) : BaseIO (Option Artifact) := do
  let path := cache.artifactDir / descr.relPath
  let .ok mtime ← getMTime path |>.toBaseIO
    | return none
  return some {descr, path, mtime}

/-- Returns the artifact in the Lake cache corresponding the given artifact description. Errors if missing. -/
@[deprecated "Deprecated without replacement." (since := "2025-03-04")]
public def getArtifact (cache : Cache) (descr : ArtifactDescr) : EIO String Artifact := do
  let path := cache.artifactDir / descr.relPath
  match (← getMTime path |>.toBaseIO) with
  | .ok mtime =>
    return {descr, path, mtime}
  | .error (.noFileOrDirectory ..) =>
    error s!"artifact not found in cache: {path}"
  | .error e =>
    error s!"failed to retrieve artifact from cache: {e}"

/-- The directory where input-to-output mappings are stored in the Lake cache. -/
@[inline] public def outputsDir (cache : Cache) : FilePath :=
  cache.dir / "outputs"

/-- The file containing the outputs of the given input for the package. -/
@[inline] public def outputsFile (cache : Cache) (scope : String) (inputHash : Hash) : FilePath  :=
  cache.outputsDir / scope / s!"{inputHash}.json"

/--
Cache the outputs corresponding to the given input for the package. With `overwrite`, the new
mapping replaces any old one through a new temporary file that is renamed over it (see
`writeFileAtomic`), so two processes that write the same mapping at once leave one of their two
whole mappings, never a mix of both. Without `overwrite`, an existing mapping is kept.
-/
def writeOutputsCore
  (cache : Cache) (scope : String) (inputHash : Hash) (out : Json)
  (service? : Option CacheServiceName) (remoteScope? : Option CacheServiceScope)
  (log : Log) (sha256? : Option Sha256Map) (overwrite : Bool)
: IO Unit := do
  let file := cache.outputsFile scope inputHash
  unless overwrite do
    -- A mapping that is kept as it is need not be rendered
    if (← file.pathExists) then return
  createParentDirs file
  -- Verbose entries (e.g., the command line of the build) are diagnostics of the build
  -- in the tree that ran it and name its paths, so they are not kept with the outputs.
  let log := log.filter (·.level ≥ .info)
  let log? := if log.isEmpty then none else some log
  let out := {service?, scope? := remoteScope?, data := out, log?, sha256? : CacheOutput}
  let contents := (toJson out).pretty
  if overwrite then
    writeFileAtomic file contents
  else
    writeFileIfNew file contents

/--
Cache the outputs corresponding to the given input for the package,
along with the log of the build that produced them.
-/
public def writeOutputs
  [ToJson α] (cache : Cache) (scope : String) (inputHash : Hash) (outputs : α)
  (service? : Option CacheServiceName := none) (remoteScope? : Option CacheServiceScope := none)
  (log : Log := {}) (sha256? : Option Sha256Map := none) (overwrite := true)
: IO Unit := cache.writeOutputsCore scope inputHash (toJson outputs) service? remoteScope? log sha256? overwrite

/-- Cache the input-to-outputs mappings from a `CacheMap`.  -/
public def writeMap
  (cache : Cache) (scope : String) (map : CacheMap)
  (service? : Option CacheServiceName := none) (remoteScope? : Option CacheServiceScope := none)
  (overwrite := true)
: IO Unit := map.forM fun i e => cache.writeOutputsCore scope i e.out service? remoteScope? {} none overwrite

/-- Retrieve the cached outputs corresponding to the given input for the package (if any). -/
public def readOutputs? (cache : Cache) (scope : String) (inputHash : Hash) : LogIO (Option CacheOutput) := do
  let path := cache.outputsFile scope inputHash
  match (← IO.FS.readFile path |>.toBaseIO) with
  | .ok contents =>
    match Json.parse contents >>= fromJson? with
    | .ok out =>
      return some out
    | .error e =>
      error s!"{path}: invalid JSON: {e}"
  | .error (.noFileOrDirectory ..) => return none
  | .error e => error s!"{path}: read failed: {e}"

/-- The directory where input-to-output mappings of downloaded package revisions are cached. -/
@[inline] public def revisionDir (cache : Cache) : FilePath :=
  cache.dir / "revisions"

/-- Returns path to the input-to-output mappings of a downloaded package revision. -/
@[inline] public def revisionPath (cache : Cache) (scope : String) (rev : GitRev) : FilePath :=
  cache.revisionDir / scope / s!"{rev}.jsonl"

end Cache

/-! ## Cache Platform -/

/-- The type of platform identifiers used by the Lake ache. -/
public structure CachePlatform where
  private mk ::
    private raw : String

namespace CachePlatform

/-- An indicator that no platform should be included in a cache scope. -/
public def none : CachePlatform := ⟨""⟩

/-- Returns `true` if this platform identifier is the `none` indicator. -/
@[inline] public def isNone (self : CachePlatform) : Bool := self.raw.isEmpty

/-- The identifier of the host platform (e.g., `System.Platform.target`). -/
public def system : CachePlatform := ⟨System.Platform.target⟩

/-- Constructs a platform identifier from a user-provided string. -/
@[inline] public def ofString (s : String) : CachePlatform := ⟨s⟩

/-- Returns the length of the platform identifier in Unicode code points. -/
public def length (self : CachePlatform) : Nat := self.raw.chars.length

/-- Returns a string representation of the platform identifier. -/
public protected def toString (self : CachePlatform) : String :=
  if self.isNone then "none" else self.raw

instance : ToString CachePlatform := ⟨CachePlatform.toString⟩

end CachePlatform

/-! ## Cache Toolchain -/

/-- The type of toolchain identifiers used by the Lake ache. -/
public structure CacheToolchain where
  private mk ::
    private raw : String

namespace CacheToolchain

/-- An indicator that no toolchain should be included in a cache scope. -/
public def none : CacheToolchain := ⟨""⟩

/-- Returns `true` if this toolchain identifier is the `none` indicator. -/
@[inline] public def isNone (self : CacheToolchain) : Bool := self.raw.isEmpty

/-- Constructs a toolchain identifier from a user-provided string. -/
public def ofString (s : String) : CacheToolchain := ⟨normalizeToolchain s⟩

/-- **For internal use only.** See `Lake.Env.cacheToolchain`. -/
@[inline] public def ofElanToolchain (s : String) : CacheToolchain := ⟨s⟩

/-- Returns the length of the toolchain identifier in Unicode code points. -/
public def length (self : CacheToolchain) : Nat := self.raw.chars.length

/-- Returns a string representation of the toolchain identifier. -/
public protected def toString (self : CacheToolchain) : String :=
  if self.isNone then "none" else self.raw

instance : ToString CacheToolchain := ⟨CacheToolchain.toString⟩

end CacheToolchain

/-! ## Remote Cache Service -/

/--
**For internal use only.**
Downloads the artifact with the content hash `hash` from `url` to `path` (see `download`), which
it replaces only with bytes of that hash. With `sha256?` (for an artifact of the shared remote
cache), the bytes must also have that SHA-256 digest, which is checked first. With
`maxFileSize?`, a larger download fails.
-/
public def downloadArtifactCore
  (hash : Hash) (url : String) (path : FilePath) (cacheToken := false)
  (sha256? : Option Sha256 := none) (maxFileSize? : Option Nat := none)
: LogIO Unit := do
  download url path (cacheToken := cacheToken) (maxFileSize? := maxFileSize?)
    (check := fun tmp => do
      if let some sha256 := sha256? then
        let actualSha256 ← sha256File tmp
        if actualSha256 != sha256 then
          error s!"{path}: downloaded artifact SHA-256 mismatch, got {actualSha256}"
      let actualHash ← computeFileHash tmp
      if actualHash != hash then
        error s!"{path}: downloaded artifact hash mismatch, got {actualHash}")

/--
Uploads a file to an online bucket using the Amazon S3 protocol. The upload gives up when it
stalls (see `transferTimeoutArgs`).

The request is signed with `key` (AWS Signature Version 4), unless it carries the cache token
(`cacheToken`; see `withCacheTokenRequest`). With the token, the request only creates the object
(`x-goog-if-generation-match: 0`), and an object that is already present (HTTP 412) is not an
error: then the result is `false`.
-/
def uploadS3
  (file : FilePath) (contentType : String) (url : String) (key : String) (cacheToken := false)
: LoggerIO Bool := do
  let (code, out, token) ← withCacheTokenRequest url cacheToken (follow := false)
    fun token args => do
      let auth :=
        if token then
          #["-H", "x-goog-if-generation-match: 0"]
        else
          #["--aws-sigv4", "aws:amz:auto:s3", "--user", key]
      let out ← captureProc' {
        cmd := ← Internal.getCurl
        args := args ++ #["-s", "-w", "%{stderr}%{json}\n"] ++ auth ++ transferTimeoutArgs ++ #[
          "-X", "PUT", "-T", file.toString, url,
          "-H",  s!"Content-Type: {contentType}"
        ]
      }
      return (← curlResponseCode out.stderr, out)
  if code == 200 || (token && code == 201) then
    return true
  else if token && code == 412 then
    return false
  else
    error s!"failed to upload artifact, error {code}; received:\n{out.stdout}"

structure CacheServiceImpl where
  mk ::
    name? : Option CacheServiceName := none
    /- S3 Bucket -/
    key : String := ""
    artifactEndpoint : String := ""
    revisionEndpoint : String := ""
    /-- Whether requests to the host of the artifact endpoint carry the cache token. -/
    cacheToken : Bool := false
    /- Reservoir -/
    isReservoir : Bool := false
    apiEndpoint : String := ""
    deriving Nonempty

/--
Configuration of a remote cache service (e.g., Reservoir or an S3 bucket).

A given configuration is not required to support all cache service functions, and no validation
of the configuration is performed by its operations. Users should construct a service that supports
the desired functions by using `CacheService`'s smart constructors
(e.g., `reservoir`, `uploadService`).
-/
public structure CacheService where
  private mk ::
    private impl : CacheServiceImpl
    deriving Nonempty

namespace CacheService

/-- Returns the name (if any) used to identify the service. -/
@[inline] public def name? (service : CacheService) : Option CacheServiceName :=
  service.impl.name?

/-- Returns whether this is a Reservoir cache service configuration. -/
@[inline] public def isReservoir (service : CacheService) : Bool :=
  service.impl.isReservoir

/-! ### Constructors -/

/-- Constructs a `CacheService` for a Reservoir endpoint. -/
@[inline] public def reservoirService
  (apiEndpoint : String) (name? := some CacheServiceName.reservoir)
: CacheService := .mk {name?, isReservoir := true, apiEndpoint}

/-- Constructs a `CacheService` to upload artifacts and/or outputs to an S3 endpoint. -/
@[inline] public def uploadService
  (key artifactEndpoint revisionEndpoint : String)
: CacheService := .mk {key, artifactEndpoint, revisionEndpoint}

/-- Constructs a `CacheService` to download artifacts and/or outputs from an S3 endpoint. -/
@[inline] public def downloadService
  (artifactEndpoint revisionEndpoint : String) (name? : Option CacheServiceName := none)
: CacheService := .mk {name?, artifactEndpoint, revisionEndpoint}

/-- Constructs a `CacheService` to download just artifacts from an S3 endpoint. -/
@[inline] public def downloadArtsService
  (artifactEndpoint : String) (name? : Option CacheServiceName := none)
: CacheService := .mk {name?, artifactEndpoint}

/-- Reconfigures the cache service to use the provided key (for uploads).-/
@[inline] public def withKey (service : CacheService) (key : String) : CacheService :=
  .mk {service.impl with key}

/--
Reconfigures the cache service to send the cache token (see `CacheToken.get?`) with its requests
to the host of its artifact endpoint. Lake does so for the `s3` service that `LAKE_REMOTE_CACHE`
names when `LAKE_CACHE_TOKEN_CMD` is set.
-/
@[inline] public def withCacheToken (service : CacheService) : CacheService :=
  .mk {service.impl with cacheToken := true}

/-- Returns whether the service sends the cache token (see `withCacheToken`). -/
@[inline] public def usesCacheToken (service : CacheService) : Bool :=
  service.impl.cacheToken

/--
Returns whether a request of the service to `url` carries the cache token: only if the service
uses it, and only if `url` is on the host (and port) of the service's artifact endpoint.
-/
public def sendsCacheToken (service : CacheService) (url : String) : Bool :=
  service.usesCacheToken &&
    match urlOrigin? url, urlOrigin? service.impl.artifactEndpoint with
    | some origin, some endpointOrigin => origin == endpointOrigin
    | _, _ => false

/--
The error of an upload to `dest` that can neither carry the cache token nor be signed with a key.
-/
public def uploadCredentialError (dest : String) : String :=
  s!"uploading to {dest} requires an authentication key configured through `LAKE_CACHE_KEY` \
    (or, for the service that `LAKE_REMOTE_CACHE` names, a token command configured through \
    `LAKE_CACHE_TOKEN_CMD`, whose token goes only to the host of that service's artifact endpoint)"

/--
Uploads `file` to `url` with the cache token if the request carries it (see `sendsCacheToken`),
and otherwise with the service's key. Returns `false` if the object is already present,
which only a request with the token reports (see `uploadS3`).
-/
def uploadFile
  (service : CacheService) (file : FilePath) (contentType : String) (url : String)
: LoggerIO Bool := do
  let cacheToken := service.sendsCacheToken url
  if !cacheToken && service.usesCacheToken && service.impl.key.isEmpty then
    error (uploadCredentialError url)
  uploadS3 file contentType url service.impl.key cacheToken

/-! ### Artifact Transfer -/

/-- The MIME type of a Lake/Reservoir artifact. -/
public def artifactContentType : String := "application/vnd.reservoir.artifact"

def appendScope (endpoint : String) (scope : String) : String :=
  scope.split '/' |>.fold (init := endpoint) fun s component =>
    uriEncode component.copy (s.push '/')

/-- A URL below an S3 service's artifact endpoint for the shared input-hash cache. -/
public def remoteObjectUrl (service : CacheService) (scope object : String) : String :=
  s!"{appendScope service.impl.artifactEndpoint scope}/{object}"

/-- The remote mapping URL for an input hash. -/
public def remoteMappingUrl (service : CacheService) (scope : String) (inputHash : Hash) : String :=
  service.remoteObjectUrl scope s!"in/{inputHash}.json"

/-- The remote artifact URL for a SHA-256 digest. -/
public def remoteArtifactUrl (service : CacheService) (scope : String) (sha256 : Sha256) : String :=
  service.remoteObjectUrl scope s!"a/{sha256}.art"

/-- The URL of the claim of an input hash (see `remoteClaimScope`). -/
public def remoteClaimUrl (service : CacheService) (scope : String) (inputHash : Hash) : String :=
  service.remoteObjectUrl (remoteClaimScope scope) inputHash.toString

/--
The answer to a request for an object of the shared remote cache that the request reads the
headers of (see `getRemoteObject`, `putRemoteObjectIf`).
-/
public structure RemoteObjectResponse where
  /-- The HTTP status code. -/
  code : Nat
  /-- The header fields of the response, each name lowercased. -/
  headers : Array (String × String)
  /-- The body of the response. -/
  body : String

/-- The value of the header field `name` (lowercase) of the response, if it has one. -/
public def RemoteObjectResponse.header? (r : RemoteObjectResponse) (name : String) : Option String :=
  r.headers.findSome? fun (n, v) => if n == name then some v else none

/--
The header fields that `curl -D` wrote: those of the last response only (a request that `curl`
retried writes each response's), each name lowercased.
-/
def parseResponseHeaders (text : String) : Array (String × String) :=
  text.splitOn "\n" |>.foldl (init := #[]) fun headers line =>
    let line := line.trimAscii.copy
    if line.startsWith "HTTP/" then
      #[]
    else match line.splitOn ":" with
      | name :: value@(_ :: _) =>
        headers.push (name.trimAscii.copy.toLower, (":".intercalate value).trimAscii.copy)
      | _ => headers

/--
How long one request for an object of the shared remote cache that a build makes for a claim may
take in all, in seconds (`curl --max-time`), so that a request that is answered but keeps sending
stays bounded. Claim requests are not retried (a claim that fails is a cache miss), so each
request ends within this time.

Each send carries the cache token, which `LAKE_CACHE_TOKEN_CMD` may have to print first (see
`withCacheTokenRequest`): before the first send when this process holds no token, or one older than
45 minutes (`cacheTokenFor?`), and again before the one second send after a refusal of the token
(401, `CacheToken.renew`). Each run of the command is bounded by its own limit
(`CacheToken.timeLimitMs`, 60 s). So a claim request takes at most two runs of the command and two
sends: 60 + 20 + 60 + 20 = 160 seconds with the limits as they are.
-/
def remoteObjectMaxSecs : Nat := 20

/-- The most bytes that the body of an answer to a claim request may have: a claim is far smaller. -/
def remoteObjectMaxBytes : Nat := 65536

/--
Sends one request for the object at `url` with the cache token (see `withCacheTokenRequest`),
never following a redirect, and returns the answer with its header fields. `args` are the
request's own `curl` arguments. Errors if the request cannot carry the token: these requests are
for the service that `LAKE_REMOTE_CACHE` names, which accepts no other credential. A transfer
that `curl` could not finish (e.g., a connection that failed) is an error, as is a stall (see
`transferTimeoutArgs`), a request that has not ended after `remoteObjectMaxSecs`, and a body larger
than `remoteObjectMaxBytes`. A request is not retried, except once with a renewed token after a
401 (see `withCacheTokenRequest`). The body goes to a temporary file, never to memory, while it
arrives.
-/
def requestRemoteObject
  (service : CacheService) (url : String) (args : Array String)
: LogIO RemoteObjectResponse := do
  unless service.sendsCacheToken url do
    error s!"a request for {url} needs the token of `{CacheToken.cmdVar}` for its host"
  IO.FS.withTempFile fun _ headerFile => IO.FS.withTempFile fun _ bodyFile => do
    let (code, exitCode, _) ← withCacheTokenRequest url true (follow := false) fun _ lead => do
      let out ← rawProc (quiet := true) {
        cmd := ← Internal.getCurl
        args := lead ++ #["-s", "-w", "%{stderr}%{json}\n", "-D", headerFile.toString,
          "-o", bodyFile.toString,
          "--max-time", toString remoteObjectMaxSecs,
          "--max-filesize", toString remoteObjectMaxBytes] ++
          transferTimeoutArgs ++ args ++ #[url]
      }
      return (← curlResponseCode out.stderr, out.exitCode)
    -- `curl` reports the status of an answer that it then did not receive whole
    unless exitCode == 0 do
      error s!"the request for {url} did not finish (curl exit code {exitCode}; a request may \
        take {remoteObjectMaxSecs} s and its answer {remoteObjectMaxBytes} bytes)"
    let size := (← bodyFile.metadata).byteSize
    if size > remoteObjectMaxBytes.toUInt64 then
      error s!"the answer to the request for {url} has {size} bytes, more than \
        {remoteObjectMaxBytes}"
    let headers := parseResponseHeaders (← IO.FS.readFile headerFile)
    return {code, headers, body := ← IO.FS.readFile bodyFile}

/--
Reads the object at `url` (with the cache token; see `requestRemoteObject`). A missing object is
an answer with code 404. The read is not retried: a claim that cannot be read is a cache miss.
-/
public def getRemoteObject (service : CacheService) (url : String) : LogIO RemoteObjectResponse :=
  service.requestRemoteObject url #[]

/--
Writes `body` as the object at `url` (with the cache token; see `requestRemoteObject`) only if the
object has the generation `generation` (`x-goog-if-generation-match`; `0` names an object that does
not exist). The answer has code 200 and the object's new generation in `x-goog-generation` if the
write happened, and code 412 if the object had another generation. The request is sent once: a
retry of a write that happened but whose answer was lost would find the new generation and report
412.
-/
public def putRemoteObjectIf
  (service : CacheService) (url body : String) (generation : String)
: LogIO RemoteObjectResponse :=
  service.requestRemoteObject url #[
    "-X", "PUT", "--data-binary", body,
    "-H", "Content-Type: application/json",
    "-H", s!"x-goog-if-generation-match: {generation}"
  ]

def s3ArtifactUrl (contentHash : Hash) (service : CacheService) (scope : CacheServiceScope) : String :=
  let endpoint :=
    match scope.impl with
    | .repo scope => appendScope service.impl.artifactEndpoint scope
    | .str scope => appendScope service.impl.artifactEndpoint scope
  s!"{endpoint}/{contentHash.hex}.art"

public def artifactUrl (contentHash : Hash) (service : CacheService) (scope : CacheServiceScope) : String :=
  if service.isReservoir then
    let endpoint :=
      match scope.impl with
      | .repo scope => appendScope s!"{service.impl.apiEndpoint}/repositories" scope
      | .str scope => appendScope s!"{service.impl.apiEndpoint}/packages" scope
    s!"{endpoint}/artifacts/{contentHash.hex}.art"
  else
    service.s3ArtifactUrl contentHash scope

public def downloadArtifact
  (descr : ArtifactDescr) (cache : Cache)
  (service : CacheService) (scope : CacheServiceScope) (force := false)
: LoggerIO Unit := do
  let url := service.artifactUrl descr.hash scope
  let path := cache.artifactDir / descr.relPath
  if (← path.pathExists) && !force then
    return
  logInfo s!"{scope}: downloading artifact {descr.hash}\
    \n  local path: {path}\
    \n  remote URL: {url}"
  downloadArtifactCore descr.hash url path (cacheToken := service.sendsCacheToken url)

public def uploadArtifact
  (contentHash : Hash) (art : FilePath) (service : CacheService) (scope : CacheServiceScope)
: LoggerIO Unit := do
  let url := service.s3ArtifactUrl contentHash scope
  logInfo s!"\
    {scope}: uploading artifact {contentHash}\
    \n  local path: {art}\
    \n  remote URL: {url}"
  unless (← service.uploadFile art artifactContentType url) do
    logInfo s!"{scope}: artifact {contentHash} already present\n  remote URL: {url}"

/-! ## Multi-Artifact Transfer -/

inductive TransferKind
  | get
  | put
  deriving DecidableEq

/--
Writes `contents` as the cache artifact `path`: to a new temporary file next to it (see
`uniqueTmpPath`), which is then renamed to `path`. A process that reads `path` meanwhile (e.g., a
build that inserts the same entry) sees the old file or the whole new one, never a part.
-/
def writeArtifactCopy (path : FilePath) (contents : ByteArray) : IO Unit := do
  let tmp ← uniqueTmpPath path
  try
    IO.FS.writeBinFile tmp contents
    IO.FS.rename tmp path
  finally
    discard <| (removeFileIfExists tmp).toBaseIO

structure TransferInfo where
  url : String
  hash : Hash
  path : FilePath
  /-- Additional paths for a downloaded artifact. -/
  extraPaths : Array FilePath := #[]

@[inline] def TransferInfo.addPath (self : TransferInfo) (path : FilePath) (extra := true) : TransferInfo :=
  if extra then
    {self with extraPaths := self.extraPaths.push path}
  else
    {self with path, extraPaths := self.extraPaths.push self.path}

structure TransferDict where
  infos : Array TransferInfo
  indices : Std.HashMap Hash Nat

@[inline] def TransferDict.empty : TransferDict :=
  ⟨#[], ∅⟩

@[inline] def TransferDict.push
  (self : TransferDict) (url : String) (hash : Hash) (path : FilePath)
: TransferDict := ⟨self.infos.push {url, hash, path}, self.indices.insert hash self.infos.size⟩

@[inline] def TransferDict.addIfNew
  (self : TransferDict) (url : String) (hash : Hash) (path : FilePath)
: TransferDict := if self.indices.contains hash then self else self.push url hash path

@[inline] def TransferDict.add
  (self : TransferDict) (url : String) (hash : Hash) (path : FilePath) (extra := true)
: TransferDict :=
  if let some j := self.indices.get? hash then
    {self with infos := self.infos.modify j (·.addPath path extra)}
  else
    self.push url hash path

structure TransferConfig where
  kind : TransferKind
  scope : CacheServiceScope
  infos : Array TransferInfo
  key : String := ""
  /-- Whether the transfers carry the cache token (see `CacheToken.get?`). -/
  cacheToken : Bool := false
  /--
  Whether uploads only create their objects (`x-goog-if-generation-match: 0`), so that an
  object already present (HTTP 412) is left as it is, which is not an error.
  Uploads that carry the cache token always do.
  -/
  createOnly : Bool := false
  /-- The MIME type of uploaded files. -/
  contentType : String := artifactContentType
  /-- What the transferred files are, for messages. -/
  noun : String := "artifact"

structure TransferState where
  didError : Bool := false
  numSuccesses : Nat := 0
  /-- The URLs of the successful uploads, objects already present included. -/
  uploaded : Array String := #[]
  /-- The transfers refused with HTTP 401, to retry with a new token. -/
  unauthorized : Array TransferInfo := #[]
  /-- Whether a transfer was refused with HTTP 401 and reported as a failure. -/
  refused : Bool := false

/--
Monitors the transfers of a `curl` run. With `cfg.createOnly` (the uploads only create their
objects), an upload that finds its object already present (HTTP 412) succeeds. With
`retryUnauthorized`, a transfer refused with HTTP 401 is not reported but added to `unauthorized`.
A download of `path` goes to the temporary file `tmpOf path`.
-/
partial def monitorTransfer
  (cfg : TransferConfig) (retryUnauthorized : Bool) (tmpOf : FilePath → FilePath)
  (h hOut : IO.FS.Handle) (s : TransferState)
: LoggerIO TransferState := do
  let line ← h.getLine
  if line.trimAscii.isEmpty then
    return s
  else
    let s ← (·.2) <$> StateT.run (s := s) do
      match Json.parse line >>= fromJson? with
      | .ok (out : JsonObject) =>
        let some info := getInfo? out
          | logError s!"{cfg.scope}: unidentifiable transfer completed: {line.trimAscii}"
            modify ({· with didError := true})
            return
        match out.get? "exitcode" with
        | .ok none
        | .ok (some 0) =>
          match out.get "http_code" with
          | .ok code@200
          | .ok code@201 =>
            handleTransfer info code out line
          | .ok 412 =>
            if cfg.createOnly && cfg.kind == .put then
              discardResponse out
              logInfo s!"{cfg.scope}: {cfg.noun} {info.hash} already present\
                \n  local path: {info.path}\
                \n  remote URL: {info.url}"
              modify fun s => {s with
                numSuccesses := s.numSuccesses + 1, uploaded := s.uploaded.push info.url}
            else
              handleFailure info (.ok 412) out line
              modify ({· with didError := true})
          | .ok 401 =>
            if retryUnauthorized then
              discardResponse out
              modify fun s => {s with unauthorized := s.unauthorized.push info}
            else
              handleFailure info (.ok 401) out line
              modify ({· with didError := true, refused := true})
          | code? =>
            handleFailure info code? out line
            modify ({· with didError := true})
        | _ =>
          handleFailure info (out.get "http_code") out line
          modify ({· with didError := true})
      | .error e =>
        logError s!"curl produced invalid JSON: {e}; received: {line.trimAscii}"
        modify ({· with didError := true})
    monitorTransfer cfg retryUnauthorized tmpOf h hOut s
where
  getInfo? out :=
    match out.getAs Nat "urlnum" with
    | .ok i => cfg.infos[i]?
    | _ => none
  handleTransfer info code out line : StateT TransferState LoggerIO Unit := do
    let {url, hash, path, extraPaths} := info
    match cfg.kind with
    | .get =>
      let logDownload :=
        logInfo s!"{cfg.scope}: downloaded artifact {hash}\
          \n  local path: {path}\
          \n  remote URL: {url}"
      let tmpPath := tmpOf path
      match (← IO.FS.readBinFile tmpPath |>.toBaseIO) with
      | .ok contents =>
        logDownload
        let actualHash := Hash.ofByteArray contents
        if actualHash != hash then
          logError s!"{tmpPath}: downloaded artifact hash mismatch, got {actualHash}"
          modify ({· with didError := true})
        else if let .error e ← IO.FS.rename tmpPath path |>.toBaseIO then
          logError s!"{path}: failed to persist temporary artifact: {e}"
          modify ({· with didError := true})
        else
          unless extraPaths.isEmpty do
            -- Note: No intra-cache hard links (breaks permissions/pruning), so we copy
            for extraPath in extraPaths do
              if let .error e ← (writeArtifactCopy extraPath contents).toBaseIO then
                logError s!"{extraPath}: failed to copy artifact: {e}"
                modify ({· with didError := true})
          modify fun s => {s with numSuccesses := s.numSuccesses + 1}
      | .error (.noFileOrDirectory ..) =>
        handleFailure info (.ok code) out line
        modify ({· with didError := true})
      | .error e =>
        logDownload
        logError s!"{tmpPath}: failed to read downloaded artifact: {e}"
        modify ({· with didError := true})
    | .put =>
      logInfo s!"{cfg.scope}: uploaded {cfg.noun} {hash}\
        \n  local path: {path}\
        \n  remote URL: {url}"
      modify fun s => {s with numSuccesses := s.numSuccesses + 1, uploaded := s.uploaded.push url}
  /- Skips the body of a response (an upload's is on `curl`'s standard output) -/
  discardResponse out : LoggerIO Unit := do
    if cfg.kind == .put then
      if let .ok size := out.getAs Nat "size_download" then
        if size > 0 then
          discard <| hOut.read size.toUSize
  handleFailure info code? out line : LoggerIO Unit := do
    let action := match cfg.kind with | .get => "download" | .put => "upload"
    let mut msg := s!"{cfg.scope}: failed to {action} {cfg.noun} {info.hash}"
    if let .ok code := code? then
      msg := s!"{msg} (status code: {code})"
    if let .ok errMsg := out.getAs String "errormsg" then
      msg := s!"{msg}\n  curl error: {errMsg}"
    msg := s!"{msg}\
      \n  local path: {info.path}\
      \n  remote URL: {info.url}"
    match cfg.kind with
    | .get =>
      unless code? matches .ok 404 do -- ignore response bodies on 404s
        if let .ok size := out.getAs Nat "size_download" then
          if size > 0 then
            if let .ok contentType := out.getAs String "content_type" then
              if contentType != artifactContentType then
                if let .ok resp ← IO.FS.readFile (tmpOf info.path) |>.toBaseIO then
                  msg := s!"{msg}\nunexpected response:\n{resp}"
    | .put =>
      if let .ok size := out.getAs Nat "size_download" then
        if size > 0 then
          if let some resp := String.fromUTF8? (← hOut.read size.toUSize) then
            msg := s!"{msg}\nunexpected response:\n{resp}"
    logError msg
    logVerbose s!"curl JSON: {line.trimAsciiEnd}"

/--
Runs one `curl` process for the transfers of `cfg`, sending `token?` if it is set.
With a token, redirects are not followed (so the token goes only to the hosts of the transfers),
and uploads only create their objects (`x-goog-if-generation-match: 0`), as they do with
`cfg.createOnly`. The transfers give up when they stall (see `transferTimeoutArgs`).
Downloads go to temporary files unique to the run, which are gone when it returns.
-/
def runTransfer
  (cfg : TransferConfig) (token? : Option String) (retryUnauthorized : Bool)
: LoggerIO TransferState := do
  -- Each download goes to a temporary file of this run next to its path
  let tmpSuffix ← uniqueTmpSuffix
  let tmpOf (path : FilePath) : FilePath := path.toString ++ tmpSuffix
  -- An upload with the token always only creates its object
  let cfg := {cfg with createOnly := token?.isSome || cfg.createOnly}
  try
    IO.FS.withTempFile fun h path => do
      if let some token := token? then
        h.putStrLn (CacheToken.curlHeaderLine token)
      let args ← id do
        match cfg.kind with
        | .get =>
          cfg.infos.forM fun info => do
            h.putStrLn s!"url = {info.url.quote}"
            h.putStrLn s!"-o {(tmpOf info.path).toString.quote}"
          h.flush
          return curlLeadArgs token? ++ #["-Z", "-X", "GET"] ++ curlFollowArgs token? ++ #[
            "--retry", "3" -- intermittent network errors can occur
          ] ++ transferTimeoutArgs ++ #[
            "-s", "-w", "%{stderr}%{json}\n", "--config", path.toString
          ]
        | .put =>
          cfg.infos.forM fun info => do
            h.putStrLn s!"-T {info.path.toString.quote}"
            h.putStrLn s!"url = {info.url.quote}"
          h.flush
          let auth :=
            if token?.isSome then
              #[]
            else
              #["--aws-sigv4", "aws:amz:auto:s3", "--user", cfg.key]
          let auth :=
            if cfg.createOnly then
              auth ++ #["-H", "x-goog-if-generation-match: 0"]
            else
              auth
          return curlLeadArgs token? ++ #["-Z", "-X", "PUT"] ++ curlFollowArgs token? ++ #[
            "-H", s!"Content-Type: {cfg.contentType}",
            "--retry", "3" -- intermittent network errors can occur
          ] ++ transferTimeoutArgs ++ auth ++ #[
            "-s", "-w", "%{stderr}%{json}\n", "--config", path.toString
          ]
      let child ← IO.Process.spawn {
        cmd := ← Internal.getCurl, args
        stdout := .piped, stderr := .piped
      }
      let s ← monitorTransfer cfg retryUnauthorized tmpOf child.stderr child.stdout {}
      let rc ← child.wait
      let stdout ← child.stdout.readToEnd
      unless stdout.isEmpty do
        logWarning s!"{cfg.scope}: curl produced unexpected output:\n{stdout.trimAsciiEnd}"
      if rc != 0 then
        logError s!"{cfg.scope}: curl exited with code {rc}"
        return {s with didError := true}
      return s
  finally
    -- A download that succeeded was renamed into place; the others leave nothing behind
    if cfg.kind == .get then
      for info in cfg.infos do
        discard <| (removeFileIfExists (tmpOf info.path)).toBaseIO

/--
Transfers the files of `cfg` with one `curl` run. If the cache token is sent and refused
(HTTP 401), the refused transfers are retried once in another run with a new token (see
`retryWithNewToken`). Reports each failed transfer, and returns the state of both runs.
-/
def transferFiles
  (cfg : TransferConfig)
: LoggerIO TransferState := do
  let token? ← id do
    if cfg.cacheToken then
      -- Refused if any transfer would send the token unencrypted (they all share one host)
      let info? := cfg.infos.find? (!isCredentialSafe ·.url) <|> cfg.infos[0]?
      cacheTokenFor? (info?.map (·.url) |>.getD "")
    else
      pure none
  let s ← runTransfer cfg token? (retryUnauthorized := token?.isSome)
  let some token := token?
    | return s
  if s.unauthorized.isEmpty then
    return s
  let retry ← retryWithNewToken token fun token? => do
    let retry ← runTransfer {cfg with infos := s.unauthorized} token? (retryUnauthorized := false)
    return (retry, retry.refused)
  return {
    didError := s.didError || retry.didError
    numSuccesses := s.numSuccesses + retry.numSuccesses
    uploaded := s.uploaded ++ retry.uploaded
  }

/--
Transfers the artifacts of `cfg` with one `curl` run (see `transferFiles`), and fails if any
transfer failed.
-/
def transferArtifacts
  (cfg : TransferConfig)
: LoggerIO Unit := do
  let mut s ← transferFiles cfg
  if s.numSuccesses < cfg.infos.size then
    let action := match cfg.kind with | .get => "download" | .put => "upload"
    logError s!"{cfg.scope}: failed to {action} some artifacts"
    s := {s with didError := true}
  if s.didError then
    failure

def reservoirArtifactsUrl (service : CacheService) (scope : CacheServiceScope) : String :=
  let endpoint :=
    match scope.impl with
    | .repo scope => appendScope s!"{service.impl.apiEndpoint}/repositories" scope
    | .str scope => appendScope s!"{service.impl.apiEndpoint}/packages" scope
  s!"{endpoint}/artifacts"

public def downloadArtifacts
   (descrs : Array ArtifactDescr) (cache : Cache)
   (service : CacheService) (scope : CacheServiceScope) (force := false)
: LoggerIO Unit := do
  if descrs.isEmpty then
    logWarning "no artifacts to download"
    return
  let {infos, ..} ← descrs.foldlM (init := TransferDict.empty) fun s {descr} => do
    let hash := descr.hash
    let url := service.artifactUrl hash scope
    let path := cache.artifactDir / descr.relPath
    if force then
      removeFileIfExists path
      return s.add url hash path
    else if (← path.pathExists) then
      return s.add url hash path (extra := false)
    else
      return s.add url hash path
  let infos ← infos.filterM fun info => do
    if info.extraPaths.isEmpty then
      not <$> info.path.pathExists
    else
      match (← createExtraPaths info.path info.extraPaths |>.toBaseIO) with
      | .ok _ => return false
      | .error (.noFileOrDirectory ..) => return true
      | .error e => error s!"failed to copy artifact: {e}"
  if infos.isEmpty then
    return
  let infos ← id do
    if service.isReservoir then
      -- Artifact cloud storage URLs are fetched in a single request
      -- to avoid hammering the Reservoir web host
      fetchUrls (service.reservoirArtifactsUrl scope) infos
    else return infos
  IO.FS.createDirAll cache.artifactDir
  let cacheToken := infos.all (service.sendsCacheToken ·.url)
  transferArtifacts {scope, infos, kind := .get, cacheToken}
where
  createExtraPaths path extraPaths := do
    -- Note: No intra-cache hard links (breaks permissions/pruning), so we copy
    let contents ← IO.FS.readBinFile path
    for extraPath in extraPaths do
      writeArtifactCopy extraPath contents
  fetchUrls url infos := IO.FS.withTempFile fun h path => do
    let body := Json.arr <| infos.map (toJson ·.hash)
    h.putStr body.compress
    h.flush
    let args := #[
        "-X", "POST", "-L", "-d", s!"@{path}",
        "--retry", "3", -- intermittent network errors can occur
        "-s", "-w", "%{stderr}%{json}\n",
        "-H", "Content-Type: application/json",
      ]
    let args := Reservoir.lakeHeaders.foldl (· ++ #["-H", ·]) args
    let spawnArgs := {
      cmd := ← Internal.getCurl, args := args.push url
      stdout := .piped, stderr := .piped
    }
    logVerbose (mkCmdLog spawnArgs)
    let {stdout, stderr, exitCode} ← IO.Process.output spawnArgs
    match Json.parse stdout >>= fromJson? with
    | .ok (resp :  ReservoirResp (Array String)) =>
      match resp with
      | .data urls =>
        if h : infos.size = urls.size then
          let s := infos.size.fold (init := infos.toVector) fun i hi s =>
            s.set i {s[i] with url := urls[i]'(h ▸ hi)}
          return s.toArray
        else
          error s!"failed to fetch artifact URLs\
          \n  POST {url}\
          \nIncorrect number of results: expected {infos.size}, got {urls.size}"
      | .error status message =>
        error s!"failed to fetch artifact URLs (status code: {status})\
          \n  POST {url}\
          \nReservoir error: {message}"
    | .error _ =>
      match Json.parse stderr >>= fromJson? with
      | .ok (out : JsonObject) =>
        let mut msg := "failed to fetch artifact URLs"
        if let .ok code := out.getAs Nat "http_code" then
          msg := s!"{msg} (status code: {code})"
        msg := s!"{msg}\n  POST {url}"
        if let .ok errMsg := out.getAs String "errormsg" then
          msg := s!"{msg}\n  Transfer error: {errMsg}"
        unless stdout.isEmpty do
          msg := s!"{msg}\nstdout:\n{stdout.trimAsciiEnd}"
        logError msg
        logVerbose s!"curl JSON:\n{stderr.trimAsciiEnd}"
      | .error e =>
        logError s!"failed to fetch artifact URLs\
          \n  POST {url}
          \nInvalid curl JSON: {e}; received: {stderr.trimAscii}"
        unless stdout.isEmpty do
          logWarning s!"curl produced unexpected output:\n{stdout.trimAsciiEnd}"
      error s!"curl exited with code {exitCode}"

@[deprecated "Deprecated without replacement." (since := "2026-02-27")]
public def downloadOutputArtifacts
  (map : CacheMap) (cache : Cache) (service : CacheService)
  (localScope : String) (remoteScope : CacheServiceScope) (force := false)
: LoggerIO Unit := do
  cache.writeMap localScope map service.name? remoteScope
  let descrs ← map.collectOutputDescrs
  service.downloadArtifacts descrs cache remoteScope force

public def uploadArtifacts
  (descrs : Vector ArtifactDescr n) (paths : Vector FilePath n)
  (service : CacheService) (scope : CacheServiceScope)
: LoggerIO Unit := do
  if n = 0 then
    logWarning "no artifacts to upload"
    return
  let {infos, ..} ← n.foldM (init := TransferDict.empty) fun i _ s => do
    let hash := descrs[i].hash
    let url := service.artifactUrl hash scope
    return s.addIfNew url hash paths[i]
  let cacheToken := infos.all (service.sendsCacheToken ·.url)
  transferArtifacts {scope, infos, kind := .put, key := service.impl.key, cacheToken}

/--
Uploads each file of `uploads` with one `curl` run, only creating each object
(`x-goog-if-generation-match: 0`): an object that is already present (HTTP 412) is left as it is,
which is not an error. The requests carry the cache token if the service sends it to their host
(see `sendsCacheToken`), and are otherwise signed with the service's key.

Reports each failed upload, and returns the URLs of the uploads that succeeded.
-/
public def putRemoteObjects
  (service : CacheService) (uploads : Array RemoteUpload) (contentType noun : String)
: LoggerIO (Array String) := do
  if uploads.isEmpty then
    return #[]
  let infos := uploads.map fun {path, url, hash} => ({url, hash, path} : TransferInfo)
  let cacheToken := infos.all (service.sendsCacheToken ·.url)
  let name := service.name?.map (·.toString) |>.getD "the remote cache"
  if !cacheToken && service.impl.key.isEmpty then
    error (uploadCredentialError s!"`{name}`")
  let s ← transferFiles {
    kind := .put, scope := .ofString name, infos, key := service.impl.key
    cacheToken, createOnly := true, contentType, noun
  }
  return s.uploaded

/-! ### Output Transfer -/

/-- The MIME type of a Lake/Reservoir input-to-output mappings for a Git revision. -/
public def mapContentType : String := "application/vnd.reservoir.outputs+json-lines"

def s3RevisionUrl
  (rev : GitRev) (service : CacheService) (scope : CacheServiceScope)
  (platform := CachePlatform.none) (toolchain := CacheToolchain.none)
: String :=
  match scope.impl with
  | .str s => appendScope service.impl.revisionEndpoint s ++ s!"/{rev}.jsonl"
  | .repo s => Id.run do
    let mut url := appendScope service.impl.revisionEndpoint s
    unless platform.isNone do
      url := uriEncode platform.raw s!"{url}/pt/"
    unless toolchain.isNone do
      url := uriEncode (toolchain2Dir toolchain.raw).toString s!"{url}/tc/"
    return s!"{url}/{rev}.jsonl"

public def revisionUrl
  (rev : GitRev) (service : CacheService) (scope : CacheServiceScope)
  (platform := CachePlatform.none) (toolchain := CacheToolchain.none)
: String :=
  if service.isReservoir then Id.run do
    let mut url :=
      match scope.impl with
      | .str s => appendScope s!"{service.impl.apiEndpoint}/packages" s
      | .repo s => appendScope s!"{service.impl.apiEndpoint}/repositories" s
    url := s!"{url}/build-outputs?rev={rev}"
    unless platform.isNone do
      url := uriEncode platform.raw s!"{url}&platform="
    unless toolchain.isNone do
      url := uriEncode toolchain.raw s!"{url}&toolchain="
    return url
  else
    service.s3RevisionUrl rev scope platform toolchain

public def downloadRevisionOutputs?
  (rev : GitRev) (cache : Cache) (service : CacheService)
  (localScope : String) (remoteScope : CacheServiceScope)
  (platform := CachePlatform.none) (toolchain := CacheToolchain.none) (force := false)
: LoggerIO (Option CacheMap) := do
  -- TODO: toolchain-scoped revision paths for system cache?
  let path := cache.revisionPath localScope rev
  if (← path.pathExists) && !force then
    return ← CacheMap.load path platform.isNone
  let url := service.revisionUrl rev remoteScope platform toolchain
  logInfo s!"\
    {localScope}: downloading build outputs for revision {rev}\
    \n  local path: {path}\
    \n  remote URL: {url}"
  let headers := if service.isReservoir then Reservoir.lakeHeaders else {}
  let cacheToken := service.sendsCacheToken url
  let contents? ← try getUrl? url headers cacheToken catch e =>
    logError s!"{remoteScope}: output lookup failed"
    throw e
  let some contents := contents?
    | return none
  createParentDirs path
  IO.FS.writeFile path contents
  CacheMap.load path platform.isNone

public def uploadRevisionOutputs
  (rev : GitRev) (outputs : FilePath) (service : CacheService) (scope : CacheServiceScope)
  (platform := CachePlatform.none) (toolchain := CacheToolchain.none)
: LoggerIO Unit := do
  let url := service.s3RevisionUrl rev scope platform toolchain
  logInfo s!"\
    {scope}: uploading build outputs for revision {rev}\
    \n  local path: {outputs}\
    \n  remote URL: {url}"
  unless (← service.uploadFile outputs mapContentType url) do
    logInfo s!"{scope}: build outputs for revision {rev} already present\n  remote URL: {url}"

end CacheService
