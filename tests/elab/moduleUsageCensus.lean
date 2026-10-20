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
started from `Lean.compileDecls` (which calls the compiler through `compileDeclsRef`),
`Lean.Compiler.LCNF.main`, `Lean.IR.compile`, `Lean.Compiler.LCNF.emitC`,
`Lean.Compiler.LCNF.builtinPassManager`, `Lean.Compiler.LCNF.Simp.ConstantFold.builtinFolders`, plus
the Lean functions the C++ IR interpreter (`src/library/ir_interpreter.cpp`) calls by
`extern "C" lean_*` export name), and fails
unless every reachable extension is classified into one of the coverage classes the usage-cutoff
machinery relies on: `R1` (own-declaration entries, covered by the declaration's own digest), `R5`
(entries one module writes about another's declarations, covered by the writer's closure digest),
`specCache` (a cache keyed by expression, checked per key by the keys the module looked up),
`viaOwnEntries` (read only while compiling the declaration it belongs to, so its effect shows in that
declaration's own digested entries), `moduleLocal` (never exported to `.olean` in a way another
module's compile can observe), or `recording` (written by usage/extra-module-use bookkeeping, never
read to generate code). An extension absent from the
table defaults to `notRead` ("unreachable from the compiler entry points"), correct only when the
BFS does not find it reachable; a reachable extension defaulting to (or explicitly classified)
`notRead`, or explicitly marked `uncovered` (fits no class), fails the test. The table may not name
an extension that is not registered. Each registered extension's name, after the `aliases` table
(names that are not the constant holding the extension), must be a constant of the environment,
otherwise the BFS could never reach it and it would silently default to `notRead`.

Every reachable table classified `R1`, `R1R5`, `R5`, `specCache` or `viaOwnEntries` needs rows in `writers`: each
function in `src/` that writes it (and its public wrappers), with the `Mechanism` that covers a write from outside
the declaring module or outside the compiler, and the evidence. Each writer must be a constant of the environment,
an `R5` or `R1R5` table needs a `tableDigest` writer, a `specCache` table's writers must be `specKeys`, and an
`uncovered` writer fails the test. Every table the compiler reads for an imported name is either encoded in the
declaring module's digests or listed under another class. Compiled
entries (IR, LCNF base and mono code, impure signatures, spec info, dead-branch summaries and the
representation caches: trivial-structure info, impure type, mono type, constructor layout) are `R1`: their
entries for the module's own names are read by `ModuleUsage.entriesEnc`, so any writer, inside or outside the
compiler, is covered by the declaration's digest (`ownDeclDigest`); importers resolve a name's compiled entries
through its defining module (`getModuleIdxFor?`), which records every name it is asked about (`noteResolved`), and
Lake rebuilds a module when a closure module changes what such a name resolves to. The specialization cache (`specCache`) is covered per key: the module
records the keys it looked up and exports the keys it created, and Lake rebuilds it when the providers of a
looked-up key in its closure change; only keys and specialization names are compared. In the pass manager and
folder tables (`R5`), entries are in `tableDigest` with the installer's or folder's digest, state written
without an entry is not exported, so it changes only the writing module's own compile, and a compile with any
pass or folder beyond the built-in ones makes every digested import an extra use (`recordCompilerCode`).

The classification is compared with two hand-written lists, not with what the digest code reads: every table
classified `R1` or `R1R5` must be listed in `ModuleUsage.digestedOwnTables` (src/Lean/Util/ModuleUsage/Compiled.lean),
every `R5` or `R1R5` table in `ModuleUsage.digestedCrossTables` (src/Lean/Util/ModuleUsage.lean), and both lists
may name only registered extensions. This test does not check that `attrsEnc`, `entriesEnc`,
`isDeclMeta` or `tableDigest` read a listed table; only the harness's end-to-end cases can catch a read
dropped from them. `viaOwnEntries` is the one class for a table the digest code does not read itself: its
effect reaches importers only through the declaration's own digested entries.

The same BFS also finds every other process-global value a compile reads: each reached constant with an
initializer (`initialize`, `builtin_initialize`) that is not a registered persistent extension. Option
declarations and internal exception ids are covered by their type: an option's value comes from the module's
options, which are in its trace, or from code that sets options around a compile, which is a hook; an exception
id only names an exception. Every other one needs a row in `globals` (`GlobalClass`); a reached global without a
row fails the test. The hooks are the values that hold code the compile calls (`hook`): each is either compared
with its built-in value at every compile or private, so that a module that installs other code there gets every
digested import as an extra use (`recordCompilerCode`).
-/
open Lean

/-- Coverage class a registered persistent environment extension is assigned, per the classes the
Lake usage-cutoff digest machinery relies on. -/
inductive UsageClass where
  | R1 | R5 | R1R5 | specCache | viaOwnEntries | moduleLocal | recording
  | notRead | uncovered
deriving BEq

def UsageClass.asString : UsageClass → String
  | .R1 => "R1" | .R5 => "R5" | .R1R5 => "R1+R5" | .specCache => "specCache"
  | .viaOwnEntries => "viaOwnEntries"
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
    (`setOtherDeclMonoType`, src/Lean/Compiler/LCNF/MonoTypes.lean) and, for other names, on a cache \
    miss in the mono phase (`getOtherDeclMonoType`). Not a function of the kernel data alone: `toMonoType` \
    converts the base type (`toLCNFType`: `whnfD`, `whnf` at `.all` transparency, the exposure \
    scope, src/Lean/Compiler/LCNF/Types.lean:130-168) and reads the trivial-structure caches. Encoded \
    per own name by `entriesEnc` (`monoTypeExt.find?`)."),
  (`Lean.Meta.instanceExtension, .R1R5,
    "Entries record a decl as a class instance; `attrsEnc` covers those for the module's own declarations and \
    `tableDigest` those another module adds for an imported decl."),
  (`Lean.Meta.matcherLikeExt, .R1,
    "`markMatcherLike` (src/Lean/Meta/Match/MatcherInfo.lean:192-193) is public; the elaborator calls it \
    in src/Lean/Meta/Constructions/CasesOnSameCtor.lean:105 for the `.het` auxiliary it just built. \
    `attrsEnc` encodes the tag of each own declaration (`Meta.isMatcherLikeCore`)."),
  (`Lean.noncomputableExt, .R1, "Own-declaration marker, in `attrsEnc`. The only writer is `TagDeclarationExtension.tag`, directly or through `addNoncomputable` (src/Lean/Compiler/NoncomputableAttr.lean:19-20); it asserts the declaration is not imported (src/Lean/EnvExtension.lean:120) and a failed assertion returns the unchanged environment. `isTagged` of an imported name reads only its own module's entries."),
  (`reducibilityExtra, .R5, "Entries another module may add for an imported decl's reducibility; `tableDigest` reads the module's exported entries."),
  (`Lean.Compiler.LCNF.baseExt, .R1, "Own-declaration LCNF base-phase code, read by `entriesEnc` whoever wrote it. An entry written for another module's name is not read: importers resolve a name's code through its defining module."),
  (`Lean.builtinInitAttr, .R1, "Own-declaration marker, in `attrsEnc`. The `builtin_init` handler rejects imported declarations (src/Lean/Attributes.lean:295-296), as does `ParametricAttribute.setParam` (:329-330), which `setBuiltinInitAttr` (src/Lean/Compiler/InitAttr.lean:146-147) and `declareBuiltin` (:149-157, a fresh name) call. `getParam?` of an imported name reads only its own module's entries (src/Lean/Attributes.lean:313-318)."),
  (`Lean.Compiler.LCNF.specExtension, .R1, "Own-declaration spec entries, read by `entriesEnc` whoever wrote them. An entry written for another module's name is not read: importers resolve a name's entries through its defining module."),
  (`Lean.Compiler.inlineAttrs, .R1, "Own-declaration marker, in `attrsEnc`. The five inline attributes' handler rejects imported declarations (src/Lean/Attributes.lean:381-382), as does `EnumAttributes.setValue` (:403-404), which `Compiler.setInlineAttribute` (src/Lean/Compiler/InlineAttrs.lean:80-81) calls. `getValue` of an imported name reads only its own module's entries (src/Lean/Attributes.lean:394-398)."),
  (`Lean.neverExtractAttr, .R1, "Own-declaration marker, in `attrsEnc`. The attribute handler rejects imported declarations (src/Lean/Attributes.lean:210-211), as does `TagAttribute.setTag` (:225-226). `hasTag` of an imported name reads only its own module's entries (:232-233)."),
  (`Lean.auxRecExt, .R1,
    "`markAuxRecursor` (src/Lean/AuxRecursor.lean:29-30) is public; the elaborator calls it right after \
    the `addDecl`/`addAndCompile` of the aux recursor each generator builds (e.g. \
    src/Lean/Meta/Constructions/CasesOn.lean:78,80; BRecOn.lean:110,285; RecOn.lean:57; \
    CtorElim.lean:157,205; CasesOnSameCtor.lean:106). `attrsEnc` encodes the tag of each own declaration \
    (`auxRecExt.isTagged`)."),
  (`Lean.projectionFnInfoExt, .R1,
    "`addProjectionFnInfo` (src/Lean/ProjFns.lean:33-34) is public; the elaborator calls it in \
    `mkProjections` (src/Lean/Meta/Structure.lean:117) for the projection it is synthesizing. `attrsEnc` \
    encodes the entry of each own declaration (`getProjectionFnInfo?`)."),
  (`Lean.Compiler.specializeAttr, .R1, "Own-declaration marker, in `attrsEnc`. The `specialize` handler rejects imported declarations (src/Lean/Attributes.lean:295-296), as does `ParametricAttribute.setParam` (:329-330); it has no other writer. `getParam?` of an imported name reads only its own module's entries (:313-318)."),
  (Lean.mkPrivateNameCore `Lean.Compiler.ModPkgExt `Lean.modPkgExt, .R1,
    "The module's package, included in every node digest of the module (`ModuleUsage.ownNodes`)."),
  (Lean.mkPrivateNameCore `Lean.Compiler.LCNF.ToImpureType `Lean.Compiler.LCNF.impureTrivialStructureInfoExt, .R1,
    "Whether an inductive's impure representation is a trivial structure, written by `compileInductives` \
    (`setHasTrivialImpureStructure?`, src/Lean/Compiler/LCNF/ToImpureType.lean). Not a function of \
    the kernel data alone: the predicate `impureIrrelevantType` runs `whnfD`, `isProp` and \
    `isTypeFormerType`, and the constructor fields are read at default transparency \
    (src/Lean/Compiler/LCNF/Irrelevant.lean:21-72). Encoded per own inductive by `entriesEnc` \
    (`findTrivialImpureStructureInfo?`)."),
  (`Lean.Compiler.weakSpecializeAttr, .R1, "Own-declaration marker, in `attrsEnc`. The attribute handler rejects imported declarations (src/Lean/Attributes.lean:210-211), as does `TagAttribute.setTag` (:225-226). `hasTag` of an imported name reads only its own module's entries (:232-233)."),
  (`Lean.Compiler.LCNF.UnreachableBranches.functionSummariesExt, .R1, "Own-declaration summaries, read by `entriesEnc` whoever wrote them. An entry written for another module's name is not read: importers resolve a name's summary through its defining module."),
  (`Lean.exportAttr, .R1, "Own-declaration marker, in `attrsEnc`. The `export` handler rejects imported declarations (src/Lean/Attributes.lean:295-296), as does `ParametricAttribute.setParam` (:329-330); it has no other writer. `getParam?` of an imported name reads only its own module's entries (:313-318)."),
  (`Lean.IR.declMapExt, .R1,
    "Own-declaration IR code, read by `entriesEnc` for each own name, whoever wrote it. Importers resolve a \
    name's IR through the module `getModuleIdxFor?` picks among the modules that list it (`findExtEntry?`), which \
    records each name it is asked about (`noteResolved`); the usage data lists each with the module and kinds it \
    resolved to (`resolvedGroups`), and Lake rebuilds them when a closure module whose provides changed gains, \
    loses or changes such a name."),
  (Lean.mkPrivateNameCore `Lean.Compiler.LCNF.ToImpureType `Lean.Compiler.LCNF.impureTypeExt, .R1,
    "IR type of an inductive, written by `setImpureType` from `compileInductives` \
    (src/Lean/Compiler/LCNF/ToImpureType.lean). Not a function of the kernel data alone: \
    `computeImpureType` walks the constructor field types with `forallTelescope` and converts \
    them through `toLCNFType`/`toMonoType`, which use `whnfD`, `whnf` at `.all` transparency and the \
    exposure scope (src/Lean/Compiler/LCNF/Types.lean:130-168). Encoded per own inductive by `entriesEnc` \
    (`findImpureType?`)."),
  (`Lean.indirectModUseExt, .recording,
    "Infrastructure for `shake`'s extra-import-dependency recording (module docstring of src/Lean/ExtraModUses.lean); \
    only consulted by `recordExtraModUseFromDecl` (src/Lean/ExtraModUses.lean) to propagate a \
    further bookkeeping entry, never to decide what code is generated. That entry is `.olean` data: each module's \
    entries are in its provides digest (`ModuleUsage.ownIndirect`), which Lake checks against `resolved`."),
  (Lean.mkPrivateNameCore `Lean.Structure `Lean.structureExt, .R1,
    "`registerStructure` (src/Lean/Structure.lean:111-122) and `setStructureParents` (:128-131) are called \
    only by the `structure` elaborator for the structure it declares (src/Lean/Elab/Structure.lean:1303,1558). \
    The entry is not a function of the kernel data alone: whether a parent is a subobject or a copied \
    parent, and the parent projections, come from elaborating the `extends` clause \
    (src/Lean/Elab/Structure.lean:1292-1302,1555-1558). The whole `StructureInfo` of each own \
    structure is in `attrsEnc`."),
  (`Lean.classExtension, .R1R5,
    "Entries record a decl as a class; `attrsEnc` covers those for the module's own declarations \
    (`getOutParamPositions?`) and `tableDigest` those another module marks for an imported decl."),
  (`Lean.Compiler.LCNF.passManagerExt, .R5,
    "`@[cpass]` installers another module may add (src/Lean/Compiler/LCNF/Passes.lean:169-199); each exported \
    entry is in the module's cross-module table digest with the installer's digest, and installers apply in \
    import order (closure digests hash the closure in import order). State written without an entry is not \
    exported, so it changes only the writing module's own compile, whose results are in its compiled entries \
    and, for specializations, in the providers importers check. An installed pass runs inside the compiler and \
    can read any environment state, so a module compiled with any pass beyond the built-in ones has every \
    imported module with digests as an extra use (`recordCompilerCode`)."),
  (Lean.mkPrivateNameCore `Lean.ExtraModUses `Lean.extraModUses, .recording,
    "Infrastructure for `shake`'s extra-import-dependency recording (module docstring of src/Lean/ExtraModUses.lean); \
    written/read by `recordExtraModUseCore`/`recordExtraModUseFromDecl` (src/Lean/ExtraModUses.lean) \
    purely to track additional imports `shake` should require, never to decide generated code."),
  (`Lean.Compiler.LCNF.postponedCompileDeclsExt, .moduleLocal,
    "`addImportedFn := fun _ => {}` (in the extension's registration, src/Lean/Compiler/LCNF/Main.lean) discards any imported \
    `.olean` entries outright, and the only non-empty export channel is `private` \
    (its `exportEntriesFnEx?` in the same registration, \"`leanir` imports the target module privately\"); \
    the sole reader of that private channel is `leanir`'s own driver re-opening the *same* target \
    module in a separate process (src/LeanIR.lean:151), never a downstream module's ordinary \
    compile. The entries never cross the ordinary import graph the usage-cutoff machinery covers."),
  (Lean.mkPrivateNameCore `Lean.Compiler.LCNF.ToImpureType `Lean.Compiler.LCNF.ctorLayoutExt, .R1,
    "Runtime layout of a constructor, written by `compileInductives` \
    (`setCtorLayout`, src/Lean/Compiler/LCNF/ToImpureType.lean). Not a function of the kernel data alone: \
    `fillCache` runs `forallTelescopeReducing` on the constructor type and converts each field \
    type through the base, mono and impure type caches, at default transparency. Encoded per own \
    constructor by `entriesEnc` (`findCtorLayout?`)."),
  (Lean.mkPrivateNameCore `Lean.Compiler.MetaAttr `Lean.metaExt, .R1, "Own-declaration `meta` mark, in `attrsEnc`. The only writer is `markMeta` (src/Lean/Compiler/MetaAttr.lean; callers: `addAndCompile` in src/Lean/AddDecl.lean and src/Lean/Elab/MutualDef.lean:1080,1215), which goes through `TagDeclarationExtension.tag`; it asserts the declaration is not imported (src/Lean/EnvExtension.lean:120) and a failed assertion returns the unchanged environment."),
  (`Lean.regularInitAttr, .R1, "Own-declaration marker, in `attrsEnc`. The `init` handler rejects imported declarations (src/Lean/Attributes.lean:295-296), as does `ParametricAttribute.setParam` (:329-330); it has no other writer. `getParam?` of an imported name reads only its own module's entries (:313-318)."),
  (Lean.mkPrivateNameCore `Lean.Compiler.LCNF.MonoTypes `Lean.Compiler.LCNF.trivialStructureInfoExt, .R1,
    "Trivial-structure info of an inductive, written by `compileInductives` \
    (`setHasTrivialStructure?`, src/Lean/Compiler/LCNF/MonoTypes.lean). Not a function of the kernel \
    data alone: the computation reads the constructor fields at default transparency \
    (`Meta.forallTelescopeReducing`, `isProp`, `isTypeFormerType`: src/Lean/Compiler/LCNF/Irrelevant.lean:21-72), \
    so it depends on the module's local reducibility. Encoded per own inductive by `entriesEnc` \
    (`findTrivialStructureInfo?`), so a change shows in the inductive's digest."),
  (`Lean.Compiler.LCNF.Simp.ConstantFold.folderExt, .R5,
    "Constant-folder entries another module may add (src/Lean/Compiler/LCNF/Simp/ConstantFold.lean:818-839); \
    each exported entry is in the module's cross-module table digest with the folder's digest, and \
    applied in import order (closure digests hash the closure in import order). State written without an \
    entry is not exported, so it changes only the writing module's own compile, whose results are in its \
    compiled entries and, for specializations, in the providers importers check. A folder runs inside the \
    compiler and can read any environment state, so a module compiled with any folder beyond the built-in ones \
    has every imported module with digests as an extra use (`recordCompilerCode`)."),
  (`Lean.Compiler.LCNF.monoExt, .R1, "Own-declaration LCNF mono-phase code, read by `entriesEnc` whoever wrote it. An entry written for another module's name is not read: importers resolve a name's code through its defining module."),
  (Lean.mkPrivateNameCore `Lean.AuxRecursor `Lean.sparseCasesOnExt, .R1,
    "`markSparseCasesOn` (src/Lean/AuxRecursor.lean:57-58) is public; the elaborator calls it in \
    src/Lean/Meta/Constructions/CtorElim.lean:206 and src/Lean/Meta/Constructions/SparseCasesOn.lean:149 \
    for the auxiliary it just generated. `attrsEnc` encodes the tag of each own declaration \
    (`isSparseCasesOn`)."),
  (Lean.mkPrivateNameCore `Lean.Compiler.MetaAttr `Lean.declMetaExt, .R1R5,
    "`setDeclMeta` (src/Lean/Compiler/MetaAttr.lean) is public with no ownership check, and \
    `IR.inferMeta` also marks the `meta` closure of an own declaration (src/Lean/Compiler/IR/Meta.lean:32-49); \
    `isDeclMeta` (same file) decides which IR bodies a module exports for interpretation \
    (src/Lean/Compiler/IR/CompilerM.lean:94-108,233). `isDeclMeta` of an own declaration is in \
    `attrsEnc` (R1), an entry for another module's declaration is in the cross-module table digest (R5)."),
  (Lean.mkPrivateNameCore `Lean.Compiler.LCNF.Specialize `Lean.Compiler.LCNF.Specialize.specCacheExt, .specCache,
    "Expression-keyed specialization cache (`specCacheExt`, `cacheSpec` and `findSpecCache?` in src/Lean/Compiler/LCNF/Specialize.lean), resolving a key to \
    its last provider in import order. The compile records every key it looks up (`findSpecCache?`, \
    `recordSpecLookup`) and the module exports the keys it created with each specialization's name \
    (`ModuleUsage.ownSpecKeys`, `lookedUpSpecKeys`); Lake rebuilds a module when the providers of a looked-up key in \
    its closure change (`UsageSidecar.specProvidersUnchanged`). Only keys and specialization names are \
    compared, not the specialization's code, which is in its own module's compiled entries."),
  (`Lean.noConfusionExt, .R1,
    "`markNoConfusion` (src/Lean/AuxRecursor.lean:87-88) is called only right after each \
    `noConfusion`-generator's own `addDecl` of the declaration it is building \
    (src/Lean/Meta/Constructions/NoConfusion.lean:258,353,429), so only the defining module writes it \
    (`MapDeclarationExtension.insert` drops a write for an imported name, src/Lean/EnvExtension.lean:178-179). \
    Both `.regular` and `.perCtor` entries of an own declaration are in `attrsEnc`."),
  (Lean.mkPrivateNameCore `Lean.OriginalConstKind `Lean.privateConstKindsExt, .R1,
    "`recordOriginalConstKind` (src/Lean/AddDecl.lean) is public and `addDeclCore` (same file) \
    writes the kind of the declaration it adds when the exported constant differs. `attrsEnc` encodes \
    the kind of each own declaration (`getOriginalConstKind?`)."),
  (`Lean.Compiler.implementedByAttr, .R1, "Own-declaration marker, in `attrsEnc`. The `implemented_by` handler rejects imported declarations (src/Lean/Attributes.lean:295-296), as does `ParametricAttribute.setParam` (:329-330), which `Compiler.setImplementedBy` (src/Lean/Compiler/ImplementedByAttr.lean:70-71) and its monadic wrapper (:75-79) call. `getParam?` of an imported name reads only its own module's entries (src/Lean/Attributes.lean:313-318)."),
  (`Lean.externAttr, .R1, "Own-declaration marker, in `attrsEnc`. The `extern` handler rejects imported declarations (src/Lean/Attributes.lean:295-296), as does `ParametricAttribute.setParam` (:329-330); it has no other writer. `getParam?` of an imported name reads only its own module's entries (:313-318)."),
  (`reducibilityCore, .R1, "Own-declaration reducibility, in `attrsEnc`. The only writer, `setReducibilityStatusCore` (src/Lean/ReducibilityAttrs.lean:93-104), sends a global status for an imported name to `reducibilityExtra` (:95-98); `setReducibilityStatus` (:266-267) and the attribute handler (:190) go through it. `getReducibilityStatusCore` reads only the imported name's own module entries from this table (:86-90)."),
  (`Lean.Compiler.CSimp.ext, .R5, "`@[csimp]` entries another module may add for an imported decl; every exported entry is in `tableDigest`."),
  (`Lean.Compiler.nospecializeAttr, .R1, "Own-declaration marker, in `attrsEnc`. The attribute handler rejects imported declarations (src/Lean/Attributes.lean:210-211), as does `TagAttribute.setTag` (:225-226). `hasTag` of an imported name reads only its own module's entries (:232-233)."),
  (`Lean.Compiler.LCNF.impureSigExt, .R1, "Own-declaration impure signature, read by `entriesEnc` whoever wrote it. An entry written for another module's name is not read: importers resolve a name's signature through its defining module."),
  (Lean.mkPrivateNameCore `Lean.Compiler.LCNF.ToImpure `Lean.Compiler.LCNF.taggedReturnAttr, .viaOwnEntries,
    "Module-private, read only at src/Lean/Compiler/LCNF/ToImpure.lean:347 for the declaration \
    being lowered (written at src/Lean/Compiler/LCNF/ToImpure.lean:23); its effect reaches \
    importers only through that declaration's own impure signature and IR, which `entriesEnc` \
    encodes. The digest code does not read the attribute itself, so it is not in \
    `ModuleUsage.digestedOwnTables`."),
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
    (`addUnificationHint`, src/Lean/Meta/UnificationHint.lean); the writer's exported entries \
    are part of the cross-module table digest, each with its discrimination-tree keys, which the writer \
    computes in its own environment and `tryUnificationHints` matches on when it reads the whole table, so \
    the table digest stays exact against the matcher. The hints that match inside a compile are recorded \
    (`recordHintsIfCompiling` in `tryUnificationHints`): if one comes from an imported module with digests, \
    every digested import is an extra use of the module (`ModuleUsage.writeUsage`; a toolchain hint is pinned \
    by the Lean githash). An instance a hint resolves records compiler code (`recordIfCompiling` in \
    `synthInstanceCore?`, src/Lean/Meta/SynthInstance.lean) (case `tc_hint`)."),
  (`Lean.auxParentProjInfoExt, .R1,
    "`addAuxParentProjectionInfo` (src/Lean/ProjFns.lean:77-78) is public; the elaborator calls it in \
    `mkCoercionToCopiedParent` (src/Lean/Elab/Structure.lean:1440) for the parent projection of the \
    structure being declared. The only reader, `getStuckMVar?` (src/Lean/Meta/WHNF.lean:368-373), looks \
    up the head projection and reports a stuck metavariable. `attrsEnc` encodes the entry of each own \
    declaration (`getAuxParentProjectionInfo?`)."),
  (`Lean.Elab.Structural.eqnInfoExt, .R1,
    "`registerEqnsInfo` (src/Lean/Elab/PreDefinition/Structural/Eqns.lean) is public and inserts \
    the `EqnInfo` of a declaration; the elaborator calls it in `structuralRecursion` for the declaration \
    it defines. The only read on the compiler's path is `recArgPos`, through the \
    `@[export lean_get_structural_rec_arg_pos]` implementation of `Meta.getStructuralRecArgPos?` \
    (`getStructuralRecArgPosImp?`), by smart unfolding in `whnf` (src/Lean/Meta/WHNF.lean:899). `attrsEnc` encodes the \
    `recArgPos` of each own declaration (`getStructuralRecArgPosOfEnv?`).")
]

