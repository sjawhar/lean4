/-
Copyright (c) 2021 Mac Malone. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Mac Malone
-/
module

prelude
public import Lake.Config.Cache
public import Lake.Config.Context
public import Lake.Build.Job.Basic
public import Std.Sync.Mutex
public import Lean.Data.PersistentHashSet
public import Lean.Util.ModuleUsage
public import Lake.Build.KeptChecker

open System
namespace Lake

/-- Configuration options for a Lake build. -/
public structure BuildConfig extends LogConfig where
  /-- Whether to use modification times for trace checking. -/
  oldMode : Bool := false
  /-- Whether to trust `.hash` files. -/
  trustHash : Bool := true
  /-- Early exit if a target has to be rebuilt. -/
  noBuild : Bool := false
  /-- Stop scheduling new build jobs after the first required target failure. -/
  failFast : Bool := false
  /-- Verbosity level (`-q`, `-v`, or neither). -/
  verbosity : Verbosity := .normal
  /-- Whether to print a message when the build finishes successfully (if not quiet). -/
  showSuccess : Bool := false
  /-- File to save tracked input-to-output mappings from the build of a package. -/
  outputsFile? : Option FilePath := none
  /-- When tracking input-to-output mappings, the workspace index of the tracked package. -/
  outputsIdx : Nat := 0
  /--
  Per-package Lean option overrides, applied to every module whose owning
  package's `baseName` appears as a key. When `recFetchSetup` builds module
  `M`, the `LeanOptions` associated with `M.pkg.baseName` (if any) are appended
  to `M.leanOptions`, overriding clashing entries.

  Used by `lake lint` to inject `linter.extra`/`linter.all` into every module
  of a target package (so transitively-imported first-party modules capture
  linter-tagged warnings), without touching dependencies.
  -/
  leanOptOverrides : Lean.NameMap Lean.LeanOptions := {}
  /--
  The miniumum OS version to target on MacOS.

  If a minimum is not set, linkers default the minimum to the host major version and
  will emit warnings if any lineed libraries (including system libraries) exceed the minium.
  Thus, the linker will complain when building on a system with an unset minimum and system
  libraries which require a higher minor version.

  ```
  ld64.lld: warning: /usr/lib/system/libsystem_kernel.dylib has version 13.5.0, which is newer than target minimum of 13.0.0
  ```

  To silence such warnings, Lake sets this far into the future by default (e.g., `99.0`).
  However, that itself can be wrong if a consumer of Lean library uses the minimum OS version
  to determine compatibility (e.g., Python does this). The far-flung version would then
  imply zero compatibility.

  In such cases, the desired deployment target can be manually specified . Depending on
  the desired scope, it can be set per-target, for all targets within a buld (with this),
  or across all builds with the environment variable `MACOSX_DEPLOYMENT_TARGET`.
  -/
  macosxDeploymentTarget? : Option String := none

/--
Whether the build should show progress information.

`Verbosity.quiet` hides progress and, for a `noBuild`,
`Verbosity.verbose` shows progress.
-/
public def BuildConfig.showProgress (cfg : BuildConfig) : Bool :=
  (cfg.noBuild ∧ cfg.verbosity == .verbose) ∨ cfg.verbosity != .quiet

/-- Mutable reference of registered build jobs. -/
@[expose] -- for codegen
public def JobQueue := IO.Ref (Array OpaqueJob)

/-- Returns a new empty job queue. -/
@[inline] public def mkJobQueue : BaseIO JobQueue :=
  IO.mkRef #[]

/--
A value split into `n` shards, each behind its own mutex, so that threads that use different shards do not wait for
each other. The data of a key with hash `h` is in shard `Shards.index n h`.
-/
public structure Shards (n : Nat) (α : Type) where
  shards : Vector (Std.Mutex α) n

/-- `n` shards, each holding `a`. -/
public def Shards.new (n : Nat) (a : α) : BaseIO (Shards n α) :=
  return ⟨← (Vector.replicate n ()).mapM fun _ => Std.Mutex.new a⟩

