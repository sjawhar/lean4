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
import Lake.Build.UsageCutoff
import Lake.Util.BuildSlots
import Lake.Util.Proc
import Lake.Build.Job.Register
import Lake.Build.Common
import Lake.Build.RemoteCache
import Lake.Build.Target
import Init.Omega
import Std.Sync.Mutex

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
  -- One fold once every import is done (see `Job.zipWithAll`).
  let tasks := imps.toList.map (·.transImports.task)
  return Job.ofTask <| Task.mapList (sync := true) (tasks := tasks) fun rs =>
    let r := (imps.toList.zip rs).foldl (init := (.ok .empty {} : JobResult OrdModuleSet)) fun r (imp, ri) =>
      match ri with
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
    match r with
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

/--
Adds `imps`, single-package imports with the jobs of their export information, to the result of `s`
in order. It is the same job as one `s.zipWith (sync := true) (·.addImport nonModule imp ·) job` per
import, but it adds them in one task once all the jobs are done, which keeps the fold linear in the
number of imports (see `Job.zipWithAll`).
-/
def ModuleImportInfo.addImports
  (nonModule : Bool) (s : Job ModuleImportInfo) (imps : Array (Import × Job ModuleMetaExportInfo))
: Job ModuleImportInfo :=
  if imps.isEmpty then s else
  let rs := Task.mapList (sync := true) id (imps.toList.map (·.2.task))
  Job.ofTask <| s.task.bind (sync := true) fun r =>
  rs.map (sync := true) fun rs =>
    (imps.toList.zip rs).foldl (init := r) fun r ((imp, _), ri) =>
      Job.zipResults (·.addImport nonModule imp ·) r ri

set_option linter.unusedVariables.funArgs false in
def fetchImportInfo
  (fileName : String) (pkgName modName : Name) (header : ModuleHeader)
  (allowNonModules : Bool := false)
: FetchM (Job ModuleImportInfo) := do
  let nonModule := !header.isModule
  let info := ModuleImportInfo.nil modName
  let impArtsJob : Job ModuleImportInfo := .pure info
  -- `s` holds the imports before `pending`, the single-package imports since, which
  -- `ModuleImportInfo.addImports` adds in one task.
  let init : Job ModuleImportInfo × Array (Import × Job ModuleMetaExportInfo) := (impArtsJob, #[])
  let (s, pending) ← header.imports.foldlM (init := init) fun (s, pending) imp => do
    if modName = imp.module then
      logError s!"{fileName}: module imports itself"
      return (.error, #[])
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
      return (s, pending)
    else if n = 1 then -- common fast path
      let mod := mods[0]
      -- Remark: We've decided to disable this check for now
      -- if imp.importAll && !mod.allowImportAll && pkgName != mod.pkg.keyName then
      --   logError s!"{fileName}: cannot `import all` \
      --     the module `{imp.module}` from the package `{mod.pkg.discriminant}`"
      --   return .error
      let importJob ← mod.fetchExportInfo
      return (s, pending.push (imp, importJob))
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
      let s := ModuleImportInfo.addImports nonModule s pending
      let mods : Vector Module n := .mk mods rfl
      let expInfosJob ← Job.collectVector <$> mods.mapM (·.fetchExportInfo)
      let s ← s.bindM (sync := true) fun impInfo => do
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
      return (s, #[])
  return ModuleImportInfo.addImports nonModule s pending

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

/-- The usage-cutoff setting as a local input of a module, the last (`ModulePreSetup.localTrace`). -/
def usageCutoffTrace (enabled : Bool) : BuildTrace := pureTrace enabled "usage cutoff"

/-- The hash of the module's local trace with the usage-cutoff setting `enabled` in place of its own. -/
def ModulePreSetup.localHashWithCutoff (self : ModulePreSetup) (enabled : Bool) : Hash :=
  let inputs := self.localTrace.inputs.pop.push (usageCutoffTrace enabled)
  (inputs.foldl (·.mix ·) (BuildTrace.nil "local") : BuildTrace).hash

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
    -- Every input of the module's trace except `depTrace` (the imports' `info.trace` and `extraDepJob`'s trace,
    -- which `localTrace` mixes in separately), the usage-cutoff setting last (`ModulePreSetup.localHashWithCutoff`
    -- swaps it).
    let localInputs := libTraces ++ #[
      ← getLeanTrace, input.trace, traceOptions leanOptions "options",
      pureTrace input.header.isModule "isModule", pureTrace mod.name "Module.name",
      pureTrace mod.pkg.id? "Package.id?", pureTrace mod.leanArgs "Module.leanArgs",
      usageCutoffTrace (← usageCutoffEnabled)]
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

/--
Removes `file` and its `.hash` file. Lake trusts `.hash` files, so one left behind would describe
whatever later replaces `file` (e.g., outputs unpacked from an archive) with the old contents' hash.
-/
def removeOutputFile (file : FilePath) : IO PUnit := do
  removeFileIfExists file
  clearFileHash file

/--
Remove all existing artifacts produced by a Lean build of the module, and their `.hash` files. Lake owns the
usage-cutoff sidecar paths (`.usage`, `.resolved`, `.usekey`) and removes them also with the cutoff off, so that a
rebuild never leaves an earlier build's sidecars beside its outputs, or saves them to the cache with them
(`cacheUsageSidecars`).
-/
public def Module.clearOutputArtifacts (mod : Module) : IO PUnit := do
  try
    removeOutputFile mod.ltarFile
    removeOutputFile mod.oleanFile
    removeOutputFile mod.oleanServerFile
    removeOutputFile mod.oleanPrivateFile
    removeOutputFile mod.ileanFile
    removeOutputFile mod.irSigFile
    removeOutputFile mod.irFile
    removeOutputFile mod.cFile
    removeOutputFile mod.bcFile
    removeOutputFile mod.usageFile
    removeOutputFile mod.resolvedFile
    removeOutputFile mod.usekeyFile
  catch e =>
    error s!"failed to remove output artifacts: {e}"

/-- Remove all existing artifacts produced by a `leanir` build of the module, and their `.hash` files. -/
public def Module.clearIROutputArtifacts (mod : Module) : IO PUnit := do
  try
    removeOutputFile mod.ltarFile
    removeOutputFile mod.irSigFile
    removeOutputFile mod.irFile
    removeOutputFile mod.cFile
  catch e =>
    error s!"failed to remove IR output artifacts: {e}"

/-- Remove any cached file hashes of the module build outputs (in `.hash` files), the usage-cutoff sidecars' also with
the cutoff off (`clearOutputArtifacts`). -/
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
    clearFileHash mod.resolvedFile
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
sidecars again, and its dependents, which read only its `.usekey` and accept it only for its `.olean`
(`importUsage?`), keep skipping.
-/
def ModuleOutputDescrs.resolveSidecars
  (descrs : ModuleOutputDescrs) (service? : Option CacheServiceName) (scope? : Option CacheServiceScope)
  (sha256? : Option Sha256Map := none)
: JobM (Option Artifact × Option Artifact × Option Artifact) := do
  let usage? ← descrs.usage?.mapM (resolveArtifact · service? scope? (sha256? := sha256?))
  let resolved? ← descrs.resolved?.mapM (resolveArtifact · service? scope? (sha256? := sha256?))
  let usekey? ← descrs.usekey?.mapM (resolveArtifact · service? scope? (sha256? := sha256?))
  return (usage?, resolved?, usekey?)

def ModuleOutputDescrs.resolve
  (descrs : ModuleOutputDescrs) (service? : Option CacheServiceName) (scope? : Option CacheServiceScope)
  (sha256? : Option Sha256Map := none)
: JobM ModuleOutputArtifacts := do
  let (usage?, resolved?, usekey?) ← descrs.resolveSidecars service? scope? (sha256? := sha256?)
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
    usage?, resolved?, usekey?
    keptFrom? := descrs.keptFrom?
  }
  if Lean.Internal.hasLLVMBackend () then
    let some descr := descrs.bc?
      | error "LLVM backend enabled but module outputs lack bitcode"
    return {arts with bc? := some (← resolve descr)}
  else
    return arts
