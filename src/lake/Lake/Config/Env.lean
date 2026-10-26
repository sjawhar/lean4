/-
Copyright (c) 2022 Mac Malone. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Mac Malone
-/
module

prelude
public import Lake.Config.Cache
public import Lake.Config.InstallPath
import Init.System.Platform

open System
open Lean hiding SearchPath

/-! # Lake's Environment
Definitions related to a Lake environment.
A Lake environment is computed on Lake's startup from
user-specified CLI options and the process environment.
-/

namespace Lake

/-- A Lake environment. -/
public structure Env where
  /-- The Lake installation of the environment. -/
  lake : LakeInstall
  /-- The Lean installation of the environment. -/
  lean : LeanInstall
  /-- The Elan installation (if any) of the environment. -/
  elan? : Option ElanInstall
  /-- The Reservoir API endpoint URL (e.g., `https://reservoir.lean-lang.org/api/v1`). -/
  reservoirApiUrl : String
  /-- Overrides the detected Lean's githash as the string Lake uses for Lean traces. -/
  githashOverride : String
  /-- A name-to-URL mapping of URL overrides for the named packages. -/
  pkgUrlMap : NameMap String
  /--
  Whether to disable downloading build caches for packages. Set via `LAKE_NO_CACHE`.
  Can be overridden on a per-command basis with`--try-cache`.
  -/
  noCache : Bool
  /-- Whether the Lake artifact cache should be enabled by default (i.e., `LAKE_ARTIFACT_CACHE`). -/
  enableArtifactCache? : Option Bool
  /-- Whether to restore all artifacts from the Lake cache by default (i.e., `LAKE_RESTORE_ARTIFACTS`). -/
  restoreAllArtifacts? : Option Bool
  /--
  Whether to skip compiling a module when nothing it used changed meaning (i.e., `LAKE_USAGE_CUTOFF`,
  off unless set to a true value).
  -/
  usageCutoff : Bool
  /-- Whether the system cache has been disabled (`LAKE_CACHE_DIR` is set but empty). -/
  noSystemCache : Bool := false
  /--
  The directory for the Lake cache. Customized by `LAKE_CACHE_DIR`.

  If `none`, no suitable system directory for the cache exists.
  -/
  lakeCache? : Option Cache := none
  /--
  The directory for the Lake cache. Customized by `LAKE_CACHE_DIR`.

  Unlike `lakeCache?`, this excludes the toolchain directory from consideration.

  If `none`, no suitable system directory for the cache exists.
  -/
  lakeSystemCache? : Option Cache := none
  /-- The path to the system Lake configuration (i.e., `LAKE_CONFIG`). -/
  lakeConfig? : Option FilePath
  /-- The authentication key for cache uploads (i.e., `LAKE_CACHE_KEY`). -/
  cacheKey? : Option String
  /-- The base URL for artifact uploads and downloads from the cache (i.e., `LAKE_CACHE_ARTIFACT_ENDPOINT`). -/
  cacheArtifactEndpoint? : Option String
  /-- The base URL for revision uploads and downloads from the cache (i.e., `LAKE_CACHE_REVISION_ENDPOINT`). -/
  cacheRevisionEndpoint? : Option String
  /-- The name of the cache service (i.e., `LAKE_CACHE_SERVICE`). -/
  cacheService? : Option CacheServiceName
  /--
  The shell command that prints the bearer token of the remote cache service
  (i.e., `LAKE_CACHE_TOKEN_CMD`; see `CacheToken.get?`).
  Lake does not add it to `baseVars`; a process Lake starts inherits it from Lake's own
  environment, as it does `LAKE_CACHE_KEY`. The token itself is never passed on. The command runs
  in a session of its own (so a Ctrl-C that stops Lake does not stop it), and Lake kills it after
  60 seconds.
  -/
  cacheTokenCmd? : Option String := none
  /--
  The name of the `s3` cache service that the cache token is sent to (i.e., `LAKE_REMOTE_CACHE`).
  Lake does not add it to `baseVars`; a process Lake starts inherits it from Lake's own
  environment.
  -/
  remoteCache? : Option String := none
  /--
  Whether builds queue the outputs they compile for upload to the `LAKE_REMOTE_CACHE` service by
  `lake cache push` (i.e., `LAKE_REMOTE_CACHE_QUEUE`; see `Cache.pushQueueFile`). Lake does not
  add it to `baseVars`.
  -/
  remoteCacheQueue : Bool := false
  /--
  Whether a build that queues its outputs (see `remoteCacheQueue`) also claims each input before it
  compiles it and waits while another build holds the input's claim, and starts one detached
  `lake cache push` that follows the build after its first queued output (i.e.,
  `LAKE_REMOTE_CACHE_CLAIMS`, on unless set to a false value; see `Lake.Build.Claim`). Lake does
  not add it to `baseVars`.
  -/
  remoteCacheClaims : Bool := true
  /--
  How long a claim may go without a rewrite before a waiting build takes it over, in seconds
  (i.e., `LAKE_CLAIM_TAKEOVER_SECS`, 600 unless set to another positive number).
  Lake does not add it to `baseVars`.
  -/
  claimTakeoverSecs : Nat := 600
  /--
  How long a build leaves an input that another build of the same targets should claim, in
  seconds (i.e., `LAKE_CLAIM_DEFER_SECS`, 15 unless set to another number; 0 leaves none). Each
  build that takes claims gives every input it is about to compile to one of the builds it has
  seen, by the input's hash, and compiles only its own; it takes one of another build's inputs
  after that build has left it unclaimed for this long, so a build that stops costs the others
  only this wait (see `Lake.Build.Claim`). Lake does not add it to `baseVars`.
  -/
  claimDeferSecs : Nat := 15
  /--
  How many compiles of inputs must already run before a build that takes claims claims the next
  input and waits for other builds (i.e., `LAKE_CLAIM_SLOTS`, unless set: one less than the
  build's worker threads, `LEAN_NUM_THREADS` or the machine's cores; 0 claims every input). The
  job that asks runs on a worker thread itself, so with `n` workers at most `n - 1` compiles run
  beside it: the default claims exactly when every other worker compiles. A build with a worker
  free compiles at once: waiting for another build only saves this build time when it has no
  capacity to compile, and every claim request and every wait lies on the build's path (see
  `Lake.Build.Claim`). Lake does not add it to `baseVars`.
  -/
  claimSlots : Nat := 0
  /--
  The shell with which a build that takes claims starts its detached `lake cache push` (i.e.,
  `LAKE_PUSH_SHELL`, `/bin/bash` unless set). It must be able to close every descriptor by
  number; where it does not exist, the build runs the push in the foreground at its end (see
  `Lake.Build.Claim`). Lake does not add it to `baseVars`.
  -/
  pushShell : FilePath := "/bin/bash"
  /-- The initial Lean library search path of the environment (i.e., `LEAN_PATH`). -/
  initLeanPath : SearchPath
  /-- The initial Lean source search path of the environment (i.e., `LEAN_SRC_PATH`). -/
  initLeanSrcPath : SearchPath
  /-- The initial shared library search path of the environment. -/
  initSharedLibPath : SearchPath
  /-- The initial binary search path of the environment (i.e., `PATH`). -/
  initPath : SearchPath
  /--
  The preferred toolchain of the environment. May be empty.

  Either `ELAN_TOOLCHAIN` or, if none, Lake's `Lean.toolchain`.
  -/
  toolchain : String
  deriving Inhabited

