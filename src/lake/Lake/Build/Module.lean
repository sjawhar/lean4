/-
Copyright (c) 2021 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Sebastian Ullrich, Mac Malone, Siddharth Bhat
-/
module

prelude
public import Lake.Config.FacetConfig
public import Lake.Build.Job.Monad
public import Lake.Build.Infos
import Lean.Elab.ParseImportsFast
import Lean.Util.ModuleUsage
import Lake.Util.Proc
import Lake.Build.Job.Register
import Lake.Build.Common
import Lake.Build.Target
import Init.Omega

/-! # Module Build Definitions -/

open System Lean

namespace Lake

/--
Whether the module's code generation is deferred to a separate `leanir` step (the `irArts` facet)
rather than performed by `lean` during elaboration.

It is opt-in via `compiler.postponeCompile` and only meaningful under the module system.
-/
@[inline] def ModulePreSetup.postponeCompile (self : ModulePreSetup) : Bool :=
  Compiler.compiler.postponeCompile.get self.leanOptions.toOptions

/--
One snapshot of the build store (a single `ST.Ref.get`). A lookup-only pass over many memoized
facets reads it instead of the shared cell, since each `get` of a multi-threaded ref is two atomic
exchanges on that cell. The transitive import walk's facets are already in the store: a module's
imports are built before it.
-/
@[inline] def getBuildStoreSnapshot : FetchM BuildStore :=
  .ofFn fun _ _ _ store _ log => return .ok (← store.get) log

/-- The job memoized for `info` in the snapshot `s`, if any. -/
@[inline] def BuildStore.getInfo?
  (s : BuildStore) (info : BuildInfo) [t : FamilyOut BuildData info.key α]
: Option (Job α) :=
  cast (by rw [t.fam_eq]) (s.get? info.key)

/-- `info.fetch`, served from the snapshot `s` if already memoized there. -/
@[inline] def fetchFrom
  (s : BuildStore) (info : BuildInfo) [FamilyOut BuildData info.key α]
: FetchM (Job α) := do
  if let some job := s.getInfo? info then return job else info.fetch

/--
Fetches the information importers of the module need, including its IR.

Importers need the IR because the language server imports at the `.server` level, where every
import's IR is loaded (see `Lean.importModulesCore`). When code generation is postponed, only
`metaExportInfo` can report it.
-/
-- TODO: Do not always include IR
@[inline] def Module.fetchExportInfo
  (self : Module) (snap? : Option BuildStore := none)
: FetchM (Job ModuleMetaExportInfo) :=
  match snap? with
  | some snap => fetchFrom snap self.metaExportInfo
  | none => self.metaExportInfo.fetch

/-! ## Facet Builds
Build function definitions for a module's builtin facets.
-/

/-- Parse the header of a Lean file from its source. -/
def Module.recFetchInput (mod : Module) : FetchM (Job ModuleInput) := Job.async do
  let path := mod.leanFile
  -- mtime before contents: `buildLean` compares it after `lean` exits
  let mtime ← getMTime path
  let contents ← IO.FS.readFile path
  let trace := {caption := path.toString, mtime, hash := .ofText contents}
  setTrace trace
  let header ← Lean.parseImports' contents path.toString
  let imports ← header.imports.mapM fun imp => do
    return ⟨imp, (← findModule? imp.module)⟩
  return {path, header, imports, trace}

/-- The `ModuleFacetConfig` for the builtin `inputFacet`. -/
public def Module.inputFacetConfig : ModuleFacetConfig inputFacet :=
  mkFacetJobConfig recFetchInput (buildable := false)

/-- The `ModuleFacetConfig` for the builtin `leanFacet`. -/
public def Module.leanFacetConfig : ModuleFacetConfig leanFacet :=
  mkFacetJobConfig fun mod =>
    return (← mod.input.fetch).map (sync := true) (·.path)

/-- The `ModuleFacetConfig` for the builtin `headerFacet`. -/
public def Module.headerFacetConfig : ModuleFacetConfig headerFacet :=
   mkFacetJobConfig (buildable := false) fun mod =>
    return (← mod.input.fetch).map (sync := true) (·.header)

/-- Compute an `Array` of a module's direct local imports from its header. -/
def Module.recParseImports (mod : Module) : FetchM (Job (Array Module)) := do
  (← mod.input.fetch).mapM (sync := true) fun input => do
    let mods := input.imports.foldl (init := OrdModuleSet.empty) fun set imp =>
      match imp.module? with | some mod => set.insert mod | none => set
    return mods.toArray

/-- The `ModuleFacetConfig` for the builtin `importsFacet`. -/
public def Module.importsFacetConfig : ModuleFacetConfig importsFacet :=
  mkFacetJobConfig recParseImports (buildable := false)

structure ModuleImportData where
  module : Module
  transImports : Job (Array Module)
  includeSelf : Bool

@[inline] def collectImportsAux
  (fileName : String) (imports : Array Module)
  (f : Module → FetchM (Bool × Job (Array Module)))
: FetchM (Job (Array Module)) := do
  let imps ← imports.mapM fun imp => do
    let (includeSelf, transImports) ← f imp
    return {module := imp, transImports, includeSelf : ModuleImportData}
  let task : JobTask OrdModuleSet := imps.foldl (init := .pure (.ok .empty {})) fun r imp =>
    r.bind (sync := true) fun r =>
    imp.transImports.task.map (sync := true) fun
    | .ok transImps _ =>
      match r with
      | .ok impSet s =>
        let impSet := impSet.appendArray transImps
        let impSet := if imp.includeSelf then impSet.insert imp.module else impSet
        .ok impSet s
      | .error e s => .error e s
    | .error _ _ =>
      let entry := LogEntry.error s!"{fileName}: bad import '{imp.module.name}'"
      match r with
      | .ok _ s => .error 0 (s.logEntry entry)
      | .error e s => .error e (s.logEntry entry)
  return Job.ofTask <| task.map (sync := true) fun
    | .ok impSet s => .ok impSet.toArray s
    | .error e s => .error e s

def computeTransImportsAux
  (fileName : String) (imports : Array Module)
: FetchM (Job (Array Module)) := do
  collectImportsAux fileName imports fun imp =>
    (true, ·) <$> imp.transImports.fetch

/-- Recursively compute a module's transitive imports. -/
def Module.recComputeTransImports (mod : Module) : FetchM (Job (Array Module)) := ensureJob do
  inline <| computeTransImportsAux mod.relLeanFile.toString (← (← mod.imports.fetch).await)

/-- The `ModuleFacetConfig` for the builtin `transImportsFacet`. -/
public def Module.transImportsFacetConfig : ModuleFacetConfig transImportsFacet :=
  mkFacetJobConfig recComputeTransImports (buildable := false)

def computePrecompileImportsAux
  (fileName : String) (imports : Array Module)
: FetchM (Job (Array Module)) := do
  collectImportsAux fileName imports fun imp =>
    -- `imp.shouldPrecompile` implies `imp.lib.shouldPrecompile`
    (imp.lib.shouldPrecompile, ·) <$> imp.precompileImports.fetch

/-- Recursively compute a module's precompiled imports. -/
def Module.recComputePrecompileImports (mod : Module) : FetchM (Job (Array Module)) := ensureJob do
  inline <| computePrecompileImportsAux mod.relLeanFile.toString (← (← mod.imports.fetch).await)

/-- The `ModuleFacetConfig` for the builtin `precompileImportsFacet`. -/
public def Module.precompileImportsFacetConfig : ModuleFacetConfig precompileImportsFacet :=
  mkFacetJobConfig recComputePrecompileImports (buildable := false)

/--
Computes the transitive dynamic libraries of a module's imports.
Modules from the same library are loaded individually, while modules
from other libraries are loaded as part of the whole library.
-/
def Module.fetchImportLibs
  (self : Module) (imps : Array Module)
  (precompileModules : Bool) (precompileImports : Bool)