where
  @[inline] resolve descr := resolveArtifact descr service? scope? (sha256? := sha256?)

def resolveModuleOutputArtifacts (out : CacheOutput) : JobM ModuleOutputArtifacts := do
  match fromJson? out.data with
  | .ok (descrs : ModuleOutputDescrs) =>
    descrs.resolve out.service? out.scope? (sha256? := out.sha256?)
  | .error e => error s!"ill-formed module outputs:\n{out.data.render.pretty 80 2}\n{e}"

instance : ResolveOutputs ModuleOutputArtifacts := ⟨resolveModuleOutputArtifacts⟩

inductive ModuleOutputs
/-- Only the archive, and the entry's sidecars, which the archive does not include. -/
| ltar (art : Artifact) (usage? resolved? usekey? : Option Artifact)
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
      return .ltar (← resolveArtifact descr out.service? out.scope? (sha256? := out.sha256?)) none none none
    | .error e =>
      error s!"ill-formed module archive output:\n{out.data.render.pretty 80 2}\n{e}"
  else
    match fromJson? out.data with
    | .ok (descrs : ModuleOutputDescrs) =>
      if let some descr := descrs.ltar? then
        try
          descrs.resolve out.service? out.scope? (sha256? := out.sha256?)
        catch e =>
          dropLogFrom e
          let (usage?, resolved?, usekey?) ← descrs.resolveSidecars out.service? out.scope? (sha256? := out.sha256?)
          return .ltar (← resolveArtifact descr out.service? out.scope? (sha256? := out.sha256?)) usage? resolved? usekey?
      else
        descrs.resolve out.service? out.scope? (sha256? := out.sha256?)
    | .error e => error s!"ill-formed module outputs:\n{out.data.render.pretty 80 2}\n{e}"

instance : ResolveOutputs ModuleOutputs := ⟨resolveModuleOutputs⟩