/-- Returns the home directory of the current user (if possible). -/
public def getUserHome? : BaseIO (Option FilePath) := do
  if System.Platform.isWindows then
    let some drive ← IO.getEnv "HOMEDRIVE"
      | return none
    let some path ← IO.getEnv "HOMEPATH"
      | return none
    return drive ++ path
  else if let some home ← IO.getEnv "HOME" then
    return home
  else
    return none

def getSystemCacheHomeAux? (userHome? : Option FilePath) : BaseIO (Option FilePath) := do
  if let some cacheHome ← IO.getEnv "XDG_CACHE_HOME" then
    return FilePath.mk cacheHome
  else if let some userHome := userHome? then
    return userHome / ".cache"
  else
    return none

/-- Returns the system directory that can be used to store caches (if one exists). -/
public def getSystemCacheHome? : BaseIO (Option FilePath) := do
  if let some cacheHome ← IO.getEnv "XDG_CACHE_HOME" then
    return FilePath.mk cacheHome
  else if let some userHome ← getUserHome? then
    return userHome / ".cache"
  else
    return none

def ElanInstall.lakeToolchainCache (elan : ElanInstall) (toolchain : String) : Cache :=
  ⟨elan.toolchainDir toolchain / "lake" / "cache"⟩

@[inline] def ElanInstall.lakeToolchainCache? (elan : ElanInstall) (toolchain : String) : Option Cache :=
  if toolchain.isEmpty then
    none
  else
    some (elan.lakeToolchainCache toolchain)