: FetchM (Array (Job Dynlib)) := do
  let (_, jobs) ← imps.foldlM (init := (({} : NameSet), #[])) fun (libs, jobs) imp => do
    if libs.contains imp.lib.name then
      return (libs, jobs)
    else if self.lib.name = imp.lib.name then
      -- The library as a whole cannot be loaded here, as it includes the module itself.
      if precompileModules then
        let job ← imp.dynlib.fetch
        return (libs, jobs.push job)
      else
        return (libs, jobs)
    else if precompileImports || imp.lib.shouldPrecompile then
      let jobs ← jobs.push <$> imp.lib.shared.fetch
      return (libs.insert imp.lib.name, jobs)
    else
      return (libs, jobs)
  return jobs

/--
Fetches the library dynlibs of a list of non-local imports.
Modules are loaded as part of their whole library.
-/
def fetchImportLibs
  (mods : Array Module) : FetchM (Job (Array Dynlib))
:= do
  let (_, jobs) ← mods.foldlM (init := (({} : NameSet), #[])) fun (libs, jobs) imp => do
    if libs.contains imp.lib.name then
      return (libs, jobs)
    else if imp.lib.shouldPrecompile then
      let jobs ← jobs.push <$> imp.lib.shared.fetch
      return (libs.insert imp.lib.name, jobs)
    else
      return (libs, jobs)
  return Job.collectArray jobs "import dynlibs"

/--
Topologically sorts the library dependency tree by name.
Libraries come *after* their dependencies.
-/
partial def mkLoadOrder (libs : Array Dynlib) : FetchM (Array Dynlib) := do
  let r := libs.foldlM (m := Except (Cycle String)) (init := ({}, #[])) fun (v, o) lib =>
    go lib [] v o
  match r with
  | .ok (_, order) => pure order
  | .error cycle => error s!"library dependency cycle:\n{formatCycle cycle}"
where
  go lib (ps : List String) (v : Std.TreeSet String compare) (o : Array Dynlib) := do
    if v.contains lib.name then
      return (v, o)
    if ps.contains lib.name then
      throw (lib.name :: ps)
    let ps := lib.name :: ps
    let v := v.insert lib.name
    let step := fun (v, o) lib =>
      go lib ps v o
    let (v, o) ← lib.deps.foldlM step (v, o)
    let (v, o) ← lib.runtimeOnlyDeps.foldlM step (v, o)
    let o := o.push lib
    return (v, o)

structure ModuleDeps where
  dynlibs : Array Dynlib := #[]
  plugins : Array Dynlib := #[]
  deriving Inhabited, Repr

def computeModuleDeps
  (impLibs : Array Dynlib) (externLibs : Array Dynlib)
  (dynlibs : Array Dynlib) (plugins : Array Dynlib)
: FetchM ModuleDeps := do
  /-
  Requirements:
  * Lean wants the external library symbols before module symbols.
  * Unix requires the file extension of the dynlib.
  * For some reason, building from the Lean server requires full paths.
    Everything else loads fine with just the augmented library path.
  * Linux needs the augmented path to resolve nested dependencies in dynlibs.
  -/
  let impLibs ← mkLoadOrder impLibs
  let mut dynlibs := externLibs ++ dynlibs
  let mut plugins := plugins
  for impLib in impLibs do
    if impLib.plugin then
      plugins := plugins.push impLib
    else
      dynlibs := dynlibs.push impLib
  /-
  On Linux, dynlibs that use Lake symbols are linked against `libLake_shared.so` (`--as-needed`).
  The runtime linker is not able to find `lib/lean/libLake_shared.so` on disk
  because we do not set `LD_LIBRARY_PATH`,
  and the `DT_RUNPATH` entry on `bin/lean` pointing to `lib/lean`
  is ignored when resolving transitive dependencies.
  So we load `libLake_shared.so` eagerly *in case it might be needed*
  (we don't know whether it is needed because an imported `Lake.*` module
  will not be present in `Module.transImports`).
  TODO: load as dynlib instead of as plugin,
  see https://github.com/leanprover/lean4/pull/14326

  MacOS *can* resolve the dylib but needs a plugin to run initializers,
  see https://github.com/leanprover/lean4/issues/7388
  TODO: remove macOS case once initializers are compiled correctly,
  see https://github.com/leanprover/lean4/issues/14359
  -/
  if (Platform.isLinux || Platform.isOSX) && !(plugins.isEmpty && dynlibs.isEmpty) then
    plugins := plugins.insertIdx 0 (← getLakeInstall).sharedDynlib
  return {dynlibs, plugins}

structure TransImportEntry where
  mod : Module
  /-- Whether to include all module artifacts and traverse the module's direct imports. -/
  importAll : Bool
  /-- Whether this module has been transitively imported by a `meta import`. -/
  needsMeta : Bool

partial def fetchTransImportArts
  (directImports : Array ModuleImport) (directArts : NameMap ImportArtifacts) (nonModule : Bool)
: FetchM (NameMap ImportArtifacts) := do
  let snap ← getBuildStoreSnapshot
  let q ← directImports.foldrM (init := #[]) fun imp q => do
    let some mod := imp.module? | return q
    let input ← (← fetchFrom snap mod.input).await
    let importAll := strictOr nonModule imp.importAll
    return enqueue importAll imp.isMeta input q
  walk snap directArts {} {} q
where
  walk (snap : BuildStore) s (allVisited metaVisited : NameSet) (q : Array TransImportEntry) := do
    if h : 0 < q.size then
      let {mod, importAll, needsMeta} := q.back
      let q := q.pop
      /-
      A module system `import` may need to be promoted to a
      wider import (`meta import`, `import all`) on another branch.

      Track the two import dimensions separately: `allVisited` = raised to `.private` by
      `import all`; `metaVisited` = made meta-reachable by a `meta import`. An `import all` visit
      must not mark a module meta-visited, otherwise a later `meta` visit is skipped and the
      module's children never inherit the meta requirement.
      -/
      let doAll := importAll && !allVisited.contains mod.name
      let doMeta := needsMeta && !metaVisited.contains mod.name
      let existing? := s.find? mod.name
      -- Re-process an existing entry only to widen a module-system entry (`.server` present) with a
      -- newly-required dimension. Otherwise, leave it untouched (nothing new, or a non-module entry).
      if let some arts := existing? then
        unless arts.oleanServer?.isSome && (doAll || doMeta) do
          return ← walk snap s allVisited metaVisited q
      let allVisited := if importAll then allVisited.insert mod.name else allVisited
      let metaVisited := if needsMeta then metaVisited.insert mod.name else metaVisited
      -- Widest level seen so far, never below an existing entry's (no demotion).
      let wantAll := allVisited.contains mod.name || existing?.any (·.oleanPrivate?.isSome)
      let info ← (← mod.fetchExportInfo snap).await
      let s := s.insert mod.name (if wantAll then info.allArts else info.arts)
      let input ← (← fetchFrom snap mod.input).await
      -- `import all`/`meta import` are transitive. Propagate both flags to children.
      let q := enqueue importAll needsMeta input q
      walk snap s allVisited metaVisited q
    else
      return s
  enqueue importAll needsMeta input q :=
    input.imports.foldr (init := q) fun imp q =>
      if let some mod := imp.module? then
        let reachable := importAll || imp.isExported
        let importAll := nonModule || (importAll && imp.importAll)
        let needsMeta := needsMeta || (reachable && imp.isMeta)
        if reachable || needsMeta then
          q.push {mod, importAll, needsMeta}
        else q
      else q

def ModuleImportInfo.nil (modName : Name) : ModuleImportInfo where
  directArts := {}
  trace := .nil s!"imports"
  transTrace := .nil s!"{modName} transitive imports (public)"
  metaTransTrace := .nil s!"{modName} transitive imports (meta)"
  allTransTrace := .nil s!"{modName} transitive imports (all)"
  legacyTransTrace := .nil s!"{modName} transitive imports (legacy)"
  irSigTrace := .nil s!"imports (leanir)"
  irSigTransTrace := .nil s!"{modName} transitive imports (leanir)"

def ModuleMetaExportInfo.disambiguationHash
  (self : ModuleMetaExportInfo) (nonModule : Bool) (imp : Import)
: Hash :=
  if nonModule then
    self.legacyTransTrace.hash.mix self.allArtsTrace.hash
  else if imp.importAll then
    self.allTransTrace.hash.mix self.allArtsTrace.hash
  else if imp.isMeta then
    self.metaTransTrace.hash.mix self.metaArtsTrace.hash
  else
    self.transTrace.hash.mix self.artsTrace.hash

def ModuleImportInfo.addImport
  (info : ModuleImportInfo) (nonModule : Bool)
  (imp : Import) (expInfo : ModuleMetaExportInfo)
: ModuleImportInfo :=
  let info :=
    if nonModule then
      {info with
        directArts := info.directArts.insert imp.module expInfo.allArts
        trace := info.trace.mix expInfo.legacyTransTrace |>.mix expInfo.allArtsTrace.withoutInputs
      }
    else if imp.importAll then
      {info with
        directArts := info.directArts.insert imp.module expInfo.allArts
        trace := info.trace.mix expInfo.allTransTrace |>.mix expInfo.allArtsTrace.withoutInputs
      }
    else
      let info :=
        if !info.directArts.contains imp.module  then -- do not demote `import all`
          {info with directArts := info.directArts.insert imp.module expInfo.arts}
        else
          info
      {info with trace :=
        if imp.isMeta then
          info.trace.mix expInfo.metaTransTrace |>.mix expInfo.metaArtsTrace.withoutInputs
        else
          info.trace.mix expInfo.transTrace |>.mix expInfo.artsTrace.withoutInputs
      }
  let info := {info with
    legacyTransTrace := info.legacyTransTrace
    |>.mix expInfo.legacyTransTrace
    |>.mix expInfo.allArtsTrace.withoutInputs
    |>.withoutInputs
  }
  let info := {info with
    allTransTrace :=
      if imp.importAll then
        info.allTransTrace
        |>.mix expInfo.allTransTrace
        |>.mix expInfo.allArtsTrace.withoutInputs
        |>.withoutInputs
      else if imp.isMeta then
        info.allTransTrace
        |>.mix expInfo.metaTransTrace
        |>.mix expInfo.metaArtsTrace.withoutInputs
        |>.withoutInputs
      else
        info.allTransTrace
        |>.mix expInfo.transTrace
        |>.mix expInfo.artsTrace.withoutInputs
        |>.withoutInputs
  }
  let info := {info with
    metaTransTrace := info.metaTransTrace
    |>.mix expInfo.metaTransTrace
    |>.mix expInfo.metaArtsTrace.withoutInputs
    |>.withoutInputs
  }
  let info := {info with
    irSigTrace :=
      if nonModule || imp.importAll then
        info.irSigTrace
        |>.mix expInfo.allTransTrace
        |>.mix expInfo.allArtsTrace.withoutInputs
      else
        info.irSigTrace
        |>.mix expInfo.irSigTransTrace
        |>.mix expInfo.irSigArtsTrace.withoutInputs
  }
  if imp.isExported then
    {info with
      transTrace :=
        if imp.isMeta then
          info.transTrace
          |>.mix expInfo.metaTransTrace
          |>.mix expInfo.metaArtsTrace.withoutInputs
          |>.withoutInputs
        else
          info.transTrace
          |>.mix expInfo.transTrace
          |>.mix expInfo.artsTrace.withoutInputs
          |>.withoutInputs
      irSigTransTrace := info.irSigTransTrace
      |>.mix expInfo.irSigTransTrace
      |>.mix expInfo.irSigArtsTrace.withoutInputs
      |>.withoutInputs
    }
  else
    info

def Package.discriminant (self : Package) :=
  if self.version == {} then
    self.prettyName
  else
    s!"{self.prettyName}@{self.version}"

set_option linter.unusedVariables.funArgs false in
def fetchImportInfo
  (fileName : String) (pkgName modName : Name) (header : ModuleHeader)
  (allowNonModules : Bool := false)
: FetchM (Job ModuleImportInfo) := do
  let nonModule := !header.isModule
  let info := ModuleImportInfo.nil modName
  let impArtsJob : Job ModuleImportInfo := .pure info
  header.imports.foldlM (init := impArtsJob) fun s imp => do
    if modName = imp.module then
      logError s!"{fileName}: module imports itself"
      return .error
    let mods ← findModules imp.module
    if nonModule && !allowNonModules then
      if let some mod := mods.find? (·.requiresModuleSystem) then
        if pkgName == mod.pkg.keyName then
          logWarning s!"{fileName}: missing `module` header as required \
            by the `requiresModuleSystem` option"
        else
          logWarning s!"{fileName}: imports `{imp.module}` from package \
            `{mod.pkg.prettyName}`, which is designed for use with the module \
            system; consider adding `module` to the start of this file"
    let n := mods.size
    if h : n = 0 then
      return s
    else if n = 1 then -- common fast path
      let mod := mods[0]
      -- Remark: We've decided to disable this check for now
      -- if imp.importAll && !mod.allowImportAll && pkgName != mod.pkg.keyName then
      --   logError s!"{fileName}: cannot `import all` \
      --     the module `{imp.module}` from the package `{mod.pkg.discriminant}`"
      --   return .error
      let importJob ← mod.fetchExportInfo
      return s.zipWith (sync := true) (·.addImport nonModule imp ·) importJob
    else
      -- Remark: We've decided to disable this check for now
      -- let isImportable (mod) :=
      --   mod.allowImportAll || pkgName == mod.pkg.keyName
      -- let allImportable :=
      --   if imp.importAll then
      --     mods.all isImportable
      --   else true
      -- unless allImportable do
      --   let msg := s!"{fileName}: cannot `import all` the module `{imp.module}` \
      --     from the following packages:"
      --   let msg := mods.foldl (init := msg) fun msg mod =>
      --     if isImportable mod then
      --       msg
      --     else
      --       s!"{msg}\n  {mod.pkg.discriminant}"
      --   logError msg
      --   return .error
      let mods : Vector Module n := .mk mods rfl
      let expInfosJob ← Job.collectVector <$> mods.mapM (·.fetchExportInfo)
      s.bindM (sync := true) fun impInfo => do
      expInfosJob.mapM (sync := true) fun expInfos => do
        let expInfo := expInfos[0]
        let impHash := expInfo.disambiguationHash nonModule imp
        let allEquiv := expInfos.toArray.all (start := 1) fun expInfo =>
          impHash == expInfo.disambiguationHash nonModule imp
        unless allEquiv do
          let msg := s!"{fileName}: could not disambiguate the module `{imp.module}`; \
            multiple packages provide distinct definitions:"
          let msg := n.fold (init := msg) fun i h s =>
            let hash := expInfos[i].disambiguationHash nonModule imp
            s!"{s}\n  {mods[i].pkg.discriminant} (hash: {hash})"
          error msg
        return impInfo.addImport nonModule imp expInfo

/-- The `ModuleFacetConfig` for the builtin `importInfoFacet`. -/
public def Module.importInfoFacetConfig : ModuleFacetConfig importInfoFacet :=
  mkFacetJobConfig fun mod => do
    let header ← (← mod.header.fetch).await
    fetchImportInfo mod.relLeanFile.toString mod.pkg.keyName mod.name header
      (allowNonModules := mod.allowNonModules)

def noServerOLeanError :=
  "No server olean generated. Ensure the module system is enabled."

def noPrivateOLeanError :=
  "No private olean generated. Ensure the module system is enabled."

def noIRError :=
  "No `.ir` generated. Ensure the module system is enabled."

def noIRSigError :=
  "No `.ir.sig` generated. Ensure the module system is enabled."

def noCError :=
  "No `.c` generated. This may be a bug in Lean or Lake."

/-- Computes the import artifacts and transitive import trace of a module's imports. -/
def Module.computeExportInfo (mod : Module) : FetchM (Job ModuleExportInfo) := do
  (← mod.elabArts.fetch).mapM (sync := true) fun arts => do
    let input ← (← mod.input.fetch).await
    let importInfo ← (← mod.importInfo.fetch).await
    let artsTrace := BuildTrace.nil s!"{mod.name}:importArts"
    return {
      srcTrace := input.trace
      arts := ⟨#[#[arts.olean.path]]⟩
      artsTrace := artsTrace.mix arts.olean.trace
      transTrace := importInfo.transTrace
    }

/-- The `ModuleFacetConfig` for the builtin `exportInfoFacet`. -/
public def Module.exportInfoFacetConfig : ModuleFacetConfig exportInfoFacet :=
  mkFacetJobConfig computeExportInfo (buildable := false)

/-- Like `computeExportInfo`, but includes IR produced by a postponed code generation. -/
def Module.computeMetaExportInfo (mod : Module) : FetchM (Job ModuleMetaExportInfo) := do
  let irJob ← mod.irArts.fetch
  let expInfoJob ← mod.exportInfo.fetch
  irJob.bindM (sync := true) fun arts =>
  expInfoJob.mapM (sync := true) fun info => do
    let importInfo ← (← mod.importInfo.fetch).await
    let metaArtsTrace := BuildTrace.nil s!"{mod.name}:importArts (meta)"
    let irSigArtsTrace := BuildTrace.nil s!"{mod.name}:importArts (leanir)"
    let allArtsTrace := BuildTrace.nil s!"{mod.name}:importAllArts"
    if arts.isModule then
      let some oleanServer := arts.oleanServer?
        | error noServerOLeanError
      let some oleanPrivate := arts.oleanPrivate?
        | error noPrivateOLeanError
      let some irSig := arts.irSig?
        | error noIRSigError
      let some ir := arts.ir?
        | error noIRError
      return {info with
        -- NOTE: always includes `.server` and full `.ir` as this data is used by the server and we
        -- do not distinguish between it and cmdline build here (TODO: this is too dangerous!)
        arts := .ofArrays #[#[arts.olean.path, oleanServer.path], #[irSig.path, ir.path]]
        metaArtsTrace := metaArtsTrace.mix arts.olean.trace |>.mix irSig.trace |>.mix ir.trace
        irSigArtsTrace := irSigArtsTrace.mix arts.olean.trace |>.mix irSig.trace
        allArts := .ofArrays #[#[arts.olean.path, oleanServer.path, oleanPrivate.path], #[irSig.path, ir.path]]
        allArtsTrace := allArtsTrace.mix
          arts.olean.trace |>.mix oleanServer.trace |>.mix oleanPrivate.trace
          |>.mix irSig.trace |>.mix ir.trace
        transTrace := importInfo.transTrace
        metaTransTrace := importInfo.metaTransTrace
        allTransTrace := importInfo.allTransTrace
        legacyTransTrace := importInfo.legacyTransTrace
        irSigTransTrace := importInfo.irSigTransTrace
      }
    else
      return {info with
        metaArtsTrace := metaArtsTrace.mix arts.olean.trace
        irSigArtsTrace := irSigArtsTrace.mix arts.olean.trace
        allArts := ⟨#[#[arts.olean.path]]⟩
        allArtsTrace:= allArtsTrace.mix arts.olean.trace
        transTrace := importInfo.transTrace
        metaTransTrace := importInfo.metaTransTrace
        allTransTrace := importInfo.allTransTrace
        legacyTransTrace := importInfo.legacyTransTrace
        irSigTransTrace := importInfo.irSigTransTrace
      }

/-- The `ModuleFacetConfig` for the builtin `metaExportInfoFacet`. -/
public def Module.metaExportInfoFacetConfig : ModuleFacetConfig metaExportInfoFacet :=
  mkFacetJobConfig computeMetaExportInfo (buildable := false)

/-- The `ModuleFacetConfig` for the builtin `importArtsFacet`. -/
public def Module.importArtsFacetConfig : ModuleFacetConfig importArtsFacet :=
  mkFacetJobConfig fun mod =>
    return (← mod.exportInfo.fetch).mapOk (sync := true) fun i s =>
      .ok i.arts {s with trace := i.artsTrace}

/-- The `ModuleFacetConfig` for the builtin `importAllArtsFacet`. -/
public def Module.importAllArtsFacetConfig : ModuleFacetConfig importAllArtsFacet :=
  mkFacetJobConfig fun mod =>
    return (← mod.metaExportInfo.fetch).mapOk (sync := true) fun i s =>
      .ok i.arts {s with trace := i.allArtsTrace}

/--
Whether usage cutoff is on (`Lake.Env.usageCutoff`). Only with it on does Lean write usage data
(`Module.buildLean`), so the setting is part of every module's trace: the two settings never reuse
each other's outputs (traces or cache entries, both keyed by the input hash), and a build that
switches compiles each module again.
-/
@[inline] def usageCutoffEnabled [Functor m] [MonadLakeEnv m] : m Bool :=
  (·.usageCutoff) <$> getLakeEnv

/--
Recursively build a module's dependencies, including:
* Transitive local imports
* Shared libraries (e.g., `extern_lib` targets or precompiled modules)
* `extraDepTargets` of its library
-/
def Module.recFetchPreSetup (mod : Module) : FetchM (Job ModulePreSetup) := ensureJob do
  /-
  Remark: Await extra target dependencies (e.g., cloud releases, `needs`) before any
  other module processing. This both enables the dependencies to effect these elements
  and prevents them from racing with the processing here ([1]).

  An `await` is used here rather than `bindM` because keeping import graph processing on
  a single thread is simpler and the build would need to block on this regardless.

  [1]: https://github.com/leanprover/lean4/issues/13598
  -/
  let extraDepJob ← mod.lib.extraDep.fetch
  discard extraDepJob.await

  let inputJob ← mod.input.fetch
  /-
  Remark: We must build direct imports before we fetch the transitive
  precompiled imports so that errors in the import block of transitive imports
  will not kill this job before the direct imports are built.
  -/
  let impInfoJob ← mod.importInfo.fetch

  /-
  Remark: It should be possible to avoid transitive imports here when the module
  itself is precompiled, but they are currently kept to preserve the "bad import" errors.
  -/
  let precompileImports ← if mod.shouldPrecompileImports then
    mod.transImports.fetch else mod.precompileImports.fetch
  let precompileImports ← precompileImports.await
  let impLibsJob ← Job.collectArray (traceCaption := "import dynlibs") <$>
    mod.fetchImportLibs precompileImports mod.shouldPrecompile mod.shouldPrecompileImports

  let externLibsJob ← Job.collectArray (traceCaption := "package external libraries") <$>
    if mod.shouldPrecompileImports then mod.pkg.externLibs.mapM (·.dynlib.fetch) else pure #[]
  let dynlibsJob ← mod.dynlibs.fetchIn mod.pkg "module dynlibs"
  let pluginsJob ← mod.plugins.fetchIn mod.pkg "module plugins"

  inputJob.bindM (sync := true) fun input => do
  impInfoJob.bindM (sync := true) fun info => do
  newTrace
  impLibsJob.bindM (sync := true) fun impLibs => do
  externLibsJob.bindM (sync := true) fun externLibs => do
  dynlibsJob.bindM (sync := true) fun dynlibs => do
  pluginsJob.mapM fun plugins => do
    let libTrace ← takeTrace
    let trace := BuildTrace.nil "deps"
    let depTrace := trace.mix extraDepJob.getTrace |>.mix info.trace
    setTraceCaption s!"{mod.name.toString}"
    let libTrace := libTrace.withCaption "libs"
    let nilLibTrace :=
      BuildTrace.nil "libs"
      |>.mix (.nil "import dynlibs")
      |>.mix (.nil "package external libraries")
      |>.mix (.nil "module dynlibs")
      |>.mix (.nil "module plugins")
    let libTraces := match mod.platformIndependent with
      | none => #[libTrace]
      | some false => #[libTrace, platformTrace]
      | some true => #[nilLibTrace]
    let {dynlibs, plugins} ← computeModuleDeps impLibs externLibs dynlibs plugins
    let extra := (← getLeanOptOverrides).find? mod.pkg.baseName |>.getD {}
    let leanOptions := mod.leanOptions ++ extra
    -- Every input of the module's trace except its imports (`info.trace`, mixed in via `depTrace`).
    let localInputs := libTraces ++ #[
      ← getLeanTrace, input.trace, traceOptions leanOptions "options",
      pureTrace input.header.isModule "isModule", pureTrace mod.name "Module.name",
      pureTrace mod.pkg.id? "Package.id?", pureTrace mod.leanArgs "Module.leanArgs",
      pureTrace (← usageCutoffEnabled) "usage cutoff"]
    addTrace depTrace
    localInputs.forM addTrace
    let localTrace := localInputs.foldl (·.mix ·) ((BuildTrace.nil "local").mix extraDepJob.getTrace)
    return {
      trace := ← getTrace
      localTrace
      srcFile := input.path
      srcMTime := input.trace.mtime
      srcHash := input.trace.hash
      isModule := input.header.isModule
      directImports := input.imports
      directImportArts := info.directArts
      irSigTrace := info.irSigTrace
      dynlibs, plugins, leanOptions
    }
where
  traceOptions (opts : LeanOptions) (caption := "opts") : BuildTrace :=
    opts.values.foldl (init := .nil caption) fun t n v =>
      let opt := s!"-D{n}={v.asCliFlagValue}"
      t.mix <| .ofHash (pureHash opt) opt

/-- The `ModuleFacetConfig` for the builtin `presetupFacet`. -/
public def Module.presetupFacetConfig : ModuleFacetConfig presetupFacet :=
  mkFacetJobConfig (buildable := false) recFetchPreSetup

/-- The `ModuleFacetConfig` for the builtin `depTraceFacet`. -/
public def Module.depTraceFacetConfig : ModuleFacetConfig depTraceFacet :=
  mkFacetJobConfig (buildable := false) fun mod =>
    return (← mod.presetup.fetch).map (·.trace)

/-- The `ModuleFacetConfig` for the builtin `depHashFacet`. -/
public def Module.depHashFacetConfig : ModuleFacetConfig depHashFacet :=
  mkFacetJobConfig (buildable := false) fun mod =>
    return (← mod.presetup.fetch).map (·.trace.hash)

/-- The `ModuleFacetConfig` for the builtin `depsFacet`. -/
public def Module.depsFacetConfig : ModuleFacetConfig depsFacet :=
  mkFacetJobConfig fun mod => (·.toOpaque) <$> mod.presetup.fetch

def mkModuleSetup (mod : Module) (presetup : ModulePreSetup) : FetchM ModuleSetup := do
  let importArts ← fetchTransImportArts
    presetup.directImports presetup.directImportArts !presetup.isModule
  return {
    name := mod.name
    isModule := presetup.isModule
    package? := mod.pkg.id?
    imports? := none
    importArts
    dynlibs := presetup.dynlibs.map (·.path)
    plugins := presetup.plugins.map (·.path)
    options := presetup.leanOptions
  }

/-- Recursively compute the contents of a `setup.json` for the module. -/
def Module.recFetchSetup (mod : Module) : FetchM (Job ModuleSetup) := ensureJob do
  withRegisterJob s!"{mod.name}:setup" do
  (← mod.presetup.fetch).mapM fun presetup => do
    mkModuleSetup mod presetup

/-- The `ModuleFacetConfig` for the builtin `setupFacet`. -/
public def Module.setupFacetConfig : ModuleFacetConfig setupFacet :=
  mkFacetJobConfig (buildable := false) recFetchSetup

/-- Remove all existing artifacts produced by a Lean build of the module. -/
public def Module.clearOutputArtifacts (mod : Module) : IO PUnit := do
  try
    removeFileIfExists mod.ltarFile
    removeFileIfExists mod.oleanFile
    removeFileIfExists mod.oleanServerFile
    removeFileIfExists mod.oleanPrivateFile
    removeFileIfExists mod.ileanFile
    removeFileIfExists mod.irSigFile
    removeFileIfExists mod.irFile
    removeFileIfExists mod.cFile
    removeFileIfExists mod.bcFile
    removeFileIfExists mod.usageFile
    removeFileIfExists mod.usekeyFile
  catch e =>
    error s!"failed to remove output artifacts: {e}"

/-- Remove all existing artifacts produced by a `leanir` build of the module. -/
public def Module.clearIROutputArtifacts (mod : Module) : IO PUnit := do
  try
    removeFileIfExists mod.ltarFile
    removeFileIfExists mod.irSigFile
    removeFileIfExists mod.irFile
    removeFileIfExists mod.cFile
  catch e =>
    error s!"failed to remove IR output artifacts: {e}"

/-- Remove any cached file hashes of the module build outputs (in `.hash` files). -/
public def Module.clearOutputHashes (mod : Module) : IO PUnit := do
  try
    clearFileHash mod.ltarFile
    clearFileHash mod.oleanFile
    clearFileHash mod.oleanServerFile
    clearFileHash mod.oleanPrivateFile
    clearFileHash mod.ileanFile
    clearFileHash mod.irSigFile
    clearFileHash mod.irFile
    clearFileHash mod.cFile
    clearFileHash mod.bcFile
    clearFileHash mod.usageFile
    clearFileHash mod.usekeyFile
  catch e =>
    error s!"failed to remove output hashes: {e}"

/-- Remove any cached file hashes of the module IR build outputs (in `.hash` files). -/
public def Module.clearIROutputHashes (mod : Module) : IO PUnit := do
  try
    clearFileHash mod.ltarFile
    clearFileHash mod.irSigFile
    clearFileHash mod.irFile
    clearFileHash mod.cFile
  catch e =>
    error s!"failed to remove IR output hashes: {e}"

/-- Cache the file hashes of the module build outputs in `.hash` files. -/
public def Module.cacheOutputHashes (mod : Module) : IO PUnit := do
  -- Hashes on not conditional on module metadata (e.g., `isModule`).
  -- Lake will determine which files to use (and which to delete) as part of the build proccess.
  try
    cacheFileHashIfExists mod.ltarFile
    cacheFileHashIfExists mod.oleanFile
    cacheFileHashIfExists mod.oleanServerFile
    cacheFileHashIfExists mod.oleanPrivateFile
    cacheFileHashIfExists mod.ileanFile
    cacheFileHashIfExists mod.irSigFile
    cacheFileHashIfExists mod.irFile
    cacheFileHashIfExists mod.cFile
    cacheFileHashIfExists mod.bcFile
  catch e =>
    error s!"failed to save output hashes: {e}"

/--
Resolves module outputs' usage-cutoff sidecars. A sidecar the entry names that does not resolve
(e.g., pruned from the cache) fails, so the entry is a miss: the module rebuilds and writes its
sidecars again, and its dependents, which use its `.usage` only with its `.usekey` (`importUsage?`),
keep skipping.
-/
def ModuleOutputDescrs.resolveSidecars
  (descrs : ModuleOutputDescrs) (service? : Option CacheServiceName) (scope? : Option CacheServiceScope)
: JobM (Option Artifact × Option Artifact) := do
  let usage? ← descrs.usage?.mapM (resolveArtifact · service? scope?)
  let usekey? ← descrs.usekey?.mapM (resolveArtifact · service? scope?)
  return (usage?, usekey?)

def ModuleOutputDescrs.resolve
  (descrs : ModuleOutputDescrs) (service? : Option CacheServiceName) (scope? : Option CacheServiceScope)
: JobM ModuleOutputArtifacts := do
  let (usage?, usekey?) ← descrs.resolveSidecars service? scope?
  let arts : ModuleOutputArtifacts := {
    isModule := descrs.isModule
    olean := ← resolve descrs.olean
    oleanServer? := ← descrs.oleanServer?.mapM resolve
    oleanPrivate? := ← descrs.oleanPrivate?.mapM resolve
    irSig? := ← descrs.irSig?.mapM resolve
    ir? := ← descrs.ir?.mapM resolve
    ilean := ← resolve descrs.ilean
    c? := ← descrs.c?.mapM resolve
    ltar? := ← descrs.ltar?.mapM resolve
    usage?, usekey?
    keptFrom? := descrs.keptFrom?
  }
  if Lean.Internal.hasLLVMBackend () then
    let some descr := descrs.bc?
      | error "LLVM backend enabled but module outputs lack bitcode"
    return {arts with bc? := some (← resolve descr)}
  else
    return arts
where
  @[inline] resolve descr := resolveArtifact descr service? scope?

def resolveModuleOutputArtifacts (out : CacheOutput) : JobM ModuleOutputArtifacts := do
  match fromJson? out.data with
  | .ok (descrs : ModuleOutputDescrs) => descrs.resolve out.service? out.scope?
  | .error e => error s!"ill-formed module outputs:\n{out.data.render.pretty 80 2}\n{e}"

instance : ResolveOutputs ModuleOutputArtifacts := ⟨resolveModuleOutputArtifacts⟩

inductive ModuleOutputs
/-- Only the archive, and the entry's sidecars, which the archive does not include. -/
| ltar (art : Artifact) (usage? usekey? : Option Artifact)
| arts (arts : ModuleOutputArtifacts)

instance : Coe ModuleOutputArtifacts ModuleOutputs := ⟨.arts⟩

/--
Resolves a module's cached outputs: the archive alone (a string, or `{"l": <archive>, "kf": <hash>}`
for kept outputs, as `lake build -o` records them), or the outputs' descriptions.
-/
def resolveModuleOutputs (out : CacheOutput) : JobM ModuleOutputs := do
  let archive? := match out.data with
    | .str descr => some descr
    | data => if (data.getObjVal? "o").isOk then none else
      match data.getObjVal? "l" with
      | .ok (.str descr) => some descr
      | _ => none
  if let some descr := archive? then
    match ArtifactDescr.ofFilePath? descr with
    | .ok descr =>
      return .ltar (← resolveArtifact descr out.service? out.scope?) none none
    | .error e =>
      error s!"ill-formed module archive output:\n{out.data.render.pretty 80 2}\n{e}"
  else
    match fromJson? out.data with
    | .ok (descrs : ModuleOutputDescrs) =>
      if let some descr := descrs.ltar? then
        try
          descrs.resolve out.service? out.scope?
        catch e =>
          dropLogFrom e
          let (usage?, usekey?) ← descrs.resolveSidecars out.service? out.scope?
          return .ltar (← resolveArtifact descr out.service? out.scope?) usage? usekey?
      else
        descrs.resolve out.service? out.scope?
    | .error e => error s!"ill-formed module outputs:\n{out.data.render.pretty 80 2}\n{e}"

instance : ResolveOutputs ModuleOutputs := ⟨resolveModuleOutputs⟩

/--
Saves the module's usage-cutoff sidecars (`.usage`, `.usekey`), where they exist, to the local Lake cache as they
are: no trace describes them, but the `.usekey` binds the `.usage` (its digest) and the `.olean` (its hash), and Lake
checks both wherever it reads them.
-/
def Module.cacheUsageSidecars (mod : Module) (useLocalFile : Bool) : JobM (Option Artifact × Option Artifact) :=
  return (← cacheIfExists mod.usageFile "usage", ← cacheIfExists mod.usekeyFile "usekey")
where
  cacheIfExists file ext : JobM (Option Artifact) := do
    if (← file.pathExists) then
      return some (← cacheArtifact file ext (useLocalFile := useLocalFile))
    else
      return none

/-- Save module build artifacts to the local Lake cache. -/
def Module.cacheOutputArtifacts
  (mod : Module)  (isModule : Bool) (useLocalFile : Bool) (postponesCompile : Bool)
: JobM ModuleOutputArtifacts := do
  let (usage?, usekey?) ← mod.cacheUsageSidecars useLocalFile
  return {
    isModule
    olean := ← cache mod.oleanFile "olean"
    oleanServer? := ← cacheIf? isModule mod.oleanServerFile "olean.server"
    oleanPrivate? := ← cacheIf? isModule mod.oleanPrivateFile "olean.private"
    irSig? := ← cacheIf? (isModule && !postponesCompile) mod.irSigFile "ir.sig"
    ir? := ← cacheIf? (isModule && !postponesCompile) mod.irFile "ir"
    ilean := ← cache mod.ileanFile "ilean"
    c? := ← cacheIf? (!(isModule && postponesCompile)) mod.cFile "c"
    bc? := ← cacheIf? (Lean.Internal.hasLLVMBackend ()) mod.bcFile "bc"
    ltar? := ← cacheIf? (← mod.ltarFile.pathExists) mod.ltarFile "ltar"
    usage?, usekey?
  }
where
  @[inline] cache file ext := do
    -- `text` is always `false` because Lean produces LF-only `.ir` and `.c`
    cacheArtifact file ext (useLocalFile := useLocalFile)
  @[inline] cacheIf? c art ext := do
    if c then return some (← cache art ext) else return none

/--
Saves module build artifacts to the local Lake cache like `cacheOutputArtifacts`, checking each
against the hash recorded for it (see `recacheArtifact?`): its descriptor in `descrs`, the saved
trace's record of the module's outputs, or, for the module's `.ltar` (which a build trace does not
describe), the `.hash` written when it was packed. Returns `none` if any of them does not match or
has no recorded hash, after checking (and caching or quarantining) all. A `.ltar` without a
recorded hash is removed instead (it is packed again when needed). The usage-cutoff sidecars are
cached by `cacheUsageSidecars`.
-/
def Module.recacheOutputArtifacts?
  (mod : Module) (isModule useLocalFile postponesCompile : Bool) (descrs : ModuleOutputDescrs)
: JobM (Option ModuleOutputArtifacts) := do
  let olean? ← recache mod.oleanFile "olean" descrs.olean.hash
  let oleanServer? ← recacheIf isModule mod.oleanServerFile "olean.server" descrs.oleanServer?
  let oleanPrivate? ← recacheIf isModule mod.oleanPrivateFile "olean.private" descrs.oleanPrivate?
  let irSig? ← recacheIf (isModule && !postponesCompile) mod.irSigFile "ir.sig" descrs.irSig?
  let ir? ← recacheIf (isModule && !postponesCompile) mod.irFile "ir" descrs.ir?
  let ilean? ← recache mod.ileanFile "ilean" descrs.ilean.hash
  let c? ← recacheIf (!(isModule && postponesCompile)) mod.cFile "c" descrs.c?
  let bc? ← recacheIf (Lean.Internal.hasLLVMBackend ()) mod.bcFile "bc" descrs.bc?
  let ltar? : Option (Option Artifact) ← id do
    unless (← mod.ltarFile.pathExists) do return some none
    match (← Hash.load? (mod.ltarFile.toString ++ ".hash")) with
    | some hash => return (some ·) <$> (← recache mod.ltarFile "ltar" hash)
    | none =>
      removeFileIfExists mod.ltarFile
      return some none
  let (usage?, usekey?) ← mod.cacheUsageSidecars useLocalFile
  let arts? : Option ModuleOutputArtifacts := do
    return {
      isModule
      olean := ← olean?
      oleanServer? := ← oleanServer?
      oleanPrivate? := ← oleanPrivate?
      irSig? := ← irSig?
      ir? := ← ir?
      ilean := ← ilean?
      c? := ← c?
      bc? := ← bc?
      ltar? := ← ltar?
      usage?, usekey?
      keptFrom? := descrs.keptFrom?
    }
  return arts?
where
  @[inline] recache file ext (expected : Hash) : JobM (Option Artifact) :=
    recacheArtifact? (some mod.name.toString) file expected ext (useLocalFile := useLocalFile)
  recacheIf c file ext (descr? : Option ArtifactDescr) : JobM (Option (Option Artifact)) := do
    if c then
      match descr? with
      | some descr => return (some ·) <$> (← recache file ext descr.hash)
      | none => return none
    else
      return some none

/--
Some module build artifacts must be located in the build directory (e.g., ILeans).
This copies the required artifacts from the local Lake cache to the build directory and
updates the data structure with the new paths.
-/
def Module.restoreNeededArtifacts (mod : Module) (cached : ModuleOutputArtifacts) : JobM ModuleOutputArtifacts := do
  return {cached with
    ilean := ← restoreArtifact mod.ileanFile cached.ilean
  }

def Module.restoreAllArtifacts (mod : Module) (cached : ModuleOutputArtifacts) : JobM ModuleOutputArtifacts := do
  return {cached with
    olean := ← restoreArtifact mod.oleanFile cached.olean
    oleanServer? := ← restoreSome mod.oleanServerFile cached.oleanServer?
    oleanPrivate? := ← restoreSome mod.oleanPrivateFile cached.oleanPrivate?
    ilean := ← restoreArtifact mod.ileanFile cached.ilean
    irSig? := ← restoreSome mod.irSigFile cached.irSig?
    ir? := ← restoreSome mod.irFile cached.ir?
    c? := ← restoreSome mod.cFile cached.c?
    bc? := ← restoreSome mod.bcFile cached.bc?
    ltar? := ← restoreSome mod.ltarFile cached.ltar?
    usage? := ← restoreSome mod.usageFile cached.usage?
    usekey? := ← restoreSome mod.usekeyFile cached.usekey?
  }
where
  @[inline] restoreSome file art? := art?.mapM (restoreArtifact file ·)

public def Module.checkArtifactsExist
  (self : Module) (isModule : Bool) (skipIR := isModule && self.postponeCompile)
: BaseIO Bool := do
  unless (← self.oleanFile.pathExists) do return false
  unless (← self.ileanFile.pathExists) do return false
  if Lean.Internal.hasLLVMBackend () then
    unless (← self.bcFile.pathExists) do return false
  if isModule then
    unless (← self.oleanServerFile.pathExists) do return false
    unless (← self.oleanPrivateFile.pathExists) do return false
  -- When code generation is postponed, `irArts` produces the IR and `.c` on its own schedule.
  unless skipIR do
    unless (← self.cFile.pathExists) do return false
    if isModule then
      unless (← self.irSigFile.pathExists) do return false
      unless (← self.irFile.pathExists) do return false
  return true

public protected def Module.checkExists
  (self : Module) (isModule : Bool) (skipIR := isModule && self.postponeCompile)
: BaseIO Bool := do
  self.ltarFile.pathExists <||> self.checkArtifactsExist isModule skipIR

@[deprecated Module.checkExists +typeChanged (since := "2025-03-04")]
public instance : CheckExists Module := ⟨Module.checkExists (isModule := false)⟩

public protected def Module.getMTime
  (self : Module) (isModule : Bool) (skipIR := isModule && self.postponeCompile)
: IO MTime := do
  try
    let mut mtime :=
      (← getMTime self.oleanFile)
      |> max (← getMTime self.ileanFile)
    if Lean.Internal.hasLLVMBackend () then
      mtime := max mtime (← getMTime self.bcFile)
    if isModule then
      mtime := mtime
      |> max (← getMTime self.oleanServerFile)
      |> max (← getMTime self.oleanPrivateFile)
    -- When code generation is postponed, `irArts` produces the IR and `.c` on its own schedule.
    unless skipIR do
      mtime := max mtime (← getMTime self.cFile)
      if isModule then
        mtime := mtime
        |> max (← getMTime self.irSigFile)
        |> max (← getMTime self.irFile)
    return mtime
  catch e =>
    try getMTime self.ltarFile catch
    | .noFileOrDirectory .. => throw e
    | e => throw e

@[deprecated Module.getMTime +typeChanged (since := "2025-03-04")]
public instance : GetMTime Module := ⟨Module.getMTime (isModule := false)⟩

def ModuleOutputArtifacts.setMTime (self : ModuleOutputArtifacts) (mtime : MTime) : ModuleOutputArtifacts :=
  {self with
    olean := {self.olean with mtime}
    oleanServer? := self.oleanServer?.map ({· with mtime})
    oleanPrivate? := self.oleanPrivate?.map ({· with mtime})
    ilean := {self.ilean with mtime}
    irSig? := self.irSig?.map ({· with mtime})
    ir? := self.ir?.map ({· with mtime})
    c? := self.c?.map ({· with mtime})
    bc? := self.bc?.map ({· with mtime})
  }

def Module.mkArtifacts (mod : Module) (srcFile : FilePath) (isModule : Bool) : ModuleArtifacts where
  lean? := srcFile
  olean? := mod.oleanFile
  oleanServer? := if isModule then some mod.oleanServerFile else none
  oleanPrivate? := if isModule then some mod.oleanPrivateFile else none
  ilean? := mod.ileanFile
  irSig? := if isModule then some mod.irSigFile else none
  ir? := if isModule then some mod.irFile else none
  c? := mod.cFile
  bc? := if Lean.Internal.hasLLVMBackend () then some mod.bcFile else none

def Module.computeIRArtifacts
  (mod : Module) (elabArts : ModuleOutputArtifacts) (reuse : Bool)
: FetchM ModuleOutputArtifacts :=
  return {elabArts with
    irSig? := some <| ← compute mod.irSigFile "ir.sig"
    ir? := some <| ← compute mod.irFile "ir"
    c? := some <| ← compute mod.cFile "c"
    ltar? := if reuse then elabArts.ltar? else none
  }
where
  @[inline] compute file ext := do
    -- Note: Lean produces LF-only line endings for `.c` and `.ilean`, so no normalization.
    computeArtifact file ext (text := false)

/--
The module's existing `.ltar`, if it still has the hash recorded when it was packed (its `.hash`,
which `--rehash` does not replace here). It is not read when it is the cache entry for that hash.
An archive with no recorded hash or with other contents is removed, with its `.hash`, so that it is
packed again from the module's own outputs when needed: an archive carries its own trace, so
nothing else shows that it belongs to this module's input.
-/
def Module.verifiedLocalLtar? (mod : Module) : JobM (Option Artifact) := do
  unless (← mod.ltarFile.pathExists) do return none
  if let some hash ← Hash.load? (mod.ltarFile.toString ++ ".hash") then
    let entry := (← getLakeCache).artifactDir / artifactPath hash "ltar"
    let isEntry := (← (mod.ltarFile.isSameFile entry).toBaseIO) matches .ok true
    -- `(← a) || (← b)` would run both: hash the archive only when it is not the entry
    let intact ← if isEntry then pure true else do
      pure ((← computeFileHash mod.ltarFile) == hash)
    if intact then
      let mtime := (← getMTime mod.ltarFile |>.toBaseIO).toOption.getD 0
      let art : Artifact := {
        descr := artifactWithExt hash "ltar"
        name := mod.ltarFile.toString
        path := mod.ltarFile
        mtime
      }
      return some art
    logWarning s!"{mod.ltarFile}: does not match the hash recorded when it was packed; \
      discarding it"
  removeFileIfExists mod.ltarFile
  clearFileHash mod.ltarFile
  return none

def Module.computeArtifacts
  (mod : Module) (isModule : Bool) (skipIR : Bool)
: FetchM ModuleOutputArtifacts :=
  return {
    isModule
    olean := ← compute mod.oleanFile "olean"
    oleanServer? := ← computeIf isModule mod.oleanServerFile "olean.server"
    oleanPrivate? := ← computeIf isModule mod.oleanPrivateFile "olean.private"
    ilean := ← compute mod.ileanFile "ilean"
    irSig? := ← computeIf (isModule && !skipIR) mod.irSigFile "ir.sig"
    ir? := ← computeIf (isModule && !skipIR) mod.irFile "ir"
    c? := ← computeIf (!(isModule && skipIR)) mod.cFile "c"
    bc? := ← computeIf (Lean.Internal.hasLLVMBackend ()) mod.bcFile "bc"
    ltar? := ← mod.verifiedLocalLtar?
  }
where
  @[inline] compute file ext := do
    -- Note: Lean produces LF-only line endings for `.c` and `.ilean`, so no normalization.
    computeArtifact file ext (text := false)
  computeIf c file ext := do
     if c then return some (← compute file ext) else return none

instance : ToOutputJson ModuleOutputArtifacts := ⟨(toJson ·.descrs)⟩

/--
Decodes a module's output descriptors (as recorded by `buildAction`/`writeFetchTrace`, see
`ToOutputJson ModuleOutputArtifacts`) from a saved trace, if present and well-formed.
-/
def SavedTrace.moduleOutputDescrs? (self : SavedTrace) : Option ModuleOutputDescrs := do
  let .ok data := self | none
  let some outputs := data.outputs? | none
  (ModuleOutputDescrs.fromJson? outputs).toOption

/--
The outputs the saved trace describes (`descrs`) that are not in the build directory with the bytes recorded for
them, hashed as the cache hashes a module output (`computeBinFileHash`), each with the description recorded for it
(`none` if `descrs` describes no such output). With `sidecars`, the usage-cutoff sidecars (`.usage`, `.usekey`)
count as outputs too. Empty if every output matches.
-/
def Module.outputMismatches (mod : Module) (isModule postponesCompile : Bool) (descrs : ModuleOutputDescrs)
    (sidecars := false) : JobM (Array (FilePath × Option ArtifactDescr)) := do
  let required : Array (Bool × FilePath × Option ArtifactDescr) := #[
    (true, mod.oleanFile, some descrs.olean),
    (isModule, mod.oleanServerFile, descrs.oleanServer?),
    (isModule, mod.oleanPrivateFile, descrs.oleanPrivate?),
    (isModule && !postponesCompile, mod.irSigFile, descrs.irSig?),
    (isModule && !postponesCompile, mod.irFile, descrs.ir?),
    (true, mod.ileanFile, some descrs.ilean),
    (!(isModule && postponesCompile), mod.cFile, descrs.c?),
    (Lean.Internal.hasLLVMBackend (), mod.bcFile, descrs.bc?),
    (sidecars, mod.usageFile, descrs.usage?),
    (sidecars, mod.usekeyFile, descrs.usekey?)]
  let mut mismatches := #[]
  for (c, file, descr?) in required do
    unless c do continue
    match descr? with
    | none => mismatches := mismatches.push (file, none)
    | some descr =>
      match (← (computeBinFileHash file).toBaseIO) with
      | .ok hash => unless hash == descr.hash do mismatches := mismatches.push (file, some descr)
      | .error _ => mismatches := mismatches.push (file, some descr)
  return mismatches

/--
Keeps the module's outputs for a build that does not compile it, if each is still what the saved trace describes
(`descrs?`): with `cacheWith? = some useLocalFile`, saves them to the cache, checking each while saving
(`recacheOutputArtifacts?`); otherwise checks their bytes (`outputMismatches`). Either way the outputs keep the
lineage the trace records (`ModuleOutputDescrs.keptFrom?`), so kept outputs stay kept wherever they are recorded
next (a trace, a cache mapping, an `-o` entry). Returns `none` if the trace records no outputs or any output differs,
so that the caller builds. Every path that keeps outputs it then vouches for under a new input hash, or caches, goes
through here: an up-to-date replay that caches its outputs, a usage skip (`Module.skipOrBuild`), and a kept-module
check's accept (`acceptKept`). (Outputs restored from the usage index, which come from the cache, are checked as
they are restored, `Module.restoreFromUsageIndex?`.)
-/
def Module.keepOutputs? (mod : Module) (isModule postponesCompile : Bool) (descrs? : Option ModuleOutputDescrs)
    (cacheWith? : Option Bool) : JobM (Option ModuleOutputArtifacts) := do
  let some descrs := descrs? | return none
  match cacheWith? with
  | some useLocalFile => mod.recacheOutputArtifacts? isModule useLocalFile postponesCompile descrs
  | none =>
    unless (← mod.outputMismatches isModule postponesCompile descrs).isEmpty do return none
    return some {(← mod.computeArtifacts isModule postponesCompile) with keptFrom? := descrs.keptFrom?}