/-- The shard of hash `h` among `n`, from its high bits: a `Lean.PersistentHashMap` in a shard branches on the low
bits. -/
@[inline] public def Shards.index (n : Nat) [NeZero n] (h : UInt64) : Fin n :=
  ⟨(h >>> 32).toNat % n, Nat.mod_lt _ (Nat.pos_of_ne_zero (NeZero.ne n))⟩

/-- The shard of a key with hash `h`. -/
@[inline] public def Shards.get [NeZero n] (s : Shards n α) (h : UInt64) : Std.Mutex α :=
  s.shards[Shards.index n h]

/--
The kernel constants of the modules a usage-cutoff check may find a changed module's kernel constants duplicated in
(`Lake.UsageSidecar.kernelDisjoint`), as name hashes (`Name.hash`). The checks of concurrent jobs share it, so its
maps are persistent: an update copies only the nodes it changes, where a shared hash map would be copied whole.
-/
public structure KernelProviders where
  /-- The workspace modules `byHash` lists, each with the digest of the state it was read in. -/
  indexed : Lean.PHashSet (Lean.Name × Lean.ModuleUsage.Digest) := {}
  /-- Each kernel constant's name hash with the modules that declare it, each with the digest of the state it was
  read in (`default` for a toolchain module). -/
  byHash : Lean.PHashMap UInt64 (Array (Lean.Name × Lean.ModuleUsage.Digest)) := {}
  /-- The toolchain modules `byHash` lists, each with its direct imports, or `none` if its `.olean` could not be
  read. -/
  toolchain : Lean.PHashMap Lean.Name (Option (Array Lean.Name)) := {}