namespace Env

/-- Compute the Lean toolchain string used by Lake from the process environment. -/
public def computeToolchain : BaseIO String := do
  return (← IO.getEnv "ELAN_TOOLCHAIN").getD Lean.toolchain

@[inline] def computeEnvCache? : BaseIO (Option Cache) := OptionT.run do
  let cacheDir ← IO.getEnv "LAKE_CACHE_DIR"
  guard cacheDir.isEmpty
  return ⟨cacheDir⟩

@[inline] def cacheOfSystem? (cacheHome? : Option FilePath) : Option Cache :=
  cacheHome?.map (⟨· / "lake"⟩)

@[inline] def cacheOfToolchain? (elan? : Option ElanInstall) (toolchain : String) : Option Cache := do
  let elan ← elan?
  guard !toolchain.isEmpty
  return elan.lakeToolchainCache toolchain

/--
Compute the system cache location from the process environment.
If `none`, no system directory for workspace the cache exists.
-/
public def computeCache? (elan? : Option ElanInstall) (toolchain : String) : BaseIO (Option Cache) := do
  if let some cache ← computeEnvCache? then
    return some cache
  else if let some cache := cacheOfToolchain? elan? toolchain then
    return some cache
  else if let some cache ← cacheOfSystem? <$> getSystemCacheHome? then
    return some cache
  else
    return none

/--
Compute a `Lake.Env` object from the given installs
and the set environment variables.
-/
public def compute
  (lake : LakeInstall) (lean : LeanInstall) (elan? : Option ElanInstall)
  (noCache : Option Bool := none)