/-- The `keptFrom?` recorded with a saved trace's module outputs. -/
def SavedTrace.keptFrom? (self : SavedTrace) : Option Hash :=
  self.moduleOutputDescrs?.bind (·.keptFrom?)

/--
Gives `arts` the `keptFrom?` that the module's trace file records: outputs described again from the
build directory lack it, while the trace written for them (by a compile, a kept-module check, or a
restore) records it.
-/
def Module.withSavedKeptFrom (mod : Module) (arts : ModuleOutputArtifacts) : JobM ModuleOutputArtifacts := do
  if arts.keptFrom?.isSome then return arts
  return {arts with keptFrom? := (← readTraceFile mod.traceFile).keptFrom?}

def Module.packLtar
  (self : Module) (arts : ModuleOutputArtifacts)
: JobM Artifact := do
  let arts ← id do
    if (← self.checkArtifactsExist arts.isModule arts.c?.isNone) then
      return arts
    else self.restoreAllArtifacts arts
  let args ← id do
    -- `-s` strips the `depHash` so archive bytes depend only on outputs.
    -- Consumers reinject the hash on unpack (see `Module.unpackLtar`).
    let mut args := #[
      "-s",
      "-C", self.leanLibDir.toString,
      "-C", self.irDir.toString,
      self.ltarFile.toString,
      self.fileName "trace"
    ]
    let addArt args idx art :=
      args.push "-i" |>.push idx |>.push (self.fileName art.ext)
    -- Note: oleans parts must be in the order of `.olean`, `.olean.server`, `.olean.private`
    args := addArt args "0" arts.olean
    if let some art := arts.oleanServer? then
      args := addArt args "0" art
    if let some art := arts.oleanPrivate? then
      args := addArt args "0" art
    args := addArt args "0" arts.ilean
    if let some art := arts.irSig? then
      args := addArt args "0" art
    if let some art := arts.ir? then
      args := addArt args "0" art
    if let some art := arts.c? then
      args := addArt args "1" art
    if Lean.Internal.hasLLVMBackend () then
      let some art := arts.bc?
        | error "LLVM backend enabled but module outputs lack bitcode"
      args := addArt args "1" art
    return args
  proc (quiet := true) {cmd := (← getLeantar).toString, args}
  if (← self.pkg.isArtifactCacheWritable) then
    cacheArtifact self.ltarFile "ltar" (useLocalFile := ← self.pkg.restoreAllArtifacts)
  else
    computeArtifact self.ltarFile "ltar"

