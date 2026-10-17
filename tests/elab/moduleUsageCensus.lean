import Lean
/-!
Coverage net for Lake's "usage cutoff": Lake skips recompiling a module `M` when every imported
name `M` used has an unchanged digest, keeping `M`'s old compiled code. For that to be sound, every
piece of imported state the compiler reads while (re)compiling `M` must be covered by some digest.

This test enumerates every registered persistent environment extension, computes which of them are
reachable from the compiler's code-generation entry points (BFS over
`ConstantInfo.getUsedConstantsAsSet`, `@[implemented_by]` targets and `_unsafe_rec` definitions,
started from `Lean.Compiler.LCNF.main`, `Lean.IR.compile`, `Lean.Compiler.LCNF.emitC`,
`Lean.Compiler.LCNF.builtinPassManager`, `Lean.Compiler.LCNF.Simp.ConstantFold.builtinFolders`, plus
the Lean functions the C++ IR interpreter (`src/library/ir_interpreter.cpp`) calls by
`extern "C" lean_*` export name), and fails
unless every reachable extension is classified into one of the coverage classes the usage-cutoff
machinery relies on: `R1` (own-declaration entries, covered by the declaration's own digest), `R5`
(entries one module writes about another's declarations, covered by the writer's closure digest),
`specCache` (a cache keyed by expression, hits covered, misses tolerated), `kernelDerived` (written
only alongside the key declaration, determined by its kernel data), `derivedCache` (a cache of a
value computed from the key's kernel data, possibly recomputed by importers), `moduleLocal` (never
exported to `.olean` in a way another module's compile can observe), or `recording` (written by
usage/extra-module-use bookkeeping, never read to generate code). An extension absent from the
table defaults to `notRead` ("unreachable from the compiler entry points"), correct only when the
BFS does not find it reachable; a reachable extension defaulting to (or explicitly classified)
`notRead`, or explicitly marked `uncovered` (fits no class), fails the test. The table may not name
an extension that is not registered.
-/
open Lean

/-- Coverage class a registered persistent environment extension is assigned, per the classes the
Lake usage-cutoff digest machinery relies on. -/
inductive UsageClass where
  | R1 | R5 | R1R5 | specCache | kernelDerived | derivedCache | moduleLocal | recording
  | notRead | uncovered
deriving BEq

def UsageClass.asString : UsageClass → String
  | .R1 => "R1" | .R5 => "R5" | .R1R5 => "R1+R5" | .specCache => "specCache"
  | .kernelDerived => "kernelDerived" | .derivedCache => "derivedCache"
  | .moduleLocal => "moduleLocal" | .recording => "recording"
  | .notRead => "notRead" | .uncovered => "uncovered"
instance : ToString UsageClass := ⟨UsageClass.asString⟩

/-- Some registered extensions use a `name` that is not the full name of the constant that holds
them (a short label, or a field of a structure-valued `builtin_initialize`); this maps such names to
the constant the reachability BFS can actually find. -/
def aliases : List (Name × Name) := [
  (`reducibilityCore, `Lean.reducibilityCoreExt), (`reducibilityExtra, `Lean.reducibilityExtraExt),
  (`recExt, `Lean.Meta.recExt), (`symSimpVariantExtension, `Lean.Meta.Sym.Simp.symSimpVariantExtension),
  (`symDSimpVariantExtension, `Lean.Meta.Sym.DSimp.symDSimpVariantExtension),
  (`cbvOpaqueExt, `Lean.Meta.Tactic.Cbv.cbvOpaqueExt), (`cbvEvalExt, `Lean.Meta.Tactic.Cbv.cbvEvalExt),
  (`envLinterSnapshotExt, `Lean.Linter.envLinterSnapshotExt)]

/-- `extension name → (class, reason)`. Only extensions the BFS below finds reachable need to be
present and non-`notRead`/`uncovered`; everything else defaults to `notRead`. -/
def classification : List (Name × UsageClass × String) := [
  (`Lean.Compiler.LCNF.monoTypeExt, .derivedCache,
    "Cache of a decl's LCNF mono-phase type, eagerly computed in the type's defining module and \
    persisted because the computation walks ctor field types that may reference non-transitively \
    imported constants; deterministic from the key's kernel data (src/Lean/Compiler/LCNF/MonoTypes.lean:96-102,113-121)."),
  (`Lean.Meta.instanceExtension, .R1R5,
    "Entries record a decl as a class instance; covered by R1 for its own declarations and R5 for \
    instances another module adds for an imported decl, per the design's R1/R5 lists."),
  (`Lean.Meta.matcherLikeExt, .kernelDerived,
    "`markMatcherLike` (src/Lean/Meta/Match/MatcherInfo.lean:192-193) has a single call site, \
    src/Lean/Meta/Constructions/CasesOnSameCtor.lean:105, tagging the `.het` aux decl that same \
    function just built from the inductive's own constructor/recursor shape; only the defining \
    module can write it, and the tag follows from that aux decl's own kernel shape."),
  (`Lean.noncomputableExt, .R1, "Own-declaration marker; written only by the defining module (design R1 list)."),
  (`reducibilityExtra, .R5, "Entries another module may add for an imported decl's reducibility (design R5 list)."),
  (`Lean.Compiler.LCNF.baseExt, .R1, "Own-declaration LCNF base-phase code; written only by the defining module (design R1 list)."),
  (`Lean.builtinInitAttr, .R1, "Own-declaration marker; written only by the defining module (design R1 list)."),
  (`Lean.Compiler.LCNF.specExtension, .R1, "Own-declaration spec entries; written only by the defining module (design R1 list)."),
  (`Lean.Compiler.inlineAttrs, .R1, "Own-declaration marker; written only by the defining module (design R1 list)."),
  (`Lean.neverExtractAttr, .R1, "Own-declaration marker; written only by the defining module (design R1 list)."),
  (`Lean.auxRecExt, .kernelDerived,
    "`markAuxRecursor` (src/Lean/AuxRecursor.lean:29-30) is called only right after the \
    `addDecl`/`addAndCompile` of the aux recursor each generator just built, tagging that same \
    local name (e.g. src/Lean/Meta/Constructions/CasesOn.lean:78,80; BRecOn.lean:110,285; \
    RecOn.lean:57; CtorElim.lean:157,205; CasesOnSameCtor.lean:106); only the defining module can \
    write it, and the tag follows from how that generator built the recursor from the inductive's shape."),
  (`Lean.projectionFnInfoExt, .kernelDerived,
    "`addProjectionFnInfo` (src/Lean/ProjFns.lean:33-34) has a single call site, \
    src/Lean/Meta/Structure.lean:117, inside the structure-field-projection generation loop, writing \
    the `projName` it is currently synthesizing; the recorded `{ctorName, numParams, i, fromClass}` \
    is read directly off the structure's own constructor and field list (kernel data)."),
  (`Lean.Compiler.specializeAttr, .R1, "Own-declaration marker; written only by the defining module (design R1 list)."),
  (Lean.mkPrivateNameCore `Lean.Compiler.ModPkgExt `Lean.modPkgExt, .R1,
    "The module's package, included in every digest of the module (design R1 list)."),
  (Lean.mkPrivateNameCore `Lean.Compiler.LCNF.ToImpureType `Lean.Compiler.LCNF.impureTrivialStructureInfoExt, .derivedCache,
    "Cache of whether an inductive's impure representation is a trivial structure; set alongside \
    `impureTypeExt` in the type's defining module by `compileInductives` \
    (src/Lean/Compiler/LCNF/ToImpureType.lean:38-40,332-336), persisted cross-module because the \
    computation walks ctor field types reaching non-transitively imported constants (same note as \
    `impureTypeExt`, lines 28-34); deterministic from the key's kernel data."),
  (`Lean.Compiler.weakSpecializeAttr, .R1, "Own-declaration marker; written only by the defining module (design R1 list)."),
  (`Lean.Compiler.LCNF.UnreachableBranches.functionSummariesExt, .R1, "Own-declaration summaries; written only by the defining module (design R1 list)."),
  (`Lean.exportAttr, .R1, "Own-declaration marker; written only by the defining module (design R1 list)."),
  (`Lean.IR.declMapExt, .R1, "Own-declaration IR code; written only by the defining module (design R1 list)."),
  (Lean.mkPrivateNameCore `Lean.Compiler.LCNF.ToImpureType `Lean.Compiler.LCNF.impureTypeExt, .derivedCache,
    "\"Populated eagerly in the type's defining module by `setImpureType` ... Persisted across \
    modules because computing an inductive's impure type walks each constructor's field types, \
    which can reference constants from non-transitively (privately) imported modules\" \
    (src/Lean/Compiler/LCNF/ToImpureType.lean:28-36, written at :332-336 in `compileInductives`); \
    deterministic from the key's kernel data."),
  (`Lean.indirectModUseExt, .recording,
    "Infrastructure for `shake`'s extra-import-dependency recording (src/Lean/ExtraModUses.lean:14-16); \
    only consulted by `recordExtraModUseFromDecl` (src/Lean/ExtraModUses.lean:129) to propagate a \
    further bookkeeping entry, never to decide what code is generated."),
  (Lean.mkPrivateNameCore `Lean.Structure `Lean.structureExt, .kernelDerived,
    "`registerStructure` (src/Lean/Structure.lean:111-122) panics if an entry for that `structName` \
    already exists (lines 115-116), so it can only write the `StructureInfo` of a structure the \
    current command is declaring for the first time; `setStructureParents`'s only caller \
    (src/Lean/Elab/Structure.lean:1558) passes the structure its own `structure`/`class` command is \
    elaborating, and it throws unless that structure already exists in the current module \
    (src/Lean/Structure.lean:128-131). Both record field order and parent-projection info \
    determined entirely by the structure's own constructor/projection shape (kernel data)."),
  (`Lean.classExtension, .R1R5,
    "Entries record a decl as a class; covered by R1 for its own declarations and R5 for classes \
    another module marks for an imported decl, per the design's R1/R5 lists."),
  (`Lean.Compiler.LCNF.passManagerExt, .R5, "`@[cpass]` entries another module may add (design R5 list)."),
  (Lean.mkPrivateNameCore `Lean.ExtraModUses `Lean.extraModUses, .recording,
    "Infrastructure for `shake`'s extra-import-dependency recording (src/Lean/ExtraModUses.lean:14-16); \
    written/read by `recordExtraModUseCore`/`recordExtraModUseFromDecl` (src/Lean/ExtraModUses.lean:96-99,123-130) \
    purely to track additional imports `shake` should require, never to decide generated code."),
  (`Lean.Compiler.LCNF.postponedCompileDeclsExt, .moduleLocal,
    "`addImportedFn := fun _ => {}` (src/Lean/Compiler/LCNF/Main.lean:103) discards any imported \
    `.olean` entries outright, and the only non-empty export channel is `private` \
    (src/Lean/Compiler/LCNF/Main.lean:109-111, \"`leanir` imports the target module privately\"); \
    the sole reader of that private channel is `leanir`'s own driver re-opening the *same* target \
    module in a separate process (src/LeanIR.lean:151), never a downstream module's ordinary \
    compile. The entries never cross the ordinary import graph the usage-cutoff machinery covers."),
  (Lean.mkPrivateNameCore `Lean.Compiler.LCNF.ToImpureType `Lean.Compiler.LCNF.ctorLayoutExt, .derivedCache,
    "\"Returns the runtime layout of constructor `ctorName`. Requires `compileDecls` to have been \
    run for its inductive type\" (src/Lean/Compiler/LCNF/ToImpureType.lean:314-321); set in the \
    type's defining module by `compileInductives` (src/Lean/Compiler/LCNF/ToImpureType.lean:337-341); \
    the layout is deterministic from the ctor's own field types (kernel data)."),
  (Lean.mkPrivateNameCore `Lean.Compiler.MetaAttr `Lean.metaExt, .R1, "Own-declaration `meta` mark; written only by the defining module (design R1 list)."),
  (`Lean.regularInitAttr, .R1, "Own-declaration marker; written only by the defining module (design R1 list)."),
  (Lean.mkPrivateNameCore `Lean.Compiler.LCNF.MonoTypes `Lean.Compiler.LCNF.trivialStructureInfoExt, .derivedCache,
    "\"Eagerly computes and persists the trivial-structure info of `declName`; see `compileDecls`\" \
    (src/Lean/Compiler/LCNF/MonoTypes.lean:20-23), written in the key's defining module during \
    `compileInductives` (src/Lean/Compiler/LCNF/ToImpureType.lean:332); deterministic from the \
    key's own kernel-level type (`Meta.isProp`/`Meta.isTypeFormerType` of its type)."),
  (`Lean.Compiler.LCNF.Simp.ConstantFold.folderExt, .R5, "`@[cpass]`-style constant-folder entries another module may add (design R5 list)."),
  (`Lean.Compiler.LCNF.monoExt, .R1, "Own-declaration LCNF mono-phase code; written only by the defining module (design R1 list)."),
  (Lean.mkPrivateNameCore `Lean.AuxRecursor `Lean.sparseCasesOnExt, .kernelDerived,
    "`markSparseCasesOn` (src/Lean/AuxRecursor.lean:57-58) is called only from \
    src/Lean/Meta/Constructions/CtorElim.lean:206 and src/Lean/Meta/Constructions/SparseCasesOn.lean:149, \
    both tagging the sparse-`casesOn` auxiliary that same function just generated; only the \
    defining module can write it, and the tag follows from how that generator assembled the \
    recursor from the inductive's constructors/indices."),
  (Lean.mkPrivateNameCore `Lean.Compiler.MetaAttr `Lean.declMetaExt, .R1,
    "Written only via `setDeclMeta` for the declaration being marked (src/Lean/Compiler/MetaAttr.lean:65-69); \
    the fact is fully determined when the defining module elaborates that decl and never changes \
    afterwards, so its digest covers it even though `isDeclMeta` (src/Lean/Compiler/MetaAttr.lean:48-62) \
    reads it for imported declarations too (design R1 list: `metaExt`/`declMetaExt`)."),
  (Lean.mkPrivateNameCore `Lean.Compiler.LCNF.Specialize `Lean.Compiler.LCNF.Specialize.specCacheExt, .specCache,
    "Expression-keyed specialization cache; hits recorded by name, misses tolerated (design D2; src/Lean/Compiler/LCNF/Specialize.lean:31-46)."),
  (`Lean.noConfusionExt, .kernelDerived,
    "`markNoConfusion` (src/Lean/AuxRecursor.lean:87-88) is called only right after each \
    `noConfusion`-generator's own `addDecl` of the declaration it is building \
    (src/Lean/Meta/Constructions/NoConfusion.lean:258,353,429); only the defining module can write \
    it, and the recorded `.regular`/`.perCtor` shape follows from the inductive's own \
    parameter/index/constructor counts (kernel data)."),
  (Lean.mkPrivateNameCore `Lean.OriginalConstKind `Lean.privateConstKindsExt, .kernelDerived,
    "Written only inside `addDeclCore`'s own pipeline for the declaration it is currently adding \
    (src/Lean/AddDecl.lean:110,161), guarded by `exportedInfo?.isSome` (this decl is exported under \
    a different kind) and \"only if no entry already exists\"; the recorded `ConstantKind` is the \
    real kind `addDeclCore`'s own match just classified this decl as (kernel data)."),
  (`Lean.Compiler.implementedByAttr, .R1, "Own-declaration marker; written only by the defining module (design R1 list)."),
  (`Lean.externAttr, .R1, "Own-declaration marker; written only by the defining module (design R1 list)."),
  (`reducibilityCore, .R1, "Own-declaration reducibility; written only by the defining module (design R1 list)."),
  (`Lean.Compiler.CSimp.ext, .R5, "`@[csimp]` entries another module may add for an imported decl (design R5 list)."),
  (`Lean.Compiler.nospecializeAttr, .R1, "Own-declaration marker; written only by the defining module (design R1 list)."),
  (`Lean.Compiler.LCNF.impureSigExt, .R1, "Own-declaration impure signature; written only by the defining module (design R1 list)."),
  (Lean.mkPrivateNameCore `Lean.Compiler.LCNF.ToImpure `Lean.Compiler.LCNF.taggedReturnAttr, .R1,
    "Module-private, read only at src/Lean/Compiler/LCNF/ToImpure.lean:347 for the declaration \
    being lowered (written at src/Lean/Compiler/LCNF/ToImpure.lean:23); its effect reaches \
    importers only through that declaration's own impure signature and IR, which R1 covers \
    (the digest does not read the attribute itself)."),
  (`Lean.Meta.Match.Extension.extension, .kernelDerived,
    "`Match.addMatcherInfo` (src/Lean/Meta/Match/MatcherInfo.lean:138-151) has a single call site, \
    src/Lean/Meta/Match/Match.lean:1126, run right after `addDecl` of the very matcher \
    (src/Lean/Meta/Match/Match.lean:1117) whose `MatcherInfo` it records; only the defining module \
    can write it, and the recorded discriminant/arity info follows from the match-compiler's own \
    analysis of the matcher it just emitted.")
]

#eval show CoreM Unit from do
  let env ← getEnv
  -- Roots: the LCNF/IR code-generation entry points, plus the Lean functions
  -- `src/library/ir_interpreter.cpp`'s `extern "C" lean_*` declarations call into (found by
  -- searching that file for `extern "C"` declarations with no body, i.e. implemented in Lean via
  -- `@[export lean_*]`, and mapping each to its defining declaration; two are `private`, whose
  -- real name is computed the way `Lean.mkPrivateName` does: `_private.<module>.0 ++ <decl>`).
  let roots := [
    ``Lean.Compiler.LCNF.main, ``Lean.IR.compile, ``Lean.Compiler.LCNF.emitC,
    ``Lean.Compiler.LCNF.builtinPassManager, ``Lean.Compiler.LCNF.Simp.ConstantFold.builtinFolders,
    ``Float.ofNat, ``Float32.ofNat, ``Lean.getSymbolStem, ``Lean.mkMangledBoxedName,
    ``Lean.getRegularInitFnNameFor?, ``Lean.getExportNameFor?, ``Lean.IR.getSorryDep,
    Lean.mkPrivateNameCore `Lean.Compiler.IR.CompilerM `Lean.IR.findInterpDecl,
    Lean.mkPrivateNameCore `Lean.Compiler.IR.CompilerM `Lean.IR.findInterpDeclBoxed,
    Lean.mkPrivateNameCore `Lean.Compiler.IR.Format `Lean.IR.formatFnBodyHead']
  let exts ← persistentEnvExtensionsRef.get
  let aliasMap : NameMap Name := aliases.foldl (fun m (a, c) => m.insert a c) {}
  let holderOf (n : Name) : Name := (aliasMap.find? n).getD n
  -- BFS from `roots` over used constants, `@[implemented_by]` targets and `_unsafe_rec` definitions.
  let mut parent : Std.HashMap Name Name := {}
  let mut queue : Array Name := #[]
  for r in roots do
    parent := parent.insert r .anonymous
    queue := queue.push r
  let mut i := 0
  while h : i < queue.size do
    let c := queue[i]
    i := i + 1
    let some ci := env.find? c | continue
    let mut next : NameSet := ci.getUsedConstantsAsSet
    if let some t := Compiler.getImplementedBy? env c then next := next.insert t
    let ur := Compiler.mkUnsafeRecName c
    if env.contains ur then next := next.insert ur
    for n in next do
      unless parent.contains n do
        parent := parent.insert n c
        queue := queue.push n
  let reachedDecls : NameSet := queue.foldl (fun s n => s.insert n) {}
  let reachedExts : NameSet := exts.foldl (fun s e =>
    if reachedDecls.contains (holderOf e.name) then s.insert e.name else s) {}
  let registered : NameSet := exts.foldl (fun s e => s.insert e.name) {}
  let classMap : NameMap (UsageClass × String) :=
    classification.foldl (fun m (n, c, r) => m.insert n (c, r)) {}
  let mut errors : Array String := #[]
  for (n, _, _) in classification do
    unless registered.contains n do
      errors := errors.push s!"classification table names `{n}`, which is not a registered persistent environment extension"
  for n in reachedExts do
    match classMap.find? n with
    | none => errors := errors.push s!"reachable extension `{n}` is missing from the classification table"
    | some (.notRead, reason) => errors := errors.push s!"reachable extension `{n}` is classified `notRead`: {reason}"
    | some (.uncovered, reason) => errors := errors.push s!"reachable extension `{n}` is `uncovered`: {reason}"
    | some _ => pure ()
  unless errors.isEmpty do
    throwError "moduleUsageCensus found {errors.size} issue(s) (of {registered.size} registered, {reachedExts.size} reachable extensions):\n{"\n".intercalate errors.toList}"