: EIO String Env := do
  let reservoirBaseUrl ← getUrlD "RESERVOIR_API_BASE_URL" "https://reservoir.lean-lang.org/api"
  let toolchain ← computeToolchain
  let userHome? ← getUserHome?
  addCacheDirs userHome? toolchain {
    lake, lean, elan?,
    pkgUrlMap := ← computePkgUrlMap
    reservoirApiUrl := ← getUrlD "RESERVOIR_API_URL" s!"{reservoirBaseUrl}/v1"
    noCache := (noCache <|> (← IO.getEnv "LAKE_NO_CACHE").bind envToBool?).getD false
    enableArtifactCache? := (← IO.getEnv "LAKE_ARTIFACT_CACHE").bind envToBool?
    restoreAllArtifacts? := (← IO.getEnv "LAKE_RESTORE_ARTIFACTS").bind envToBool?
    usageCutoff := ((← IO.getEnv "LAKE_USAGE_CUTOFF").bind envToBool?).getD false
    lakeConfig? := (← IO.getEnv "LAKE_CONFIG") <|> userHome?.map (· / ".lake" / "config.toml" |>.toString)
    cacheKey? := (← IO.getEnv "LAKE_CACHE_KEY").map (·.trimAscii.copy)
    cacheArtifactEndpoint? := (← IO.getEnv "LAKE_CACHE_ARTIFACT_ENDPOINT").map normalizeUrl
    cacheRevisionEndpoint? := (← IO.getEnv "LAKE_CACHE_REVISION_ENDPOINT").map normalizeUrl
    cacheService? := (← IO.getEnv "LAKE_CACHE_SERVICE").map (.ofString ·.trimAscii.copy)
    cacheTokenCmd? := (← IO.getEnv "LAKE_CACHE_TOKEN_CMD").filter (!·.trimAscii.isEmpty)
    remoteCache? := (← IO.getEnv "LAKE_REMOTE_CACHE").map (·.trimAscii.copy) |>.filter (!·.isEmpty)
    remoteCacheQueue := ((← IO.getEnv "LAKE_REMOTE_CACHE_QUEUE").bind envToBool?).getD false
    remoteCacheClaims := ((← IO.getEnv "LAKE_REMOTE_CACHE_CLAIMS").bind envToBool?).getD true
    claimTakeoverSecs := ← computeClaimTakeoverSecs
    claimDeferSecs := ← computeClaimDeferSecs
    claimSlots := ← computeClaimSlots
    pushShell := ((← IO.getEnv "LAKE_PUSH_SHELL").filter (!·.trimAscii.isEmpty)).map
      (FilePath.mk ·.trimAscii.copy) |>.getD "/bin/bash"
    githashOverride := (← IO.getEnv "LEAN_GITHASH").getD ""
    toolchain
    initLeanPath := ← getSearchPath "LEAN_PATH",
    initLeanSrcPath := ← getSearchPath "LEAN_SRC_PATH",
    initSharedLibPath := ← getSearchPath sharedLibPathEnvVar,
    initPath := ← getSearchPath "PATH"
  }
where
  addCacheDirs userHome? toolchain env := do
    if let some dir ← IO.getEnv "LAKE_CACHE_DIR" then
      if dir.isEmpty then
        return {env with noSystemCache := true}
      else
        return {env with lakeCache? := some ⟨dir⟩, lakeSystemCache? := some ⟨dir⟩}
    else if let some cache := cacheOfToolchain? elan? toolchain then
      let lakeSystemCache? ← cacheOfSystem? <$> getSystemCacheHomeAux? userHome?
      return {env with lakeCache? := some cache, lakeSystemCache?}
    else if let some cache ← cacheOfSystem? <$> getSystemCacheHomeAux? userHome? then
      return {env with lakeCache? := some cache, lakeSystemCache? := some cache}
    else
      return env
  computePkgUrlMap := do
    let some urlMapStr ← IO.getEnv "LAKE_PKG_URL_MAP" | return {}
    match Json.parse urlMapStr |>.bind fromJson? with
    | .ok urlMap => return urlMap
    | .error e => throw s!"'LAKE_PKG_URL_MAP' has invalid JSON: {e}"
  computeClaimTakeoverSecs := do
    let some secs ← IO.getEnv "LAKE_CLAIM_TAKEOVER_SECS"
      | return 600
    match secs.trimAscii.copy.toNat? with
    | some n => if n > 0 then return n else throw (badTakeover secs)
    | none => throw (badTakeover secs)
  badTakeover (secs : String) : String :=
    s!"'LAKE_CLAIM_TAKEOVER_SECS' must be a positive number of seconds, got '{secs}'"
  computeClaimDeferSecs := do
    let some secs := (← IO.getEnv "LAKE_CLAIM_DEFER_SECS").filter (!·.trimAscii.isEmpty)
      | return 15
    match secs.trimAscii.copy.toNat? with
    | some n => return n
    | none => throw s!"'LAKE_CLAIM_DEFER_SECS' must be a number of seconds, got '{secs}'"
  computeClaimSlots := do
    -- The build's worker threads as the runtime counts them, less the one that runs the job that
    -- asks. The runtime reads `LEAN_NUM_THREADS` with C's `atoi` (its leading digits; 0 workers,
    -- so tasks run one at a time, when it has none), else takes the cores.
    let others := do
      if let some n ← IO.getEnv "LEAN_NUM_THREADS" then
        let workers := (n.trimAscii.copy.foldl (init := (0, true)) fun (w, digits) c =>
          if digits && c.isDigit then (w * 10 + (c.toNat - '0'.toNat), true) else (w, false)).1
        return workers - 1
      return (System.Platform.Internal.getHardwareConcurrency ()).toNat - 1
    let some slots := (← IO.getEnv "LAKE_CLAIM_SLOTS").filter (!·.trimAscii.isEmpty)
      | others
    match slots.trimAscii.copy.toNat? with
    | some n => return n
    | none => throw s!"'LAKE_CLAIM_SLOTS' must be a number of compiles, got '{slots}'"
  @[macro_inline] getUrlD var default := do
    if let some url ← IO.getEnv var then
      return normalizeUrl url
    else
       return default
  normalizeUrl url :=
    if url.back == '/' then url.dropEnd 1 |>.copy else url