def Module.unpackLtar (self : Module) (ltar : FilePath) (inputHash : Hash) : JobM Unit := do
  -- Archive has no `depHash` (packed with `-s`); supply it via `-j -` JSON stdin.
  let input := Json.arr #[Json.mkObj [
    ("file", toJson ltar.toString),
    ("hash", toJson inputHash.hex)
  ]]
  let args := #[
    "-C", self.leanLibDir.toString,
    "-C", self.irDir.toString,
    "-x", "-j", "-"
  ]
  proc (quiet := true) (input? := input.compress) {cmd := (← getLeantar).toString, args}

def Module.recBuildLtar (self : Module) : FetchM (Job FilePath) := do
  withRegisterJob s!"{self.name}:ltar" <| withCurrPackage self.pkg do
  (← self.irArts.fetch).mapM fun arts => do
    let art ← arts.ltar?.getDM do
      if (← getNoBuild) then
        modify ({· with wantsRebuild := true})
        error "archive does not exist and needs to be built"
      else
        updateAction .build
        self.packLtar arts
    newTrace s!"{self.name.toString}:ltar"
    addTrace art.trace
    return art.path

/-- The `ModuleFacetConfig` for the builtin `ltarFacet`. -/
public def Module.ltarFacetConfig : ModuleFacetConfig ltarFacet :=
  mkFacetJobConfig recBuildLtar

/-- The parts of a module's `.usage` sidecar (written by Lean next to its `.olean`) that Lake checks. -/
structure UsageSidecar where
  noskip : Bool
  moduleDigest : ModuleUsage.Digest
  /-- A digest of the module's import closure (`Lean.ModuleUsage.closureDigest`). -/
  closure : ModuleUsage.Digest
  /-- The imported modules whose `.olean` carried digests when Lean compiled the module
  (`Lean.ModuleUsage.digestedModules`), sorted by `Name.quickLt`. -/
  digested : Array Name
  /-- Each direct import's `closure` as the compile imported it (`Lean.ModuleUsage.writeUsage`). -/
  importedClosures : NameMap ModuleUsage.Digest
  /-- Each `extra` module's `moduleDigest` as the compile imported it. -/
  importedDigests : NameMap ModuleUsage.Digest
  own : NameMap ModuleUsage.Digest
  used : Array (Name × Array (Name × ModuleUsage.Digest))
  extra : Array Name
  /-- The specialization-cache keys the module created, each with the specialization of its last entry for the
  key (`Lean.ModuleUsage.specKeysOf`). -/
  specKeys : Array (ModuleUsage.Digest × Name)
  /-- For each key the module looked up in the specialization cache, the digest of its providers in the closure
  (`Lean.ModuleUsage.specProviders`). -/
  specLookups : Array (ModuleUsage.Digest × ModuleUsage.Digest)

/-- A module's `.usekey` sidecar: what Lake saw of the module's build when Lean wrote its `.usage`. -/
structure UsekeySidecar where
  localHash : Hash
  /-- The digest of the bytes of the module's `.usage` (`ModuleUsage.Digest.ofBytes`) the key was written from:
  readers take the key first and accept only that `.usage`. -/
  usage : ModuleUsage.Digest
  /-- The `contentHash` of the module's own `.olean` when the key was written. -/
  olean : ModuleUsage.Digest
  /-- `modsysHash` of the module's import closure. -/
  modsys : ModuleUsage.Digest
  /-- `closureHash` of the module's direct imports. -/
  closure : ModuleUsage.Digest
  /-- For each workspace `extra` module of the `.usage`: the `contentHash` of its `.olean` and its
  `moduleDigest`. -/
  extra : NameMap (ModuleUsage.Digest × ModuleUsage.Digest)
  /--
  Set when a kept-module check accepted the module's `.olean` for imports other than those Lean
  compiled it against (`acceptKept`): the `.usage`'s own digests describe the module's constants as
  they were then, and a constant they mention may have changed meaning since. The module's own
  check still reads the key; its importers do not (`importUsage?`).
  -/
  kept : Bool := false
  deriving TypeName

/--
A name in a usage sidecar, as `Lean.ModuleUsage.nameToJson` writes it: the JSON array of its
components, root first, each a string or a number. Unlike `toJson Name`, this round-trips
macro-scoped names.
-/
structure SidecarName where
  name : Name

instance : FromJson SidecarName where
  fromJson? j := do
    let n ← (← j.getArr?).foldlM (init := Name.anonymous) fun p c => do
      match c with
      | .str s => return Name.mkStr p s
      | .num _ => return Name.mkNum p (← fromJson? c)
      | _ => throw s!"expected a name component, got {c.compress}"
    return ⟨n⟩

/-- Reads a JSON array of `[name, digest, digest]` triples into a map. -/
def nameDigestPairs (j : Json) : Except String (NameMap (ModuleUsage.Digest × ModuleUsage.Digest)) := do
  (← j.getArr?).foldlM (init := {}) fun m e => do
    let #[n, a, b] ← e.getArr? | throw s!"expected a triple, got {e.compress}"
    return m.insert (← fromJson? (α := SidecarName) n).name (← fromJson? a, ← fromJson? b)

instance : FromJson UsageSidecar where
  fromJson? j := do
    let own ← j.getObjValAs? (Array (SidecarName × ModuleUsage.Digest)) "own"
    let used ← j.getObjValAs? (Array (SidecarName × Array (SidecarName × ModuleUsage.Digest))) "used"
    let extra ← j.getObjValAs? (Array (SidecarName × Bool)) "extra"
    let specKeys ← j.getObjValAs? (Array (ModuleUsage.Digest × SidecarName)) "specKeys"
    return {
      noskip := ← j.getObjValAs? Bool "noskip"
      moduleDigest := ← j.getObjValAs? ModuleUsage.Digest "moduleDigest"
      closure := ← j.getObjValAs? ModuleUsage.Digest "closure"
      digested := (← j.getObjValAs? (Array SidecarName) "digested").map (·.name)
      importedClosures := (← j.getObjValAs? (Array (SidecarName × ModuleUsage.Digest)) "importedClosures").foldl
        (init := {}) fun m (n, d) => m.insert n.name d
      importedDigests := (← j.getObjValAs? (Array (SidecarName × ModuleUsage.Digest)) "importedDigests").foldl
        (init := {}) fun m (n, d) => m.insert n.name d
      own := own.foldl (init := {}) fun m (n, d) => m.insert n.name d
      used := used.map fun (m, cs) => (m.name, cs.map fun (c, d) => (c.name, d))
      extra := extra.map (·.1.name)
      specKeys := specKeys.map fun (d, n) => (d, n.name)
      specLookups := ← j.getObjValAs? (Array (ModuleUsage.Digest × ModuleUsage.Digest)) "specLookups"
    }

/-- The parts of an imported module's `.usage` that its importers' checks read (`importUsage?`), which
the build's sidecar cache keeps: a `UsageSidecar` without the lists only the module's own checks read. -/
structure UsageImport where
  moduleDigest : ModuleUsage.Digest
  closure : ModuleUsage.Digest
  own : NameMap ModuleUsage.Digest
  specKeys : Array (ModuleUsage.Digest × Name)
  deriving TypeName

/-- The `UsageImport` view of a module's own `.usage`. -/
def UsageSidecar.toImport (u : UsageSidecar) : UsageImport :=
  { moduleDigest := u.moduleDigest, closure := u.closure, own := u.own, specKeys := u.specKeys }

/-- Reads only the fields an importer checks (`importUsage?`). The fields it skips are not importer inputs; a
sidecar that `UsageSidecar` would reject fails its own module's check, and the importer still binds the sidecar to
the `.olean` through the `.usekey`. -/
instance : FromJson UsageImport where
  fromJson? j := do
    let own ← j.getObjValAs? (Array (SidecarName × ModuleUsage.Digest)) "own"
    let specKeys ← j.getObjValAs? (Array (ModuleUsage.Digest × SidecarName)) "specKeys"
    return {
      moduleDigest := ← j.getObjValAs? ModuleUsage.Digest "moduleDigest"
      closure := ← j.getObjValAs? ModuleUsage.Digest "closure"
      own := own.foldl (init := {}) fun m (n, d) => m.insert n.name d
      specKeys := specKeys.map fun (d, n) => (d, n.name)
    }

instance : FromJson UsekeySidecar where
  fromJson? j := do
    return {
      localHash := ← j.getObjValAs? Hash "local"
      usage := ← j.getObjValAs? ModuleUsage.Digest "usage"
      olean := ← j.getObjValAs? ModuleUsage.Digest "olean"
      modsys := ← j.getObjValAs? ModuleUsage.Digest "modsys"
      closure := ← j.getObjValAs? ModuleUsage.Digest "closure"
      extra := ← nameDigestPairs (← j.getObjVal? "extra")
      kept := (j.getObjValAs? Bool "kept").toOption.getD false
    }

/-- Parses the bytes of a usage-cutoff sidecar: `none` if it has another format version than
`Lean.ModuleUsage.usageVersion` (an older toolchain wrote it). -/
def parseUsageSidecar (α : Type) [FromJson α] (bytes : ByteArray) : Except String (Option α) := do
  let some contents := String.fromUTF8? bytes | throw "not UTF-8"
  let j ← Json.parse contents
  let v ← j.getObjValAs? Nat "version"
  if v != ModuleUsage.usageVersion then return none
  some <$> fromJson? (α := α) j

/--
Reads a usage-cutoff sidecar. Returns `none` if it does not exist, has another format version
(`parseUsageSidecar`), or its bytes do not have the digest `expected?` (the `.usage` a `.usekey` was written
from). If it exists but is not valid, logs a warning and returns `none`, so the module builds normally. Reuses
the build's parse of the same contents (`BuildContext.sidecarCache`).
-/
def readUsageSidecar (α : Type) [FromJson α] [TypeName α] (path : FilePath)
    (expected? : Option ModuleUsage.Digest := none) : JobM (Option α) := do
  match (← IO.FS.readBinFile path |>.toBaseIO) with
  | .ok bytes =>
    let digest := ModuleUsage.Digest.ofBytes bytes
    if expected?.any (· != digest) then return none
    (← getBuildContext).sidecarCache.atomically do
      let entries ← getThe (Std.HashMap FilePath (ModuleUsage.Digest × Dynamic))
      if let some (parsedFrom, cached) := entries.get? path then
        if parsedFrom == digest then
          let some value := cached.get? α | error s!"{path}: cached sidecar has the wrong type"
          return some value
      match parseUsageSidecar α bytes with
      | .ok value =>
        if let some value := value then
          modifyThe (Std.HashMap FilePath (ModuleUsage.Digest × Dynamic))
            (·.insert path (digest, Dynamic.mk value))
        return value
      | .error e =>
        logWarning s!"{path}: {e}"
        return none
  | .error (.noFileOrDirectory ..) =>
    return none
  | .error e =>
    error s!"{path}: read failed: {e}"

/--
Reads a module's own `.usage` as `readUsageSidecar` does, but parses it on every read: only the
module's own checks read all of it. Returns it with the digest of its bytes. Leaves its `UsageImport` in the
build's sidecar cache for the module's importers (`importUsage?`).
-/
def readOwnUsage (path : FilePath) (expected? : Option ModuleUsage.Digest := none) :
    JobM (Option (UsageSidecar × ModuleUsage.Digest)) := do
  match (← IO.FS.readBinFile path |>.toBaseIO) with
  | .ok bytes =>
    let digest := ModuleUsage.Digest.ofBytes bytes
    if expected?.any (· != digest) then return none
    match parseUsageSidecar UsageSidecar bytes with
    | .ok (some usage) =>
      (← getBuildContext).sidecarCache.atomically do
        modifyThe (Std.HashMap FilePath (ModuleUsage.Digest × Dynamic))
          (·.insert path (digest, Dynamic.mk usage.toImport))
      return some (usage, digest)
    | .ok none =>
      return none
    | .error e =>
      logWarning s!"{path}: {e}"
      return none
  | .error (.noFileOrDirectory ..) =>
    return none
  | .error e =>
    error s!"{path}: read failed: {e}"

/--
What one module's decision before its build has read: its same-tree check (`Module.usageVerdict` of its own
outputs) and the check of each cached compile the usage index offers (`Module.restoreFromUsageIndex?`), so that the
decision reads each file once and every `importUsage?` binding in it, in every candidate's check, is to the same
bytes. Another module's decision, and `Module.writeUsekey` after the module's own compile, never reuse it: another
workspace's build can rebuild a shared dependency between two decisions, and nothing about a file short of its bytes
shows that it did not change since (e.g., a write through a shared mapping can leave its status-change time as it
was). What a build keeps across modules, its views of importees (`UsageView`), is frozen at their first read and may
be stale: only the usage index's pre-filter reads them (`usagePrefilter`), and it only rejects, so a stale view can
cost a miss but never a restore, since the check that accepts reads the files again.
-/
structure ContentHashes where
  /-- The hash of each file read (`contentHash`). -/
  files : IO.Ref (Std.HashMap FilePath ModuleUsage.Digest)
  /-- The binding of each importee (`importUsage?`). -/
  imports : IO.Ref (NameMap (Option (FilePath × UsageImport)))

def ContentHashes.new : BaseIO ContentHashes :=
  return {files := ← IO.mkRef {}, imports := ← IO.mkRef {}}

/--
The hash of `file`'s current bytes (`Lean.ModuleUsage.fileDigest`, 128 bits), never read from a
`.hash` file: an `.olean` rewritten behind Lake's back (e.g., by `lean -o`) keeps its old `.hash`,
and a usage-cutoff decision must see the new bytes. Read at most once per decision (`hashes`).
-/
def contentHash (hashes : ContentHashes) (file : FilePath) : JobM ModuleUsage.Digest := do
  if let some hash := (← hashes.files.get)[file]? then return hash
  let hash ← ModuleUsage.fileDigest file
  hashes.files.modify (·.insert file hash)
  return hash

/--
A hash of every artifact of every module-system module in an import closure, with its name.
Module-system files carry no meaning digests (Lean writes them at the private level only), so a
non-module importer's digest chain cannot see through one; its skip requires these bytes unchanged
(`contentHash`).
-/
def modsysHash (hashes : ContentHashes) (importArts : NameMap ImportArtifacts) :
    JobM ModuleUsage.Digest := do
  let mut e : ModuleUsage.Enc := {}
  for (m, arts) in importArts do
    if arts.oleanServer?.isSome then
      let paths := arts.toArrays.flatten
      e := e.name m |>.nat paths.size
      for path in paths do
        e := e.digest (← contentHash hashes path)
  return e.finish

/--
Reads the sidecars of the importee whose `.olean` is `olean` as `importUsage?` does, without hashing the `.olean`:
for a module-system file (`modsys`), its `.usage`; otherwise its `.usekey` first, then the `.usage` it was written
from, with the `olean` hash the key records. `none` if `importUsage?` would take no `.usage` from them.
-/
def readImportSidecars (olean : FilePath) (modsys : Bool) :
    JobM (Option (Option ModuleUsage.Digest × UsageImport)) := do
  let usageFile := olean.withExtension "usage"
  if modsys then
    return (none, ·) <$> (← readUsageSidecar UsageImport usageFile)
  let some key ← readUsageSidecar UsekeySidecar (olean.withExtension "usekey") | return none
  if key.kept then return none
  let some usage ← readUsageSidecar UsageImport usageFile (expected? := key.usage) | return none
  return some (some key.olean, usage)