/-- Lists module `m`, in the state with digest `d`, under each kernel constant name hash in `hs`. -/
public def KernelProviders.index (s : KernelProviders) (m : Lean.Name) (d : Lean.ModuleUsage.Digest)
    (hs : Array UInt64) : KernelProviders :=
  { s with byHash := hs.foldl (fun b h => b.alter h fun o => some ((o.getD #[]).push (m, d))) s.byHash }

/-- A Lake context with a build configuration and additional build data. -/
public structure BuildContext extends BuildConfig, Context where
  leanTrace : BuildTrace
  leanIncludeDirs : Array (Option (FilePath × BuildTrace))
  registeredJobs : JobQueue
  /--
  Input-to-output(s) map for hashes of the tracked package's artifacts.
  If `none`, tracking outputs is disabled for this build.
  -/
  outputsRef? : Option CacheRef := none
  /--
  Cancellation token for the build. Once the token is set, job continuations
  (e.g., `Job.mapM` / `Job.bindM`) error instead of scheduling new work;
  already-running tasks complete normally. If `none`, cancellation is disabled.
   Only the build monitor should set this token: reporting assumes that a counted failure exists when the token is set.
  -/
  cancelTk? : Option IO.CancelToken := none
  /--
  Parsed usage-cutoff sidecars, shared by every module job in this build, each with the digest
  (`Lean.ModuleUsage.Digest.ofBytes`) of the contents it was parsed from and the stamp of the file those contents were
  read from (`Lean.ModuleUsage.readFileStamped`), if it stands for them. Another process may rewrite a sidecar during
  the build (e.g., a build of another workspace that requires the same path dependency), so a cached parse serves
  only a read of the same contents, or a file whose current stamp is the recorded one.
  -/
  sidecarCache : Std.Mutex
    (Std.HashMap FilePath (Option Lean.ModuleUsage.FileStamp × Lean.ModuleUsage.Digest × Dynamic))
  /--
  The content hashes (`Lean.ModuleUsage.fileDigest`) that usage-cutoff checks computed in this build, each with the
  stamp of the file its bytes were read from (`Lean.ModuleUsage.fileDigestStamped`). A check reuses a hash only while
  the file's current stamp is the recorded one; any write, truncation or replacement of the file through the file
  system changes its stamp, so a check never takes a hash for bytes other than the file's current ones.

  A store through a `MAP_SHARED` mapping changes a file's bytes without a `write`, and the kernel may update its
  modification time late, so the reuse relies on no writer of a hashed file using one. Lean writes an `.olean`
  through a stream to a temporary file it then renames (`src/library/module.cpp:314,408`) and maps the files it
  reads `MAP_PRIVATE` (`:528`).
  -/
  fileDigests : Std.Mutex (Std.HashMap FilePath (Lean.ModuleUsage.FileStamp × Lean.ModuleUsage.Digest))
  /--
  The kernel constants of the workspace and toolchain modules usage-cutoff checks read, indexed by name hash. A
  workspace module's entries are keyed by a digest of the state they were read in, so they stay valid however the
  module is rebuilt: a check uses only the entries of the module's current state.
  -/
  kernelProviders : Std.Mutex KernelProviders
  /--
  What this build first read of each imported module's usage-cutoff sidecars, keyed by the module's `.usage`, as a
  `Lake.UsageView` (`Lake.freezeUsageView`): an entry is added once and never replaced, so a view can be older
  than the files when another process rewrote them since. Only the usage index's pre-filter reads views, and it only
  rejects: a check that accepts reads the files again. Concurrent jobs share it, so the maps are persistent, as
  `KernelProviders`' are: a shared hash map is never updated in place, so each view added would copy its shard's
  whole bucket array. Sharded by the path's hash: each read or fill of a view (`usageView?`, `freezeUsageView`) takes
  only the mutex of its path's shard.
  -/
  usageViews : Shards 1024 (Lean.PHashMap FilePath Dynamic)
  /--
  The kept-module checker (`LAKE_KEPT_CHECKER`): a module whose own source and options did not
  change since its outputs were built, but whose imports did, keeps those outputs if the usage
  cutoff's records show the machinery it used unchanged and the checker accepts them. If `none`,
  every such module is compiled.
  -/
  keptChecker? : Option KeptChecker := none
  /--
  Modules to decide as if no outputs had been kept for them (`LAKE_KEPT_EXCLUDE`): their kept
  outputs, local or cached, are not used, and the checker is not asked about them.
  -/
  keptExclude : Lean.NameSet := {}

/-- A transformer to equip a monad with a `BuildContext`. -/
public abbrev BuildT := ReaderT BuildContext

/-- A monad equipped with a Lake build context. -/
public abbrev MonadBuild (m : Type → Type u) :=
  MonadReaderOf BuildContext m

public instance [Pure m] : MonadLift LakeM (BuildT m) where
  monadLift x := fun ctx => pure <| x.run ctx.toContext

@[inline] public def getBuildContext [MonadBuild m] : m BuildContext :=
  readThe BuildContext

@[inline] public def getLeanTrace [Functor m] [MonadBuild m] : m BuildTrace :=
  (·.leanTrace) <$> getBuildContext

@[inline] public def getBuildConfig [Functor m] [MonadBuild m] : m BuildConfig :=
  (·.toBuildConfig) <$> getBuildContext

@[inline, inherit_doc BuildConfig.oldMode]
public def getIsOldMode [Functor m] [MonadBuild m] : m Bool :=
  (·.oldMode) <$> getBuildConfig

@[inline, inherit_doc BuildConfig.trustHash]
public def getTrustHash [Functor m] [MonadBuild m] : m Bool :=
  (·.trustHash) <$> getBuildConfig

@[inline, inherit_doc BuildConfig.noBuild]
public def getNoBuild [Functor m] [MonadBuild m] : m Bool :=
  (·.noBuild) <$> getBuildConfig

@[inline, inherit_doc BuildConfig.verbosity]
public def getVerbosity [Functor m] [MonadBuild m] : m Verbosity :=
  (·.verbosity) <$> getBuildConfig

@[inline] public def getIsVerbose [Functor m] [MonadBuild m] : m Bool :=
  (· == .verbose) <$> getVerbosity

@[inline] public def getIsQuiet [Functor m] [MonadBuild m] : m Bool :=
  (· == .quiet) <$> getVerbosity

@[inline, inherit_doc BuildConfig.leanOptOverrides]
public def getLeanOptOverrides [Functor m] [MonadBuild m]
    : m (Lean.NameMap Lean.LeanOptions) :=
  (·.leanOptOverrides) <$> getBuildConfig

@[inline, inherit_doc BuildConfig.macosxDeploymentTarget?]
public def getMacOSXDeploymentTarget? [Functor m] [MonadBuild m] : m (Option String) :=
  (·.macosxDeploymentTarget?) <$> getBuildConfig
