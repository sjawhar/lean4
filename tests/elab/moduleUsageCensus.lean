import Lean
/-!
Coverage net for Lake's "usage cutoff": Lake skips recompiling a module `M` when every imported
name `M` used has an unchanged digest, keeping `M`'s old compiled code. For that to be sound, every
piece of imported state the compiler reads while (re)compiling `M` must be covered by some digest.

This test enumerates every registered persistent environment extension, computes which of them are
reachable from the compiler's code-generation entry points (BFS over
`ConstantInfo.getUsedConstantsAsSet`, `@[implemented_by]` targets, `_unsafe_rec` definitions and
extern-to-export edges: a reached constant with `@[extern "sym"]` data reaches the declaration
marked `@[export sym]`, which is how `Meta.whnf`, `inferType` and the like are forward-declared,
started from `Lean.Compiler.LCNF.main`, `Lean.IR.compile`, `Lean.Compiler.LCNF.emitC`,
`Lean.Compiler.LCNF.builtinPassManager`, `Lean.Compiler.LCNF.Simp.ConstantFold.builtinFolders`, plus
the Lean functions the C++ IR interpreter (`src/library/ir_interpreter.cpp`) calls by
`extern "C" lean_*` export name), and fails
unless every reachable extension is classified into one of the coverage classes the usage-cutoff
machinery relies on: `R1` (own-declaration entries, covered by the declaration's own digest), `R5`
(entries one module writes about another's declarations, covered by the writer's closure digest),
`specCache` (a cache keyed by expression, hits covered, misses tolerated), `kernelDerived` (written
only alongside the key declaration, determined by its kernel data), `moduleLocal` (never
exported to `.olean` in a way another module's compile can observe), or `recording` (written by
usage/extra-module-use bookkeeping, never read to generate code). An extension absent from the
table defaults to `notRead` ("unreachable from the compiler entry points"), correct only when the
BFS does not find it reachable; a reachable extension defaulting to (or explicitly classified)
`notRead`, or explicitly marked `uncovered` (fits no class), fails the test. The table may not name
an extension that is not registered. Each registered extension's name, after the `aliases` table
(names that are not the constant holding the extension), must be a constant of the environment,
otherwise the BFS could never reach it and it would silently default to `notRead`.

Every extension classified `R5`, `R1R5` or `specCache` also needs a row in `tableNotes`, and no other
extension may have one. The row says whether the table can change what a specialization computes
under a given key (`body`: covered by the compiler-code bit a module records at each compile, which
turns off the tolerance of specialization reuse), only which keys exist and what the compiler
decides to inline or specialize (`keysOrDecisions`), the cache itself (`cache`), or only whether a
definitional-equality query succeeds (`defeqOutcome`), and whether import order matters (a later entry
overwrites an earlier one, installers apply in order, or the first matching hint wins; closure digests hash the
closure in import order).

Every `tableNotes` row and every table of compiled entries (`compiledEntryTables`: IR, LCNF base and mono code,
impure signatures) also need a row in `writerNotes`: how writes from outside the compiler are handled
(`bitSetting`: they set the module's compiler-code bit; `keysOrDecisionsOnly`: they cannot change what a
specialization under a given key computes), with the case that exercises it. A table that can change a
specialization's body, or the cache itself, must be `bitSetting`.

Every reachable table classified `R1`, `R1R5`, `R5`, `specCache` or `kernelDerived` also needs rows in `writers`:
each function found by grepping `src/` that writes it (and its public wrappers), with the `Mechanism` that handles
a write from outside the compiler or outside the declaring module and the evidence. Each writer must be a constant
of the environment, a `kernelDerived` table's writers must all be `kernelOnly`, an `R5` or `R1R5` table needs a
`tableDigest` or `compileCheck` writer, and an `uncovered` writer fails the test. The representation caches
(trivial-structure info, impure type, mono type, constructor layout) are classified `R1`, not kernel-derived:
computing them reads the module's local reducibility, so they are encoded by `ModuleUsage.entriesEnc` and their
writers are covered by `provenance`.
-/
open Lean

/-- Coverage class a registered persistent environment extension is assigned, per the classes the
Lake usage-cutoff digest machinery relies on. -/
inductive UsageClass where
  | R1 | R5 | R1R5 | specCache | kernelDerived | moduleLocal | recording
  | notRead | uncovered
deriving BEq

def UsageClass.asString : UsageClass → String
  | .R1 => "R1" | .R5 => "R5" | .R1R5 => "R1+R5" | .specCache => "specCache"
  | .kernelDerived => "kernelDerived"
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
  (`envLinterSnapshotExt, `Lean.Linter.envLinterSnapshotExt),
  (`Lean.PrettyPrinter.mkCombinatorFormatterAttribute, `Lean.PrettyPrinter.combinatorFormatterAttribute),
  (`Lean.PrettyPrinter.mkCombinatorParenthesizerAttribute, `Lean.PrettyPrinter.combinatorParenthesizerAttribute),
  (`Lean.identifierSuggestForAttr.existingToIncorrect,
    Lean.mkPrivateNameCore `Lean.IdentifierSuggestion `Lean.identifierSuggestionsImpl),
  (`Lean.identifierSuggestForAttr.incorrectToExisting,
    Lean.mkPrivateNameCore `Lean.IdentifierSuggestion `Lean.identifierSuggestionsImpl),
  (`cbvSimprocExt, `Lean.Meta.Tactic.Cbv.cbvSimprocExtension),
  (`Lean.Meta.NormCast.normCastExt.up, `Lean.Meta.NormCast.normCastExt),
  (`Lean.Meta.NormCast.normCastExt.down, `Lean.Meta.NormCast.normCastExt),
  (`Lean.Meta.NormCast.normCastExt.squash, `Lean.Meta.NormCast.normCastExt),
  (`specMap, `Lean.Elab.Tactic.Do.SpecAttr.specAttr),
  (`internalSpecMap, `Lean.Elab.Tactic.VCGen.SpecAttr.specAttr)]