/--
The name of the cache service that receives the cache token, if any:
the one `LAKE_REMOTE_CACHE` names, if `LAKE_CACHE_TOKEN_CMD` is set.
-/
public def cacheTokenService? (env : Env) : Option String :=
  if env.cacheTokenCmd?.isSome then env.remoteCache? else none

/--
The name of the cache service whose write-back queue builds append to, if any: the one
`LAKE_REMOTE_CACHE` names, if `LAKE_REMOTE_CACHE_QUEUE` is set, and only while the githash that
names the remote scope (`leanGithash`) is that of the `lean` Lake runs. A `LEAN_GITHASH` that
names another Lean would publish this Lean's outputs in that Lean's scope. (Lake passes the true
githash to the processes it starts, so a build under `lake env` still queues.)
-/
public def remoteCacheQueueService? (env : Env) : Option String :=
  if env.remoteCacheQueue && !env.lean.githash.isEmpty &&
      (env.githashOverride.isEmpty || env.githashOverride == env.lean.githash) then
    env.remoteCache?
  else
    none

/--
The name of the cache service whose claims builds take, if any: the queue's service (see
`remoteCacheQueueService?`), unless `LAKE_REMOTE_CACHE_CLAIMS` is false or usage cutoff is on
(a build that publishes nothing claims nothing).
-/
public def remoteCacheClaimService? (env : Env) : Option String :=
  if env.remoteCacheClaims && !env.usageCutoff then env.remoteCacheQueueService? else none

/-- The toolchain identifier for the Lake cache corresponding to the environment's toolchain. -/
@[inline] public def cacheToolchain (env : Env) : CacheToolchain :=
  .ofElanToolchain env.toolchain

/--
The string Lake uses to identify Lean in traces.
Either the environment-specified `LEAN_GITHASH` or the detected Lean's githash.

The override allows one to replace the Lean version used by a library
(e.g., Mathlib) without completely rebuilding it, which is useful for testing
custom builds of Lean.
-/
public def leanGithash (env : Env) : String :=
  if env.githashOverride.isEmpty then env.lean.githash else env.githashOverride

/--
The binary search path of the environment (i.e., `PATH`).
Combines the initial path of the environment with that of the Lean and Lake installations.
-/
public def path (env : Env) : SearchPath :=
  if env.lake.binDir = env.lean.binDir then
    env.lean.binDir :: env.initPath
  else
    env.lake.binDir :: env.lean.binDir :: env.initPath

/-
We include Lake's installation in the cases below to ensure that the
Lake being used to build is available to the environment (and thus, e.g.,
the Lean server). Otherwise, it may fall back on whatever the default Lake
instance is.
-/

/--
The Lean library search path of the environment (i.e., `LEAN_PATH`).
Combines the initial path of the environment with that of the Lake installation.
-/
public def leanPath (env : Env) : SearchPath :=
  env.lake.libDir :: env.initLeanPath

/--
The Lean source search path of the environment (i.e., `LEAN_SRC_PATH`).
Combines the initial path of the environment with that of the Lake and Lean
installations.
-/
public def leanSrcPath (env : Env) : SearchPath :=
  env.lake.srcDir :: env.initLeanSrcPath