/--
What a build first read of an imported module's sidecars (`readImportSidecars`), kept in `BuildContext.usageViews`
under the module's `.usage`. Every importer-side read fills it, if it is empty: `importUsage?`, in any module's check
or `Module.writeUsekey`, and the usage index's pre-filter (`usagePrefilter`). A module's reads of its own sidecars do
not. In a build no other process writes to, an importee's view is what every check of the build reads of it, since a
module is checked after its whole closure is done, and built at most once per build.
-/
structure UsageView where
  read? : Option (Option ModuleUsage.Digest × UsageImport)
  deriving TypeName

/--
The build's view of the importee whose `.usage` is `usageFile` (`UsageView`), made `read?` if it has none: returns
it, and whether it was made now. A view is never replaced.
-/
def freezeUsageView (usageFile : FilePath) (read? : Option (Option ModuleUsage.Digest × UsageImport)) :
    JobM (Option (Option ModuleUsage.Digest × UsageImport) × Bool) := do
  (← getBuildContext).usageViews.atomically do
    if let some view := (← getThe (Std.HashMap FilePath Dynamic))[usageFile]? then
      let some view := view.get? UsageView | error s!"{usageFile}: cached usage view has the wrong type"
      return (view.read?, false)
    modifyThe (Std.HashMap FilePath Dynamic) (·.insert usageFile (Dynamic.mk (UsageView.mk read?)))
    return (read?, true)

/--
The build's view of importee `m` (`UsageView`), read now if the build has none, and whether it was read now. `none`
if `m` has no `.olean` in `importArts`.
-/
def usageView? (importArts : NameMap ImportArtifacts) (m : Name) :
    JobM (Option (Option ModuleUsage.Digest × UsageImport) × Bool) := do
  let some arts := importArts.find? m | return (none, false)
  let some olean := arts.olean? | return (none, false)
  let usageFile := olean.withExtension "usage"
  let frozen? ← (← getBuildContext).usageViews.atomically do
    return (← getThe (Std.HashMap FilePath Dynamic))[usageFile]?
  if let some view := frozen? then
    let some view := view.get? UsageView | error s!"{usageFile}: cached usage view has the wrong type"
    return (view.read?, false)
  freezeUsageView usageFile (← readImportSidecars olean arts.oleanServer?.isSome)

/--
The `.olean` of importee `m` in `importArts` and its `.usage`, or `none` if either is missing, the
`.usage` is invalid, or nothing shows that the `.usage` describes that `.olean`: unless `m` is a
module-system file, its `.usekey` is read first, and the `.usage` must be the one it was written from (its digest,
`UsekeySidecar.usage`) and the `.olean` the one it records (`contentHash` of the current bytes). Another workspace can
replace the three files while they are read; reading the key first makes every mixture of old and new files fail
one of the two comparisons, so the check sees one state of the module or none. An `.olean` rewritten behind Lake's
back (e.g., by `lean -o` of other contents, which leaves the old sidecars and `.hash`) is not checked against the
old `.usage` either. A module-system file's bytes are pinned by `modsysHash` instead. Nor is a `.usage` whose module
a kept-module check kept (`UsekeySidecar.kept`): its digests may be stale, so an importer that used it is not skipped.
The build's view of `m` (`UsageView`) is what this read found, if the build had none. A decision binds `m` once
(`ContentHashes.imports`).
-/
def importUsage? (hashes : ContentHashes) (importArts : NameMap ImportArtifacts) (m : Name) :
    JobM (Option (FilePath × UsageImport)) := do
  if let some bound := (← hashes.imports.get).find? m then return bound
  let bound ← id do
    let some arts := importArts.find? m | return none
    let some olean := arts.olean? | return none
    let read? ← readImportSidecars olean arts.oleanServer?.isSome
    discard <| freezeUsageView (olean.withExtension "usage") read?
    let some (keyOlean?, usage) := read? | return none
    if let some keyOlean := keyOlean? then
      unless keyOlean == (← contentHash hashes olean) do return none
    return some (olean, usage)
  hashes.imports.modify (·.insert m bound)
  return bound

/--
`Lean.ModuleUsage.specProviders` of the module's specialization-cache lookups (`UsageSidecar.specLookups`) over the
keys (`UsageImport.specKeys`) of its closure's non-module workspace modules, which `specKeys? m` gives, or `none` if
it gives none for one.
-/
def UsageSidecar.closureSpecProviders (usage : UsageSidecar) (importArts : NameMap ImportArtifacts)
    (specKeys? : Name → JobM (Option (Array (ModuleUsage.Digest × Name)))) :
    JobM (Option (Array (ModuleUsage.Digest × ModuleUsage.Digest))) := do
  let mut modules : Array (Name × Array (ModuleUsage.Digest × Name)) := #[]
  for (m, arts) in importArts do
    if arts.oleanServer?.isSome then continue
    let some keys ← specKeys? m | return none
    modules := modules.push (m, keys)
  return some (ModuleUsage.specProviders (usage.specLookups.map (·.1)) modules)

/--
Whether every key the module looked up in the specialization cache (`UsageSidecar.specLookups`) has the same
providers in its closure as when Lean compiled it: the closure's non-module workspace modules that map the key, each
with the specialization it maps the key to, digested by the function Lean used (`Lean.ModuleUsage.specProviders`).
Each closure module's keys come from its `.usage` once `importUsage?` has bound it to the module's current `.olean`,
in this check's `hashes`. An import that starts providing a key the module missed, stops providing one it
hit, or maps it elsewhere changes which specialization a fresh compile uses, so the module rebuilds. A module-system
module's keys are pinned by `modsysHash`, a toolchain module's by the Lean githash.
-/
def UsageSidecar.specProvidersUnchanged (usage : UsageSidecar) (hashes : ContentHashes)
    (importArts : NameMap ImportArtifacts) : JobM Bool := do
  if usage.specLookups.isEmpty then return true
  let providers ← usage.closureSpecProviders importArts fun m =>
    return (← importUsage? hashes importArts m).map (·.2.specKeys)
  return providers == some usage.specLookups

/--
The digest `closureHash` folds from the recorded `closure` digest of each direct workspace import, which
`closure? m` gives, with its name, or `none` if it gives none for one.
-/
def foldClosureHash (presetup : ModulePreSetup) (closure? : Name → JobM (Option ModuleUsage.Digest)) :
    JobM (Option ModuleUsage.Digest) := do
  let mods := presetup.directImports.filterMap (·.module?) |>.map (·.name)
    |>.qsort Name.quickLt |>.toList.eraseDups
  let mut e := ({} : ModuleUsage.Enc).nat mods.length
  for m in mods do
    let some closure ← closure? m | return none
    e := e.name m |>.digest closure
  return some e.finish

/--
A digest of the recorded `closure` digest of each direct workspace import, with its name, or `none`
if `importUsage?` accepts no `.usage` for one, or, given `importedClosures?` (`UsageSidecar.importedClosures`), if
one's `closure` is not the one the compile imported. A module's closure is its direct imports plus their
closures; a direct toolchain import is pinned by the source text and the Lean githash (local
trace). A module is replayed only if this digest is unchanged, so every workspace module's recorded
closure digest stays equal to its current closure, and this digest covers the importer's whole
closure.
-/
def closureHash (hashes : ContentHashes) (presetup : ModulePreSetup)
    (importArts : NameMap ImportArtifacts)
    (importedClosures? : Option (NameMap ModuleUsage.Digest) := none) :
    JobM (Option ModuleUsage.Digest) :=
  foldClosureHash presetup fun m => do
    let some (_, imp) ← importUsage? hashes importArts m | return none
    if let some imported := importedClosures? then
      unless imported.find? m == some imp.closure do return none
    return some imp.closure

/--
Whether every workspace module of the closure (`importArts`) carried digests when Lean compiled the
module (`UsageSidecar.digested`). A `.usage` records only imported constants that have digests:
without this, a module compiled against an `.olean` without digests (built with the cutoff off, or
rewritten by `lean -o` without `--usage`, which leaves the old sidecars beside it) would be replayed
without checking what it uses from that module. A toolchain module is pinned by the Lean githash in
the local trace instead.
-/
def UsageSidecar.coversClosure (usage : UsageSidecar) (importArts : NameMap ImportArtifacts) : Bool :=
  Id.run do
    for (m, _) in importArts do
      unless usage.digested.binSearchContains m Name.quickLt do return false
    return true

/--
Writes the module's `.usekey` from the `.usage` Lean just wrote: the digest of the `.usage` bytes, the module's
local trace hash, the hash of its `.olean`, the `modsysHash` of its closure, the `closureHash` of its direct imports
and, for each workspace `extra` module, the hash of its `.olean` and its current `moduleDigest`. Each `.olean` hash
is of its bytes (`contentHash`).

The key must describe what the compile read, and another workspace can rebuild a shared dependency while the module
compiles. So every direct import's `closure` and every `extra` module's `moduleDigest`, read now through
`importUsage?`, must be what the compile imported (`UsageSidecar.importedClosures`, `importedDigests`, which Lean
took from the `.olean` files it loaded), and the closure's module-system files must have the bytes they had before
the compile (`modsysBefore`).
Writes nothing if not, or if the `.usage` does not cover the closure (`UsageSidecar.coversClosure`) or is missing,
or if `importUsage?` accepts no `.usage` for a direct import or a workspace `extra` module, so the module is never
skipped.
-/
def Module.writeUsekey (mod : Module) (presetup : ModulePreSetup)
    (importArts : NameMap ImportArtifacts) (modsysBefore : ModuleUsage.Digest) : JobM Unit := do
  let some (usage, usageDigest) ← readOwnUsage mod.usageFile | return
  unless usage.coversClosure importArts do return
  let hashes ← ContentHashes.new
  let modsys ← modsysHash hashes importArts
  unless modsys == modsysBefore do return
  let some closure ← closureHash hashes presetup importArts (importedClosures? := some usage.importedClosures)
    | return
  let mut extra := #[]
  for m in usage.extra do
    if (← findModule? m).isNone then continue
    let some (olean, imp) ← importUsage? hashes importArts m | return
    unless usage.importedDigests.find? m == some imp.moduleDigest do return
    extra := extra.push <|
      Json.arr #[ModuleUsage.nameToJson m, toJson (← contentHash hashes olean), toJson imp.moduleDigest]
  let key := Json.mkObj [
    ("version", ModuleUsage.usageVersion),
    ("usage", toJson usageDigest),
    ("local", toJson presetup.localTrace.hash.hex),
    ("olean", toJson (← contentHash hashes mod.oleanFile)),
    ("modsys", toJson modsys),
    ("closure", toJson closure),
    ("extra", Json.arr extra)
  ]
  IO.FS.writeFile mod.usekeyFile key.compress

/--
Fails, discarding the module's outputs, if its source changed since `recFetchInput` read it: the input
hash covers the source as read then, while `lean` reads it again and a usage skip keeps old outputs.
-/
def Module.checkSourceUnchanged (mod : Module) (presetup : ModulePreSetup) : JobM Unit := do
  -- A rewrite can keep the modification time (`cp -p`, `rsync -a`, or a read part-way through one
  -- in-place `write`), so compare the contents too.
  if (← getMTime presetup.srcFile) != presetup.srcMTime ||
      Hash.ofText (← IO.FS.readFile presetup.srcFile) != presetup.srcHash then
    mod.clearOutputArtifacts
    let relSrcFile := relPathFrom mod.pkg.dir presetup.srcFile
    error s!"{relSrcFile}: source file was modified during the build; \
      its outputs were discarded (build again to compile the current version)"

/--
Compiles the module. `setup?` is its `ModuleSetup` if the caller already computed it
(`Module.skipOrBuild`); otherwise it is computed here. Only with usage cutoff enabled does Lean
record usage (`--usage`: digests in the `.olean`, the `.usage`) and Lake write the `.usekey`. The `modsysHash` the
key compares with the closure's after the compile is taken from `hashes?`, the module's decision before the compile
(`Module.skipOrBuild`), if given: the files it hashed were read before the compile, which makes the comparison
stricter.
-/
def Module.buildLean
  (mod : Module) (presetup : ModulePreSetup) (setup? : Option ModuleSetup := none)
  (hashes? : Option ContentHashes := none)
: JobM ModuleOutputArtifacts := do
  buildAction (← getTrace) mod.traceFile (localHash? := some presetup.localTrace.hash) do
  let usage ← usageCutoffEnabled
  let args := mod.weakLeanArgs ++ mod.leanArgs
  let args := if usage then args.push s!"--usage={mod.usageFile}" else args
  let relSrcFile := relPathFrom mod.pkg.dir presetup.srcFile
  let setup ← setup?.getDM (mkModuleSetup mod presetup)
  let outputPaths := mod.mkArtifacts presetup.srcFile presetup.isModule
  mod.clearOutputArtifacts
  mod.clearOutputHashes
  let modsysBefore? ← if usage then
    some <$> modsysHash (← hashes?.getDM ContentHashes.new) setup.importArts else pure none
  compileLeanModule presetup.srcFile relSrcFile setup mod.setupFile outputPaths args
    (← getLeanPath) (← getLean)
  mod.checkSourceUnchanged presetup
  let arts ← mod.computeArtifacts setup.isModule presetup.postponeCompile
  if let some modsysBefore := modsysBefore? then mod.writeUsekey presetup setup.importArts modsysBefore
  return arts

/-- What a stale module's usage records say about it (`Module.usageVerdict`). -/
inductive UsageVerdict
  /-- Nothing the module used changed meaning: its compile is skipped. -/
  | upToDate
  /--
  The machinery the module used while elaborating is unchanged, but a constant it used changed
  meaning, or its closure's compiler tables, import order or specialization providers changed:
  its proofs may be re-checked instead of compiled (`keptCandidate?`).
  -/
  | recheck
  /-- A module whose machinery it used changed, or its records cannot say: it compiles. -/
  | compile (reason : String)

/-- The files a usage verdict (`Module.usageVerdict`) reads: a module's own, or a cached compile's. -/
structure UsageFiles where
  usekey : FilePath
  usage : FilePath
  olean : FilePath

/-- The module's own `.usekey`, `.usage` and `.olean`, in its build directory. -/
def Module.usageFiles (mod : Module) : UsageFiles :=
  {usekey := mod.usekeyFile, usage := mod.usageFile, olean := mod.oleanFile}

/--
Decides a stale module from its usage records. `upToDate` if nothing the module used changed meaning since Lean
wrote its `.usage`: its `.usekey` (read first) was written from its current `.usage` (`UsekeySidecar.usage`) and
`.olean`, its `.usage` covers its closure (`importArts`, `UsageSidecar.coversClosure`), its local inputs are
unchanged, no module-system module in its closure changed (`modsysHash`), its closure is unchanged (`closureHash`),
every constant it used from a workspace module has the same digest in that module's current `.usage` (one its key
binds to its current `.olean`, `importUsage?`), every workspace `extra` module has the same `.olean` hash and
`moduleDigest`, and every specialization-cache key it looked up has the same providers
(`UsageSidecar.specProvidersUnchanged`). Every `.olean` hash is of the file's bytes (`contentHash`), never read from
a `.hash` file.

Otherwise the rule for kept modules applies: when the machinery the module used while
elaborating changed (an `extra` module: its tactics, macros, elaborators, simp lemmas or instances),
it compiles, and so it does when its records cannot show that machinery unchanged; when only the
meaning of constants it used changed, or only its closure, it is `recheck`.

The records are `files`: by default the module's own, in its build directory; the usage index's lookup
(`Module.restoreFromUsageIndex?`) decides a cached compile of the module the same way. Every file is read in
`hashes`, the module's decision (`ContentHashes`).
-/
def Module.usageVerdict (mod : Module) (presetup : ModulePreSetup)
    (importArts : NameMap ImportArtifacts) (hashes : ContentHashes) (files : UsageFiles := mod.usageFiles) :
    JobM UsageVerdict := do
  let some key ← readUsageSidecar UsekeySidecar files.usekey
    | return .compile "it has no usage key"
  let some (usage, _) ← readOwnUsage files.usage (expected? := key.usage)
    | return .compile "its usage record is missing or is not the one its key was written from"
  if usage.noskip then return .compile "its usage record may be incomplete"
  if key.localHash != presetup.localTrace.hash then return .compile "its local inputs changed"
  unless usage.coversClosure importArts do
    return .compile "a module of its closure had no usage digests when it was compiled"
  unless (← contentHash hashes files.olean) == key.olean do
    return .compile "its usage record describes another .olean"
  unless (← modsysHash hashes importArts) == key.modsys do
    return .compile "a module-system file of its closure changed"
  for m in usage.extra do
    if (← findModule? m).isNone then continue
    let some (oleanHash, digest) := key.extra.find? m
      | return .compile s!"its usage key does not record {m}, whose machinery it used"
    let some (olean, imp) ← importUsage? hashes importArts m
      | return .compile s!"{m}, whose machinery it used, has no current usage record"
    unless (← contentHash hashes olean) == oleanHash && imp.moduleDigest == digest do
      return .compile s!"{m}, whose machinery it used, changed"
  -- A module outside the workspace is a toolchain module, pinned by the Lean githash in `localTrace`.
  for (m, consts) in usage.used do
    if (← findModule? m).isNone then continue
    let some (_, imp) ← importUsage? hashes importArts m | return .recheck
    for (c, d) in consts do
      unless imp.own.find? c == some d do return .recheck
  unless (← closureHash hashes presetup importArts) == some key.closure do return .recheck
  unless (← usage.specProvidersUnchanged hashes importArts) do return .recheck
  return .upToDate

/--
Reads a cached compile's `.usage` for the usage index's pre-filter (`usagePrefilter`), without checking its digest:
the check that decides (`Module.usageVerdict`) reads it by the digest its key records. `none` if it cannot be read
or parsed, or has another format version.
-/
def readCandidateUsage? (path : FilePath) : BaseIO (Option UsageSidecar) := do
  let .ok bytes ← (IO.FS.readBinFile path).toBaseIO | return none
  let .ok (some usage) := parseUsageSidecar UsageSidecar bytes | return none
  return some usage

/-- How far a cached compile got in the usage index's pre-filter (`usagePrefilter`). -/
inductive UsagePrefilter
  /-- Rejected on its `.usekey`, before its `.usage` was read. -/
  | key
  /-- Rejected on its `.usage`. -/
  | usage
  /-- Passed, with its `.usekey`. -/
  | passed (key : UsekeySidecar)