/--
Saves the module's usage-cutoff sidecars (`.usage`, `.resolved`, `.usekey`), where they exist, to the local Lake cache
as they are: no trace describes them, but the `.usekey` binds the `.usage` (its digest), which binds the `.resolved`
(its digest), and the `.olean` (its hash), and Lake checks each wherever it reads them.
-/
def Module.cacheUsageSidecars (mod : Module) (useLocalFile : Bool) :
    JobM (Option Artifact × Option Artifact × Option Artifact) :=
  return (← cacheIfExists mod.usageFile "usage", ← cacheIfExists mod.resolvedFile "resolved",
    ← cacheIfExists mod.usekeyFile "usekey")
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
  let (usage?, resolved?, usekey?) ← mod.cacheUsageSidecars useLocalFile
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
    usage?, resolved?, usekey?
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
  let (usage?, resolved?, usekey?) ← mod.cacheUsageSidecars useLocalFile
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
      usage?, resolved?, usekey?
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
    resolved? := ← restoreSome mod.resolvedFile cached.resolved?
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
  (mod : Module) (isModule : Bool) (skipIR : Bool) (oleanHash? : Option Hash := none)
: FetchM ModuleOutputArtifacts :=
  return {
    isModule
    olean := ← match oleanHash? with
      | some hash => computeArtifactOfHash mod.oleanFile hash "olean"
      | none => compute mod.oleanFile "olean"
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
(`none` if `descrs` describes no such output). With `sidecars`, the usage-cutoff sidecars (`.usage`, `.resolved`,
`.usekey`) count as outputs too. Empty if every output matches.
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
    (sidecars, mod.resolvedFile, descrs.resolved?),
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

/--
The outputs that a module's archive (`.ltar`) holds after its trace, in archive order, each with
the base directory it is relative to: `false` for the library directory (the `.olean` parts,
`.ilean` and IR), `true` for the IR directory (the `.c` and `.bc`).
-/
public def ModuleOutputDescrs.ltarFiles
  (descrs : ModuleOutputDescrs)
: Except String (Array (ArtifactDescr × Bool)) := do
  -- Note: oleans parts must be in the order of `.olean`, `.olean.server`, `.olean.private`
  let mut files := descrs.oleanParts.map (·, false)
  files := files.push (descrs.ilean, false)
  if let some descr := descrs.irSig? then
    files := files.push (descr, false)
  if let some descr := descrs.ir? then
    files := files.push (descr, false)
  if let some descr := descrs.c? then
    files := files.push (descr, true)
  if Lean.Internal.hasLLVMBackend () then
    let some descr := descrs.bc?
      | throw "LLVM backend enabled but module outputs lack bitcode"
    files := files.push (descr, true)
  return files

/--
The `leantar` arguments that pack a module's outputs into the archive `ltar`: its trace,
`fileName "trace"`, then the file `fileName ext` of each output of `files` (see `ltarFiles`),
relative to `libDir` or `irDir`.

`-s` strips the trace's `depHash`, so that the archive's bytes depend only on the outputs.
Consumers supply the hash again on unpack (see `Module.unpackLtar`).
-/
public def ltarPackArgs
  (files : Array (ArtifactDescr × Bool)) (fileName : String → String) (libDir irDir ltar : FilePath)
: Array String :=
  let args := #["-s", "-C", libDir.toString, "-C", irDir.toString, ltar.toString, fileName "trace"]
  files.foldl (init := args) fun args (descr, inIrDir) =>
    args.push "-i" |>.push (if inIrDir then "1" else "0") |>.push (fileName descr.ext)

def Module.packLtar
  (self : Module) (arts : ModuleOutputArtifacts)
: JobM Artifact := do
  let arts ← id do
    if (← self.checkArtifactsExist arts.isModule arts.c?.isNone) then
      return arts
    else self.restoreAllArtifacts arts
  let files ← match arts.descrs.ltarFiles with
    | .ok files => pure files
    | .error e => error e
  let args := ltarPackArgs files self.fileName self.leanLibDir self.irDir self.ltarFile
  withBuildSlot <| proc (quiet := true) {cmd := (← getLeantar).toString, args}
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
  withBuildSlot <| proc (quiet := true) (input? := input.compress) {cmd := (← getLeantar).toString, args}

/--
The cached archives that this process could not unpack, as `<cache scope>/<input hash>`: a build
that met one compiles the module and does not restore that input's archive again (see
`Module.rejectArchive`).
-/
builtin_initialize rejectedArchives : Std.Mutex (Std.HashSet String) ← Std.Mutex.new {}

/-- The key of `mod`'s input `inputHash` in `rejectedArchives`. -/
def Module.archiveKey (mod : Module) (inputHash : Hash) : String :=
  s!"{mod.pkg.cacheScope}/{inputHash}"

/--
Whether this process has removed the witnesses (see `Module.rejectArchive`) that killed builds
left in the cache's quarantine directory (see `reapWitnesses`).
-/
builtin_initialize witnessesReaped : IO.Ref Bool ← IO.mkRef false

/-- The day of the Unix epoch of `secs` seconds, which a witness's name holds. -/
def witnessDay (secs : Int) : Int := secs / (24 * 60 * 60)

/--
Removes, once per process, the witnesses in `cache`'s quarantine directory that were made before
yesterday: a build removes each witness it makes after the unpack, so these are the ones of
builds killed during an unpack. Each would keep its archive's bytes on disk after the cache
removed the archive. A witness's name holds the day it was made (`witness.<day>.…`, see
`witnessDay`), as its modification time is the archive's (it is a hard link). No unpack takes a
day, so a witness in use is never removed.
-/
def reapWitnesses (cache : Cache) : BaseIO Unit := do
  if ← witnessesReaped.modifyGet (fun done => (done, true)) then
    return
  let .ok entries ← cache.quarantineDir.readDir.toBaseIO
    | return
  let .ok now ← wallClockSecs.toBaseIO
    | return
  let today := s!"witness.{witnessDay now}."
  let yesterday := s!"witness.{witnessDay now - 1}."
  for entry in entries do
    let name := entry.fileName
    if name.startsWith "witness." && !name.startsWith today && !name.startsWith yesterday then
      discard <| (IO.FS.removeFile entry.path).toBaseIO