/--
The shared library search path of the environment.
Combines the initial path of the environment with that of the Lean installation.
-/
public def sharedLibPath (env : Env) : SearchPath :=
  env.lean.sharedLibPath ++ env.initSharedLibPath

/-- Unset toolchain-specific environment variables. -/
public def noToolchainVars (env : Env) : Array (String × Option String) :=
  #[
    ("ELAN_TOOLCHAIN", none),
    ("LAKE", none),
    ("LAKE_CACHE_DIR", if env.noSystemCache then some "" else env.lakeSystemCache?.map (·.dir.toString)),
    ("LAKE_OVERRIDE_LEAN", none),
    ("LAKE_HOME", none),
    ("LEAN", none),
    ("LEAN_GITHASH", none),
    ("LEAN_SYSROOT", none),
    ("LEAN_AR", none)
  ]

/-- Environment variable settings that are not augmented by a Lake workspace. -/
public def baseVars (env : Env) : Array (String × Option String)  :=
  #[
    ("ELAN", env.elan?.map (·.elan.toString)),
    ("ELAN_HOME", env.elan?.map (·.home.toString)),
    ("ELAN_TOOLCHAIN", if env.toolchain.isEmpty then none else env.toolchain),
    ("LAKE", env.lake.lake.toString),
    ("LAKE_HOME", env.lake.home.toString),
    ("LAKE_CONFIG", if let some path := env.lakeConfig? then path.toString else ""),
    ("LAKE_PKG_URL_MAP", toJson env.pkgUrlMap |>.compress),
    ("LAKE_NO_CACHE", toString env.noCache),
    ("LAKE_CACHE_KEY", env.cacheKey?),
    ("LAKE_CACHE_ARTIFACT_ENDPOINT", env.cacheArtifactEndpoint?),
    ("LAKE_CACHE_REVISION_ENDPOINT", env.cacheRevisionEndpoint?),
    ("LAKE_CACHE_SERVICE", env.cacheService?.map (·.toString)),
    ("LEAN", env.lean.lean.toString),
    ("LEAN_SYSROOT", env.lean.sysroot.toString),
    ("LEAN_AR", env.lean.ar.toString),
    ("LEAN_CC", env.lean.leanCc?)
  ]

/-- Environment variable settings for the `Lake.Env`. -/
public def vars (env : Env) : Array (String × Option String)  :=
  let vars := env.baseVars ++ #[
    ("LAKE_CACHE_DIR", if let some cache := env.lakeCache? then cache.dir.toString else ""),
    ("LAKE_ARTIFACT_CACHE", if let some b := env.enableArtifactCache? then toString b else ""),
    ("LAKE_RESTORE_ARTIFACTS", if let some b := env.restoreAllArtifacts? then toString b else ""),
    ("LEAN_PATH", some env.leanPath.toString),
    ("LEAN_SRC_PATH", some env.leanSrcPath.toString),
    ("LEAN_GITHASH", env.leanGithash),
    ("PATH", some env.path.toString)
  ]
  if Platform.isWindows then
    vars
  else
    vars.push (sharedLibPathEnvVar, some <| env.sharedLibPath.toString)

/--
The default search path the Lake executable
uses when interpreting package configuration files.

In order to use the Lean stdlib (e.g., `Init`),
the executable needs the search path to include the directory
with the stdlib's `.olean` files (e.g., from `<lean-sysroot>/lib/lean`).
In order to use Lake's modules as well, the search path also
needs to include Lake's `.olean` files (e.g., from `build`).

While this can be done by having the user augment `LEAN_PATH` with
the necessary directories, Lake also intelligently augments the initial
search path with the `.olean` directories of the provided Lean and Lake
installations.

See `findInstall?` for more information on how Lake determines those
directories. If everything is configured as expected, the user will not
need to augment `LEAN_PATH`. Otherwise, they will need to provide Lake
with more information (either through `LEAN_PATH` or through other options).
-/
public def leanSearchPath (env : Lake.Env) : SearchPath :=
  env.lake.libDir :: env.lean.leanLibDir :: env.leanPath