/--
The usage index's pre-filter of a cached compile of the module, whose `.usekey` and `.usage` are `usekeyFile` and
`usageFile`: whether it may pass the cutoff's check (`Module.usageVerdict`) against the module's current imports
(`importArts`). It only rejects, and it binds no importee: it compares the importees as `importee? m` gives them
(the module's own bindings, `ContentHashes`, or else the build's views, `UsageView`), and hashes no `.olean`; the
check, which every accept passes, reads them again. It looks at the importees the check binds. In order: the key's
local inputs, its `modsys` against the closure's (`modsysHash`, which the module's compile takes too) and its
`closure` against the fold of the direct imports' recorded closures; then the `.usage`, which must have no `noskip`,
cover the closure, and record for each constant it used from a workspace module the digest that module's `.usage`
records, for each workspace `extra` module the `moduleDigest` and, unless it is a module-system file (pinned by
`modsys`), the `.olean` hash its `.usekey` records, and for its specialization-cache lookups the providers in the
closure.
-/
def usagePrefilter (presetup : ModulePreSetup) (importArts : NameMap ImportArtifacts) (hashes : ContentHashes)
    (importee? : Name → JobM (Option (Option ModuleUsage.Digest × UsageImport)))
    (usekeyFile usageFile : FilePath) : JobM UsagePrefilter := do
  let some key ← readUsageSidecar UsekeySidecar usekeyFile | return .key
  if key.localHash != presetup.localTrace.hash then return .key
  unless (← modsysHash hashes importArts) == key.modsys do return .key
  let closure ← foldClosureHash presetup fun m => return (← importee? m).map (·.2.closure)
  unless closure == some key.closure do return .key
  let some usage ← readCandidateUsage? usageFile | return .usage
  if usage.noskip || !usage.coversClosure importArts then return .usage
  -- A module outside the workspace is a toolchain module, pinned by the Lean githash in `localTrace`.
  for (m, consts) in usage.used do
    if (← findModule? m).isNone then continue
    let some (_, imp) ← importee? m | return .usage
    for (c, d) in consts do
      unless imp.own.find? c == some d do return .usage
  for m in usage.extra do
    if (← findModule? m).isNone then continue
    let some (oleanHash, digest) := key.extra.find? m | return .usage
    let some (keyOlean?, imp) ← importee? m | return .usage
    unless imp.moduleDigest == digest && keyOlean?.all (· == oleanHash) do return .usage
  unless usage.specLookups.isEmpty do
    let providers ← usage.closureSpecProviders importArts fun m => return (← importee? m).map (·.2.specKeys)
    unless providers == some usage.specLookups do return .usage
  return .passed key

/--
Reads a usage-index file (`Cache.writeUsageIndex`): the module outputs it records, or `none` if it cannot be read
or parsed (e.g., another process removed it).
-/
def readUsageIndexEntry? (file : FilePath) : BaseIO (Option ModuleOutputDescrs) := do
  let .ok contents ← (IO.FS.readFile file).toBaseIO | return none
  let .ok (out : CacheOutput) := Json.parse contents >>= fromJson? | return none
  return (ModuleOutputDescrs.fromJson? out.data).toOption

/--
Whether the cache entry `art` still has the bytes its name records (`computeBinFileHash`). If not, it changed in
place: it is moved into the cache's quarantine directory, with a warning, so that no build restores it again.
-/
def checkUsageIndexEntry (art : Artifact) : JobM Bool := do
  if let .ok hash ← (computeBinFileHash art.path).toBaseIO then
    if hash == art.hash then return true
  logWarning s!"usage index: {art.path}: its bytes are not those its name records; {← quarantineEntry art}"
  return false

/--
Looks in the usage index (`Cache.usageCandidates`) for a compile of the module, with its local inputs
(`ModulePreSetup.localTrace`), whose outputs pass the usage cutoff's check against the module's current imports
(`importArts`). Each candidate, most recently written first, is resolved against the local cache only (no artifact is
downloaded), pre-filtered (`usagePrefilter`), and decided by the cutoff's own check (`Module.usageVerdict`) on its
cache files, which reads them in `hashes`, the module's decision. A candidate that passes goes to `accept`, with its
name (the hash of its `.usekey`) and its outputs in the cache; the first one `accept` takes ends the lookup. A
candidate that cannot be read or resolved, that is a module-system file's (`m`), that names no `.usage` or
`.usekey`, or, unless `kept`, whose outputs a kept-module check accepted (`ModuleOutputDescrs.keptFrom?`), is skipped.
A candidate whose check found its `.olean` is not the one its key records has that cache entry checked
(`checkUsageIndexEntry`).
-/
def Module.lookupUsageIndex (mod : Module) (presetup : ModulePreSetup) (importArts : NameMap ImportArtifacts)
    (hashes : ContentHashes) (kept : Bool) (accept : String → ModuleOutputArtifacts → JobM (Option α)) :
    JobM (Option α) := do
  let candidates ← (← getLakeCache).usageCandidates mod.pkg.cacheScope presetup.localTrace.hash
  -- An importee as the module's decision bound it, if it did, else as the build's view of it
  let importee? (m : Name) : JobM (Option (Option ModuleUsage.Digest × UsageImport)) := do
    if let some bound := (← hashes.imports.get).find? m then
      let some (olean, imp) := bound | return none
      if (importArts.find? m).any (·.oleanServer?.isSome) then return some (none, imp)
      return some ((← hashes.files.get)[olean]?, imp)
    return (← usageView? importArts m).1
  for file in candidates do
    let some descrs ← readUsageIndexEntry? file | continue
    if descrs.isModule || (!kept && descrs.keptFrom?.isSome) then continue
    let arts? : Option ModuleOutputArtifacts ← id do
      try
        return some (← descrs.resolve none none)
      catch e =>
        dropLogFrom e
        return none
    let some arts := arts? | continue
    let (some usage, some usekey) := (arts.usage?, arts.usekey?) | continue
    let .passed key ← usagePrefilter presetup importArts hashes importee? usekey.path usage.path | continue
    let files : UsageFiles := {usekey := usekey.path, usage := usage.path, olean := arts.olean.path}
    unless (← mod.usageVerdict presetup importArts hashes files) matches .upToDate do
      if let some hash := (← hashes.files.get)[arts.olean.path]? then
        if hash != key.olean then discard <| checkUsageIndexEntry arts.olean
      continue
    if let some result ← accept (file.fileStem.getD file.toString) arts then
      return some result
  return none

/--
Restores the outputs of a compile of the module that the usage index offers (`Module.lookupUsageIndex`), when its
build missed the cache by input hash, instead of compiling it: the first candidate that passes the usage cutoff's check
against the module's current imports (`importArts`, in `hashes`, the module's decision) replaces the module's outputs
and trace, if every file restored, sidecars included, has the bytes its description records. A file that does not
has its cache entry checked (`checkUsageIndexEntry`), and the next candidate is taken, as it is when the restore fails
(e.g., an entry was pruned meanwhile). Outputs a kept-module check accepted keep that lineage
(`ModuleOutputDescrs.keptFrom?`); a module excluded from kept checks takes none of them. Fails, as a usage skip does,
if the module's source changed during the build (`Module.checkSourceUnchanged`). Writes the module's trace with
`depTrace`, as a restore from the cache by input hash does, and returns the outputs, which are in the cache; the
caller records them under the module's input hash.
-/
def Module.restoreFromUsageIndex? (mod : Module) (presetup : ModulePreSetup) (depTrace : BuildTrace)
    (importArts : NameMap ImportArtifacts) (hashes : ContentHashes) : JobM (Option ModuleOutputArtifacts) := do
  let kept := !(← getBuildContext).keptExclude.contains mod.name
  mod.lookupUsageIndex presetup importArts hashes kept fun name cached => do
    -- The trace goes first, so that no outputs that are not the ones it describes are ever next to it
    removeFileIfExists mod.traceFile
    mod.clearOutputArtifacts
    mod.clearOutputHashes
    let restored? : Option ModuleOutputArtifacts ← id do
      try
        return some (← mod.restoreAllArtifacts cached)
      catch e =>
        let log ← takeLogFrom e
        logVerbose <| log.entries.foldl (s!"{·}\n- {·.message}") s!"usage index: could not restore {name}:"
        mod.clearOutputArtifacts
        mod.clearOutputHashes
        return none
    let some arts := restored? | return none
    let mismatches ← mod.outputMismatches presetup.isModule presetup.postponeCompile arts.descrs (sidecars := true)
    unless mismatches.isEmpty do
      let cache ← getLakeCache
      for (_, descr?) in mismatches do
        if let some descr := descr? then
          discard <| checkUsageIndexEntry {descr, path := cache.artifactDir / descr.relPath, mtime := 0}
      mod.clearOutputArtifacts
      mod.clearOutputHashes
      return none
    mod.checkSourceUnchanged presetup
    updateAction .reuse
    writeFetchTrace mod.traceFile depTrace.hash
      (toJson {arts.descrs with usage? := none, usekey? := none, ltar? := none}) (some presetup.localTrace.hash)
    return some arts

/--
Whether usage cutoff can apply to the module: cutoff is enabled, and the module is neither a module-system file nor
part of a `precompileModules` library. Such a module's compiles are recorded in the usage index
(`Module.indexUsage`), and a build that misses the cache by input hash looks them up.
-/
def Module.usageIndexApplies (mod : Module) (presetup : ModulePreSetup) : JobM Bool := do
  if presetup.isModule || mod.shouldPrecompile then return false
  usageCutoffEnabled

/--
Whether usage cutoff applies to the module: it can (`Module.usageIndexApplies`), and its artifacts exist.
-/
def Module.usageCutoffApplies (mod : Module) (presetup : ModulePreSetup) : JobM Bool := do
  unless (← mod.usageIndexApplies presetup) do return false
  mod.checkArtifactsExist presetup.isModule presetup.postponeCompile

/--
Records the module's outputs, `arts`, which are in the cache, in the usage index (`Cache.writeUsageIndex`) if a
lookup can read them: they name a `.usekey`, the build restores artifacts (`restore`), as a lookup requires, and usage
cutoff can apply to the module. The entry has no archive.
-/
def Module.indexUsage (mod : Module) (presetup : ModulePreSetup) (arts : ModuleOutputArtifacts) (restore : Bool) :
    JobM Unit := do
  unless restore do return
  let some usekey := arts.usekey? | return
  unless (← mod.usageIndexApplies presetup) do return
  (← getLakeCache).writeUsageIndex mod.pkg.cacheScope presetup.localTrace.hash usekey.hash
    (toJson {arts.descrs with ltar? := none})