/-- Unpacks `ltar` (see `Module.unpackLtar`), and returns the messages of its log if it failed. -/
def Module.tryUnpackLtar (mod : Module) (ltar : FilePath) (inputHash : Hash) :
    JobM (Except Log Unit) := do
  try
    mod.unpackLtar ltar inputHash
    return .ok ()
  catch e =>
    return .error (← takeLogFrom e)

/--
Handles a cached archive of `mod`'s input that did not unpack (`log` is the failure), though its
digests matched: the build treats it as a cache miss and compiles. It removes what the unpack left
(the outputs and the trace), takes the archive out of the cache, records the failure in the read
status (see `RemoteReadStatus`) at verbose level, and does not restore this input's archive again
in this process.

As the push does with an entry it found wrong (see `Lake.quarantineUnlessReplaced`), it takes the
archive away from its name only by renaming it into the cache's quarantine directory, which
captures exactly the file that is there, and then checks that it took the file that did not
unpack: `witness?` is a hard link to that file, made before the unpack, and
`System.FilePath.isSameFile` compares the device and inode, so a file that another process
installed in the meantime differs however it was written (a size and a modification time cannot
tell a same-size replacement written within one kernel tick from the original). Such a file goes
back to its name, so this build removes only the bytes it tested. Without a witness (a cache
this package does not write, or the link failed) the archive stays where it is: this build could
not tell it from a replacement, and this process does not restore it again. The archive is also
left where it is when it is not in this cache's artifacts.
-/
def Module.rejectArchive
  (mod : Module) (inputHash : Hash) (ltar : FilePath) (witness? : Option FilePath)
  (log : Log)
: JobM Unit := do
  rejectedArchives.atomically (modify (·.insert (mod.archiveKey inputHash)))
  discard <| mod.clearOutputArtifacts.toBaseIO
  discard <| (removeFileIfExists mod.traceFile).toBaseIO
  let cache ← getLakeCache
  let moved ←
    if !ltar.toString.startsWith (cache.artifactDir.toString ++ "/") then
      pure "it is not in the cache"
    else if let some witness := witness? then
      let take : IO String := do
        IO.FS.createDirAll cache.quarantineDir
        let name := ltar.fileName.getD "archive.ltar"
        let captured ← uniqueTmpPath (cache.quarantineDir / name)
        try
          IO.FS.rename ltar captured
        catch
          | .noFileOrDirectory .. => return "another process moved it away first"
          | e => throw e
        let tested ← (· matches .ok true) <$> (captured.isSameFile witness).toBaseIO
        unless tested do
          -- Another process installed an archive after the unpack failed: it is not this
          -- build's to remove
          discard <| (IO.FS.rename captured ltar).toBaseIO
          return "another process replaced it, which this build kept"
        match (← (cache.quarantine captured name).toBaseIO) with
        | .ok (some dest) => return s!"moved it to: {dest}"
        | .ok none => return s!"moved it to: {captured}"
        | .error e => return s!"moved it to: {captured} ({e})"
      match (← take.toBaseIO) with
      | .ok msg => pure msg
      | .error e => pure s!"could not move it into quarantine: {e}"
    else
      pure "left where it is: this build has no link to tell it from a replacement"
  let why := log.entries.foldl (init := "") fun msg entry =>
    if msg.isEmpty then entry.message else s!"{msg}\n- {entry.message}"
  let msg := s!"{mod.name}: the cached archive {ltar} did not unpack ({moved}); \
    compiling the module instead:\n{why}"
  let status := (← getBuildContext).remoteReadStatus
  liftM (m := BaseIO) <| status.modify (·.add msg)
  -- A cache failure, not a build failure: verbose, so `--wfail` builds still compile
  logVerbose msg

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
stricter (`usekeyBefore`).
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
  let before? ← if usage then some <$> usekeyBefore setup.importArts hashes? else pure none
  withJobBuildSlot <| compileLeanModule presetup.srcFile relSrcFile setup mod.setupFile outputPaths args
    (← getLeanPath) (← getLean) (takeSlot := false)
  mod.checkSourceUnchanged presetup
  -- With usage cutoff, one read of the `.olean` gives both the artifact's hash and the `.usekey`'s: the bytes the
  -- outputs record are the bytes the key binds.
  let olean? ← if usage then some <$> IO.FS.readBinFile mod.oleanFile else pure none
  let arts ← mod.computeArtifacts setup.isModule presetup.postponeCompile (olean?.map Hash.ofByteArray)
  if let some (modsysBefore, untrustedBefore?) := before? then
    mod.writeUsekey presetup setup.importArts modsysBefore untrustedBefore?
      (olean?.map ModuleUsage.fileDigestOfBytes)
  return arts