/-- `extension name → (class, reason)`. Only extensions the BFS below finds reachable need to be
present and non-`notRead`/`uncovered`; everything else defaults to `notRead`. -/
def classification : List (Name × UsageClass × String) := [
  (`Lean.Compiler.LCNF.monoTypeExt, .R1,
    "Mono-phase type of a declaration, written for inductives and constructors by `compileInductives` \
    inside a compiler run (src/Lean/Compiler/LCNF/MonoTypes.lean:103-106) and, for other names, on a cache \
    miss in the mono phase (:117-125). Not a function of the kernel data alone: `toMonoType` \
    (:61-97) converts the base type (`toLCNFType`: `whnfD`, `whnf` at `.all` transparency, the exposure \
    scope, src/Lean/Compiler/LCNF/Types.lean:132-160) and reads the trivial-structure caches. Encoded \
    per own name by `entriesEnc` (`monoTypeExt.find?`)."),
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
  (Lean.mkPrivateNameCore `Lean.Compiler.LCNF.ToImpureType `Lean.Compiler.LCNF.impureTrivialStructureInfoExt, .R1,
    "Whether an inductive's impure representation is a trivial structure, written by `compileInductives` \
    inside a compiler run (src/Lean/Compiler/LCNF/ToImpureType.lean:38-40,54-55,346). Not a function of \
    the kernel data alone: the predicate `impureIrrelevantType` (:44-50) runs `whnfD`, `isProp` and \
    `isTypeFormerType`, and the constructor fields are read at default transparency \
    (src/Lean/Compiler/LCNF/Irrelevant.lean:21-72). Encoded per own inductive by `entriesEnc` \
    (`findTrivialImpureStructureInfo?`)."),
  (`Lean.Compiler.weakSpecializeAttr, .R1, "Own-declaration marker; written only by the defining module (design R1 list)."),
  (`Lean.Compiler.LCNF.UnreachableBranches.functionSummariesExt, .R1, "Own-declaration summaries; written only by the defining module (design R1 list)."),
  (`Lean.exportAttr, .R1, "Own-declaration marker; written only by the defining module (design R1 list)."),
  (`Lean.IR.declMapExt, .R1, "Own-declaration IR code; written only by the defining module (design R1 list)."),
  (Lean.mkPrivateNameCore `Lean.Compiler.LCNF.ToImpureType `Lean.Compiler.LCNF.impureTypeExt, .R1,
    "IR type of an inductive, written by `setImpureType` from `compileInductives` inside a compiler run \
    (src/Lean/Compiler/LCNF/ToImpureType.lean:121-124,349). Not a function of the kernel data alone: \
    `computeImpureType` (:97-118) walks the constructor field types with `forallTelescope` and converts \
    them through `toLCNFType`/`toMonoType`, which use `whnfD`, `whnf` at `.all` transparency and the \
    exposure scope (src/Lean/Compiler/LCNF/Types.lean:132-160). Encoded per own inductive by `entriesEnc` \
    (`findImpureType?`)."),
  (`Lean.indirectModUseExt, .recording,
    "Infrastructure for `shake`'s extra-import-dependency recording (src/Lean/ExtraModUses.lean:14-16); \
    only consulted by `recordExtraModUseFromDecl` (src/Lean/ExtraModUses.lean:129) to propagate a \
    further bookkeeping entry, never to decide what code is generated."),
  (Lean.mkPrivateNameCore `Lean.Structure `Lean.structureExt, .R1,
    "`registerStructure` (src/Lean/Structure.lean:111-122) and `setStructureParents` (:128-131) are called \
    only by the `structure` elaborator for the structure it declares (src/Lean/Elab/Structure.lean:1303,1558). \
    The entry is not a function of the kernel data alone: whether a parent is a subobject or a copied \
    parent, and the parent projections, come from elaborating the `extends` clause \
    (src/Lean/Elab/Structure.lean:1292-1302,1555-1558). The whole `StructureInfo` of each own \
    structure is in `attrsEnc`."),
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
  (Lean.mkPrivateNameCore `Lean.Compiler.LCNF.ToImpureType `Lean.Compiler.LCNF.ctorLayoutExt, .R1,
    "Runtime layout of a constructor, written by `compileInductives` inside a compiler run \
    (src/Lean/Compiler/LCNF/ToImpureType.lean:227-231,354). Not a function of the kernel data alone: \
    `fillCache` runs `forallTelescopeReducing` on the constructor type (:237) and converts each field \
    type through the base, mono and impure type caches, at default transparency. Encoded per own \
    constructor by `entriesEnc` (`findCtorLayout?`)."),
  (Lean.mkPrivateNameCore `Lean.Compiler.MetaAttr `Lean.metaExt, .R1, "Own-declaration `meta` mark; written only by the defining module (design R1 list)."),
  (`Lean.regularInitAttr, .R1, "Own-declaration marker; written only by the defining module (design R1 list)."),
  (Lean.mkPrivateNameCore `Lean.Compiler.LCNF.MonoTypes `Lean.Compiler.LCNF.trivialStructureInfoExt, .R1,
    "Trivial-structure info of an inductive, written by `compileInductives` inside a compiler run \
    (src/Lean/Compiler/LCNF/MonoTypes.lean:20-23, ToImpureType.lean:345). Not a function of the kernel \
    data alone: the computation reads the constructor fields at default transparency \
    (`Meta.forallTelescopeReducing`, `isProp`, `isTypeFormerType`: src/Lean/Compiler/LCNF/Irrelevant.lean:21-72), \
    so it depends on the module's local reducibility. Encoded per own inductive by `entriesEnc` \
    (`findTrivialStructureInfo?`), so a change shows in the inductive's digest."),
  (`Lean.Compiler.LCNF.Simp.ConstantFold.folderExt, .R5, "`@[cpass]`-style constant-folder entries another module may add (design R5 list)."),
  (`Lean.Compiler.LCNF.monoExt, .R1, "Own-declaration LCNF mono-phase code; written only by the defining module (design R1 list)."),
  (Lean.mkPrivateNameCore `Lean.AuxRecursor `Lean.sparseCasesOnExt, .kernelDerived,
    "`markSparseCasesOn` (src/Lean/AuxRecursor.lean:57-58) is called only from \
    src/Lean/Meta/Constructions/CtorElim.lean:206 and src/Lean/Meta/Constructions/SparseCasesOn.lean:149, \
    both tagging the sparse-`casesOn` auxiliary that same function just generated; only the \
    defining module can write it, and the tag follows from how that generator assembled the \
    recursor from the inductive's constructors/indices."),
  (Lean.mkPrivateNameCore `Lean.Compiler.MetaAttr `Lean.declMetaExt, .R1R5,
    "`setDeclMeta` (src/Lean/Compiler/MetaAttr.lean:65-69) is public with no ownership check, and \
    `IR.inferMeta` also marks the `meta` closure of an own declaration (src/Lean/Compiler/IR/Meta.lean:32-49); \
    `isDeclMeta` (:48-62) decides which IR bodies a module exports for interpretation \
    (src/Lean/Compiler/IR/CompilerM.lean:94-108,233). `isDeclMeta` of an own declaration is in \
    `attrsEnc` (R1), an entry for another module's declaration is in the cross-module table digest (R5)."),
  (Lean.mkPrivateNameCore `Lean.Compiler.LCNF.Specialize `Lean.Compiler.LCNF.Specialize.specCacheExt, .specCache,
    "Expression-keyed specialization cache; hits recorded by name, misses tolerated (design D2; src/Lean/Compiler/LCNF/Specialize.lean:31-46)."),
  (`Lean.noConfusionExt, .R1,
    "`markNoConfusion` (src/Lean/AuxRecursor.lean:87-88) is called only right after each \
    `noConfusion`-generator's own `addDecl` of the declaration it is building \
    (src/Lean/Meta/Constructions/NoConfusion.lean:258,353,429), so only the defining module writes it \
    (`MapDeclarationExtension.insert` drops a write for an imported name, src/Lean/EnvExtension.lean:178-179). \
    Both `.regular` and `.perCtor` entries of an own declaration are in `attrsEnc`."),
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
  (`Lean.Meta.Match.Extension.extension, .R1R5,
    "`MatcherInfo` of the matcher it describes, written by `Match.addMatcherInfo` \
    (src/Lean/Meta/Match/MatcherInfo.lean:150-151) right after the `addDecl` of that matcher \
    (src/Lean/Meta/Match/Match.lean:1117,1126; src/Lean/Meta/Constructions/CasesOnSameCtor.lean:225); \
    all fields of an own matcher's entry are in `attrsEnc` (R1). `Extension.addMatcherInfo` (:138-140) has \
    no own-module check, and `SMap.find?` prefers local writes (src/Lean/Data/SMap.lean:60-62), so an \
    entry a module writes for another module's matcher is in the cross-module table digest (R5). The \
    compiler reads `MatcherInfo.arity` and the alternatives' parameter counts \
    (src/Lean/Compiler/LCNF/ToLCNF.lean:541-545)."),
  (`Lean.matchPatternAttr, .R1,
    "`TagAttribute` on the tagged declaration itself (src/Lean/Meta/Match/MatchPatternAttr.lean:34-36); \
    read by `canUnfoldAtMatcher` (src/Lean/Meta/GetUnfoldableConst.lean:42) inside `whnfMatcher`, so \
    it changes what `whnf` unfolds, and the digest of the tagged declaration covers the tag \
    through its attributes encoding (src/Lean/Util/ModuleUsage/Compiled.lean)."),
  (`Lean.Meta.unificationHintExtension, .R5,
    "Any module may add a hint for declarations it did not define \
    (`addUnificationHint`, src/Lean/Meta/UnificationHint.lean:77-89); the writer's exported entries \
    are part of the cross-module table digest, and `tryUnificationHints` reads the whole table \
    (:104-119)."),
  (`Lean.auxParentProjInfoExt, .kernelDerived,
    "`addAuxParentProjectionInfo` (src/Lean/ProjFns.lean:77-78) has a single call site, \
    `mkCoercionToCopiedParent` (src/Lean/Elab/Structure.lean:1440), run right after it adds the \
    parent projection `declName` of the structure being declared; `numParams` is the structure's \
    parameter count and `fromClass` follows from the structure's own `class` flag and the parent's \
    class status (covered by `classExtension`). The only reader, `getStuckMVar?` \
    (src/Lean/Meta/WHNF.lean:368-373), looks up the head projection and just reports a stuck \
    metavariable."),
  (`Lean.Elab.Structural.eqnInfoExt, .kernelDerived,
    "`registerEqnsInfo` (src/Lean/Elab/PreDefinition/Structural/Eqns.lean:157-161) inserts the \
    `EqnInfo` of the declaration the structural-recursion elaborator is defining, and only the \
    defining module writes it. The only read on the compiler's path is `recArgPos`, through the \
    `@[export lean_get_structural_rec_arg_pos]` implementation of `Meta.getStructuralRecArgPos?` \
    (:190-193), by smart unfolding in `whnf` (src/Lean/Meta/WHNF.lean:899). Whatever search chose \
    it (src/Lean/Elab/PreDefinition/Structural/Main.lean:129-174, FindRecArg.lean:296-312), the \
    declaration's kernel value recurses through `brecOn` on exactly that argument, so a different \
    `recArgPos` is a different kernel value and changes the declaration's digest; the other `EqnInfo` \
    fields (the pre-definition `value`, `fixedParamPerms`) are not read there.")
]

/-- How a cross-module table can affect a specialization another module reuses. `body`: the
specialization's code under a fixed key; `keysOrDecisions`: which keys exist and what is inlined or
specialized; `cache`: the specialization cache itself; `defeqOutcome`: only whether a `Meta`
definitional-equality query succeeds (a unification hint can turn a failure into a success), never
a body under a given key nor which keys exist; `irVisibility`: only which IR bodies a module exports for
interpretation. -/
inductive SpecEffect where
  | body | keysOrDecisions | cache | defeqOutcome | irVisibility
deriving BEq

/-- `extension name → (effect on reused specializations, import order matters, reason)`. -/
def tableNotes : List (Name × SpecEffect × Bool × String) := [
  (`Lean.Compiler.LCNF.passManagerExt, .body, true,
    "An installer's passes run on every declaration, specializations included, after their keys are \
    fixed (src/Lean/Compiler/LCNF/Main.lean, `getPassManager`); installers run in import order \
    (src/Lean/Compiler/LCNF/Passes.lean:162-167)."),
  (`Lean.Compiler.LCNF.Simp.ConstantFold.folderExt, .body, true,
    "Folders rewrite constant applications inside a specialization's body after its key is fixed \
    (src/Lean/Compiler/LCNF/Simp/ConstantFold.lean:847-848); `insert` keeps the last folder per \
    declaration (:827, :829)."),
  (`Lean.Compiler.CSimp.ext, .keysOrDecisions, true,
    "Replacement happens in toLCNF on the compiling module's own terms (src/Lean/Compiler/LCNF/ToLCNF.lean:519), \
    before specialization keys are formed; a callee's saved body comes from its own module, so a \
    different csimp state gives a different key, never a different body under one key. `map.insert` \
    keeps the last entry per `fromDeclName` (src/Lean/Compiler/CSimpAttr.lean:36)."),
  (`Lean.Meta.instanceExtension, .keysOrDecisions, true,
    "Instance status decides base-phase inlining (src/Lean/Compiler/LCNF/Simp/InlineCandidate.lean:83), \
    which changes code shape, not what the code computes; `instanceNames.insert` keeps the last \
    entry per declaration."),
  (`reducibilityExtra, .keysOrDecisions, true,
    "`isInstanceReducible` decides whether to specialize or lambda-lift \
    (src/Lean/Compiler/LCNF/Specialize.lean:402, LambdaLifting.lean:219, Basic.lean:1111, Simp/Main.lean:79); \
    `d.insert` keeps the last status per declaration (src/Lean/ReducibilityAttrs.lean:78)."),
  (`Lean.classExtension, .keysOrDecisions, true,
    "Class status decides which parameters are specialized (src/Lean/Compiler/LCNF/Types.lean:329-343, \
    SpecInfo.lean:216); the out-param map's `insert` keeps the last entry (`addClass` rejects a \
    second declaration, src/Lean/Class.lean:168-169)."),
  (Lean.mkPrivateNameCore `Lean.Compiler.LCNF.Specialize `Lean.Compiler.LCNF.Specialize.specCacheExt, .cache, true,
    "The specialization cache itself: `SMap.insert` keeps the last module's specialization per key \
    (src/Lean/Compiler/LCNF/Specialize.lean:31-46)."),
  (`Lean.Meta.unificationHintExtension, .defeqOutcome, true,
    "A hint is consulted only by `tryUnificationHints` (src/Lean/Meta/UnificationHint.lean:108-119) \
    inside `Meta.isDefEq`, where it can only turn a failing query into a success; it never \
    rewrites a specialization body under a given key nor decides which keys exist. Hints are tried \
    in discrimination-tree match order and the first success wins (:116-118), so import order matters."),
  (`Lean.Meta.Match.Extension.extension, .keysOrDecisions, true,
    "The compiler reads `MatcherInfo.arity` and the alternatives' parameter counts to eta-expand a \
    matcher application (src/Lean/Compiler/LCNF/ToLCNF.lean:541-545) on the compiling module's own \
    terms, before specialization keys are formed. `SMap.find?` prefers local writes \
    (src/Lean/Data/SMap.lean:60-62) and imported entries apply in import order."),
  (Lean.mkPrivateNameCore `Lean.Compiler.MetaAttr `Lean.declMetaExt, .irVisibility, false,
    "`isDeclMeta` decides whether an own IR body is exported for interpretation \
    (src/Lean/Compiler/IR/CompilerM.lean:94-108,233); no compiler step reads an exported body. Entries \
    are a set, so import order does not matter.")
]

/-- How writes from outside the compiler are handled, for a table that can reach a specialization another module
reuses. `bitSetting`: every such write sets the module's compiler-code bit, which turns off the tolerance of
specialization reuse for the module and its importers (by the state check at each compile batch, or at the
writer). `keysOrDecisionsOnly`: writes change only which keys exist, what the compiler decides to inline or
specialize, or whether a defeq query succeeds, never what a specialization under a given key computes. -/
inductive Writers where
  | bitSetting | keysOrDecisionsOnly
deriving BEq

/-- The tables holding a declaration's compiled entries, which importers inline, specialize or call. -/
def compiledEntryTables : List Name :=
  [`Lean.IR.declMapExt, `Lean.Compiler.LCNF.baseExt, `Lean.Compiler.LCNF.monoExt, `Lean.Compiler.LCNF.impureSigExt]

/-- `extension name → (handling of writes from outside the compiler, the usageCutoffCompiled case that exercises
it, reason)`. Every `tableNotes` row needs one, and so does every table of `compiledEntryTables`, whose entries
can disagree with what inlining and specialization in importers assume. A table whose `SpecEffect` is `body` or
`cache` must be `bitSetting`. -/
def writerNotes : List (Name × Writers × String × String) := [
  (`Lean.Compiler.LCNF.passManagerExt, .bitSetting, "f3_runtime_cpass",
    "`@[cpass]`, `addPass` and a direct `modifyState` all change the pass manager, which each compile batch \
    compares with `builtinPassManager` by pointer (src/Lean/Compiler/LCNF/Main.lean, `isBuiltinCompiler`)."),
  (`Lean.Compiler.LCNF.Simp.ConstantFold.folderExt, .bitSetting, "f3_runtime_folder",
    "`registerFolder` and a direct `modifyState` change the folder map, which each compile batch compares \
    with `builtinFolders` by pointer (src/Lean/Compiler/LCNF/Main.lean, `isBuiltinCompiler`)."),
  (Lean.mkPrivateNameCore `Lean.Compiler.LCNF.Specialize `Lean.Compiler.LCNF.Specialize.specCacheExt, .bitSetting,
    "f1_cachespec",
    "The extension is private; its one public writer, `cacheSpec`, sets the bit, and the specializer writes \
    through the private `cacheSpecCore` (src/Lean/Compiler/LCNF/Specialize.lean:42-51)."),
  (`Lean.IR.declMapExt, .bitSetting, "premise_ir",
    "Every IR entry of the module must be a declaration a compiler run added (the same object), in a run whose \
    kernel constants equal the module's under the same names (`Compiler.LCNF.entriesOutsideCompiler`); IR \
    from `IR.addDecl`, a direct `addEntry`, or a compile in another environment (`ir_count`) sets the bit."),
  (`Lean.Compiler.LCNF.baseExt, .bitSetting, "lcnf_override",
    "As `declMapExt`: every base entry must be one a compiler run's saves left (`Decl.saveBase` logs the name \
    and thread; the run reads its own thread's part), so `Decl.saveBase` outside a run, `saveBaseDeclCore` \
    or a direct entry sets the bit."),
  (`Lean.Compiler.LCNF.monoExt, .bitSetting, "lcnf_override",
    "As `baseExt`, for `Decl.saveMono` and `saveMonoDeclCore`."),
  (`Lean.Compiler.LCNF.impureSigExt, .bitSetting, "lcnf_override",
    "As `baseExt`, for `Decl.saveImpure` and `saveImpureDeclCore`; the impure declarations themselves \
    (`impureExt`, not persisted) are checked the same way."),
  (`Lean.Compiler.CSimp.ext, .keysOrDecisionsOnly, "csimp_late",
    "A replacement applies to the compiling module's own terms in toLCNF, before keys are formed."),
  (`Lean.Meta.instanceExtension, .keysOrDecisionsOnly, "local_inst_own",
    "Instance status decides base-phase inlining only; given the compiled-entry rows, the code a decision \
    chooses between computes the same."),
  (`reducibilityExtra, .keysOrDecisionsOnly, "red_order",
    "Reducibility decides whether to specialize or lambda-lift only; given the compiled-entry rows, the code \
    a decision chooses between computes the same."),
  (`Lean.classExtension, .keysOrDecisionsOnly, "class_cross",
    "Class status decides which parameters are specialized only."),
  (`Lean.Meta.unificationHintExtension, .keysOrDecisionsOnly, "",
    "A hint can only make a `Meta.isDefEq` query succeed; the compiler's terms carry no metavariables, and no \
    case exercises it."),
  (`Lean.Meta.Match.Extension.extension, .keysOrDecisionsOnly, "",
    "`MatcherInfo.arity` and the alternatives' parameter counts decide how `toLCNF` eta-expands a matcher \
    application on the compiling module's own terms, before keys are formed; no case exercises it."),
  (Lean.mkPrivateNameCore `Lean.Compiler.MetaAttr `Lean.declMetaExt, .keysOrDecisionsOnly, "",
    "Decides which IR bodies a module exports for interpretation; it does not change what a specialization \
    under a given key computes, and no case exercises it.")
]

/-- How a write to a table is handled when it happens outside the compiler or outside the declaring module.
`provenance`: a compiled entry, recomputed at the `.usage` write and compared with what a compiler run recorded
(`compiledOutsideCompiler`); a mismatch sets the module's compiler-code bit. `compileCheck`: the pass manager and
folder map are compared with the built-in objects at each compile batch. `bitAtWriter`: the writer sets the bit.
`ownDeclAttr`: an attribute of the module's own declaration, in that declaration's digest (`attrsEnc`), and the
writer rejects declarations of imported modules (or its entry for one is never read). `moduleDigest`: a value of
the module itself, in every digest of the module. `tableDigest`: a cross-module table whose exported entries are in
the module's cross-module table digest. `kernelOnly`: written only by the elaborator right next to the key's
`addDecl`, and fixed by that constant's kernel data. `moduleLocal`: never exported to another module's compile.
`uncovered`: none of these. -/
inductive Mechanism where
  | provenance | compileCheck | bitAtWriter | ownDeclAttr | moduleDigest | tableDigest | kernelOnly | moduleLocal
  | uncovered
deriving BEq, Repr

/-- Reasons shared by the writers that go through one library function. -/
def tagAttrReason : String :=
  "`registerTagAttribute`'s handler rejects declarations of imported modules (src/Lean/Attributes.lean:210-211), \
  as does `setTag` (:225-226); the tag is in `attrsEnc` (src/Lean/Util/ModuleUsage/Compiled.lean)."
def parametricAttrReason : String :=
  "`registerParametricAttribute`'s handler rejects declarations of imported modules (src/Lean/Attributes.lean:295-296), \
  as does `setParam` (:329-330); the value is in `attrsEnc` (src/Lean/Util/ModuleUsage/Compiled.lean)."
def tagDeclReason : String :=
  "`TagDeclarationExtension.tag` asserts the declaration is not imported (src/Lean/EnvExtension.lean:120); a failed \
  assertion panics and returns the unchanged environment (the `Inhabited` instance at :119), so the write is dropped, \
  and `isTagged` of an imported name reads only its own module's entries; the tag is in `attrsEnc`."
def mapDeclReason : String :=
  "`MapDeclarationExtension.insert` panics on imported declarations and on a second write and returns the unchanged \
  environment (src/Lean/EnvExtension.lean:177-179,185-188); `find?` of an imported name reads only its own module's entries."

/-- Writers per table: `table → [(function that writes it, mechanism, reason)]`, derived by grepping `src/` for
every function that calls `addEntry`, `modifyState`, `setState`, `insert`, `tag`, `setTag`, `setParam`,
`setValue` or `add` on the table, and the public wrappers of those. Functions that only forward to another row's
function are listed when they are public API. Attribute handlers have no constant of their own: they are named by
the registration function that creates them, or by the function they call. The low-level
`PersistentEnvExtension.addEntry`/`setState`/`modifyState` (src/Lean/Environment.lean:2005,2024,2029) write any
table; a write through them is handled by the table's own mechanisms, because every digest reads the table, not
the writer. Every table of a class that needs writers (see `needsWriters`) must have a row. -/
def writers : List (Name × List (Name × Mechanism × String)) := [
  (`Lean.Compiler.LCNF.monoTypeExt, [
    (`Lean.Compiler.LCNF.setOtherDeclMonoType, .provenance,
      "Called only by `compileInductives` (src/Lean/Compiler/LCNF/ToImpureType.lean:348,353) inside a compiler run, which records the inductive and its constructors."),
    (`Lean.Compiler.LCNF.getOtherDeclMonoType, .provenance,
      "Caches a non-inductive name's mono type on a miss with a direct `modifyState` (src/Lean/Compiler/LCNF/MonoTypes.lean:117-125), only in the mono phase of a run; an entry no run recorded for its own name sets the bit.")]),
  (`Lean.Meta.instanceExtension, [
    (`Lean.Meta.addInstance, .tableDigest,
      "No imported-declaration check (src/Lean/Meta/Instances.lean:284-305): an entry for another module's declaration is in the cross-module table digest, one for its own is in `attrsEnc`."),
    (`Lean.Meta.registerInstance, .tableDigest, "Sets instance reducibility, then `addInstance` (src/Lean/Meta/Instances.lean:329-331).")]),
  (`Lean.Meta.matcherLikeExt, [
    (`Lean.Meta.markMatcherLike, .kernelOnly,
      "Single call site, `mkCasesOnSameCtorHet` (src/Lean/Meta/Constructions/CasesOnSameCtor.lean:105), right after the `addDecl` of the `.het` constant (:98-104); the tag has no payload."),
    (`Lean.TagDeclarationExtension.tag, .kernelOnly, tagDeclReason)]),
  (`Lean.noncomputableExt, [
    (`Lean.addNoncomputable, .ownDeclAttr, tagDeclReason),
    (`Lean.TagDeclarationExtension.tag, .ownDeclAttr, tagDeclReason)]),
  (`reducibilityExtra, [
    (`Lean.setReducibilityStatus, .tableDigest,
      "Public, no validation (src/Lean/ReducibilityAttrs.lean:266-267): a global status for an imported name goes to this table (:98), exported and in the cross-module table digest; so do `setReducibleAttribute` (:270-271) and `setIrreducibleAttribute` (:297-298)."),
    (`Lean.setReducibilityStatusCore, .tableDigest,
      "Routes imported names, and scoped and local statuses, to this table (src/Lean/ReducibilityAttrs.lean:93-104); local ones are never exported."),
    (`Lean.addAttr, .tableDigest,
      "The five reducibility attributes (src/Lean/ReducibilityAttrs.lean:186-259); `validate` rejects a global status on an imported name unless `allowUnsafeReducibility` is set (:146-147).")]),
  (`Lean.Compiler.LCNF.baseExt, [
    (`Lean.Compiler.LCNF.saveBaseDeclCore, .provenance,
      "Writes the entry (src/Lean/Compiler/LCNF/PhaseExt.lean:171-172); an entry no compiler run saved under that name, or saved in a run whose kernel constants differ from the module's, sets the bit."),
    (`Lean.Compiler.LCNF.Decl.saveBase, .provenance,
      "Logs the name and thread, then `saveBaseDeclCore` (src/Lean/Compiler/LCNF/PhaseExt.lean:199-201); called by passes, which run inside `PassManager.run`."),
    (`Lean.Compiler.LCNF.Decl.save, .provenance, "Dispatches on the phase to the three `save*` functions (src/Lean/Compiler/LCNF/PhaseExt.lean:211-218).")]),
  (`Lean.builtinInitAttr, [
    (`Lean.setBuiltinInitAttr, .ownDeclAttr,
      "`setParam` on the attribute, which rejects imported declarations (src/Lean/Attributes.lean:329-330) (src/Lean/Compiler/InitAttr.lean:146-147)."),
    (`Lean.declareBuiltin, .ownDeclAttr,
      "Adds a fresh auxiliary declaration and sets the attribute on that own name (src/Lean/Compiler/InitAttr.lean:149-157)."),
    (`Lean.registerInitAttrUnsafe, .ownDeclAttr, parametricAttrReason)]),
  (`Lean.Compiler.LCNF.specExtension, [
    (`Lean.Compiler.LCNF.saveSpecEntries, .provenance,
      "Called by the specialize pass (src/Lean/Compiler/LCNF/Specialize.lean:562-563), inside a compiler run; an entry no run produced for its name sets the bit (`entriesEnc`)."),
    (`Lean.Compiler.LCNF.Specialize.loop, .provenance,
      "Writes `alreadySpecialized` entries in the same pass (src/Lean/Compiler/LCNF/Specialize.lean:536-543).")]),
  (`Lean.Compiler.inlineAttrs, [
    (`Lean.Compiler.setInlineAttribute, .ownDeclAttr,
      "`setValue`, which rejects imported declarations (src/Lean/Attributes.lean:403-404) (src/Lean/Compiler/InlineAttrs.lean:80-81)."),
    (`Lean.Meta.setInlineAttribute, .ownDeclAttr, "Wrapper of `Compiler.setInlineAttribute` (src/Lean/Meta/Basic.lean:2348-2352)."),
    (`Lean.registerEnumAttributes, .ownDeclAttr,
      "The five inline attributes' handler rejects imported declarations (src/Lean/Attributes.lean:381-382); the value is in `attrsEnc`.")]),
  (`Lean.neverExtractAttr, [
    (`Lean.TagAttribute.setTag, .ownDeclAttr, tagAttrReason),
    (`Lean.registerTagAttribute, .ownDeclAttr, tagAttrReason)]),
  (`Lean.auxRecExt, [
    (`Lean.markAuxRecursor, .kernelOnly,
      "Call sites: src/Lean/Meta/Constructions/BRecOn.lean:110,285, CasesOn.lean:80, CasesOnSameCtor.lean:106, CtorElim.lean:157,205, RecOn.lean:57, each tagging the constant that function just added; the tag has no payload."),
    (`Lean.TagDeclarationExtension.tag, .kernelOnly, tagDeclReason)]),
  (`Lean.projectionFnInfoExt, [
    (`Lean.addProjectionFnInfo, .kernelOnly,
      "Single call site, `mkProjections` (src/Lean/Meta/Structure.lean:117), right after the `addDecl` of `projName`; the entry is the constructor, the parameter count, the field index and the `self` binder's instance-implicit flag, all visible in the projection's kernel type and value."),
    (`Lean.MapDeclarationExtension.insert, .kernelOnly, mapDeclReason)]),
  (`Lean.Compiler.specializeAttr, [
    (`Lean.ParametricAttribute.setParam, .ownDeclAttr, parametricAttrReason),
    (`Lean.registerParametricAttribute, .ownDeclAttr, parametricAttrReason)]),
  (`Lean.modPkgExt, [
    (`Lean.Environment.setModulePackage, .moduleDigest,
      "Called by the header processing (src/Lean/Elab/Import.lean:166); the package is in every node digest of the module (src/Lean/Util/ModuleUsage.lean:215,219).")]),
  (`Lean.Compiler.LCNF.impureTrivialStructureInfoExt, [
    (`Lean.Compiler.LCNF.setHasTrivialImpureStructure?, .provenance,
      "Sole caller `compileInductives` (src/Lean/Compiler/LCNF/ToImpureType.lean:346), inside a compiler run; encoded by `entriesEnc`."),
    (`Lean.Compiler.LCNF.Irrelevant.setHasTrivialStructure?, .provenance,
      "The generic writer it forwards to (src/Lean/Compiler/LCNF/Irrelevant.lean:75-79).")]),
  (`Lean.Compiler.weakSpecializeAttr, [
    (`Lean.TagAttribute.setTag, .ownDeclAttr, tagAttrReason),
    (`Lean.registerTagAttribute, .ownDeclAttr, tagAttrReason)]),
  (`Lean.Compiler.LCNF.UnreachableBranches.functionSummariesExt, [
    (`Lean.Compiler.LCNF.UnreachableBranches.addFunctionSummary, .provenance,
      "Public (src/Lean/Compiler/LCNF/ElimDeadBranches.lean:304-305); outside a compiler run the entry matches no recorded digest."),
    (`Lean.Compiler.LCNF.Decl.elimDeadBranches, .provenance,
      "The pass's own write (src/Lean/Compiler/LCNF/ElimDeadBranches.lean:670-673), inside a compiler run.")]),
  (`Lean.exportAttr, [
    (`Lean.ParametricAttribute.setParam, .ownDeclAttr, parametricAttrReason),
    (`Lean.registerParametricAttribute, .ownDeclAttr, parametricAttrReason)]),
  (`Lean.IR.declMapExt, [
    (`Lean.IR.addDecl, .provenance,
      "Public (src/Lean/Compiler/IR/CompilerM.lean:197-198); an IR declaration no compiler run added, or added in a run whose kernel constants differ, sets the bit."),
    (`Lean.IR.addDecls, .provenance, "Called by `IR.compile` (src/Lean/Compiler/IR.lean:35), which `runCore` calls and brackets with `noteIR`."),
    (`Lean.IR.ToIR.addDecl, .provenance,
      "Adds the dummy declaration of an extern (src/Lean/Compiler/IR/ToIR.lean:54,202), between the `before` and `after` of `runCore`'s `noteIR`.")]),
  (`Lean.Compiler.LCNF.impureTypeExt, [
    (`Lean.Compiler.LCNF.setImpureType, .provenance,
      "Sole caller `compileInductives` (src/Lean/Compiler/LCNF/ToImpureType.lean:349), inside a compiler run; encoded by `entriesEnc`.")]),
  (`Lean.classExtension, [
    (`Lean.addClass, .tableDigest,
      "No imported-declaration check (src/Lean/Class.lean:167-178): an entry for another module's class is in the cross-module table digest, one for its own is in `attrsEnc` (`getOutParamPositions?`). The `class` and `univ_out_params` attributes (:184-222) call or repeat it.")]),
  (`Lean.Compiler.LCNF.passManagerExt, [
    (`Lean.Compiler.LCNF.addPass, .compileCheck,
      "Public, any declaration (src/Lean/Compiler/LCNF/Passes.lean:180-185): it replaces the pass manager, which differs by pointer from `builtinPassManager`; the `cpass` attribute (:190-199) calls it; the exported installer names are also in the cross-module table digest.")]),
  (`Lean.Compiler.LCNF.ctorLayoutExt, [
    (`Lean.Compiler.LCNF.setCtorLayout, .provenance,
      "Sole caller `compileInductives` (src/Lean/Compiler/LCNF/ToImpureType.lean:354), inside a compiler run; encoded by `entriesEnc`.")]),
  (`Lean.metaExt, [
    (`Lean.markMeta, .ownDeclAttr,
      "Called by the elaborator next to the declaration it adds (e.g. src/Lean/Elab/MutualDef.lean:1080,1215); `isMarkedMeta` is in `attrsEnc`. " ++ tagDeclReason),
    (`Lean.TagDeclarationExtension.tag, .ownDeclAttr, tagDeclReason)]),
  (`Lean.regularInitAttr, [
    (`Lean.registerInitAttrUnsafe, .ownDeclAttr, parametricAttrReason),
    (`Lean.ParametricAttribute.setParam, .ownDeclAttr, parametricAttrReason)]),
  (`Lean.Compiler.LCNF.trivialStructureInfoExt, [
    (`Lean.Compiler.LCNF.setHasTrivialStructure?, .provenance,
      "Sole caller `compileInductives` (src/Lean/Compiler/LCNF/ToImpureType.lean:345), inside a compiler run; encoded by `entriesEnc`."),
    (`Lean.Compiler.LCNF.Irrelevant.setHasTrivialStructure?, .provenance,
      "The generic writer it forwards to (src/Lean/Compiler/LCNF/Irrelevant.lean:75-79).")]),
  (`Lean.Compiler.LCNF.Simp.ConstantFold.folderExt, [
    (`Lean.Compiler.LCNF.Simp.ConstantFold.registerFolder, .compileCheck,
      "Public, any declaration (src/Lean/Compiler/LCNF/Simp/ConstantFold.lean:837-839): it makes the folder map differ by pointer from `builtinFolders`; the exported folders are also in the cross-module table digest.")]),
  (`Lean.Compiler.LCNF.monoExt, [
    (`Lean.Compiler.LCNF.saveMonoDeclCore, .provenance, "As `saveBaseDeclCore` (src/Lean/Compiler/LCNF/PhaseExt.lean:174-175)."),
    (`Lean.Compiler.LCNF.Decl.saveMono, .provenance, "As `Decl.saveBase` (src/Lean/Compiler/LCNF/PhaseExt.lean:203-205)."),
    (`Lean.Compiler.LCNF.Decl.save, .provenance, "Dispatches on the phase to the three `save*` functions (src/Lean/Compiler/LCNF/PhaseExt.lean:211-218).")]),
  (`Lean.sparseCasesOnExt, [
    (`Lean.markSparseCasesOn, .kernelOnly,
      "Call sites: src/Lean/Meta/Constructions/CtorElim.lean:206 and SparseCasesOn.lean:149, each tagging the auxiliary it just added; the tag has no payload."),
    (`Lean.TagDeclarationExtension.tag, .kernelOnly, tagDeclReason)]),
  (`Lean.Compiler.LCNF.Specialize.specCacheExt, [
    (`Lean.Compiler.LCNF.Specialize.cacheSpec, .bitAtWriter,
      "Public; calls `recordCompilerCode` before writing (src/Lean/Compiler/LCNF/Specialize.lean:49-51)."),
    (`Lean.Compiler.LCNF.Specialize.cacheSpecCore, .bitAtWriter,
      "Private, so only the specializer reaches the extension (src/Lean/Compiler/LCNF/Specialize.lean:43-44,446); a hit on another module's entry is recorded by name and its module's compiler-code bit is in the closure digest.")]),
  (`Lean.noConfusionExt, [
    (`Lean.markNoConfusion, .ownDeclAttr,
      "Call sites: src/Lean/Meta/Constructions/NoConfusion.lean:258,353,429, each right after the `addDecl` of the constant it describes; both shapes of an own declaration's entry are in `attrsEnc`."),
    (`Lean.MapDeclarationExtension.insert, .ownDeclAttr, mapDeclReason)]),
  (`Lean.privateConstKindsExt, [
    (`Lean.recordOriginalConstKind, .kernelOnly,
      "Sole caller src/Lean/Elab/MutualDef.lean:1271, for the theorem it just added (src/Lean/AddDecl.lean:108-110)."),
    (`Lean.addDeclCore, .kernelOnly,
      "Writes the kind of the `Declaration` it is adding, only when the exported constant differs and no entry exists (src/Lean/AddDecl.lean:159-161).")]),
  (`Lean.Compiler.implementedByAttr, [
    (`Lean.Compiler.setImplementedBy, .ownDeclAttr, parametricAttrReason),
    (`Lean.setImplementedBy, .ownDeclAttr, "Monadic wrapper of `Compiler.setImplementedBy` (src/Lean/Compiler/ImplementedByAttr.lean:75-79)."),
    (`Lean.registerParametricAttribute, .ownDeclAttr, parametricAttrReason)]),
  (`Lean.externAttr, [
    (`Lean.ParametricAttribute.setParam, .ownDeclAttr, parametricAttrReason),
    (`Lean.registerParametricAttribute, .ownDeclAttr, parametricAttrReason)]),
  (`reducibilityCore, [
    (`Lean.setReducibilityStatusCore, .ownDeclAttr,
      "Writes this table only when the name is not from an imported module (src/Lean/ReducibilityAttrs.lean:95-101); the entry is in `attrsEnc`."),
    (`Lean.setReducibilityStatus, .ownDeclAttr,
      "Public, no validation: an own name goes here, an imported name to `reducibilityExtra` (src/Lean/ReducibilityAttrs.lean:266-267)."),
    (`Lean.addAttr, .ownDeclAttr, "The five reducibility attributes (src/Lean/ReducibilityAttrs.lean:186-259).")]),
  (`Lean.Compiler.CSimp.ext, [
    (`Lean.Compiler.CSimp.add, .tableDigest,
      "No imported-declaration check (src/Lean/Compiler/CSimpAttr.lean:51-55); the `csimp` attribute (:71-80) calls it. Every entry is in the cross-module table digest."),
    (`Lean.ScopedEnvExtension.add, .tableDigest, "Generic scoped-extension writer (src/Lean/ScopedEnvExtension.lean:275-277).")]),
  (`Lean.Compiler.nospecializeAttr, [
    (`Lean.TagAttribute.setTag, .ownDeclAttr, tagAttrReason),
    (`Lean.registerTagAttribute, .ownDeclAttr, tagAttrReason)]),
  (`Lean.Compiler.LCNF.impureSigExt, [
    (`Lean.Compiler.LCNF.saveImpureDeclCore, .provenance,
      "As `saveBaseDeclCore` (src/Lean/Compiler/LCNF/PhaseExt.lean:177-179). The standalone `leanir` tool also adds the signatures of externs (src/LeanIR.lean:120); it re-adds what this module's own run already exported and writes no usage file."),
    (`Lean.Compiler.LCNF.Decl.saveImpure, .provenance, "As `Decl.saveBase` (src/Lean/Compiler/LCNF/PhaseExt.lean:207-209)."),
    (`Lean.Compiler.LCNF.Decl.save, .provenance, "Dispatches on the phase to the three `save*` functions (src/Lean/Compiler/LCNF/PhaseExt.lean:211-218).")]),
  (`Lean.Compiler.LCNF.taggedReturnAttr, [
    (`Lean.TagAttribute.setTag, .ownDeclAttr, tagAttrReason),
    (`Lean.registerTagAttribute, .ownDeclAttr,
      tagAttrReason ++ " Not in `attrsEnc` itself: it changes only the declaration's own impure signature and IR, which `entriesEnc` encodes.")]),
  (`Lean.matchPatternAttr, [
    (`Lean.TagAttribute.setTag, .ownDeclAttr, tagAttrReason),
    (`Lean.registerTagAttribute, .ownDeclAttr, tagAttrReason)]),
  (`Lean.Meta.unificationHintExtension, [
    (`Lean.Meta.addUnificationHint, .tableDigest,
      "No imported-declaration check (src/Lean/Meta/UnificationHint.lean:77-89); the `unification_hint` attribute (:91-98) calls it. Every entry is in the cross-module table digest.")]),
  (`Lean.auxParentProjInfoExt, [
    (`Lean.addAuxParentProjectionInfo, .kernelOnly,
      "Single call site, `mkCoercionToCopiedParent` (src/Lean/Elab/Structure.lean:1440), right after the `addDecl` of the parent projection."),
    (`Lean.MapDeclarationExtension.insert, .kernelOnly, mapDeclReason)]),
  (`Lean.Elab.Structural.eqnInfoExt, [
    (`Lean.Elab.Structural.registerEqnsInfo, .kernelOnly,
      "Sole caller `structuralRecursion` (src/Lean/Elab/PreDefinition/Structural/Main.lean:209), for the declaration it is defining."),
    (`Lean.MapDeclarationExtension.insert, .kernelOnly, mapDeclReason)]),
  (`Lean.Meta.Match.Extension.extension, [
    (`Lean.Meta.Match.addMatcherInfo, .ownDeclAttr,
      "Call sites: src/Lean/Meta/Match/Match.lean:1126 and src/Lean/Meta/Constructions/CasesOnSameCtor.lean:225, each right after the `addDecl` of the matcher it describes; the entry is in `attrsEnc`."),
    (`Lean.Meta.Match.Extension.addMatcherInfo, .tableDigest,
      "Public, raw `addEntry` with no own-module check (src/Lean/Meta/Match/MatcherInfo.lean:138-140): an entry a module writes for an imported matcher is exported, `SMap.find?` prefers local writes (src/Lean/Data/SMap.lean:60-62), so it is in the cross-module table digest, in import order.")]),
  (`Lean.declMetaExt, [
    (`Lean.setDeclMeta, .tableDigest,
      "Public, no ownership check (src/Lean/Compiler/MetaAttr.lean:65-69): an entry for an own declaration is in `attrsEnc` (`isDeclMeta`), one for another module's declaration is in the cross-module table digest."),
    (`Lean.IR.inferMeta, .ownDeclAttr,
      "Marks the `meta` closure of the module's own declarations inside `IR.compile` (src/Lean/Compiler/IR/Meta.lean:42-49, IR.lean:36)."),
    (`Lean.IR.setClosureMeta, .ownDeclAttr,
      "Only for references `findLocalDecl` finds, i.e. the module's own IR (src/Lean/Compiler/IR/Meta.lean:32-40).")]),
  (`Lean.structureExt, [
    (`Lean.registerStructure, .ownDeclAttr,
      "Called only by the `structure` elaborator for the structure it declares (src/Lean/Elab/Structure.lean:1303). It has no imported-module check, only a panic if the local state already has the name (src/Lean/Structure.lean:115-116), but the extension's state holds only this module's entries (:91) and `getStructureInfo?` answers an imported name from its own module's entries (:134-137), so an entry written for an imported name is never read; the entry for an own structure is in `attrsEnc`."),
    (`Lean.setStructureParents, .ownDeclAttr,
      "Sole caller src/Lean/Elab/Structure.lean:1558; throws unless the structure is in this module's state (src/Lean/Structure.lean:128-131).")])
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
  -- Symbol name -> declaration carrying `@[export sym]`, so a forward-declared `@[extern "sym"]`
  -- constant reaches its implementation.
  let exporters : Std.HashMap Name Name := env.constants.fold (init := {}) fun m n _ =>
    match getExportNameFor? env n with
    | some sym => m.insert sym n
    | none => m
  -- BFS from `roots` over used constants, `@[implemented_by]` targets, `_unsafe_rec` definitions
  -- and extern-to-export edges.
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
    if let some data := getExternAttrData? env c then
      for entry in data.entries do
        match entry with
        | .standard _ sym =>
          if let some y := exporters.get? (Name.mkSimple sym) then next := next.insert y
        | _ => pure ()
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
  for (n, cls, _) in classification do
    let needsNote := cls == .R5 || cls == .R1R5 || cls == .specCache
    let hasNote := tableNotes.any (·.1 == n)
    if needsNote && !hasNote then
      errors := errors.push s!"`{n}` is classified {cls} but has no row in `tableNotes`"
    if !needsNote && hasNote then
      errors := errors.push s!"`{n}` has a row in `tableNotes` but is classified {cls}"
  for (n, _, _, _) in tableNotes do
    unless classification.any (·.1 == n) do
      errors := errors.push s!"`tableNotes` names `{n}`, which the classification table does not"
  for e in exts do
    unless env.contains (holderOf e.name) do
      errors := errors.push s!"registered extension `{e.name}` has no holder constant: `{holderOf e.name}` is not in the environment (add an entry to `aliases`)"
  -- Writer handling: every `tableNotes` row and every compiled-entry table need a `writerNotes` row, and a
  -- table that can change a specialization's body or is the cache itself must be `bitSetting`.
  for (n, eff, _, _) in tableNotes do
    match writerNotes.find? (·.1 == n) with
    | none => errors := errors.push s!"`{n}` has a `tableNotes` row but no `writerNotes` row"
    | some (_, w, _, _) =>
      if (eff == .body || eff == .cache) && w != .bitSetting then
        errors := errors.push s!"`{n}` can change a reused specialization's body but its writers are not `bitSetting`"
  for (n, _, _, _) in writerNotes do
    unless compiledEntryTables.contains n || tableNotes.any (·.1 == n) do
      errors := errors.push s!"`writerNotes` names `{n}`, which has no `tableNotes` row"
  for n in compiledEntryTables do
    match writerNotes.find? (·.1 == n) with
    | some (_, .bitSetting, _, _) => pure ()
    | _ => errors := errors.push s!"compiled-entry table `{n}` needs a `bitSetting` row in `writerNotes`"
  -- Writers: every reachable table whose entries a later compile can read needs writer rows naming existing
  -- functions, none `uncovered`, with mechanisms matching the table's class. `writers` is keyed by the name
  -- without the private-name prefix.
  let userName (n : Name) : Name := (privateToUserName? n).getD n
  let classByUser : NameMap (UsageClass × String) :=
    classification.foldl (fun m (n, c, r) => m.insert (userName n) (c, r)) {}
  let userNames : NameSet := env.constants.fold (init := {}) fun s n _ =>
    match privateToUserName? n with
    | some u => s.insert u
    | none => s
  let needsWriters (cls : UsageClass) : Bool :=
    cls matches .R1 | .R1R5 | .R5 | .specCache | .kernelDerived
  for n in reachedExts do
    if let some (cls, _) := classMap.find? n then
      if needsWriters cls && !(writers.any (fun (t, ws) => t == userName n && !ws.isEmpty)) then
        errors := errors.push s!"reachable table `{n}` ({cls}) has no writer rows in `writers`"
  for (n, ws) in writers do
    match classByUser.find? n with
    | some (cls, _) =>
      unless needsWriters cls do
        errors := errors.push s!"`writers` names `{n}`, which is classified {cls}, so it needs no writer rows"
      if (writers.filter (·.1 == n)).length > 1 then
        errors := errors.push s!"`writers` has more than one row for `{n}`"
      for (w, mech, _) in ws do
        unless env.contains w || userNames.contains w do
          errors := errors.push s!"writer `{w}` of `{n}` is not a constant of the environment"
        if mech == .uncovered then
          errors := errors.push s!"writer `{w}` of `{n}` is `uncovered`"
        if cls == .kernelDerived && mech != .kernelOnly && mech != .moduleLocal then
          errors := errors.push s!"`{n}` is classified kernelDerived but its writer `{w}` is {repr mech}"
      if (cls == .R5 || cls == .R1R5) && !(ws.any fun (_, m, _) => m == .tableDigest || m == .compileCheck) then
        errors := errors.push s!"`{n}` is classified {cls} but no writer is covered by `tableDigest` or `compileCheck`"
    | none => errors := errors.push s!"`writers` names `{n}`, which the classification table does not"
  unless errors.isEmpty do
    throwError "moduleUsageCensus found {errors.size} issue(s) (of {registered.size} registered, {reachedExts.size} reachable extensions):\n{"\n".intercalate errors.toList}"