/--
Skips compiling a module whose trace is stale if usage cutoff applies to it
(`Module.usageCutoffApplies`), its verdict (`Module.usageVerdict`) is `upToDate`, and its outputs are still what
the saved trace describes (`Module.keepOutputs?`): replays its saved log and rewrites its trace with `depTrace`,
which vouches for those outputs under the new input hash. Otherwise, with a writable cache that restores artifacts
(`cacheWith? = some true`), restores a compile of the module the usage index offers that passes the same check
(`Module.restoreFromUsageIndex?`), if usage cutoff can apply to the module (`Module.usageIndexApplies`): its build
directory need not hold outputs. Otherwise, builds it with `compile`, passing the verdict
and the module setup the check computed, if the cutoff applies, and what the module's decision read
(`ContentHashes`). With `cacheWith? = some useLocalFile`, the outputs
it returns are in the cache: kept ones were checked while saving them (`recacheOutputArtifacts?`), as were outputs
`compile` reports it kept and cached (a kept-module check's accept), restored ones come from it, and built ones are
saved after the build.
-/
def Module.skipOrBuild (mod : Module) (presetup : ModulePreSetup) (savedTrace : SavedTrace)
    (depTrace : BuildTrace) (cacheWith? : Option Bool := none)
    (compile : Option (UsageVerdict × ModuleSetup) → ContentHashes → JobM (ModuleOutputArtifacts × Bool) :=
      fun d? hashes => return (← mod.buildLean presetup (d?.map (·.2)) hashes, false)) :
    JobM ModuleOutputArtifacts := do
  let hashes ← ContentHashes.new
  let build (decided? : Option (UsageVerdict × ModuleSetup)) : JobM ModuleOutputArtifacts := do
    let (arts, cached) ← compile decided? hashes
    match cacheWith? with
    | some useLocalFile =>
      if cached then return arts
      mod.cacheOutputArtifacts presetup.isModule useLocalFile presetup.postponeCompile
    | none => return arts
  let indexed := cacheWith? == some true && (← mod.usageIndexApplies presetup)
  let lookupOrBuild (decided : UsageVerdict × ModuleSetup) : JobM ModuleOutputArtifacts := do
    if indexed then
      if let some arts ← mod.restoreFromUsageIndex? presetup depTrace decided.2.importArts hashes then
        return arts
    build (some decided)
  -- Without a verdict of its own, the lookup's setup still goes to the compile
  let noVerdict (reason : String) : JobM ModuleOutputArtifacts := do
    if indexed then lookupOrBuild (.compile reason, ← mkModuleSetup mod presetup) else build none
  let .ok data := savedTrace | noVerdict "it has no trace"
  unless (← mod.usageCutoffApplies presetup) do return ← noVerdict "its outputs are missing"
  let setup ← mkModuleSetup mod presetup
  let verdict ← mod.usageVerdict presetup setup.importArts hashes
  unless verdict matches .upToDate do return ← lookupOrBuild (verdict, setup)
  let some arts ← mod.keepOutputs? presetup.isModule presetup.postponeCompile savedTrace.moduleOutputDescrs?
      cacheWith?
    | lookupOrBuild (.compile "its outputs are not what its trace describes", setup)
  mod.checkSourceUnchanged presetup
  updateAction .replay
  data.log.replay
  unless (← getNoBuild) do
    writeBuildTrace mod.traceFile depTrace (data.outputs?.getD .null) data.log
      (some presetup.localTrace.hash)
    removeFileIfExists (mod.traceFile.addExtension "nobuild")
  return arts

def  adjustMTime (arts : ModuleOutputArtifacts) (traceFile : FilePath) : JobM ModuleOutputArtifacts := do
  match (← getMTime traceFile |>.toBaseIO) with
  | .ok mtime =>
    return arts.setMTime mtime
  | .error (.noFileOrDirectory ..) => -- trace file may not exist
    return arts
  | .error e =>
    error s!"failed to retrieve module artifact modification time: {e}"

inductive ModuleFetchState
| complete (arts : ModuleOutputArtifacts)
| incomplete (savedTrace : SavedTrace) (ltar? : Option Artifact)

/--
Recursively build a Lean module.
Fetch its dependencies and then elaborate the Lean source file, producing
all possible artifacts (e.g., `.olean`, `.ilean`, `.c`, `.bc`).
-/
def Module.recBuildElabArts (mod : Module) : FetchM (Job ModuleOutputArtifacts) := do
  /-
  Remark: `withRegisterJob` must register `presetupJob` to display module builds
  in the job monitor. However, it must also include the fetching of the job to
  ensure all logs end up under its caption in the job monitor.
  -/
  withRegisterJob mod.name.toString do
  let presetupJob ← mod.presetup.fetch
  presetupJob.mapM fun presetup => do
    setTrace presetup.trace
    let arts ← fetchCore presetup
    let arts ← adjustMTime arts mod.traceFile
    return arts
where
  fetchFromCache? presetup savedTrace restoreAll : JobM ModuleFetchState := do
    let inputHash := (← getTrace).hash
    -- A module excluded from kept checks takes no kept outputs from the cache, and under `--no-build`
    -- it unpacks no archive to find out what it holds: it just needs a build, and no output changes
    if (← isKeptExcluded) then
      if let some out ← cachedOutputs? inputHash then
        if (out.getObjVal? "kf").isOk || ((← getNoBuild) && !(out.getObjVal? "o").isOk) then
          return .incomplete savedTrace none
    let some ltarOrArts ← getArtifacts? inputHash savedTrace mod.pkg
      | return .incomplete savedTrace none
    match (ltarOrArts : ModuleOutputs) with
    | .ltar ltar usage? usekey? =>
      updateAction .unpack
      -- The archive's outputs, and its trace, replace the module's: the `.hash` files of the old
      -- outputs go too, or they would describe the new ones (`fetchFileHash` trusts them)
      mod.clearOutputArtifacts
      mod.clearOutputHashes
      removeFileIfExists mod.traceFile
      mod.unpackLtar ltar.path inputHash
      -- The archive ships no sidecars, so the entry's go to the build directory, from which the entry
      -- below is rewritten.
      if let some art := usage? then discard <| restoreArtifact mod.usageFile art
      if let some art := usekey? then discard <| restoreArtifact mod.usekeyFile art
      -- Note: This branch implies that only the ltar output is (validly) cached.
      -- Thus, we use only the new trace unpacked from the ltar to resolve further artifacts.
      let savedTrace ← readTraceFile mod.traceFile
      -- An excluded module takes no kept outputs from an archive either. The unpacked trace says
      -- whether they are kept: a mapping that names the archive alone does not
      if (← isKeptExcluded) && savedTrace.keptFrom?.isSome then
        mod.clearOutputArtifacts
        mod.clearOutputHashes
        removeFileIfExists mod.traceFile
        return .incomplete .missing none
      let arts? ← getArtifactsUsingTrace? inputHash savedTrace mod.pkg
      if let some (arts : ModuleOutputArtifacts) := arts? then
        -- On initial unpack from cache ensure all artifacts uniformly
        -- end up in the build directory and, if writable, the cache
        let arts ← mod.restoreAllArtifacts {arts with ltar? := some ltar}
        if (← mod.pkg.isArtifactCacheWritable) then
          let keptFrom? := arts.keptFrom?
          let arts ← mod.cacheOutputArtifacts presetup.isModule restoreAll presetup.postponeCompile
          let arts := {arts with keptFrom?}
          -- Note: Cache service metadata is not preserved on an output update because it would
          -- result in downloading module outputs that are not available on the remote.
          (← getLakeCache).writeOutputs mod.pkg.cacheScope inputHash arts.descrs (overwrite := true)
          mod.indexUsage presetup arts restoreAll
          return .complete arts
        else
          return .complete arts
      else
        let ltar ← if restoreAll then restoreArtifact mod.ltarFile ltar else pure ltar
        return .incomplete savedTrace (some ltar)
    | .arts arts =>
      unless (← savedTrace.replayCachedIfUpToDate inputHash) do
        mod.clearOutputArtifacts
        -- The sidecars stay out of the trace, which `.ltar` archives include: a `.usekey` records
        -- an input hash, and an archive depends only on outputs.
        writeFetchTrace mod.traceFile inputHash (toJson {arts.descrs with usage? := none, usekey? := none})
          (some presetup.localTrace.hash)
      let arts ←
        if restoreAll then
          mod.restoreAllArtifacts arts
        else
          mod.restoreNeededArtifacts arts
      -- Reuse a previously packed ltar if one exists and still is the one packed
      if arts.ltar?.isNone then
        if let some ltar ← mod.verifiedLocalLtar? then
          return .complete {arts with ltar? := some ltar}
      return .complete arts
  fetchCore (presetup : ModulePreSetup) : JobM ModuleOutputArtifacts := do
    let depTrace ← getTrace
    have : GetMTime Module := ⟨(·.getMTime presetup.isModule presetup.postponeCompile)⟩
    have : CheckExists Module := ⟨(·.checkExists presetup.isModule presetup.postponeCompile)⟩
    let (savedTrace, setAside) ← reviewKept (← readTraceFile mod.traceFile)
    -- Under `--no-build` (and `lake shake`), a set-aside module keeps its files and only reports
    -- that it needs a build: neither `--old`'s modification-time check nor the cache restores it.
    if setAside && (← getNoBuild) then
      return ← mod.buildLean presetup
    if (← mod.pkg.isArtifactCacheWritable) then
      let restore ← mod.pkg.restoreAllArtifacts
      match (← fetchFromCache? presetup savedTrace restore) with
      | .complete arts =>
        return arts
      | .incomplete savedTrace ltar? =>
        let status ← savedTrace.replayIfUpToDate' (oldTrace := presetup.srcMTime) mod depTrace
        -- Whether the build directory holds the outputs the saved trace describes
        let mut replayed := false
        -- The outputs of a usage skip or build, already in the cache
        let mut cached? : Option ModuleOutputArtifacts := none
        if status.isUpToDate then
          if (← mod.checkArtifactsExist presetup.isModule presetup.postponeCompile) then
            replayed := true
          else
            -- Restoring from the archive stamps the trace with the current input
            -- hash, so only do it on a verified hash match. An mtime-only match
            -- leaves the hash unconfirmed, so rebuild instead.
            if status == .hashUpToDate then
              unless (← unpackLocalLtar depTrace.hash) do
                discard <| mod.buildLean presetup
            else
              discard <| mod.buildLean presetup
        else
          cached? := some (← mod.skipOrBuild presetup savedTrace depTrace (cacheWith? := some restore)
            (compile := checkOrBuild presetup savedTrace (some restore)))
        if status.isCacheable then
          let arts ← id do
            if let some arts := cached? then return arts
            if replayed then
              if let some arts ← mod.keepOutputs? presetup.isModule presetup.postponeCompile
                  savedTrace.moduleOutputDescrs? (cacheWith? := some restore) then
                return arts
              discard <| mod.buildLean presetup
            mod.cacheOutputArtifacts presetup.isModule restore presetup.postponeCompile
          let arts ← mod.withSavedKeptFrom arts
          -- An archive from the cache describes the mapping's outputs, which accepted ones are not.
          let arts :=
            if arts.keptFrom?.isSome then arts else {arts with ltar? := arts.ltar? <|> ltar?}
          -- The supersede rule (`Cache.writeOutputsCore`): accepted outputs never replace a mapping.
          (← getLakeCache).writeOutputs mod.pkg.cacheScope depTrace.hash arts.descrs
          mod.indexUsage presetup arts restore
          return arts
        else
          let arts ← mod.computeArtifacts presetup.isModule presetup.postponeCompile
          mod.withSavedKeptFrom {arts with ltar? := arts.ltar? <|> ltar?}
    else
      let status ← savedTrace.replayIfUpToDate' (oldTrace := presetup.srcMTime) mod depTrace
      if status.isUpToDate then
        if (← mod.checkArtifactsExist presetup.isModule presetup.postponeCompile) then
          let arts ← mod.computeArtifacts presetup.isModule presetup.postponeCompile
          return {arts with keptFrom? := savedTrace.keptFrom?}
        -- As above: restore on a hash match and rebuild on a mtime match.
        if status == .hashUpToDate then
          unless (← unpackLocalLtar depTrace.hash) do
            discard <| mod.buildLean presetup
        else
          discard <| mod.buildLean presetup
        mod.withSavedKeptFrom (← mod.computeArtifacts presetup.isModule presetup.postponeCompile)
      else
        if (← mod.pkg.isArtifactCacheReadable) then
          match (← fetchFromCache? presetup savedTrace true) with
          | .complete arts =>
              return arts
          | .incomplete savedTrace ltar? =>
            if (← savedTrace.replayIfUpToDate (oldTrace := presetup.srcMTime) mod depTrace) then
              let arts ← mod.computeArtifacts presetup.isModule presetup.postponeCompile
              mod.withSavedKeptFrom {arts with ltar? := arts.ltar? <|> ltar?}
            else
              mod.skipOrBuild presetup savedTrace depTrace (compile := checkOrBuild presetup savedTrace none)
        else
          mod.skipOrBuild presetup savedTrace depTrace (compile := checkOrBuild presetup savedTrace none)
  isKeptExcluded : JobM Bool :=
    return (← getBuildContext).keptExclude.contains mod.name
  /-
  A saved trace of outputs that a kept-module check accepted is set aside, together with those
  outputs (so that no mode of the build replays them, `--old` included), and the module is decided
  again: when the module is excluded from kept checks, or when the cache maps the same input to
  anything but accepted outputs, in any of the forms Lake writes or installs: outputs compiled from
  source, which replace the kept ones, or an archive (the `-o` and `lake cache add`/`get` form),
  whose own trace then decides the module's lineage when it is unpacked. Returns whether it set the
  trace aside; a `--no-build` build changes no output, and the module just needs a build.
  -/
  reviewKept (savedTrace : SavedTrace) : JobM (SavedTrace × Bool) := do
    unless savedTrace.keptFrom?.isSome do return (savedTrace, false)
    if (← isKeptExcluded) then return ← setAside
    let .ok data := savedTrace | return (savedTrace, false)
    unless data.depHash == (← getTrace).hash && (← mod.pkg.isArtifactCacheReadable) do
      return (savedTrace, false)
    let some out ← cachedOutputs? data.depHash | return (savedTrace, false)
    if (out.getObjVal? "kf").isOk then return (savedTrace, false)
    setAside
  setAside : JobM (SavedTrace × Bool) := do
    unless (← getNoBuild) do
      mod.clearOutputArtifacts
      mod.clearOutputHashes
      removeFileIfExists mod.traceFile
    return (.missing, true)
  cachedOutputs? (inputHash : Hash) : JobM (Option Json) := do
    try
      return (← (← getLakeCache).readOutputs? mod.pkg.cacheScope inputHash).map (·.data)
    catch e =>
      dropLogFrom e
      return none
  /-
  Compiles the module (with its `ModuleSetup`, if the caller computed it), unless its existing
  outputs are a kept candidate (`keptCandidate?`) and the kept-module checker accepts them for the
  module's current imports. `Module.skipOrBuild` calls it for a module the usage cutoff does not skip,
  with the module's verdict when the cutoff applies, and what the module's decision read (`hashes`), which the
  compile takes its `modsysHash` from. With `cacheWith?`, accepted outputs are saved to
  the cache as a skip saves its outputs (`Module.keepOutputs?`). Returns the outputs and whether
  they were kept and cached.
  -/
  checkOrBuild (presetup : ModulePreSetup) (savedTrace : SavedTrace) (cacheWith? : Option Bool)
    (decided? : Option (UsageVerdict × ModuleSetup)) (hashes : ContentHashes)
  : JobM (ModuleOutputArtifacts × Bool) := do
    if let some checker := (← getBuildContext).keptChecker? then
      if let some (data, descrs, setup) ← keptCandidate? presetup savedTrace decided? then
        let cwd ← IO.currentDir
        let abs (f : FilePath) := if f.isAbsolute then f else cwd / f
        match (← checker.check mod.name (abs mod.oleanFile) (abs presetup.srcFile) (toJson setup)) with
        | .accepted hash =>
          if hash != descrs.olean.hash then
            logInfo s!"kept-module check: the checker read an .olean with hash {hash}, \
              not {descrs.olean.hash} as recorded in the module's trace; compiling"
          else if let some arts ← acceptKept presetup setup data descrs cacheWith? then
            return (arts, cacheWith?.isSome)
          else
            logInfo "kept-module check: the module's outputs changed while the checker checked them; \
              compiling"
        | .rejected reason =>
          logInfo s!"kept-module check: {reason}; compiling"
    return (← mod.buildLean presetup (decided?.map (·.2)) hashes, false)
  /-
  The saved trace, its output descriptions and the module's setup if the module's existing outputs
  may be kept for its current input: they were produced from the same local inputs
  (`ModulePreSetup.localTrace`), so only the module's imports differ, the files are the ones the
  trace describes (`Module.outputMismatches`, as for a skip), and the usage cutoff's verdict is
  `recheck`. That verdict is the rule for kept modules: when the machinery the module used while
  elaborating is unchanged, re-checking its proofs is enough; when it changed, or the records cannot
  tell, the module compiles. Without the cutoff's verdict there is no candidate. A `module` file, a
  module linked into a shared library (`precompileModules`), and a module excluded from kept checks
  are never candidates, nor is any module of a `--no-build` build.
  -/
  keptCandidate? (presetup : ModulePreSetup) (savedTrace : SavedTrace)
    (decided? : Option (UsageVerdict × ModuleSetup))
  : JobM (Option (BuildMetadata × ModuleOutputDescrs × ModuleSetup)) := do
    if (← getNoBuild) || presetup.isModule || mod.shouldPrecompile || (← isKeptExcluded) then
      return none
    let .ok data := savedTrace | return none
    let some descrs := savedTrace.moduleOutputDescrs? | return none
    unless data.localHash? == some presetup.localTrace.hash do return none
    unless (← mod.outputMismatches presetup.isModule presetup.postponeCompile descrs).isEmpty do return none
    match decided? with
    | some (.recheck, setup) => return some (data, descrs, setup)
    | some (.compile reason, _) =>
      logInfo s!"kept-module check: not asked: {reason}; compiling"
      return none
    | _ => return none
  /-
  Records the module's existing outputs, which the kept-module checker accepted, as the outputs of
  its current input, if they still are what the trace describes: they go through the skip path's
  check (`Module.keepOutputs?`, which with `cacheWith?` also saves them to the cache), as the
  checker may have taken minutes. Returns `none` if they are not (the caller compiles). Their
  `.hash` files are rewritten from the trace's descriptions. The module's `.ltar` was packed with
  the previous trace, so it is removed. Its usage key is marked kept (`UsekeySidecar.kept`) before
  the outputs are saved: the `.usage` describes its constants as Lean compiled them, and a constant
  they mention may mean something new now, so its importers, here or after a restore from the cache,
  must not trust its digests (`importUsage?`). A key that cannot be read is removed instead.
  -/
  acceptKept (presetup : ModulePreSetup) (setup : ModuleSetup) (data : BuildMetadata)
    (descrs : ModuleOutputDescrs) (cacheWith? : Option Bool)
  : JobM (Option ModuleOutputArtifacts) := do
    writeFileHash mod.oleanFile descrs.olean.hash
    writeFileHash mod.ileanFile descrs.ilean.hash
    if let some c := descrs.c? then writeFileHash mod.cFile c.hash
    if let some bc := descrs.bc? then writeFileHash mod.bcFile bc.hash
    removeFileIfExists mod.ltarFile
    clearFileHash mod.ltarFile
    let key? ← (IO.FS.readFile mod.usekeyFile).toBaseIO
    -- under an artifact cache the key is a read-only link: it is replaced, never written through
    removeFileIfExists mod.usekeyFile
    clearFileHash mod.usekeyFile
    if let .ok contents := key? then
      if let .ok key@(.obj _) := Json.parse contents then
        IO.FS.writeFile mod.usekeyFile (key.setObjVal! "kept" true).compress
    match (← mod.keepOutputs? presetup.isModule presetup.postponeCompile (some descrs) cacheWith?) with
    | none =>
      mod.clearOutputHashes
      return none
    | some arts =>
      some <$> buildAction (← getTrace) mod.traceFile (action := .check)
          (localHash? := some presetup.localTrace.hash) do
        data.log.replay
        createParentDirs mod.setupFile
        IO.FS.writeFile mod.setupFile (toJson setup).pretty
        return {arts with keptFrom? := descrs.keptFrom? <|> some data.depHash}
  -- Unpacks the module's own `.ltar` (stamped with `inputHash`) into the build directory and
  -- returns whether it did. The archive carries its own trace, which vouches only for the archive,
  -- so it must still have the hash recorded when it was packed; if it does not, or none is
  -- recorded, it is removed instead (the caller then rebuilds). The old trace and outputs (but not
  -- the archive) are removed first: leantar skips members that already exist when the trace's
  -- input hash matches, and an unpack that is killed must not leave outputs that are not the
  -- archive's next to its trace. If the unpack fails, the module's outputs, their `.hash` files and
  -- its trace are removed, so that a retry cannot replay a partial result.
  unpackLocalLtar (inputHash : Hash) : JobM Bool := do
    let expected? ← Hash.load? (mod.ltarFile.toString ++ ".hash")
    unless expected? == some (← computeFileHash mod.ltarFile) do
      logWarning s!"{mod.ltarFile}: does not match the hash recorded when it was packed; rebuilding"
      removeFileIfExists mod.ltarFile
      clearFileHash mod.ltarFile
      return false
    removeFileIfExists mod.traceFile
    for file in #[mod.oleanFile, mod.oleanServerFile, mod.oleanPrivateFile, mod.ileanFile,
        mod.irSigFile, mod.irFile, mod.cFile, mod.bcFile] do
      removeFileIfExists file
      clearFileHash file
    try mod.unpackLtar mod.ltarFile inputHash catch e =>
      mod.clearOutputArtifacts
      mod.clearOutputHashes
      removeFileIfExists mod.traceFile
      throw e
    return true

/-- The `ModuleFacetConfig` for the builtin `elabArtsFacet`. -/
public def Module.elabArtsFacetConfig : ModuleFacetConfig elabArtsFacet :=
  mkFacetJobConfig recBuildElabArts

@[inline] def Module.fetchOLeanCore
  (facet : String) (f : ModuleOutputArtifacts → Option Artifact) (errMsg : String) (mod : Module)
: FetchM (Job FilePath) := do
  (← mod.elabArts.fetch).mapM (sync := true) fun arts => do
      let some art := f arts
        | error errMsg
      /-
      Avoid recompiling unchanged OLean files.
      OLean files transitively include their imports.
      However, imports are pre-resolved by Lake, so they are not included in their trace.
      -/
      newTrace s!"{mod.name.toString}:{facet}"
      addTrace art.trace
      return art.path

/-- The `ModuleFacetConfig` for the builtin `oleanFacet`. -/
public def Module.oleanFacetConfig : ModuleFacetConfig oleanFacet :=
  mkFacetJobConfig <| fetchOLeanCore "olean" (·.olean)
    "No olean generated. This is likely an error in Lean or Lake."

/-- The `ModuleFacetConfig` for the builtin `oleanServerFacet`. -/
public def Module.oleanServerFacetConfig : ModuleFacetConfig oleanServerFacet :=
  mkFacetJobConfig <| fetchOLeanCore "olean.server" (·.oleanServer?) noServerOLeanError

/-- The `ModuleFacetConfig` for the builtin `oleanPrivateFacet`. -/
public def Module.oleanPrivateFacetConfig : ModuleFacetConfig oleanPrivateFacet :=
  mkFacetJobConfig <| fetchOLeanCore "olean.private" (·.oleanPrivate?) noPrivateOLeanError

/-- The `ModuleFacetConfig` for the builtin `ileanFacet`. -/
public def Module.ileanFacetConfig : ModuleFacetConfig ileanFacet :=
  mkFacetJobConfig fun mod => do
    (← mod.elabArts.fetch).mapM (sync := true) fun arts => do
      let art := arts.ilean
      /-
      Avoid recompiling unchanged Ilean files.
      Ilean files are assumed to only incorporate their own content
      and not transitively include their inputs (e.g., imports).
      Lean also produces LF-only Ilean files, so no line ending normalization.
      -/
      newTrace s!"{mod.name.toString}:ilean"
      addTrace art.trace
      return art.path

/--
Recursively fetch the module's code generation artifacts.

Unless code generation was postponed, elaboration already produced them.
Otherwise, `leanir` runs once elaboration (`elabArts`) has produced the `.olean`.
-/
def Module.recBuildIRArts (mod : Module) : FetchM (Job ModuleOutputArtifacts) := do
  withRegisterJob s!"{mod.name}:irArts" do
  let elabJob ← mod.elabArts.fetch
  elabJob.mapM fun elabArts => do
    -- Already complete because `elabArts` waits on it
    let presetup ← (← mod.presetup.fetch).await
    -- Use the same trace as `elabArts` to maintain compatibility
    setTrace presetup.trace
    unless elabArts.c?.isNone do
      let elabArts ← trackOutputsIfEnabled elabArts
      return elabArts
    let depTrace := BuildTrace.nil s!"{mod.name} (leanir)"
      |>.mix (← importAllTrace elabArts) |>.mix presetup.irSigTrace
    let upToDate ← buildUnlessUpToDate? (oldTrace := presetup.srcMTime) mod.irFile depTrace mod.irTraceFile do
      createParentDirs mod.irSetupFile
      let irSetup ← mkModuleSetup mod presetup
      IO.FS.writeFile mod.irSetupFile (toJson irSetup).pretty
      mod.clearIROutputArtifacts
      mod.clearIROutputHashes
      compileLeanIR mod.irSetupFile mod.irFile mod.cFile (← getLeanPath) (← getLeanir)
    let arts ← mod.computeIRArtifacts elabArts upToDate
    let arts ← adjustMTime arts mod.irTraceFile
    let arts ← trackOutputsIfEnabled arts
    return arts
where
  importAllTrace arts := do
    let allArtsTrace := BuildTrace.nil s!"{mod.name}:importAllArts"
    if arts.isModule then
      let some oleanServer := arts.oleanServer?
        | error noServerOLeanError
      let some oleanPrivate := arts.oleanPrivate?
        | error noPrivateOLeanError
      return allArtsTrace.mix
          arts.olean.trace |>.mix oleanServer.trace |>.mix oleanPrivate.trace
    else
      return allArtsTrace.mix arts.olean.trace
  /-
  Records the module's archive in the `-o` outputs file. The entry of a module whose outputs a
  kept-module check accepted also carries their lineage (`{"l": <archive>, "kf": <hash>}`), so
  that a cache installing the file applies the supersede rule to it (`Cache.writeOutputsCore`).
  -/
  trackOutputsIfEnabled arts : JobM ModuleOutputArtifacts := do
    if let some ref ← Internal.getOutputsRef? mod.pkg then
      let inputHash := (← getTrace).hash
      let (arts, ltar) ← id do
        if let some ltar := arts.ltar? then pure (arts, ltar) else
        let ltar ← mod.packLtar arts
        pure ({arts with ltar? := some ltar}, ltar)
      let entry := match arts.keptFrom? with
        | some hash => Json.mkObj [("l", toJson ltar.descr), ("kf", toJson hash)]
        | none => toJson ltar.descr
      ref.insert inputHash entry (mod.platformIndependent.getD false)
      return arts
    return arts

/-- The `ModuleFacetConfig` for the builtin `irArtsFacet`. -/
public def Module.irArtsFacetConfig : ModuleFacetConfig irArtsFacet :=
  mkFacetJobConfig recBuildIRArts

/-- The `ModuleFacetConfig` for the builtin `leanArtsFacet`. -/
public def Module.leanArtsFacetConfig : ModuleFacetConfig leanArtsFacet :=
  mkFacetJobConfig (memoize := false) (·.irArts.fetch)

@[inline] def Module.fetchIRArtCore
  (facet : String) (f : ModuleOutputArtifacts → Option Artifact) (errMsg : String) (mod : Module)
: FetchM (Job FilePath) := do
  (← mod.irArts.fetch).mapM (sync := true) fun arts => do
    let some art := f arts
      | error errMsg
    newTrace s!"{mod.name.toString}:{facet}"
    addTrace art.trace
    return art.path

/-- The `ModuleFacetConfig` for the builtin `irSigFacet`. -/
public def Module.irSigFacetConfig : ModuleFacetConfig irSigFacet :=
  mkFacetJobConfig <| fetchIRArtCore "ir.sig" (·.irSig?) noIRSigError