/--
Reads a usage-index file (`Cache.writeUsageIndex`): the module outputs it records and the log of their compile, or
`none` if it cannot be read or parsed (e.g., another process removed it).
-/
def readUsageIndexEntry? (file : FilePath) : BaseIO (Option (ModuleOutputDescrs × Log)) := do
  let .ok contents ← (IO.FS.readFile file).toBaseIO | return none
  let .ok (out : CacheOutput) := Json.parse contents >>= fromJson? | return none
  let .ok descrs := ModuleOutputDescrs.fromJson? out.data | return none
  return some (descrs, out.log?.getD {})

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
name (the hash of its `.usekey`), its outputs in the cache and the log of its compile; the first one `accept` takes
ends the lookup. A candidate whose outputs a kept-module check accepted (`ModuleOutputDescrs.keptFrom?`) is offered
only if no compile passes: a compile of the same `.olean` passes whenever the kept outputs do, and a kept key makes
the module's importers distrust its digests (`importUsage?`). A candidate that cannot be read or resolved, that is a
module-system file's (`m`), that names no `.usage` or `.usekey`, or, unless `kept`, whose outputs were kept, is
skipped, and so is one whose cached files cannot be read during its check (e.g., another process removed an entry
after the resolve). A candidate whose check found its `.olean` is not the one its key records has that cache entry
checked (`checkUsageIndexEntry`).

A lookup that found any candidate logs one verbose line: `usage index: restored <name> (...) at rank <r>` or
`usage index: no match (...)`, where `(...)` counts the candidates, those whose usage record the pre-filter read (its
compact record or its `.usage`, `readCandidateUsage?`; `parsed`) and those that reached the check (`fully checked`),
with the wall and current-thread CPU time the pre-filter took apart from reading views, the views this lookup added
(`UsageView`) and their wall and CPU read times, and the importees the checks bound (`ContentHashes.imports`) that the
module's same-tree check had not, with their wall and CPU check times; `<r>` is the restored candidate's position
among the candidates, most recent first (from 1), which shows how many of them a lookup needs.
-/
def Module.lookupUsageIndex (mod : Module) (presetup : ModulePreSetup) (importArts : NameMap ImportArtifacts)
    (hashes : ContentHashes) (kept : Bool)
    (accept : String → ModuleOutputArtifacts → Log → JobM (Option α)) :
    JobM (Option α) := do
  let candidates ← (← getLakeCache).usageCandidates mod.pkg.cacheScope presetup.localTrace.hash
  if candidates.isEmpty then return none
  -- The views this lookup added, with wall and current-thread CPU nanoseconds spent reading them
  let views ← IO.mkRef ((0, 0, 0) : Nat × Nat × Nat)
  let boundBefore := (← hashes.imports.get).size
  -- An importee as the module's decision bound it, if it did, else as the build's view of it
  let importee? (m : Name) : JobM (Option (Option ModuleUsage.Digest × UsageImport)) := do
    if let some read := (← hashes.imports.get)[m]? then
      let .ok (some (olean, imp)) := read.2 | return none
      if (importArts.find? m).any (·.oleanServer?.isSome) then return some (none, imp)
      return some (← hashes.find? olean, imp)
    let start ← IO.monoNanosNow
    let cpuStart ← IO.threadCpuNanosNow
    let (view, read) ← usageView? importArts m
    if read then
      let stop ← IO.monoNanosNow
      let cpuStop ← IO.threadCpuNanosNow
      views.modify fun (n, ns, cpuNs) => (n + 1, ns + (stop - start), cpuNs + (cpuStop - cpuStart))
    return view
  -- The candidate's outputs, the log of its compile, files and its key's `.olean` hash if it passes the pre-filter,
  -- and whether its usage record was read
  let prefilter (file : FilePath) :
      JobM (Option (ModuleOutputArtifacts × Log × UsageFiles × ModuleUsage.Digest) × Bool) := do
    let some (descrs, log) ← readUsageIndexEntry? file | return (none, false)
    if descrs.isModule || (!kept && descrs.keptFrom?.isSome) then return (none, false)
    let arts? : Option ModuleOutputArtifacts ← id do
      try
        return some (← descrs.resolve none none)
      catch e =>
        dropLogFrom e
        return none
    let some arts := arts? | return (none, false)
    let (some usage, some usekey) := (arts.usage?, arts.usekey?) | return (none, false)
    match (← usagePrefilter presetup importArts hashes importee? usekey.path usage.path
        (Cache.usageIndexCompactFile file)) with
    | .key => return (none, false)
    | .usage => return (none, true)
    | .passed keyOlean =>
      return (some (arts, log, {
        usekey := usekey.path
        usage := usage.path
        olean := arts.olean.path
        resolved? := arts.resolved?.map (·.path)
      }, keyOlean), true)
  let stats (parsed checked prefilterNs prefilterCpuNs checkNs checkCpuNs : Nat) : JobM String := do
    let (viewsRead, viewsNs, viewsCpuNs) ← views.get
    let bound := (← hashes.imports.get).size - boundBefore
    return s!"{candidates.size} candidates, {parsed} parsed, {checked} fully checked; \
      prefilter {(prefilterNs - viewsNs) / 1000} µs ({(prefilterCpuNs - viewsCpuNs) / 1000} CPU µs); \
      {viewsRead} views read in {viewsNs / 1000} µs ({viewsCpuNs / 1000} CPU µs); \
      {bound} importees bound in {checkNs / 1000} µs ({checkCpuNs / 1000} CPU µs)"
  let mut parsed := 0
  let mut checked := 0
  let mut prefilterNs := 0
  let mut prefilterCpuNs := 0
  let mut checkNs := 0
  let mut checkCpuNs := 0
  -- Kept outputs that passed, in the order they passed, offered once no compile has been taken
  let mut keptPassed : Array (String × ModuleOutputArtifacts × Log × Nat) := #[]
  let mut rank := 0
  for file in candidates do
    rank := rank + 1
    let start ← IO.monoNanosNow
    let cpuStart ← IO.threadCpuNanosNow
    let (passed?, read) ← prefilter file
    let filtered ← IO.monoNanosNow
    let cpuFiltered ← IO.threadCpuNanosNow
    prefilterNs := prefilterNs + (filtered - start)
    prefilterCpuNs := prefilterCpuNs + (cpuFiltered - cpuStart)
    if read then parsed := parsed + 1
    let some (arts, log, files, keyOlean) := passed? | continue
    checked := checked + 1
    let checkCpuStart ← IO.threadCpuNanosNow
    let verdict ← id do
      try
        mod.usageVerdict presetup importArts hashes files
      catch e =>
        let log ← takeLogFrom e
        logVerbose <| log.entries.foldl (s!"{·}\n- {·.message}")
          s!"usage index: could not read the cached files of {file.fileStem.getD file.toString}:"
        return .compile "its cached files could not be read"
    unless verdict matches .upToDate do
      if let some hash ← hashes.find? arts.olean.path then
        if hash != keyOlean then discard <| checkUsageIndexEntry arts.olean
    checkNs := checkNs + ((← IO.monoNanosNow) - filtered)
    checkCpuNs := checkCpuNs + ((← IO.threadCpuNanosNow) - checkCpuStart)
    unless verdict matches .upToDate do continue
    let name := file.fileStem.getD file.toString
    if arts.keptFrom?.isSome then
      keptPassed := keptPassed.push (name, arts, log, rank)
      continue
    if let some result ← accept name arts log then
      logVerbose s!"usage index: restored {name} \
        ({← stats parsed checked prefilterNs prefilterCpuNs checkNs checkCpuNs}) at rank {rank}"
      return some result
  for (name, arts, log, keptRank) in keptPassed do
    if let some result ← accept name arts log then
      logVerbose s!"usage index: restored {name} \
        ({← stats parsed checked prefilterNs prefilterCpuNs checkNs checkCpuNs}) at rank {keptRank}"
      return some result
  logVerbose s!"usage index: no match \
    ({← stats parsed checked prefilterNs prefilterCpuNs checkNs checkCpuNs})"
  return none