/-- How a write to a table is handled when it happens outside the compiler or outside the declaring module.
`ownDeclDigest`: the table's entry for the module's own declaration is read by `attrsEnc` or `entriesEnc` and so
is in that declaration's digest, whoever wrote it (an attribute only
read while lowering the declaration itself reaches importers through the digested entries that lowering
produces); importers resolve the entries of an imported name through its defining module, so an entry written
for another module's name is dropped by the writer or never read. `moduleDigest`: a value of the module itself,
in every digest of the module. `tableDigest`: a cross-module table whose exported entries are in the module's
cross-module table digest. `specKeys`: the specialization cache; the module records the keys it looked up and
exports the keys it created, and Lake compares the providers of every looked-up key in the closure.
`uncovered`: none of these. -/
inductive Mechanism where
  | ownDeclDigest | moduleDigest | tableDigest | specKeys
  | uncovered
deriving BEq

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

/-- Writers per table: `table → [(function that writes it, mechanism, reason)]`: every function in `src/` that
calls `addEntry`, `modifyState`, `setState`, `insert`, `tag`, `setTag`, `setParam`,
`setValue` or `add` on the table, and the public wrappers of those. Functions that only forward to another row's
function are listed when they are public API. Attribute handlers have no constant of their own: they are named by
the registration function that creates them, or by the function they call. The low-level
`PersistentEnvExtension.addEntry`/`setState`/`modifyState` (src/Lean/Environment.lean) write any
table and are not repeated per table: a write through them is covered because the digest code reads the table, not
the writer, which holds for every table classified `R1`, `R1R5` or `R5` (they must be listed in
`ModuleUsage.digestedOwnTables` / `digestedCrossTables`, checked in the `#eval` below). Every table of a class that
needs writers (see `needsWriters`) must have a row. -/
def writers : List (Name × List (Name × Mechanism × String)) := [
  (`Lean.Compiler.LCNF.monoTypeExt, [
    (`Lean.Compiler.LCNF.setOtherDeclMonoType, .ownDeclDigest,
      "Called only by `compileInductives` (src/Lean/Compiler/LCNF/ToImpureType.lean); any entry of an own name is in `entriesEnc`, whoever wrote it."),
    (`Lean.Compiler.LCNF.getOtherDeclMonoType, .ownDeclDigest,
      "Caches a non-inductive name's mono type on a miss with a direct `modifyState` (src/Lean/Compiler/LCNF/MonoTypes.lean); the state is exported for the module's own declarations, where `entriesEnc` reads it.")]),
  (`Lean.Meta.instanceExtension, [
    (`Lean.Meta.addInstance, .tableDigest,
      "No imported-declaration check (src/Lean/Meta/Instances.lean:284-305): an entry for another module's declaration is in the cross-module table digest, one for its own is in `attrsEnc`."),
    (`Lean.Meta.registerInstance, .tableDigest, "Sets instance reducibility, then `addInstance` (src/Lean/Meta/Instances.lean:329-331).")]),
  (`Lean.Meta.matcherLikeExt, [
    (`Lean.Meta.markMatcherLike, .ownDeclDigest,
      "Public (src/Lean/Meta/Match/MatcherInfo.lean:192-193); the elaborator calls it in `mkCasesOnSameCtorHet` (src/Lean/Meta/Constructions/CasesOnSameCtor.lean:105). The tag of an own declaration is in `attrsEnc` (`Meta.isMatcherLikeCore`)."),
    (`Lean.TagDeclarationExtension.tag, .ownDeclDigest, tagDeclReason)]),
  (`Lean.noncomputableExt, [
    (`Lean.addNoncomputable, .ownDeclDigest, tagDeclReason),
    (`Lean.TagDeclarationExtension.tag, .ownDeclDigest, tagDeclReason)]),
  (`reducibilityExtra, [
    (`Lean.setReducibilityStatus, .tableDigest,
      "Public, no validation (src/Lean/ReducibilityAttrs.lean:266-267): a global status for an imported name goes to this table (:98), exported and in the cross-module table digest; so do `setReducibleAttribute` (:270-271) and `setIrreducibleAttribute` (:297-298)."),
    (`Lean.setReducibilityStatusCore, .tableDigest,
      "Routes imported names, and scoped and local statuses, to this table (src/Lean/ReducibilityAttrs.lean:93-104); local ones are never exported."),
    (`Lean.addAttr, .tableDigest,
      "The five reducibility attributes (src/Lean/ReducibilityAttrs.lean:186-259); `validate` rejects a global status on an imported name unless `allowUnsafeReducibility` is set (:146-147).")]),
  (`Lean.Compiler.LCNF.baseExt, [
    (`Lean.Compiler.LCNF.saveBaseDeclCore, .ownDeclDigest,
      "Writes the entry (src/Lean/Compiler/LCNF/PhaseExt.lean:170-171); a base declaration of an own name is in `entriesEnc`, whoever wrote it. An entry for another module's name is not read by importers, which resolve a name's declaration through its defining module."),
    (`Lean.Compiler.LCNF.Decl.saveBase, .ownDeclDigest,
      "Saves a declaration under its name (src/Lean/Compiler/LCNF/PhaseExt.lean:180-181); called by passes."),
    (`Lean.Compiler.LCNF.Decl.save, .ownDeclDigest, "Dispatches on the phase to the three `save*` functions (src/Lean/Compiler/LCNF/PhaseExt.lean:189-196).")]),
  (`Lean.builtinInitAttr, [
    (`Lean.setBuiltinInitAttr, .ownDeclDigest,
      "`setParam` on the attribute, which rejects imported declarations (src/Lean/Attributes.lean:329-330) (src/Lean/Compiler/InitAttr.lean:146-147)."),
    (`Lean.declareBuiltin, .ownDeclDigest,
      "Adds a fresh auxiliary declaration and sets the attribute on that own name (src/Lean/Compiler/InitAttr.lean:149-157)."),
    (`Lean.registerInitAttrUnsafe, .ownDeclDigest, parametricAttrReason)]),
  (`Lean.Compiler.LCNF.specExtension, [
    (`Lean.Compiler.LCNF.saveSpecEntries, .ownDeclDigest,
      "Called by `Specialize.main` (src/Lean/Compiler/LCNF/Specialize.lean); a spec entry of an own name is in `entriesEnc`, whoever wrote it."),
    (`Lean.Compiler.LCNF.Specialize.loop, .ownDeclDigest,
      "Writes `alreadySpecialized` entries in the same pass (src/Lean/Compiler/LCNF/Specialize.lean).")]),
  (`Lean.Compiler.inlineAttrs, [
    (`Lean.Compiler.setInlineAttribute, .ownDeclDigest,
      "`setValue`, which rejects imported declarations (src/Lean/Attributes.lean:403-404) (src/Lean/Compiler/InlineAttrs.lean:80-81)."),
    (`Lean.Meta.setInlineAttribute, .ownDeclDigest, "Wrapper of `Compiler.setInlineAttribute` (src/Lean/Meta/Basic.lean:2348-2352)."),
    (`Lean.registerEnumAttributes, .ownDeclDigest,
      "The five inline attributes' handler rejects imported declarations (src/Lean/Attributes.lean:381-382); the value is in `attrsEnc`.")]),
  (`Lean.neverExtractAttr, [
    (`Lean.TagAttribute.setTag, .ownDeclDigest, tagAttrReason),
    (`Lean.registerTagAttribute, .ownDeclDigest, tagAttrReason)]),
  (`Lean.auxRecExt, [
    (`Lean.markAuxRecursor, .ownDeclDigest,
      "Public (src/Lean/AuxRecursor.lean:29-30); called in src/Lean/Meta/Constructions/BRecOn.lean:110,285, CasesOn.lean:80, CasesOnSameCtor.lean:106, CtorElim.lean:157,205, RecOn.lean:57. The tag of an own declaration is in `attrsEnc` (`auxRecExt.isTagged`)."),
    (`Lean.TagDeclarationExtension.tag, .ownDeclDigest, tagDeclReason)]),
  (`Lean.projectionFnInfoExt, [
    (`Lean.addProjectionFnInfo, .ownDeclDigest,
      "Public (src/Lean/ProjFns.lean:33-34); the elaborator calls it in `mkProjections` (src/Lean/Meta/Structure.lean:117). The entry of an own declaration is in `attrsEnc` (`getProjectionFnInfo?`)."),
    (`Lean.MapDeclarationExtension.insert, .ownDeclDigest, mapDeclReason)]),
  (`Lean.Compiler.specializeAttr, [
    (`Lean.ParametricAttribute.setParam, .ownDeclDigest, parametricAttrReason),
    (`Lean.registerParametricAttribute, .ownDeclDigest, parametricAttrReason)]),
  (`Lean.modPkgExt, [
    (`Lean.Environment.setModulePackage, .moduleDigest,
      "Called by the header processing (src/Lean/Elab/Import.lean:166); the package is in every node digest of the module (`ModuleUsage.ownNodes`, src/Lean/Util/ModuleUsage.lean).")]),
  (`Lean.Compiler.LCNF.impureTrivialStructureInfoExt, [
    (`Lean.Compiler.LCNF.setHasTrivialImpureStructure?, .ownDeclDigest,
      "Sole caller `compileInductives` (src/Lean/Compiler/LCNF/ToImpureType.lean); any entry of an own inductive is in `entriesEnc`, whoever wrote it."),
    (`Lean.Compiler.LCNF.Irrelevant.setHasTrivialStructure?, .ownDeclDigest,
      "The generic writer it forwards to (src/Lean/Compiler/LCNF/Irrelevant.lean:75-79).")]),
  (`Lean.Compiler.weakSpecializeAttr, [
    (`Lean.TagAttribute.setTag, .ownDeclDigest, tagAttrReason),
    (`Lean.registerTagAttribute, .ownDeclDigest, tagAttrReason)]),
  (`Lean.Compiler.LCNF.UnreachableBranches.functionSummariesExt, [
    (`Lean.Compiler.LCNF.UnreachableBranches.addFunctionSummary, .ownDeclDigest,
      "Public (src/Lean/Compiler/LCNF/ElimDeadBranches.lean:304-305); a summary of an own name is in `entriesEnc`, whoever wrote it."),
    (`Lean.Compiler.LCNF.Decl.elimDeadBranches, .ownDeclDigest,
      "The pass's own write (src/Lean/Compiler/LCNF/ElimDeadBranches.lean:671-673).")]),
  (`Lean.exportAttr, [
    (`Lean.ParametricAttribute.setParam, .ownDeclDigest, parametricAttrReason),
    (`Lean.registerParametricAttribute, .ownDeclDigest, parametricAttrReason)]),
  (`Lean.IR.declMapExt, [
    (`Lean.IR.addDecl, .ownDeclDigest,
      "Public (src/Lean/Compiler/IR/CompilerM.lean:197-198); an IR declaration of an own name is in `entriesEnc`, whoever added it. A declaration added for another module's name lists it among the module's compiled names (`extraConstNames`), which its provides digest covers; `getModuleIdxFor?` records each name an importer's compile resolves (`noteResolved`), and Lake rebuilds it when the provider set changes there (cases `irdup_first`, `cs_nested`)."),
    (`Lean.IR.addDecls, .ownDeclDigest, "Called by `IR.compile` (src/Lean/Compiler/IR.lean:35), which `PassManager.run` calls."),
    (`Lean.IR.ToIR.addDecl, .ownDeclDigest,
      "Adds the dummy declaration of an extern (src/Lean/Compiler/IR/ToIR.lean:54-55,202); covered like `IR.addDecl`.")]),
  (`Lean.Compiler.LCNF.impureTypeExt, [
    (`Lean.Compiler.LCNF.setImpureType, .ownDeclDigest,
      "Sole caller `compileInductives` (src/Lean/Compiler/LCNF/ToImpureType.lean); any entry of an own inductive is in `entriesEnc`, whoever wrote it.")]),
  (`Lean.classExtension, [
    (`Lean.addClass, .tableDigest,
      "No imported-declaration check (src/Lean/Class.lean:167-178): an entry for another module's class is in the cross-module table digest, one for its own is in `attrsEnc` (`getOutParamPositions?`). The `class` and `univ_out_params` attributes (:184-222) call or repeat it.")]),
  (`Lean.Compiler.LCNF.passManagerExt, [
    (`Lean.Compiler.LCNF.addPass, .tableDigest,
      "Public, any declaration (src/Lean/Compiler/LCNF/Passes.lean:180-185); the `cpass` attribute (:190-199) calls it. The entry is exported and the module's cross-module table digest holds the installer's name with its digest. State written without an entry (`modifyState`) is not exported, so it changes only the writing module's own compile, whose results are in its compiled entries.")]),
  (`Lean.Compiler.LCNF.ctorLayoutExt, [
    (`Lean.Compiler.LCNF.setCtorLayout, .ownDeclDigest,
      "Sole caller `compileInductives` (src/Lean/Compiler/LCNF/ToImpureType.lean); any entry of an own constructor is in `entriesEnc`, whoever wrote it.")]),
  (`Lean.metaExt, [
    (`Lean.markMeta, .ownDeclDigest,
      "Called by the elaborator next to the declaration it adds (e.g. src/Lean/Elab/MutualDef.lean:1080,1215); `isMarkedMeta` is in `attrsEnc`. " ++ tagDeclReason),
    (`Lean.TagDeclarationExtension.tag, .ownDeclDigest, tagDeclReason)]),
  (`Lean.regularInitAttr, [
    (`Lean.registerInitAttrUnsafe, .ownDeclDigest, parametricAttrReason),
    (`Lean.ParametricAttribute.setParam, .ownDeclDigest, parametricAttrReason)]),
  (`Lean.Compiler.LCNF.trivialStructureInfoExt, [
    (`Lean.Compiler.LCNF.setHasTrivialStructure?, .ownDeclDigest,
      "Sole caller `compileInductives` (src/Lean/Compiler/LCNF/ToImpureType.lean); any entry of an own inductive is in `entriesEnc`, whoever wrote it."),
    (`Lean.Compiler.LCNF.Irrelevant.setHasTrivialStructure?, .ownDeclDigest,
      "The generic writer it forwards to (src/Lean/Compiler/LCNF/Irrelevant.lean:75-79).")]),
  (`Lean.Compiler.LCNF.Simp.ConstantFold.folderExt, [
    (`Lean.Compiler.LCNF.Simp.ConstantFold.registerFolder, .tableDigest,
      "Public, any declaration (src/Lean/Compiler/LCNF/Simp/ConstantFold.lean:837-839): the entry is exported and the module's cross-module table digest holds it with the folder's digest. State written without an entry (`modifyState`) is not exported, so it changes only the writing module's own compile, whose results are in its compiled entries.")]),
  (`Lean.Compiler.LCNF.monoExt, [
    (`Lean.Compiler.LCNF.saveMonoDeclCore, .ownDeclDigest, "As `saveBaseDeclCore` (src/Lean/Compiler/LCNF/PhaseExt.lean:173-174)."),
    (`Lean.Compiler.LCNF.Decl.saveMono, .ownDeclDigest, "As `Decl.saveBase` (src/Lean/Compiler/LCNF/PhaseExt.lean:183-184)."),
    (`Lean.Compiler.LCNF.Decl.save, .ownDeclDigest, "Dispatches on the phase to the three `save*` functions (src/Lean/Compiler/LCNF/PhaseExt.lean:189-196).")]),
  (`Lean.sparseCasesOnExt, [
    (`Lean.markSparseCasesOn, .ownDeclDigest,
      "Public (src/Lean/AuxRecursor.lean:57-58); called in src/Lean/Meta/Constructions/CtorElim.lean:206 and SparseCasesOn.lean:149. The tag of an own declaration is in `attrsEnc` (`isSparseCasesOn`)."),
    (`Lean.TagDeclarationExtension.tag, .ownDeclDigest, tagDeclReason)]),
  (`Lean.Compiler.LCNF.Specialize.specCacheExt, [
    (`Lean.Compiler.LCNF.Specialize.cacheSpec, .specKeys,
      "The only writer (`cacheSpec`, src/Lean/Compiler/LCNF/Specialize.lean), public; the specializer calls it. A module's own entries are exported as `specKeys` (`ModuleUsage.ownSpecKeys`), and `findSpecCache?` records every key the compile looks up (`recordSpecLookup`), so Lake compares the providers of each looked-up key in the closure (`UsageSidecar.specProvidersUnchanged`).")]),
  (`Lean.noConfusionExt, [
    (`Lean.markNoConfusion, .ownDeclDigest,
      "Call sites: src/Lean/Meta/Constructions/NoConfusion.lean:258,353,429, each right after the `addDecl` of the constant it describes; both shapes of an own declaration's entry are in `attrsEnc`."),
    (`Lean.MapDeclarationExtension.insert, .ownDeclDigest, mapDeclReason)]),
  (`Lean.privateConstKindsExt, [
    (`Lean.recordOriginalConstKind, .ownDeclDigest,
      "Public (src/Lean/AddDecl.lean); the elaborator calls it in src/Lean/Elab/MutualDef.lean:1271 for the theorem it just added. The kind of an own declaration is in `attrsEnc` (`getOriginalConstKind?`)."),
    (`Lean.addDeclCore, .ownDeclDigest,
      "Writes the kind of the `Declaration` it is adding, only when the exported constant differs and no entry exists (src/Lean/AddDecl.lean); the entry is in `attrsEnc` (`getOriginalConstKind?`).")]),
  (`Lean.Compiler.implementedByAttr, [
    (`Lean.Compiler.setImplementedBy, .ownDeclDigest, parametricAttrReason),
    (`Lean.setImplementedBy, .ownDeclDigest, "Monadic wrapper of `Compiler.setImplementedBy` (src/Lean/Compiler/ImplementedByAttr.lean:75-79)."),
    (`Lean.registerParametricAttribute, .ownDeclDigest, parametricAttrReason)]),
  (`Lean.externAttr, [
    (`Lean.ParametricAttribute.setParam, .ownDeclDigest, parametricAttrReason),
    (`Lean.registerParametricAttribute, .ownDeclDigest, parametricAttrReason)]),
  (`reducibilityCore, [
    (`Lean.setReducibilityStatusCore, .ownDeclDigest,
      "Writes this table only when the name is not from an imported module (src/Lean/ReducibilityAttrs.lean:95-101); the entry is in `attrsEnc`."),
    (`Lean.setReducibilityStatus, .ownDeclDigest,
      "Public, no validation: an own name goes here, an imported name to `reducibilityExtra` (src/Lean/ReducibilityAttrs.lean:266-267)."),
    (`Lean.addAttr, .ownDeclDigest, "The five reducibility attributes (src/Lean/ReducibilityAttrs.lean:186-259).")]),
  (`Lean.Compiler.CSimp.ext, [
    (`Lean.Compiler.CSimp.add, .tableDigest,
      "No imported-declaration check (`CSimp.add`, src/Lean/Compiler/CSimpAttr.lean); the `csimp` attribute registered there calls it. Every entry is in the cross-module table digest."),
    (`Lean.ScopedEnvExtension.add, .tableDigest, "Generic scoped-extension writer (src/Lean/ScopedEnvExtension.lean:275-277).")]),
  (`Lean.Compiler.nospecializeAttr, [
    (`Lean.TagAttribute.setTag, .ownDeclDigest, tagAttrReason),
    (`Lean.registerTagAttribute, .ownDeclDigest, tagAttrReason)]),
  (`Lean.Compiler.LCNF.impureSigExt, [
    (`Lean.Compiler.LCNF.saveImpureDeclCore, .ownDeclDigest,
      "As `saveBaseDeclCore` (src/Lean/Compiler/LCNF/PhaseExt.lean:176-178). The standalone `leanir` tool also adds the signatures of externs (src/LeanIR.lean:120); it re-adds what this module's own run already exported and writes no usage file."),
    (`Lean.Compiler.LCNF.Decl.saveImpure, .ownDeclDigest, "As `Decl.saveBase` (src/Lean/Compiler/LCNF/PhaseExt.lean:186-187)."),
    (`Lean.Compiler.LCNF.Decl.save, .ownDeclDigest, "Dispatches on the phase to the three `save*` functions (src/Lean/Compiler/LCNF/PhaseExt.lean:189-196).")]),
  (`Lean.Compiler.LCNF.taggedReturnAttr, [
    (`Lean.TagAttribute.setTag, .ownDeclDigest,
      "The attribute is read only while lowering the tagged declaration itself (src/Lean/Compiler/LCNF/ToImpure.lean:347), so it changes only that declaration's impure signature and IR, which `entriesEnc` encodes. `setTag` rejects declarations of imported modules (src/Lean/Attributes.lean:225-226)."),
    (`Lean.registerTagAttribute, .ownDeclDigest,
      "As `setTag`: the attribute handler rejects imported declarations (src/Lean/Attributes.lean:210-211), and the attribute's only effect is on the declaration's own digested entries.")]),
  (`Lean.matchPatternAttr, [
    (`Lean.TagAttribute.setTag, .ownDeclDigest, tagAttrReason),
    (`Lean.registerTagAttribute, .ownDeclDigest, tagAttrReason)]),
  (`Lean.Meta.unificationHintExtension, [
    (`Lean.Meta.addUnificationHint, .tableDigest,
      "No imported-declaration check (`addUnificationHint`, src/Lean/Meta/UnificationHint.lean); the `unification_hint` attribute registered there calls it. Every entry is in the cross-module table digest.")]),
  (`Lean.auxParentProjInfoExt, [
    (`Lean.addAuxParentProjectionInfo, .ownDeclDigest,
      "Public (src/Lean/ProjFns.lean:77-78); the elaborator calls it in `mkCoercionToCopiedParent` (src/Lean/Elab/Structure.lean:1440) for the parent projection it just added. The entry of an own declaration is in `attrsEnc` (`getAuxParentProjectionInfo?`)."),
    (`Lean.MapDeclarationExtension.insert, .ownDeclDigest, mapDeclReason)]),
  (`Lean.Elab.Structural.eqnInfoExt, [
    (`Lean.Elab.Structural.registerEqnsInfo, .ownDeclDigest,
      "Public (src/Lean/Elab/PreDefinition/Structural/Eqns.lean); the elaborator calls it in `structuralRecursion` (src/Lean/Elab/PreDefinition/Structural/Main.lean:209). The `recArgPos` of an own declaration is in `attrsEnc` (`getStructuralRecArgPosOfEnv?`)."),
    (`Lean.MapDeclarationExtension.insert, .ownDeclDigest, mapDeclReason)]),
  (`Lean.Meta.Match.Extension.extension, [
    (`Lean.Meta.Match.addMatcherInfo, .ownDeclDigest,
      "Call sites: src/Lean/Meta/Match/Match.lean:1126 and src/Lean/Meta/Constructions/CasesOnSameCtor.lean:225, each right after the `addDecl` of the matcher it describes; the entry is in `attrsEnc`."),
    (`Lean.Meta.Match.Extension.addMatcherInfo, .tableDigest,
      "Public, raw `addEntry` with no own-module check (src/Lean/Meta/Match/MatcherInfo.lean:138-140): an entry a module writes for an imported matcher is exported, `SMap.find?` prefers local writes (src/Lean/Data/SMap.lean:60-62), so it is in the cross-module table digest, in import order.")]),
  (`Lean.declMetaExt, [
    (`Lean.setDeclMeta, .tableDigest,
      "Public, no ownership check (src/Lean/Compiler/MetaAttr.lean): an entry for an own declaration is in `attrsEnc` (`isDeclMeta`), one for another module's declaration is in the cross-module table digest."),
    (`Lean.IR.inferMeta, .ownDeclDigest,
      "Marks the `meta` closure of the module's own declarations inside `IR.compile` (src/Lean/Compiler/IR/Meta.lean:42-49, src/Lean/Compiler/IR.lean:36)."),
    (`Lean.IR.setClosureMeta, .ownDeclDigest,
      "Only for references `findLocalDecl` finds, i.e. the module's own IR (src/Lean/Compiler/IR/Meta.lean:32-40).")]),
  (`Lean.structureExt, [
    (`Lean.registerStructure, .ownDeclDigest,
      "Called only by the `structure` elaborator for the structure it declares (src/Lean/Elab/Structure.lean:1303). It has no imported-module check, only a panic if the local state already has the name (src/Lean/Structure.lean:115-116), but the extension's state holds only this module's entries (:91) and `getStructureInfo?` answers an imported name from its own module's entries (:134-137), so an entry written for an imported name is never read; the entry for an own structure is in `attrsEnc`."),
    (`Lean.setStructureParents, .ownDeclDigest,
      "Sole caller src/Lean/Elab/Structure.lean:1558; throws unless the structure is in this module's state (src/Lean/Structure.lean:128-131).")])
]

/-- Coverage of a process-global value the compile reads (a reached constant with an initializer that is not a
registered persistent environment extension). -/
inductive GlobalClass where
  /-- Holds code the compile calls; installing other code is detected (pointer identity with the built-in value at
  compile time, or privacy), and then the module's usage data depends on every import. -/
  | hook
  /-- Usage-recording state: private, only switched on, added to or read. -/
  | recording
  /-- A non-persistent environment extension: its state starts from a constant and only the current module's own
  elaboration and compile write it, so no import reaches it. -/
  | moduleLocal
  /-- Read only to format messages and traces, never to generate code. -/
  | messagesOnly
  | uncovered

/-- `global → (class, reason)`, keyed by the name without the private-name prefix. -/
def globals : List (Name × GlobalClass × String) := [
  (`Lean.compileDeclsRef, .hook,
    "Public `IO.Ref` holding the implementation `compileDecls` calls (src/Lean/CoreM.lean); an imported `initialize` can wrap it. `runCompileDecls` compares it by pointer with the value the compiler installed (`setBuiltinCompileDecls`, set once from the compiler's `builtin_initialize` in src/Lean/Compiler/LCNF/Main.lean) at every call, from `compileDecls` and `resumeCompilation`, and calls `recordCompilerCode` on any other value (cases `hk_fail`, `hk_opt`)."),
  (`Lean.builtinCompileDeclsRef, .hook,
    "Private; the compiler's own `compileDecls` implementation, set once by `setBuiltinCompileDecls`, which throws on a second call, and read by `runCompileDecls` to compare `compileDeclsRef` with."),
  (`Lean.reservedNamePredicatesExt, .hook,
    "Predicates `Environment.find?` calls (`isReservedName`, src/Lean/ResolveName.lean). An environment starts with the array `reservedNamePredicatesRef` holds (the initial state of `reservedNamePredicatesExt`); `runCompileDecls` compares the state with that array by pointer at every compile, so a predicate the module adds to its own environment records compiler code (case `rp_own`), as does one an import registers after the environment exists (it changes the ref, not the environment: over-recorded, never missed). A plugin's predicates are registered before the environment exists, so `registerReservedNamePredicate` records compiler code when a plugin's initializers register one (`pluginLoading`, set by `loadPlugin`)."),
  (`Lean.reservedNamePredicatesRef, .hook,
    "The predicates registered so far (`registerReservedNamePredicate`, initialization only), the initial state of `reservedNamePredicatesExt`; `runCompileDecls` reads it to compare the environment's predicates with. An import's initializers run after the environment's extension states exist (`finalizeImport`), so a predicate an import registers is not in the environment and makes the comparison fail (compiler code recorded)."),
  (`Lean.ppExt, .messagesOnly,
    "Pretty-printing functions, called to format messages (src/Lean/Util/PPExt.lean:66-67,84-127); their state is `ppFnsRef` when the environment is created."),
  (`Lean.internalExceptionsRef, .messagesOnly,
    "Names of internal exception ids (src/Lean/InternalExceptionId.lean:22,31-34), read to print an exception."),
  (`Lean.inheritedTraceOptions, .messagesOnly,
    "Trace classes whose option is inherited by subclasses (src/Lean/Util/Trace.lean:77), read only to decide which traces to collect."),
  (`Lean.manualRoot, .messagesOnly,
    "The documentation URL root (src/Lean/DocString/Links.lean:35), read to build links in messages."),
  (`Lean.usedByChecksRef, .recording, "Private (src/Lean/Util/UsedByChecks.lean)."),
  (`Lean.usageRecordingRef, .recording, "Private (src/Lean/Util/UsedByChecks.lean)."),
  (`Lean.specLookupsRef, .recording, "Private (src/Lean/Util/UsedByChecks.lean)."),
  (`Lean.compilerCodeRef, .recording, "Private (src/Lean/Util/UsedByChecks.lean); only ever set to `true`."),
  (`Lean.compileHintsRef, .recording, "Private (src/Lean/Util/UsedByChecks.lean); only ever added to."),
  (`Lean.extraModUsesByChecksRef, .recording, "Private (src/Lean/ExtraModUses.lean)."),
  (`Lean.extraModUsesByCmdRef, .recording,
    "Private (src/Lean/ExtraModUses.lean); read only by the per-command usage records."),
  (`Lean.currentCommandRef, .recording,
    "Private (src/Lean/Util/UsedByChecks.lean): the running command's index, read only to attribute what is recorded."),
  (`Lean.usedByCommandRef, .recording,
    "Private (src/Lean/Util/UsedByChecks.lean); read only by the per-command usage records."),
  (`Lean.Compiler.LCNF.baseTransparentDeclsExt, .moduleLocal,
    "`mkOrderedDeclSetExt` (src/Lean/Compiler/LCNF/PhaseExt.lean:26): non-persistent, initially empty."),
  (`Lean.Compiler.LCNF.monoTransparentDeclsExt, .moduleLocal,
    "`mkOrderedDeclSetExt` (src/Lean/Compiler/LCNF/PhaseExt.lean): non-persistent, initially empty."),
  (`Lean.Compiler.LCNF.impureTransparentDeclsExt, .moduleLocal,
    "`mkOrderedDeclSetExt` (src/Lean/Compiler/LCNF/PhaseExt.lean): non-persistent, initially empty."),
  (`Lean.Compiler.LCNF.declOrderExt, .moduleLocal,
    "`mkOrderedDeclSetExt` (src/Lean/Compiler/LCNF/PhaseExt.lean:220): non-persistent, initially empty."),
  (`Lean.Compiler.LCNF.impureExt, .moduleLocal,
    "`registerEnvExtension (mkInitial := pure {})` (src/Lean/Compiler/LCNF/PhaseExt.lean:109-110)."),
  (`Lean.closedTermCacheExt, .moduleLocal,
    "`registerEnvExtension (pure {})` (src/Lean/Compiler/ClosedTermCache.lean:22-23)."),
  (`Lean.Compiler.LCNF.publicDeclsExt, .moduleLocal,
    "`mkOrderedDeclSetExt` (src/Lean/Compiler/LCNF/PublicDeclsExt.lean:32): non-persistent, initially empty."),
  (`Lean.Compiler.LCNF.simpleGroundDeclExt, .moduleLocal,
    "`registerEnvExtension (pure {})` (src/Lean/Compiler/LCNF/SimpleGroundExpr.lean:89-90)."),
  (`Lean.Compiler.LCNF.auxDeclCacheExt, .moduleLocal,
    "`CacheExtension.register` (src/Lean/Compiler/LCNF/AuxDeclCache.lean:21): a non-persistent environment extension (src/Lean/Compiler/LCNF/CompilerM.lean:552)."),
  (`Lean.Compiler.LCNF.baseTypeExt, .moduleLocal,
    "`CacheExtension.register` (src/Lean/Compiler/LCNF/BaseTypes.lean:20): a non-persistent environment extension (src/Lean/Compiler/LCNF/CompilerM.lean:552).")]

/-- What a `Meta` function the compiler calls (`Lean.Compiler.*` calling into `Lean.Meta.*`) reads. -/
inductive MetaClass where
  /-- Reduces or infers types: reads the definitions it unfolds (used names, digested), their reducibility
  (`attrsEnc`, `tableDigest`), projection and structure data (`attrsEnc`), and through `isDefEq` can reach
  unification hints and instance resolution, which a compile records (`recordHintsIfCompiling`,
  `recordIfCompiling`). -/
  | reduces
  /-- Reads one declaration's attribute data by name (matcher info, instance membership, inductive kind), which
  `attrsEnc` or the declaration's digest covers. -/
  | declData
  /-- Builds terms or local contexts, or throws, without reading environment data. -/
  | builds
  /-- Formats messages and traces only. -/
  | messagesOnly
  | uncovered

/-- `Meta` function the compiler calls directly → (class, reason). -/
def metaEntries : List (Name × MetaClass × String) := [
  (``Lean.Meta.whnf, .reduces, "toLCNFType.whnfEta, visitNoConfusion (src/Lean/Compiler/LCNF/Types.lean, ToLCNF.lean)."),
  (``Lean.Meta.whnfD, .reduces, "impureIrrelevantType, isPropFormerType."),
  (``Lean.Meta.inferType, .reduces, "Throughout ToLCNF and Irrelevant."),
  (``Lean.Meta.isProp, .reduces, "Irrelevance checks."),
  (``Lean.Meta.isProof, .reduces, "countProofOverApp."),
  (``Lean.Meta.isTypeFormer, .reduces, "toLCNFType.visitApp."),
  (``Lean.Meta.isTypeFormerType, .reduces, "Irrelevance checks."),
  (``Lean.Meta.forallTelescopeReducing, .reduces, "setCtorLayout, getRelevantCtorFields?."),
  (``Lean.Meta.etaExpand, .reduces, "toDecl: infers the value's type."),
  (``Lean.Meta.mkProjection, .reduces, "visitProj: reads structure info and infers types."),
  (``Lean.Meta.isConstructorApp?, .reduces, "visitNoConfusion: reduces to constructor applications."),
  (``Lean.Meta.transform, .reduces, "Specialize.mkKey: runs the compiler's own pre/post functions over the key."),
  (``Lean.Meta.isInstance, .declData, "inlineCandidate?: instance membership by name; the instance entries are in `tableDigest`."),
  (``Lean.Meta.getMatcherInfo?, .declData, "inlineMatcher: matcher info of an own declaration, in `attrsEnc`."),
  (``Lean.Meta.isMatcher, .declData, "shouldGenerateCode: matcher info."),
  (``Lean.Meta.isMatcherLike, .declData, "Matcher info."),
  (``Lean.Meta.Match.MatcherInfo.arity, .declData, "A field of matcher info already read."),
  (``Lean.Meta.Match.MatcherInfo.altNumParams, .declData, "A field of matcher info already read."),
  (``Lean.Meta.Match.MatcherInfo.getFirstAltPos, .declData, "A field of matcher info already read."),
  (``Lean.Meta.isInductivePredicateVal, .declData, "The inductive's kernel data, in its digest."),
  (``Lean.Meta.lambdaTelescope, .builds, "Opens binders without reducing."),
  (``Lean.Meta.forallTelescope, .builds, "Opens binders without reducing."),
  (``Lean.Meta.forallBoundedTelescope, .builds, "Opens binders without reducing."),
  (``Lean.Meta.withLocalDecl, .builds, "Extends the local context."),
  (``Lean.Meta.withLetDecl, .builds, "Extends the local context."),
  (``Lean.Meta.withTransparency, .builds, "Sets the transparency of the queries it wraps."),
  (``Lean.Meta.mkLambdaFVars, .builds, "Abstracts local variables."),
  (``Lean.Meta.mkForallFVars, .builds, "Abstracts local variables."),
  (``Lean.Meta.mkLetFVars, .builds, "Abstracts local variables."),
  (``Lean.Meta.MetaM.run', .builds, "Runs a `MetaM` computation."),
  (``Lean.Meta.throwFunctionExpected, .builds, "Throws."),
  (``Lean.Meta.ppExpr, .messagesOnly, "LCNF pretty-printing for traces.")]

/-- What a name the compiler builds from another name (appending a literal component to a computed name) is. -/
inductive DerivedClass where
  /-- A constant the compiler looks up by the derived name when it compiles a use of the base: in
  `ModuleUsage.derivedSuffixes`, so it is a reference of a base of its module, a use of every module that uses or
  defines the base (`derivedReads`), and listed in the `tableDigest` of a module that defines it for another
  module's base. -/
  | derived
  /-- The name of a declaration the compile creates; it folds into its owner, and the module lists it among its
  compiled names, so an importer that resolves it records where it resolved (`noteResolved` in `getModuleIdxFor?`). -/
  | compilerOnly
  /-- A name placed in the compiled code, so a compiled mention of the module that compiles it. -/
  | codeName
  /-- Matched against a name's own last component; no other name is read. -/
  | shapeTest
  /-- Not the name of a declaration: local variables and universe levels, trace classes, macro scopes, error and
  type names. -/
  | notDeclaration
  | uncovered
deriving BEq

/-- `kind suffix` → (class, reason), where `kind` is how the reached code builds the name: `mkStr` (`Name.mkStr x
"s"`, also with a string constant), `append`/`prepend` (`x ++ lit` / `lit ++ x`), `appendIndexAfter`. -/
def derivedNames : List (String × DerivedClass × String) := [
  ("mkStr _sunfold", .derived,
    "`Meta.mkSmartUnfoldingNameFor`: `unfoldDefinition?` unfolds `X` through `X._sunfold`'s value, or a bare `X` not at all when it exists (src/Lean/Meta/WHNF.lean, `.app` and `.const` cases). Cases `vd_sunfold`, `vd_sunfold_bn`, `vd_sunfold_new`, `vd_sunfold_bare`."),
  ("mkStr _unsafe_rec", .derived,
    "`Compiler.mkUnsafeRecName`: `getDeclInfo?` compiles `X._unsafe_rec`'s value as `X`'s code, `declIsNotUnsafe` reads its existence (src/Lean/Compiler/LCNF/ToDecl.lean), `checkComputable` its `noncomputable` mark for every use of `X` (ToLCNF.lean). `isUnsafeRecName?` strips it, and `toDecl` reads the base's attributes: a prefix in `ModuleUsage.internalPrefixes`. Cases `dn_unsafe_rec`, `dn_noncomp`."),
  ("mkStr casesOn", .derived,
    "`mkCasesOnName`: `Code.toMono` rewrites a `cases` on `T` when `T.casesOn` has an `implemented_by` (src/Lean/Compiler/LCNF/ToMono.lean). No case: every `cases` the compiler reaches comes from a term that mentions `T.casesOn` (a `casesOn` application, a matcher, `noConfusion`), whose digest already covers the attribute; a projection compiles to `proj`, which `toMono` does not rewrite."),
  ("append _impl", .codeName,
    "`Code.toMono` names `T._impl` and `ctor._impl` (computed fields) as the `cases` type and alternatives of the code it produces: compiled mentions."),
  ("mkStr _boxed", .compilerOnly,
    "`mkBoxedName` names the boxed declaration `addBoxedVersions` creates; `isBoxedName`, `isDeclMeta` and `isDeclPublic` strip it to read the module's own state, and the interpreter looks it up in the base's module only (`findInterpDeclBoxed`)."),
  ("append _redArg", .compilerOnly, "`Decl.reduceArity` names the reduced-arity declaration it creates."),
  ("append _at_", .compilerOnly, "`Specialize.mkSpecDecl` names the specialization it creates."),
  ("append spec", .compilerOnly, "`Specialize.mkSpecDecl` names the specialization it creates."),
  ("appendIndexAfter <computed>", .compilerOnly,
    "`LambdaLifting.mkAuxDeclName` (`_lam_N`, `_elam_N`, a fresh name: an existing one is skipped) and `mkSpecDecl` (`spec_N`). A module that gains a kernel constant or a compiled name of the same name changes its provides digest, so an importer that resolved the name is rebuilt if the name's winner or kinds change."),
  ("appendIndexAfter _boxed_const", .compilerOnly, "`ExplicitBoxing.mkCast` names the auxiliary declaration it creates."),
  ("appendIndexAfter _closed", .compilerOnly, "`ExtractClosed` names the closed term it extracts."),
  ("append spill", .codeName,
    "`spillCtorInfo` names a spill object's constructor info in IR after the constructor, a compiled mention that `State.ownerOf` strips to the constructor."),
  ("mkStr toBitVec", .codeName, "`casesUIntToMono` refers to `UIntN.toBitVec` of a builtin `UIntN`: a compiled mention of a toolchain constant."),
  ("mkStr _override", .shapeTest, "`inlineCandidate?` matches a name ending in `_override` (computed fields); no derived name is read."),
  ("mkStr boxed", .notDeclaration, "`mkBoxedVersion`'s local variable name."),
  ("mkStr overap", .notDeclaration, "`mkOverApplication`'s local variable name."),
  ("appendIndexAfter u", .notDeclaration, "`normLevel`'s universe parameter names."),
  ("appendIndexAfter x", .notDeclaration, "`abstractExprMVars`' binder names."),
  ("append Compiler", .notDeclaration, "`checkpoint`'s trace class names."),
  ("prepend Compiler", .notDeclaration, "`checkpoint`'s trace class names."),
  ("append trace", .notDeclaration, "`checkTraceOption`'s option names."),
  ("prepend trace", .notDeclaration, "`checkTraceOption`'s option names."),
  ("mkStr _@", .notDeclaration, "Macro scopes (`addMacroScope`, `MacroScopesView.review`)."),
  ("mkStr _hyg", .notDeclaration, "Macro scopes (`addMacroScope`, `MacroScopesView.review`)."),
  ("mkStr _namedError", .notDeclaration, "`kindOfErrorName`'s message kind names."),
  ("mkStr _sorry", .notDeclaration, "`SorryLabelView.decode?` matches a sorry label's own components."),
  ("mkStr Lean", .notDeclaration, "Type and profiler names (`TypeName` instances, `realizeValue`, `setAllDiagRanges`)."),
  ("mkStr Meta", .notDeclaration, "Type and profiler names (`TypeName` instances, `realizeValue`, `setAllDiagRanges`)."),
  ("mkStr AsyncConsts", .notDeclaration, "A `TypeName` instance's type name."),
  ("mkStr FunInfoEnvCacheKey", .notDeclaration, "A `TypeName` instance's type name."),
  ("mkStr RealizeValueResult", .notDeclaration, "A `TypeName` instance's type name."),
  ("mkStr realizeAndReport", .notDeclaration, "A profiler name in `realizeValue`."),
  ("mkStr realizeValue", .notDeclaration, "A profiler name in `realizeValue`."),
  ("mkStr setAllDiagRanges", .notDeclaration, "A profiler name in `setAllDiagRanges`.")]

/-- The closed name literal `e` builds, if any. -/
partial def litName? (e : Expr) : Option Name :=
  match e.getAppFn, e.getAppArgs with
  | .const ``Name.anonymous _, #[] => some .anonymous
  | .const n _, args =>
    let strs := args.filterMap fun a => match a with | .lit (.strVal s) => some s | _ => none
    if [``Name.mkStr1, ``Name.mkStr2, ``Name.mkStr3, ``Name.mkStr4, ``Name.mkStr5, ``Name.mkStr6, ``Name.mkStr7,
        ``Name.mkStr8].contains n then
      if strs.size == args.size then some (strs.foldl Name.mkStr .anonymous) else none
    else if (n == ``Name.mkStr || n == ``Name.str) && args.size == 2 then do
      let p ← litName? args[0]!
      let .lit (.strVal s) := args[1]! | none
      some (.str p s)
    else if n == ``Name.mkSimple && args.size == 1 then
      match args[0]! with | .lit (.strVal s) => some (.str .anonymous s) | _ => none
    else none
  | _, _ => none

/-- The `derivedNames` keys of the names `v` builds by appending a literal component, or a string constant's, to a
computed name. A suffix that is neither (a computed string) is not reported, except after `appendIndexAfter`. -/
def derivedKeys (env : Environment) (v : Expr) : Array String := Id.run do
  let mut out := #[]
  let mut stack := #[v]
  let mut visited : Std.HashSet UInt64 := {}
  while !stack.isEmpty do
    let e := stack.back!
    stack := stack.pop
    if visited.contains e.hash then continue
    visited := visited.insert e.hash
    let args := e.getAppArgs
    if let .const n _ := e.getAppFn then
      if (n == ``Name.mkStr || n == ``Name.str) && args.size == 2 && (litName? args[0]!).isNone then
        match args[1]! with
        | .lit (.strVal s) => out := out.push s!"mkStr {s}"
        | .const sc _ =>
          if let some (.defnInfo { value := .lit (.strVal s), .. }) := env.find? sc then out := out.push s!"mkStr {s}"
        | _ => pure ()
      if (n == ``Name.append || n == ``Name.appendCore || n == ``HAppend.hAppend || n == ``Append.append) &&
          args.size ≥ 2 then
        match litName? args[args.size - 2]!, litName? args[args.size - 1]! with
        | none, some l => if !l.isAnonymous then out := out.push s!"append {l}"
        | some l, none => if !l.isAnonymous then out := out.push s!"prepend {l}"
        | _, _ => pure ()
      if (n == ``Name.appendIndexAfter || n == ``Name.appendAfter) && args.size ≥ 2 then
        out := out.push s!"appendIndexAfter {(litName? args[0]!).elim "<computed>" toString}"
    match e with
    | .app f a => stack := stack.push f |>.push a
    | .lam _ d b _ | .forallE _ d b _ => stack := stack.push d |>.push b
    | .letE _ t v b _ => stack := stack.push t |>.push v |>.push b
    | .mdata _ b | .proj _ _ b => stack := stack.push b
    | _ => pure ()
  return out

/-- Reached functions that take a name's prefix (`Name.getPrefix`) → (whether the prefix is read as a declaration,
reason). A read prefix must be covered by `ModuleUsage.internalPrefixes`. -/
def prefixReaders : List (Name × Bool × String) := [
  (`Lean.hasNeverExtractAttribute.visit, true,
    "Reads the `never_extract` tag of each prefix while the name is internal (src/Lean/Compiler/NeverExtractAttr.lean): exactly `ModuleUsage.internalPrefixes`, which a module that uses or defines the name uses (`derivedReads`). Case `dn_never_extract`."),
  (`Lean.Compiler.LCNF.ToLCNF.toLCNF.visitNoConfusion, false,
    "`typeName := declName.getPrefix` is bound and never read (src/Lean/Compiler/LCNF/ToLCNF.lean)."),
  (`Lean.Compiler.LCNF.ToLCNF.toLCNF.visitProjFn, false,
    "Compares the constructor's prefix with the hard-coded runtime builtin types (`isRuntimeBuiltinType`)."),
  (`Lean.Compiler.LCNF.ToLCNF.bindCases.go, false, "Compares a local binder name's prefix with `_alt`."),
  (`Lean.Compiler.LCNF.mayReuse, false, "Compares two constructors' prefixes; no declaration is read.")]

#eval show CoreM Unit from do
  let env ← getEnv
  -- Roots: `compileDecls`, which every compile goes through, the LCNF/IR code-generation entry points, plus the
  -- Lean functions behind the bodiless `extern "C" lean_*` declarations of `src/library/ir_interpreter.cpp`
  -- (implemented in Lean via `@[export lean_*]`); two are `private`, whose real name is computed the way
  -- `Lean.mkPrivateName` does: `_private.<module>.0 ++ <decl>`.
  let roots := [
    ``Lean.compileDecls, ``Lean.Compiler.LCNF.main, ``Lean.IR.compile, ``Lean.Compiler.LCNF.emitC,
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
  for e in exts do
    unless env.contains (holderOf e.name) do
      errors := errors.push s!"registered extension `{e.name}` has no holder constant: `{holderOf e.name}` is not in the environment (add an entry to `aliases`)"
  -- The classification is compared with the hand-written digest lists: `R1`/`R1R5` tables must be in
  -- `digestedOwnTables`, `R5`/`R1R5` tables in `digestedCrossTables`, and both lists may name only registered extensions.
  for n in ModuleUsage.digestedOwnTables ++ ModuleUsage.digestedCrossTables do
    unless registered.contains n do
      errors := errors.push s!"the digest code lists `{n}`, which is not a registered persistent environment extension"
  for (n, cls, _) in classification do
    if (cls == .R1 || cls == .R1R5) && !ModuleUsage.digestedOwnTables.contains n then
      errors := errors.push s!"`{n}` is classified {cls} but `ModuleUsage.digestedOwnTables` does not list it"
    if (cls == .R5 || cls == .R1R5) && !ModuleUsage.digestedCrossTables.contains n then
      errors := errors.push s!"`{n}` is classified {cls} but `ModuleUsage.digestedCrossTables` does not list it"
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
    cls matches .R1 | .R1R5 | .R5 | .specCache | .viaOwnEntries
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
      if (cls == .R5 || cls == .R1R5) && !(ws.any fun (_, m, _) => m == .tableDigest) then
        errors := errors.push s!"`{n}` is classified {cls} but no writer is covered by `tableDigest`"
      if cls == .specCache && !(ws.all fun (_, m, _) => m == .specKeys) then
        errors := errors.push s!"`{n}` is classified specCache but a writer is not covered by `specKeys`"
    | none => errors := errors.push s!"`writers` names `{n}`, which the classification table does not"
  -- Process globals: every reached constant with an initializer that is not a persistent extension's holder,
  -- an option declaration or an internal exception id needs a `globals` row, none `uncovered`.
  let holders : NameSet := exts.foldl (fun s e => s.insert (holderOf e.name)) {}
  let globalMap : NameMap (GlobalClass × String) := globals.foldl (fun m (n, c, r) => m.insert n (c, r)) {}
  let mut reachedGlobals : NameSet := {}
  for c in queue do
    unless (getInitFnNameFor? env c).isSome && !holders.contains c do continue
    let some ci := env.find? c | continue
    let head := ci.type.getAppFn.constName?
    if head == some ``Lean.Option || head == some ``Lean.InternalExceptionId then continue
    reachedGlobals := reachedGlobals.insert (userName c)
    match globalMap.find? (userName c) with
    | none => errors := errors.push s!"reachable global `{c}` is missing from the `globals` table"
    | some (.uncovered, reason) => errors := errors.push s!"reachable global `{c}` is `uncovered`: {reason}"
    | some _ => pure ()
  for (n, _, _) in globals do
    unless reachedGlobals.contains n do
      errors := errors.push s!"`globals` names `{n}`, which is not a global the compile reaches"
  -- `Meta` functions the compiler calls directly: every reached `Lean.Meta` definition that a reached
  -- `Lean.Compiler` constant mentions, other than instances, projections and `MetaM` itself, needs a row.
  let metaMap : NameMap (MetaClass × String) := metaEntries.foldl (fun m (n, c, r) => m.insert n (c, r)) {}
  let mut reachedMeta : NameSet := {}
  for c in queue do
    unless (`Lean.Compiler).isPrefixOf (userName c) do continue
    let some ci := env.find? c | continue
    for d in ci.getUsedConstantsAsSet do
      unless (`Lean.Meta).isPrefixOf (userName d) && d != ``Lean.Meta.MetaM do continue
      let some di := env.find? d | continue
      unless di matches .defnInfo _ | .opaqueInfo _ do continue
      if (← Meta.isInstance d) || (env.getProjectionFnInfo? d).isSome then continue
      reachedMeta := reachedMeta.insert (userName d)
  for d in reachedMeta do
    match metaMap.find? d with
    | none => errors := errors.push s!"`Meta` function `{d}`, which the compiler calls, is missing from `metaEntries`"
    | some (.uncovered, reason) => errors := errors.push s!"`Meta` function `{d}` is `uncovered`: {reason}"
    | some _ => pure ()
  for (n, _, _) in metaEntries do
    unless reachedMeta.contains n do
      errors := errors.push s!"`metaEntries` names `{n}`, which the compiler does not call"
  -- Derived names: every name the reached code builds by appending a literal component to a computed name needs a
  -- `derivedNames` row, none `uncovered`, and the `derived` rows are exactly `ModuleUsage.derivedSuffixes`; every
  -- reached function taking a name's prefix needs a `prefixReaders` row.
  let mut scanned : Std.HashMap String (Array Name) := {}
  let mut prefixUsers : NameSet := {}
  for c in queue do
    let some ci := env.find? c | continue
    let some v := ci.value? (allowOpaque := true) | continue
    for k in derivedKeys env v do
      scanned := scanned.alter k fun o => some ((o.getD #[]).push c)
    if v.getUsedConstants.contains ``Name.getPrefix then
      prefixUsers := prefixUsers.insert ((userName c).eraseSuffix? `_unsafe_rec |>.getD (userName c))
  let derivedMap : Std.HashMap String (DerivedClass × String) :=
    derivedNames.foldl (fun m (k, c, r) => m.insert k (c, r)) {}
  for (k, cs) in scanned do
    match derivedMap[k]? with
    | none => errors := errors.push s!"`{cs[0]!}` builds a derived name `{k}`, which is missing from `derivedNames`"
    | some (.uncovered, reason) => errors := errors.push s!"derived name `{k}` is `uncovered`: {reason}"
    | some _ => pure ()
  for (k, cls, _) in derivedNames do
    unless scanned.contains k do
      errors := errors.push s!"`derivedNames` lists `{k}`, which no reached code builds"
    match k.dropPrefix? "mkStr " with
    | some s =>
      if (cls == .derived) != ModuleUsage.derivedSuffixes.contains s.toString then
        errors := errors.push s!"`derivedNames` and `ModuleUsage.derivedSuffixes` disagree on `{k}`"
    | none =>
      if cls == .derived then
        errors := errors.push s!"`{k}` is classified derived, which only a `mkStr` suffix in `ModuleUsage.derivedSuffixes` can be"
  for c in prefixUsers do
    unless prefixReaders.any (·.1 == c) do
      errors := errors.push s!"`{c}` takes a name's prefix (`Name.getPrefix`) and is missing from `prefixReaders`"
  for (n, _, _) in prefixReaders do
    unless prefixUsers.contains n do
      errors := errors.push s!"`prefixReaders` names `{n}`, which is not a reached function taking a prefix"
  unless errors.isEmpty do
    throwError "moduleUsageCensus found {errors.size} issue(s) (of {registered.size} registered, {reachedExts.size} reachable extensions):\n{"\n".intercalate errors.toList}"