/-- The `ModuleFacetConfig` for the builtin `irFacet`. -/
public def Module.irFacetConfig : ModuleFacetConfig irFacet :=
  mkFacetJobConfig <| fetchIRArtCore "ir" (·.ir?) noIRError

/-- The `ModuleFacetConfig` for the builtin `cFacet`. -/
public def Module.cFacetConfig : ModuleFacetConfig cFacet :=
  mkFacetJobConfig fun mod => do
    (← mod.irArts.fetch).mapM (sync := true) fun arts => do
      let some art := arts.c?
        | error noCError
      /-
      Avoid recompiling unchanged C files.
      C files are assumed to only incorporate their own content
      and not transitively include their inputs (e.g., imports).
      They do, however, include `lean/lean.h`.
      Lean also produces LF-only C files, so no line ending normalization.
      -/
      newTrace s!"{mod.name.toString}:c"
      addTrace art.trace
      addLeanTrace
      return art.path

/-- The `ModuleFacetConfig` for the builtin `bcFacet`. -/
public def Module.bcFacetConfig : ModuleFacetConfig bcFacet :=
  mkFacetJobConfig fun mod => do
    (← mod.irArts.fetch).mapM (sync := true) fun arts => do
      let some art := arts.bc?
        | error "No LLVM bitcode generated. Ensure your Lean version supports the LLVM backend."
      /-
      Avoid recompiling unchanged bitcode files.
      Bitcode files are assumed to only depend on their content
      and not transitively on their inputs (e.g., imports).
      -/
      newTrace s!"{mod.name.toString}:bc"
      addTrace art.trace
      return art.path

@[inline] def Package.getLeanIncludeDir? (pkg : Package) : JobM (Option (FilePath × BuildTrace)) := do
  if pkg.bootstrap then
    (← getBuildContext).leanIncludeDirs[pkg.wsIdx]?.join.getDM do
        error "failed to fetch trace of the Lean include directory"
  else return none

/--
Recursively build the module's object file from its C file produced by `lean`
with `-DLEAN_EXPORTING` set, which exports Lean symbols defined within the C files.
-/
def Module.recBuildLeanCToOExport (self : Module) : FetchM (Job FilePath) := do
  let suffix := if (← getIsVerbose) then " (with exports)" else ""
  withRegisterJob s!"{self.name}:c.o{suffix}" <| withCurrPackage self.pkg do
  -- TODO: add option to pass a target triplet for cross compilation
  let leancArgs := self.leancArgs ++ #["-DLEAN_EXPORTING"]
  let leanIncludeDir? ← self.pkg.getLeanIncludeDir?
  Internal.buildLeanO self.coExportFile (← self.c.fetch) self.weakLeancArgs leancArgs leanIncludeDir?

/-- The `ModuleFacetConfig` for the builtin `coExportFacet`. -/
public def Module.coExportFacetConfig : ModuleFacetConfig coExportFacet :=
  mkFacetJobConfig Module.recBuildLeanCToOExport

/--
Recursively build the module's object file from its C file produced by `lean`.
This version does not export any Lean symbols.
-/
def Module.recBuildLeanCToONoExport (self : Module) : FetchM (Job FilePath) := do
  let suffix := if (← getIsVerbose) then " (without exports)" else ""
  withRegisterJob s!"{self.name}:c.o{suffix}" <| withCurrPackage self.pkg do
  -- TODO: add option to pass a target triplet for cross compilation
  let leanIncludeDir? ← self.pkg.getLeanIncludeDir?
  Internal.buildLeanO self.coNoExportFile (← self.c.fetch) self.weakLeancArgs self.leancArgs leanIncludeDir?

/-- The `ModuleFacetConfig` for the builtin `coNoExportFacet`. -/
public def Module.coNoExportFacetConfig : ModuleFacetConfig coNoExportFacet :=
  mkFacetJobConfig recBuildLeanCToONoExport

/-- The `ModuleFacetConfig` for the builtin `coFacet`. -/
public def Module.coFacetConfig : ModuleFacetConfig coFacet :=
  mkFacetJobConfig (memoize := false) fun mod =>
    if Platform.isWindows then mod.coNoExport.fetch else mod.coExport.fetch

/-- Recursively build the module's object file from its bitcode file produced by `lean`. -/
def Module.recBuildLeanBcToO (self : Module) : FetchM (Job FilePath) := do
  withRegisterJob s!"{self.name}:bc.o" <| withCurrPackage self.pkg do
  -- TODO: add option to pass a target triplet for cross compilation
  buildLeanO self.bcoFile (← self.bc.fetch) self.weakLeancArgs self.leancArgs

/-- The `ModuleFacetConfig` for the builtin `bcoFacet`. -/
public def Module.bcoFacetConfig : ModuleFacetConfig bcoFacet :=
  mkFacetJobConfig recBuildLeanBcToO

/-- The `ModuleFacetConfig` for the builtin `oExportFacet`. -/
public def Module.oExportFacetConfig : ModuleFacetConfig oExportFacet :=
  mkFacetJobConfig (memoize := false) fun mod =>
    match mod.backend with
    | .default | .c => mod.coExport.fetch
    | .llvm => mod.bco.fetch

/-- The `ModuleFacetConfig` for the builtin `oNoExportFacet`. -/
public def Module.oNoExportFacetConfig : ModuleFacetConfig oNoExportFacet :=
  mkFacetJobConfig (memoize := false) fun mod =>
    match mod.backend with
    | .default | .c => mod.coNoExport.fetch
    | .llvm => error "the LLVM backend only supports exporting Lean symbols"

/-- The `ModuleFacetConfig` for the builtin `oFacet`. -/
public def Module.oFacetConfig : ModuleFacetConfig oFacet :=
  mkFacetJobConfig (memoize := false) fun mod =>
    match mod.backend with
    | .default | .c => mod.co.fetch
    | .llvm => mod.bco.fetch

def recComputeModuleLinkInfo
  (root : Module) (shouldExport : Bool)
: FetchM (Job ModuleLinkInfo) := do
  /-
  Remark: We must build the root before we fetch the transitive imports
  so that errors in the import block of transitive imports will not kill this
  job before the root is built.
  -/
  let mut objJobs := #[]
  let mut libJobs := #[]
  for facet in root.nativeFacets shouldExport do
    objJobs := objJobs.push <| ← facet.fetch root
  let some imports ← (← root.transImports.fetch).waitUnlessCanceled?
    | error s!"bad imports (see the '{root.name.toString}' job for details)"
  for mod in imports do
    for facet in mod.nativeFacets shouldExport do
      objJobs := objJobs.push <| ← facet.fetch mod
  for link in root.lib.moreLinkObjs do
    objJobs := objJobs.push <| ← link.fetchIn root.pkg
  let libs := imports.foldl (·.insert ·.lib) OrdHashSet.empty |>.toArray
  for lib in libs do
    for link in lib.moreLinkObjs do
      objJobs := objJobs.push <| ← link.fetchIn lib.pkg
    for link in lib.moreLinkLibs do
      libJobs := libJobs.push <| ← link.fetchIn lib.pkg
  for link in root.lib.moreLinkLibs do
    libJobs := libJobs.push <| ← link.fetchIn root.pkg
  let deps := (← (← root.pkg.transDeps.fetch).await).push root.pkg
  for dep in deps do
    for lib in dep.externLibs do
      objJobs := objJobs.push <| ← lib.static.fetch
  let objsJob := Job.collectArray objJobs "Module.moreLinkObjs"
  let libsJob := Job.collectArray libJobs "Module.moreLinkLibs"
  objsJob.bindM (sync := true) fun objs =>
  libsJob.mapM (sync := true) fun libs => do
    addPureTrace root.lib.linkArgs "Module.moreLinkArgs"
    setTraceCaption s!"{root.name.toString}:linkInfo"
    let args := root.lib.weakLinkArgs ++ root.lib.linkArgs
    return {args, objs, libs}

/-- The `ModuleFacetConfig` for the builtin `linkInfoExportFacet`. -/
public def Module.linkInfoExportFacetConfig : ModuleFacetConfig linkInfoExportFacet :=
  mkFacetJobConfig (buildable := false) <| recComputeModuleLinkInfo (shouldExport := true)

/-- The `ModuleFacetConfig` for the builtin `linkInfoNoExportFacet`. -/
public def Module.linkInfoNoExportFacetConfig : ModuleFacetConfig linkInfoNoExportFacet :=
  mkFacetJobConfig (buildable := false) <| recComputeModuleLinkInfo (shouldExport := false)

/--
Recursively build the shared library of a module
(e.g., for `--load-dynlib` or `--plugin`).
-/
def Module.recBuildDynlib (mod : Module) : FetchM (Job Dynlib) :=
  withRegisterJob s!"{mod.name}:dynlib" <| withCurrPackage mod.pkg do
  /-
  Fetch the module's object files.

  NOTE: The `moreLinkObjs` of the module's library are not included
  here because they would then be linked to the dynlib of each module of the library.
  On Windows, were module dynlibs must be linked with those of their imports, this would
  result in duplicate symbols when one library module imports another of the same library.
  -/
  let objJobs ← (mod.nativeFacets true).mapM (·.fetch mod)
  -- Fetch dependencies' dynlibs
  let libJobs ← id do
    let imps ← (← mod.imports.fetch).await
    let libJobs ← mod.fetchImportLibs imps true true
    let libJobs ← mod.lib.moreLinkLibs.foldlM
      (·.push <$> ·.fetchIn mod.pkg) libJobs
    let libJobs ← mod.pkg.externLibs.foldlM
      (·.push <$> ·.dynlib.fetch) libJobs
    return libJobs
  buildLeanSharedLib mod.dynlibName mod.dynlibFile objJobs libJobs
    mod.weakLinkArgs mod.linkArgs (plugin := true)

/-- The `ModuleFacetConfig` for the builtin `dynlibFacet`. -/
public def Module.dynlibFacetConfig : ModuleFacetConfig dynlibFacet :=
  mkFacetJobConfig recBuildDynlib

/--
A name-configuration map for the initial set of
Lake module facets (e.g., `imports`, `c`, `o`, `dynlib`).
-/
public def Module.initFacetConfigs : DNameMap ModuleFacetConfig :=
  DNameMap.empty
  |>.insert inputFacet inputFacetConfig
  |>.insert leanFacet leanFacetConfig
  |>.insert headerFacet headerFacetConfig
  |>.insert importsFacet importsFacetConfig
  |>.insert transImportsFacet transImportsFacetConfig
  |>.insert precompileImportsFacet precompileImportsFacetConfig
  |>.insert importInfoFacet importInfoFacetConfig
  |>.insert presetupFacet presetupFacetConfig
  |>.insert setupFacet setupFacetConfig
  |>.insert depTraceFacet depTraceFacetConfig
  |>.insert depHashFacet depHashFacetConfig
  |>.insert depsFacet depsFacetConfig
  |>.insert leanArtsFacet leanArtsFacetConfig
  |>.insert elabArtsFacet elabArtsFacetConfig
  |>.insert irArtsFacet irArtsFacetConfig
  |>.insert importArtsFacet importArtsFacetConfig
  |>.insert importAllArtsFacet importAllArtsFacetConfig
  |>.insert exportInfoFacet exportInfoFacetConfig
  |>.insert metaExportInfoFacet metaExportInfoFacetConfig
  |>.insert ltarFacet ltarFacetConfig
  |>.insert oleanFacet oleanFacetConfig
  |>.insert oleanServerFacet oleanServerFacetConfig
  |>.insert oleanPrivateFacet oleanPrivateFacetConfig
  |>.insert ileanFacet ileanFacetConfig
  |>.insert irSigFacet irSigFacetConfig
  |>.insert irFacet irFacetConfig
  |>.insert cFacet cFacetConfig
  |>.insert bcFacet bcFacetConfig
  |>.insert coFacet coFacetConfig
  |>.insert coExportFacet coExportFacetConfig
  |>.insert coNoExportFacet coNoExportFacetConfig
  |>.insert bcoFacet bcoFacetConfig
  |>.insert oFacet oFacetConfig
  |>.insert oExportFacet oExportFacetConfig
  |>.insert oNoExportFacet oNoExportFacetConfig
  |>.insert linkInfoExportFacet linkInfoExportFacetConfig
  |>.insert linkInfoNoExportFacet linkInfoNoExportFacetConfig
  |>.insert dynlibFacet dynlibFacetConfig

@[inherit_doc Module.initFacetConfigs]
public abbrev initModuleFacetConfigs := Module.initFacetConfigs

/-! ## Top-Level Builds
Definitions to support `lake setup-file` and `lake lean` builds.
-/

/--
Computes the module setup of a workspace module being edited by the Lean language server,
building its imports and other dependencies. Used by `lake setup-file`.

Due to its exclusive use as a top-level build, it does not construct a proper trace state.
-/
def setupEditedModule
  (mod : Module) (header : ModuleHeader)
: FetchM (Job ModuleSetup) := do
  let extraDepJob ← mod.lib.extraDep.fetch
  let directImports ← header.imports.mapM fun imp => do
    return ⟨imp, ← findModule? imp.module⟩
  let fileName := mod.relLeanFile.toString
  let localImports := directImports.filterMap (·.module?)
  let impInfoJob ← fetchImportInfo fileName mod.pkg.keyName mod.name header
    (allowNonModules := mod.allowNonModules)
  let precompileImports ←
    if mod.shouldPrecompileImports then
      (← computeTransImportsAux fileName localImports).await
    else
      (← computePrecompileImportsAux fileName localImports).await
  let impLibsJob ← Job.collectArray (traceCaption := "import dynlibs") <$>
    mod.fetchImportLibs precompileImports mod.shouldPrecompile mod.shouldPrecompileImports
  let externLibsJob ← Job.collectArray (traceCaption := "package external libraries") <$>
    if mod.shouldPrecompileImports then mod.pkg.externLibs.mapM (·.dynlib.fetch) else pure #[]
  let dynlibsJob ← mod.dynlibs.fetchIn mod.pkg "module dynlibs"
  let pluginsJob ← mod.plugins.fetchIn mod.pkg "module plugins"
  extraDepJob.bindM (sync := true) fun _ => do
  impInfoJob.bindM (sync := true) fun info => do
  impLibsJob.bindM (sync := true) fun impLibs => do
  externLibsJob.bindM (sync := true) fun externLibs => do
  dynlibsJob.bindM (sync := true) fun dynlibs => do
  pluginsJob.mapM fun plugins => do
    let {dynlibs, plugins} ← computeModuleDeps impLibs externLibs dynlibs plugins
    let transImpArts ← fetchTransImportArts directImports info.directArts !header.isModule
    return {
      name := mod.name
      package? := mod.pkg.id?
      isModule := header.isModule
      imports? := none
      importArts := transImpArts
      dynlibs := dynlibs.map (·.path)
      plugins := plugins.map (·.path)
      options := mod.serverOptions
    }

/--
Computes the module setup of Lean code external to the workspace,
building its imports and other dependencies.

This is used by `lake setup-file` to configure modules for the Lean server and by `lake lean`
to build the dependencies of the file and generate the data for `lean --setup`.

Due to its exclusive use as a top-level build, it does not construct a proper trace state.
-/
def setupExternalModule
  (fileName : String) (header : ModuleHeader) (leanOpts : LeanOptions)
: FetchM (Job ModuleSetup) := do
  let root ← getRootPackage
  let extraDepJob ← root.extraDep.fetch
  let imports ← header.imports.mapM fun imp => do
    return ⟨imp, ← findModule? imp.module⟩
  let localImports := imports.filterMap (·.module?)
  let impInfoJob ← fetchImportInfo fileName .anonymous .anonymous header
  let precompileImports ← (← computePrecompileImportsAux fileName localImports).await
  let impLibsJob ← fetchImportLibs precompileImports
  let externLibsJob ← Job.collectArray <$>
    if root.precompileModules then root.externLibs.mapM (·.dynlib.fetch) else pure #[]
  let dynlibsJob ← root.dynlibs.fetchIn root
  let pluginsJob ← root.plugins.fetchIn root
  extraDepJob.bindM (sync := true) fun _ =>
  impInfoJob.bindM (sync := true) fun info =>
  impLibsJob.bindM (sync := true) fun impLibs =>
  dynlibsJob.bindM (sync := true) fun dynlibs =>
  pluginsJob.bindM (sync := true) fun plugins =>
  externLibsJob.mapM fun externLibs => do
    let {dynlibs, plugins} ← computeModuleDeps impLibs externLibs dynlibs plugins
    let transImpArts ← fetchTransImportArts imports info.directArts !header.isModule
    return {
      name := `_unknown
      isModule := header.isModule
      imports? := none
      importArts := transImpArts
      dynlibs := dynlibs.map (·.path)
      plugins := plugins.map (·.path)
      options := leanOpts
    }

/--
Computes the module setup of edited Lean code for the Lean language server,
building its imports and other dependencies. Used by `lake setup-file`.

Due to its exclusive use as a top-level build, it does not construct a proper trace state.
-/
public def setupServerModule
  (fileName : String) (path : FilePath) (header? : Option ModuleHeader)
: FetchM (Job ModuleSetup) :=
  withRegisterJob s!"setup-file {fileName}" do
  let header ← header?.getDM do
    Lean.parseImports' (← IO.FS.readFile path) fileName
  if let some mod ← findModuleBySrc? path then
    logVerbose s!"file identified as module: {mod.name}"
    setupEditedModule mod header
  else
    setupExternalModule fileName header (← getServerOptions)

/--
Computes the arguments required to evaluate the Lean file with `lean`,
building its imports and other dependencies. Used by `lake lean`.

Due to its exclusive use as a top-level build, it does not construct a proper trace state.
-/
public def prepareLeanCommand
  (leanFile : FilePath) (moreArgs : Array String := #[])
: FetchM (Job IO.Process.SpawnArgs) :=
  withRegisterJob s!"prepare lean {leanFile}" do
  let some path ← resolvePath? leanFile
    | error s!"file not found: {leanFile}"
  if let some mod ← findModuleBySrc? path then
    logVerbose s!"file identified as module: {mod.name}"
    let setupJob ← mod.setup.fetch
    setupJob.mapM (sync := true) fun setup => do
      mkSpawnArgs path setup mod.leanArgs
  else
    let header ← Lean.parseImports' (← IO.FS.readFile path) leanFile.toString
    let setupJob ← setupExternalModule leanFile.toString header (← getLeanOptions)
    setupJob.mapM (sync := true) fun setup => do
      mkSpawnArgs path setup (← getLeanArgs)
where
  mkArgs leanFile setup cfgArgs := do
    let args := cfgArgs.push leanFile.toString
    let (h, setupFile) ← IO.FS.createTempFile
    let contents := (toJson setup).compress
    logVerbose s!"module setup: {contents}"
    h.putStr contents
    let args := args ++ #["--setup", setupFile.toString]
    return args
  mkSpawnArgs leanFile setup cfgArgs := do
    let args ← mkArgs leanFile setup cfgArgs
    let spawnArgs : IO.Process.SpawnArgs := {
      args := args ++ moreArgs
      cmd := (← getLean).toString
      env := (← getAugmentedEnv)
    }
    logVerbose (mkCmdLog spawnArgs)
    return spawnArgs