/--
Restores the outputs of a compile of the module that the usage index offers (`Module.lookupUsageIndex`), when its
build missed the cache by input hash, instead of compiling it: a candidate that passes the usage cutoff's check
against the module's current imports (`importArts`, in `hashes`, the module's decision), the most recent compile
before any kept outputs, replaces the module's outputs and trace, if every file restored, sidecars included, has the
bytes its description records. A file that does not has its cache entry checked (`checkUsageIndexEntry`), and the
next candidate is taken, as it is when the restore fails (e.g., an entry was pruned meanwhile). If its check passed and
the restore then fails, the module's own outputs are already gone, so the module is compiled even if a kept-module
check could have accepted them. Outputs a kept-module check accepted keep that lineage
(`ModuleOutputDescrs.keptFrom?`); a module excluded from kept checks takes none of them. Fails, as a usage skip does,
if the module's source changed during the build (`Module.checkSourceUnchanged`). Replays the log of the restored
compile and writes the module's trace with it and `depTrace`, as a restore from the cache by input hash does
(`writeFetchTrace`), and returns the outputs, which are in the cache; the caller records them under the module's
input hash with that log.
-/
def Module.restoreFromUsageIndex? (mod : Module) (presetup : ModulePreSetup) (depTrace : BuildTrace)
    (importArts : NameMap ImportArtifacts) (hashes : ContentHashes) : JobM (Option ModuleOutputArtifacts) := do
  let kept := !(← getBuildContext).keptExclude.contains mod.name
  mod.lookupUsageIndex presetup importArts hashes kept fun name cached log => do
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
    writeFetchTrace mod.traceFile depTrace.hash
      (toJson {arts.descrs with usage? := none, resolved? := none, usekey? := none, ltar? := none}) log
      (some presetup.localTrace.hash)
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
cutoff can apply to the module. The entry has no archive, and holds `log`, the log of the outputs' build, which a
lookup that restores them replays. With it goes the compact record of its `.usage` that the
pre-filter reads (`compactUsage?`), unless the index has a usable one already (`hasCompactUsage`: it decodes and was
made from the `.usage` the key names). The entry is named by its `.usekey`, which names the `.usage`, so a usable
record never needs to change; one that is not usable is never read, and is written again here.
-/
def Module.indexUsage (mod : Module) (presetup : ModulePreSetup) (arts : ModuleOutputArtifacts) (restore : Bool)
    (log : Log) : JobM Unit := do
  unless restore do return
  let some usekey := arts.usekey? | return
  unless (← mod.usageIndexApplies presetup) do return
  let cache ← getLakeCache
  let compact := Cache.usageIndexCompactFile <|
    cache.usageIndexFile mod.pkg.cacheScope presetup.localTrace.hash usekey.hash
  let compact? ← id do
    if (← hasCompactUsage compact usekey.path) then return none
    let some usage := arts.usage? | return none
    compactUsage? usage.path
  cache.writeUsageIndex mod.pkg.cacheScope presetup.localTrace.hash usekey.hash
    (toJson {arts.descrs with ltar? := none}) log compact?

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
  let moduleTimes? ← getModuleTimes?
  let prio := moduleTimes?.map (·.prio mod.name) |>.getD Task.Priority.default
  -- While another build holds the claim of the module's input, the job waits without a thread,
  -- and then fetches again (see `runWithClaimWaits`)
  presetupJob.bindM (prio := prio) fun presetup => do
    setTrace presetup.trace
    -- Its presetup read the source, so the record keeps this module's line without checking it.
    if let some mt := moduleTimes? then mt.markSeen mod.name
    runWithClaimWaits fun sawDone => do
      let before := (← getThe JobState).buildTime
      let compiled ← trackBuilds
      match ← fetchCore presetup sawDone with
      | .done arts =>
        if let some mt := moduleTimes? then
          -- Only a compile (a `.build` action) records its time: a skip, a cache restore and a kept-module
          -- check's accept (a `.check` action, which `buildAction` times too) record nothing.
          let ms := (← getThe JobState).buildTime - before
          if (← compiled) && ms > 0 then
            let imports := presetup.directImports.filterMap (·.module?.map (·.name))
            mt.record {name := mod.name, ms, imports}
        return .done (← adjustMTime arts mod.traceFile)
      | .wait wait => return .wait wait
where
  fetchFromCache? presetup savedTrace restoreAll : JobM ModuleFetchState := do
    let inputHash := (← getTrace).hash
    -- An archive of this input that this process could not unpack is not tried again.
    if (← rejectedArchives.atomically (return (← get).contains (mod.archiveKey inputHash)) : Bool) then
      return .incomplete savedTrace none
    -- A module excluded from kept checks takes no kept outputs from the cache, and under `--no-build` it unpacks no
    -- archive to find out what it holds: it just needs a build, and no output changes.
    if (← isKeptExcluded) then
      if let some out ← cachedOutputs? inputHash then
        if (out.getObjVal? "kf").isOk || ((← getNoBuild) && !(out.getObjVal? "o").isOk) then
          return .incomplete savedTrace none
    let some ((ltarOrArts : ModuleOutputs), log) ←
      getArtifacts? inputHash savedTrace mod.pkg mod.name.toString (some presetup.srcHash)
      | return .incomplete savedTrace none
    match ltarOrArts with
    | .ltar ltar usage? resolved? usekey? =>
      updateAction .unpack
      -- The archive's outputs, and its trace, replace the module's: the `.hash` files of the old
      -- outputs go too, or they would describe the new ones (`fetchFileHash` trusts them)
      mod.clearOutputArtifacts
      mod.clearOutputHashes
      removeFileIfExists mod.traceFile
      -- A cached archive whose digests match but which does not unpack is a cache miss: the
      -- module compiles, and this process does not restore that archive again. A hard link made
      -- now names the exact file that the unpack reads, whatever another process later puts at
      -- the entry's name (see `Module.rejectArchive`). Only an archive in the cache's artifacts
      -- can be taken out of the cache, and only a cache this package writes gets a link (by
      -- default the artifact cache is read and not written): any failure leaves no witness, and
      -- the unpack goes on.
      let cache ← getLakeCache
      let witness? ← do
        if (← mod.pkg.isArtifactCacheWritable) &&
            ltar.path.toString.startsWith (cache.artifactDir.toString ++ "/") then
          let make : IO FilePath := do
            let day := witnessDay (← wallClockSecs)
            let witness ← uniqueTmpPath (cache.quarantineDir / s!"witness.{day}")
            createParentDirs witness
            reapWitnesses cache
            IO.FS.hardLink ltar.path witness
            return witness
          pure (← make.toBaseIO).toOption
        else
          pure none
      if let .error log ← mod.tryUnpackLtar ltar.path inputHash then
        mod.rejectArchive inputHash ltar.path witness? log
        discard <| (removeFileIfExists (witness?.getD "")).toBaseIO
        return .incomplete .missing none
      discard <| (removeFileIfExists (witness?.getD "")).toBaseIO
      -- The archive ships no sidecars, so the entry's go to the build directory, from which the entry
      -- below is rewritten.
      if let some art := usage? then discard <| restoreArtifact mod.usageFile art
      if let some art := resolved? then discard <| restoreArtifact mod.resolvedFile art
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
        -- The archive's trace holds the log of the module's build
        savedTrace.log.replay
        -- On initial unpack from cache ensure all artifacts uniformly
        -- end up in the build directory and, if writable, the cache
        let arts ← mod.restoreAllArtifacts {arts with ltar? := some ltar}
        if (← mod.pkg.isArtifactCacheWritable) then
          let keptFrom? := arts.keptFrom?
          let arts ← mod.cacheOutputArtifacts presetup.isModule restoreAll presetup.postponeCompile
          let arts := {arts with keptFrom?}
          -- Note: Cache service metadata is not preserved on an output update because it would
          -- result in downloading module outputs that are not available on the remote.
          unless arts.cacheSkipped do
            (← getLakeCache).writeOutputs mod.pkg.cacheScope inputHash arts.descrs
              (log := savedTrace.log) (overwrite := true)
          mod.indexUsage presetup arts restoreAll savedTrace.log
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
        writeFetchTrace mod.traceFile inputHash
          (toJson {arts.descrs with usage? := none, resolved? := none, usekey? := none}) log
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
  fetchCore (presetup : ModulePreSetup) (sawDone : Bool) :
      JobM (ClaimLoop ModuleOutputArtifacts) := do
    -- Whether this call compiles the module (not an earlier action of the job it continues)
    let compiledHere ← trackBuilds
    let depTrace ← getTrace
    have : GetMTime Module := ⟨(·.getMTime presetup.isModule presetup.postponeCompile)⟩
    have : CheckExists Module := ⟨(·.checkExists presetup.isModule presetup.postponeCompile)⟩
    let (savedTrace, setAside) ← reviewKept (← readTraceFile mod.traceFile)
    -- Under `--no-build` (and `lake shake`), a set-aside module keeps its files and only reports
    -- that it needs a build: neither `--old`'s modification-time check nor the cache restores it.
    if setAside && (← getNoBuild) then
      return .done (← mod.buildLean presetup)
    if (← mod.pkg.isArtifactCacheWritable) then
      let restore ← mod.pkg.restoreAllArtifacts
      match (← fetchFromCache? presetup savedTrace restore) with
      | .complete arts =>
        return .done arts
      | .incomplete savedTrace ltar? =>
        let status ← savedTrace.replayIfUpToDate' (oldTrace := presetup.srcMTime) mod depTrace
        -- Whether the build directory holds the outputs the saved trace describes
        let mut replayed := false
        let mut claim? : Option HeldClaim := none
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
          -- Before it compiles, a build that writes the shared remote cache claims the input.
          -- While another build holds the claim, the job waits, then fetches again.
          match ← claimInput mod.pkg depTrace.hash sawDone with
          | .wait wait => return .wait wait
          | .compile c? => claim? := c?
        withClaim claim? do
          -- The outputs of a usage skip or build, already in the cache.
          let cached? ← if status.isUpToDate then pure none else
            some <$> mod.skipOrBuild presetup savedTrace depTrace (cacheWith? := some restore)
              (compile := checkOrBuild presetup savedTrace (some restore))
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
            let arts := if arts.keptFrom?.isSome then arts else {arts with ltar? := arts.ltar? <|> ltar?}
            -- The trace holds the log of the action that produced the outputs: their replay, restore
            -- (by input hash or from the usage index), unpack, kept-module check's accept or build
            let log := (← readTraceFile mod.traceFile).log
            -- Queued before the local mapping is written: a build that finds the mapping never
            -- compiles (or queues) this input. After a crash between the two, the next build
            -- restores the outputs through the trace without queueing them, so they stay queued once.
            -- A queue line or a mapping would name artifacts that the cache does not hold. The supersede
            -- rule (`Cache.writeOutputsCore`) keeps accepted outputs until a source compile replaces them.
            unless arts.cacheSkipped do
              if (← compiledHere) then
                -- `lake cache push` packs the per-file outputs into the archive it uploads
                queueCompiledOutputs claim? mod.pkg depTrace.hash mod.name.toString
                  (some presetup.srcHash) (toJson {arts.descrs with ltar? := none}) log
              (← getLakeCache).writeOutputs mod.pkg.cacheScope depTrace.hash arts.descrs (log := log)
            mod.indexUsage presetup arts restore log
            return .done arts
          else
            let arts ← mod.computeArtifacts presetup.isModule presetup.postponeCompile
            return .done (← mod.withSavedKeptFrom {arts with ltar? := arts.ltar? <|> ltar?})
    else .done <$> do
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
  tell, the module compiles. Without the cutoff's verdict there is no candidate, nor are outputs whose
  local inputs differ only in the cutoff's setting (a build without the cutoff wrote them): the build
  says so. A `module` file, a module linked into a shared library (`precompileModules`), and a module
  excluded from kept checks are never candidates, nor is any module of a `--no-build` build.
  -/
  keptCandidate? (presetup : ModulePreSetup) (savedTrace : SavedTrace)
    (decided? : Option (UsageVerdict × ModuleSetup))
  : JobM (Option (BuildMetadata × ModuleOutputDescrs × ModuleSetup)) := do
    if (← getNoBuild) || presetup.isModule || mod.shouldPrecompile || (← isKeptExcluded) then
      return none
    let .ok data := savedTrace | return none
    let some descrs := savedTrace.moduleOutputDescrs? | return none
    unless data.localHash? == some presetup.localTrace.hash do
      -- an edited module's own change says why it compiles; a change of the setting alone does not
      if data.localHash? == some (presetup.localHashWithCutoff false) then
        logInfo "kept-module check: not asked: its outputs were built without the usage cutoff; \
          compiling"
      return none
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
    (srcName? := self.cFile)

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
    (srcName? := self.cFile)

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
