/-
Copyright (c) 2026 Theorem Labs. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
-/
module
prelude
public import Lean.Util.SCC
public import Lean.Util.FoldConsts
public import Lean.Util.PtrSet
public import Lean.Elab.InfoTree.Types
public import Lean.Util.UsedByChecks
public import Lean.Util.ModuleUsage.Basic
public import Lean.Util.ModuleUsage.Compiled
import Lean.ExtraModUses
import Lean.Compiler.ImplementedByAttr
import Lean.Compiler.CSimpAttr
import Lean.Compiler.ModPkgExt
import Lean.Compiler.LCNF.Passes
import Lean.Compiler.LCNF.Simp.ConstantFold
import Lean.ReducibilityAttrs
import Lean.Meta.Instances
import Lean.Class
import Lean.Meta.UnificationHint
import Lean.Compiler.MetaAttr
import Lean.Elab.InfoTree.Util
import Init.Data.String.TakeDrop
import Init.Data.String.Search
import Init.Data.String.Iterate
public section

/-!
Usage data for Lake's usage cutoff: meaning digests of a module's declarations (written into its `.olean`
when Lean runs with `--usage`), and the `.usage` sidecar recording, per imported module, the digests of
the declarations the module used, from which Lake decides whether the module must be compiled again.

A digest covers a declaration's kernel data and its compiled interface (`compiledDigest`), Merkle-closed over the
declarations both refer to. Compiler-only names (`f._redArg`, `g._at_.h.spec_0`, ...) fold into an owner, a
kernel constant of the same module (`ownerOf`), whose digest covers them.
-/

namespace Lean.ModuleUsage

/-- Everything of `c`'s kernel data except its own name and the meaning of the constants it refers to. -/
def localHash (c : ConstantInfo) : Digest :=
  let v := exprDigest .none
  let e := ({} : Enc).names c.levelParams |>.digest (exprDigest .namesInfos c.type)
  let e := match c with
    | .defnInfo d => hintsEnc (e.u8 1 |>.digest (v d.value)) d.hints |> (safetyEnc · d.safety)
    | .thmInfo t => e.u8 2 |>.digest (v t.value)
    | .opaqueInfo o => e.u8 3 |>.digest (v o.value) |>.bool o.isUnsafe
    | .axiomInfo a => e.u8 4 |>.bool a.isUnsafe
    | .quotInfo q => e.u8 5 |>.u8 (match q.kind with | .type => 0 | .ctor => 1 | .lift => 2 | .ind => 3)
    | .inductInfo i => e.u8 6 |>.names i.ctors |>.names i.all |>.nat i.numParams |>.nat i.numIndices
      |>.nat i.numNested |>.bool i.isRec |>.bool i.isUnsafe |>.bool i.isReflexive
    | .ctorInfo k => e.u8 7 |>.name k.induct |>.nat k.cidx |>.nat k.numParams |>.nat k.numFields
      |>.bool k.isUnsafe
    | .recInfo r => r.rules.foldl (init := e.u8 8 |>.names r.all |>.nat r.numParams |>.nat r.numIndices
        |>.nat r.numMotives |>.nat r.numMinors |>.bool r.k |>.bool r.isUnsafe |>.nat r.rules.length)
      fun e (rl : RecursorRule) => e.name rl.ctor |>.nat rl.nfields |>.digest (v rl.rhs)
  e.finish

/-- The constants `c`'s kernel meaning depends on: those in its type and value, its inductive's block and
constructors, its recursor rules' right-hand sides, and its `implemented_by` target. The constants of its type
and value are `recorded`'s if it holds an equal type and value under `c`'s name (`recordedDeclConsts`). -/
def refs (env : Environment) (c : ConstantInfo) (recorded : NameMap DeclConsts := {}) : Array Name :=
  let s : NameSet := match c, recorded.find? c.name with
    | .axiomInfo _, some r | .defnInfo _, some r | .thmInfo _, some r | .opaqueInfo _, some r =>
      if r.type == c.type && r.value? == c.value? (allowOpaque := true) then r.consts
      else c.getUsedConstantsAsSet
    | _, _ => c.getUsedConstantsAsSet
  let s : NameSet := match c with
    | .inductInfo i => i.all.foldl (·.insert ·) s
    | .ctorInfo k => s.insert k.induct
    | .recInfo r => r.rules.foldl (fun s rl => rl.rhs.getUsedConstants.foldl (·.insert ·) (s.insert rl.ctor)) s
    | _ => s
  let s := match Compiler.getImplementedBy? env c.name with | some t => s.insert t | none => s
  s.toArray.qsort Name.quickLt

/-- For a specialization prefix `g._at_.o` (a specialization of `g` that `o` created), `o`: the components after
the first `_at_`. A specialization created inside another specialization is `g._at_.g'._at_.o.spec_M`, whose
creator `g'._at_.o.spec_M` is itself a specialization name that strips to `o`. Folding does not depend on the
result being the creator: writer and reader strip the same way, and an owner's digest covers whatever folds into
it. -/
def atOwner? (p : Name) : Option Name :=
  let cs := p.components
  match cs.findIdx? (· == `_at_) with
  | some j =>
    let o := (cs.drop (j + 1)).foldl Name.append .anonymous
    if o.isAnonymous then none else some o
  | none => none

/-- `x` with one compiler suffix removed, or `none` at a single component. A specialization `g._at_.o.spec_N`
gives `o`, the declaration that created it; otherwise the last component goes, before the macro scopes if `x`
ends in them (`f._lam_0._@.M._hyg.3` gives `f._@.M._hyg.3`) and after them if not
(`f._@.M._hyg.3._boxed` gives `f._@.M._hyg.3`). -/
def stripSuffix? (x : Name) : Option Name :=
  if x.hasMacroScopes then
    let v := extractMacroScopes x
    (go v.name).map fun n => ({ v with name := n } : MacroScopesView).review
  else go x
where
  go : Name → Option Name
    | .str p s =>
      if s.startsWith "spec_" then (atOwner? p).orElse fun _ => if p.isAnonymous then none else some p
      else if p.isAnonymous then none else some p
    | .num p _ => if p.isAnonymous then none else some p
    | .anonymous => none

/-- The first of `x` and its successive `stripSuffix?` results that `isNode` accepts, or `x`. -/
def ownerOf (isNode : Name → Bool) (x : Name) : Name := Id.run do
  let mut c := x
  for _ in [0:x.getNumParts + 1] do
    if isNode c then return c
    match stripSuffix? c with
    | some p => c := p
    | none => return x
  return x

structure State where
  /-- Per imported module: empty if its `.olean` carries no digests (written without `lean --usage`, or by a
  toolchain without this extension); otherwise a marker entry at index 0, then the module's digests sorted by
  name. The marker's own name is never looked up, so no user constant can collide with it; its digest is
  `compilerCodeMark` if the module's compiles ran code inside the compiler (`compilerCodeSeen`), else zero. -/
  importedModuleEntries : Array (Array (Name × Digest)) := #[]
  /-- The current module's digests, if `setLocalDigests` stored them for the `.olean` write. -/
  localDigests? : Option (Array (Name × Digest)) := none
  /-- Whether the current module's compiles ran code inside the compiler, stored by `setLocalDigests`. -/
  localCompilerCode : Bool := false
instance : Inhabited State := ⟨{}⟩

/-- The marker entry's digest for a module whose compiles ran code inside the compiler. -/
def compilerCodeMark : Digest := ⟨0, 1⟩

/-- The digest of node `c` if module `i` (the module defining `c`) wrote one. -/
def State.findAt? (s : State) (i : ModuleIdx) (c : Name) : Option Digest := do
  let es ← s.importedModuleEntries[i.toNat]?
  (·.2) <$> es.binSearch (c, default) (fun a b => Name.quickLt a.1 b.1) (lo := 1)

def State.find? (s : State) (env : Environment) (c : Name) : Option Digest := do
  s.findAt? (← env.getModuleIdxFor? c) c

/-- Whether module `i`'s `.olean` carries digests (it has the marker entry). -/
def State.hasEntries (s : State) (i : ModuleIdx) : Bool :=
  !(s.importedModuleEntries[i.toNat]?.getD #[]).isEmpty

/-- Whether module `i`'s `.olean` carries digests and says its compiles ran code inside the compiler. -/
def State.compilerCodeAt (s : State) (i : ModuleIdx) : Bool :=
  match s.importedModuleEntries[i.toNat]?.bind (·[0]?) with
  | some (_, d) => d == compilerCodeMark
  | none => false

/-- The node of the imported name `x`, found in its defining module's digests: a module's nodes are its
kernel constants and the compiler-only names that fold into none (`ownNodes`), so the first of `x`'s
`ownerOf` candidates among them is the owner that module folded `x` into. `x` itself if `x` is local or its
module carries no digests. -/
def State.ownerOf (s : State) (env : Environment) (x : Name) : Name :=
  match env.getModuleIdxFor? x with
  | some i => if s.hasEntries i then ModuleUsage.ownerOf (fun c => (s.findAt? i c).isSome) x else x
  | none => x

/-- Private, so that a module's code cannot rewrite the digests or compiler-code bits it sees for its imports. -/
private builtin_initialize ext : PersistentEnvExtension (Name × Digest) (Name × Digest) State ←
  registerPersistentEnvExtension {
    mkInitial := pure {}
    addImportedFn := fun es => pure { importedModuleEntries := es }
    addEntryFn := fun s _ => s
    -- Private level only: digests cover private constants and unexposed bodies, which must not change the
    -- exported `.olean` of a `module` file. Non-module files are written and read at the private level.
    exportEntriesFnEx := fun _ s =>
      let mark := if s.localCompilerCode then compilerCodeMark else default
      let es := s.localDigests?.elim #[] (#[(.anonymous, mark)] ++ ·)
      { exported := #[], server := #[], «private» := es }
    asyncMode := .mainOnly
  }

def state (env : Environment) : State := ext.getState (asyncMode := .mainOnly) env

/-- The current module's own constants, from the kernel environment, each with its `refs`. -/
def ownConsts (env : Environment) (recorded : NameMap DeclConsts := {}) :
    Array (Name × ConstantInfo × Array Name) :=
  env.checked.get.constants.foldStage2 (fun cs n ci => cs.push (n, ci, refs env ci recorded)) #[]

/-- A unit of the current module's digests: a kernel constant, or a compiler-only name with no kernel constant
to fold into, with every compiler-only name folded into it. -/
structure Node where
  name : Name
  /-- The node's kernel data and the compiled interfaces of its name and its folded names (sorted, each
  named), with the module's package, which every native symbol of the module carries. -/
  localDigest : Digest
  /-- The nodes the node refers to (kernel references and compiled mentions, each mapped to its node), sorted,
  without the node itself. -/
  refs : Array Name
  deriving Inhabited

/-- The compiled digest of each of the current module's kernel constants (`consts`) and of each name with
compiled entries. -/
def compiledDigests (env : Environment) (consts : Array (Name × ConstantInfo × Array Name)) :
    Std.HashMap Name CompiledDigest :=
  let lc := LocalCompiled.ofEnv env
  let names := consts.foldl (·.insert ·.1) (compiledNames env lc)
  names.toArray.foldl (init := {}) fun m n => m.insert n (compiledDigest env lc n)

/-- The current module's nodes, from its kernel constants (`consts`) and their compiled digests (`cds`, which
`compiledDigests` computes). -/
def ownNodes (env : Environment) (consts : Array (Name × ConstantInfo × Array Name))
    (cds : Std.HashMap Name CompiledDigest := compiledDigests env consts) : Array Node := Id.run do
  let s := state env
  let kernel : Std.HashMap Name (ConstantInfo × Array Name) :=
    consts.foldl (fun m (n, ci, rs) => m.insert n (ci, rs)) {}
  let mut folded : Std.HashMap Name (Array Name) := {}
  for (x, _) in cds do
    unless kernel.contains x do
      folded := folded.alter (ownerOf kernel.contains x) fun o => some ((o.getD #[]).push x)
  let localOwner (x : Name) : Name :=
    if kernel.contains x || folded.contains x then x else ownerOf kernel.contains x
  let pkg := env.getModulePackage?
  let names := consts.map (·.1) ++ (folded.toArray.filterMap fun (n, _) => if kernel.contains n then none else some n)
  let compiled (e : Enc) (x : Name) : Enc × NameSet :=
    let cd := cds.getD x default
    (e.digest cd.attrs |>.digest cd.entries |>.bool cd.irMeta, cd.mentions)
  return names.map fun n => Id.run do
    let k? := kernel[n]?
    let (e, ms) := compiled (({} : Enc).opt pkg Enc.str |>.opt k? fun e (ci, _) => e.digest (localHash ci)) n
    let mut e := e
    let mut mentions := (k?.elim #[] (·.2)).foldl (·.insert ·) ms
    let fs := (folded.getD n #[]).filter (· != n) |>.qsort Name.quickLt
    e := e.nat fs.size
    for x in fs do
      let (e', ms') := compiled (e.name x) x
      e := e'
      mentions := ms'.foldl (·.insert ·) mentions
    let rs : NameSet := mentions.foldl (init := {}) fun rs m =>
      let o := if (env.getModuleIdxFor? m).isSome then s.ownerOf env m else localOwner m
      if o == n then rs else rs.insert o
    { name := n, localDigest := e.finish, refs := rs.toArray.qsort Name.quickLt }

/-- Digests of the current module's nodes: SCCs in dependency order; each SCC's digest hashes its members'
names and local digests with the name and digest of every node outside it that they refer to (tagged absent if
it has no digest). -/
def compute (env : Environment) (s : State) (nodes : Array Node) : Array (Name × Digest) := Id.run do
  let byName : Std.HashMap Name Node := nodes.foldl (fun m n => m.insert n.name n) {}
  let sccs := SCC.scc (nodes.map (·.name)).toList fun n => byName[n]!.refs.toList.filter byName.contains
  let mut out : Std.HashMap Name Digest := {}
  for scc in sccs do
    let members := NameSet.ofList scc
    let sorted := scc.toArray.qsort Name.quickLt
    let mut e : Enc := ({} : Enc).nat sorted.size
    for m in sorted do
      let node := byName[m]!
      let outside := node.refs.filter (!members.contains ·)
      e := e.name m |>.digest node.localDigest |>.nat outside.size
      for r in outside do
        e := e.name r |>.opt (out[r]? <|> s.find? env r) Enc.digest
    let d := e.finish
    for m in scc do out := out.insert m d
  return (nodes.map fun n => (n.name, out[n.name]!)).qsort fun a b => Name.quickLt a.1 b.1

def localDigests (env : Environment) (nodes := ownNodes env (ownConsts env)) : Array (Name × Digest) :=
  compute env (state env) nodes

/-- Stores `own` (`localDigests env`) and whether the module's compiles ran code inside the compiler
(`compilerCodeSeen`) for the extension to export. Without it, the `.olean` carries no digests. -/
def setLocalDigests (env : Environment) (own : Array (Name × Digest)) (compilerCode : Bool) : Environment :=
  ext.modifyState (asyncMode := .mainOnly) env
    ({ · with localDigests? := some own, localCompilerCode := compilerCode })

/-- Per defining module, sorted: the node of every imported name that the current module's nodes refer to or
that is in `extra`, with its digest. Names without a digest (from a module whose `.olean` carries none) are left
out. -/
def moduleUsed (env : Environment) (extra : NameSet) (nodes := ownNodes env (ownConsts env)) :
    Array (Name × Array (Name × Digest)) :=
  let s := state env
  let used := extra.foldl (init := (∅ : NameSet)) fun u x => u.insert (s.ownerOf env x)
  let used := nodes.foldl (init := used) fun u n => n.refs.foldl (·.insert ·) u
  let byMod := used.foldl (init := (∅ : Std.HashMap Name (Array (Name × Digest)))) fun m c => Id.run do
    let some i := env.getModuleIdxFor? c | return m
    let some d := s.findAt? i c | return m
    m.alter env.header.modules[i.toNat]!.module fun o => some ((o.getD #[]).push (c, d))
  byMod.toArray.map (fun (k, v) => (k, v.qsort fun a b => Name.quickLt a.1 b.1))
    |>.qsort fun a b => Name.quickLt a.1 b.1

unsafe structure WalkState where
  /-- Visited metavariable-free subterms: their constants do not depend on any assignment. -/
  closed : PtrSet Expr := mkPtrSet
  /-- Visited subterms with metavariables, valid for `mctx` only. -/
  opened : PtrSet Expr := mkPtrSet
  mctx : MetavarContext := {}
  used : NameSet

/-- Adds the constants of `e` with its metavariables instantiated by `s.mctx`, following assignments in place
of building the instantiated term. -/
unsafe def walkExpr (e : Expr) : StateM WalkState Unit := do
  let s ← get
  if e.hasMVar then
    if s.opened.contains e then return
    set { s with opened := s.opened.insert e }
  else
    if s.closed.contains e then return
    set { s with closed := s.closed.insert e }
  match e with
  | .forallE _ d b _ | .lam _ d b _ => walkExpr d; walkExpr b
  | .letE _ t v b _ => walkExpr t; walkExpr v; walkExpr b
  | .app f a => walkExpr f; walkExpr a
  | .mdata _ b => walkExpr b
  | .proj n _ b => modify (fun s => { s with used := s.used.insert n }); walkExpr b
  | .const c _ => modify fun s => { s with used := s.used.insert c }
  | .mvar m =>
    let mctx := (← get).mctx
    if let some v := mctx.getExprAssignmentCore? m then walkExpr v
    else if let some d := mctx.getDelayedMVarAssignmentCore? m then walkExpr (.mvar d.mvarIdPending)
  | _ => pure ()

unsafe def usedFromInfoTreesImpl (trees : Array Elab.InfoTree) (init : NameSet) : NameSet :=
  let walk : StateM WalkState Unit := trees.forM fun t => t.foldInfoM (init := ()) fun ctx i _ => match i with
    | .ofTermInfo ti => do
      unless ptrEq (← get).mctx ctx.mctx do
        modify fun s => { s with mctx := ctx.mctx, opened := mkPtrSet }
      walkExpr ti.expr
    | .ofFieldInfo fi => modify fun s => { s with used := s.used.insert fi.projName }
    | _ => pure ()
  (walk.run { used := init }).2.used

/-- `init` plus every constant in a `TermInfo.expr` of `trees`, metavariables instantiated with the node's
`ContextInfo.mctx`, and every `FieldInfo.projName`. Visited subterms are shared by all nodes, so a subterm that
many nested nodes carry is walked once. Assignments are followed rather than instantiated, so the result can
keep a constant that instantiation's beta reduction would drop: a superset, never less. -/
@[implemented_by usedFromInfoTreesImpl]
opaque usedFromInfoTrees (trees : Array Elab.InfoTree) (init : NameSet) : NameSet

/-! Cross-module compiler tables: entries a module adds for declarations of other modules, which change how
every importer compiles without changing any digest of those declarations. -/

/-- Whether `n` is defined in module `i` (`none`: the current module). -/
private def definedIn (env : Environment) (i? : Option ModuleIdx) (n : Name) : Bool :=
  env.getModuleIdxFor? n == i?

/-- Module `i?`'s entries of an extension: `imported i` for an imported module, `loc` (the current module's,
newest first) reversed for `none`. -/
private def pickEntries {α : Type} (i? : Option ModuleIdx) (imported : ModuleIdx → Array α) (loc : List α) :
    Array α :=
  match i? with
  | some i => imported i
  | none => loc.reverse.toArray

/-- Whether `n` has the shape of a declaration name the compiler generates: `f._redArg`, `f._boxed`,
`f._boxed_const_N`, `f._closed_N`, `f._lam_N`, `f._elam_N`, `g._at_.o.spec_N` (macro scopes aside). -/
def compilerShapedName (n : Name) : Bool :=
  match if n.hasMacroScopes then (extractMacroScopes n).name else n with
  | .str p s =>
    let idx (pre : String) := (s.dropPrefix? pre).any fun r =>
      let r := r.toString
      !r.isEmpty && r.all Char.isDigit
    s == "_redArg" || s == "_boxed" || idx "_boxed_const_" || idx "_closed_" || idx "_lam_" || idx "_elam_" ||
      (idx "spec_" && p.components.contains `_at_)
  | _ => false

/-- Module `i?`'s kernel constants whose names have a compiler-generated shape. A compiler-only name belongs to
the first module in import order that lists it (`Environment.lean`, `finalizeImport`), so such a constant can take
the name over from another module's compiler-only declaration. -/
private def compilerShapedConsts (env : Environment) (i? : Option ModuleIdx) : Array Name :=
  match i? with
  | some i => (env.header.moduleData[i.toNat]?.elim #[] (·.constNames)).filter compilerShapedName
  | none => (env.checked.get.constants.foldStage2 (fun acc n _ => if compilerShapedName n then acc.push n else acc)
      #[]).qsort Name.quickLt

/-- A digest of one module's entries in the cross-module compiler tables: `@[csimp]` replacements, instances
and classes declared for another module's declaration, reducibility set for another module's declaration,
unification hints, `@[cpass]` installers and constant folders, each hint, installer and folder with its
declaration's digest (`digestOf`), matcher info and IR meta marks written for another module's declaration; its
kernel constants with compiler-generated names (`compilerShapedConsts`); and whether the module's compiles ran
code inside the compiler (`compilerCode`). `i? = none` is the current module. -/
def tableDigest (env : Environment) (i? : Option ModuleIdx) (digestOf : Name → Option Digest)
    (compilerCode : Bool) : Digest := Id.run do
  let csimp := pickEntries i? (Compiler.CSimp.ext.ext.getModuleEntries env ·)
    (Compiler.CSimp.ext.ext.getState env).newEntries
  let insts := pickEntries i? (Meta.instanceExtension.ext.getModuleEntries env ·)
    (Meta.instanceExtension.ext.getState env).newEntries
  let insts := insts.filter fun e => match e with
    | .global a | .scoped _ a => a.globalName?.any (!definedIn env i? ·)
  let reds := pickEntries i? (reducibilityExtraExt.ext.getModuleEntries env ·)
    (reducibilityExtraExt.ext.getState env).newEntries
  let classes := pickEntries i? (classExtension.getModuleEntries env ·) (classExtension.getEntries env)
  let classes := classes.filter (!definedIn env i? ·.name)
  let passes := pickEntries i? (Compiler.LCNF.passManagerExt.getModuleEntries env ·)
    (Compiler.LCNF.passManagerExt.getState env).1
  let folders := pickEntries i? (Compiler.LCNF.Simp.ConstantFold.folderExt.getModuleEntries env ·)
    ((Compiler.LCNF.Simp.ConstantFold.folderExt.getState env).1.map (·.toFolderOleanEntry))
  let hints := pickEntries i? (Meta.unificationHintExtension.ext.getModuleEntries env ·)
    (Meta.unificationHintExtension.ext.getState env).newEntries
  let matchers := pickEntries i? (Meta.Match.Extension.extension.getModuleEntries env ·)
    (Meta.Match.Extension.extension.getEntries env)
  let matchers := matchers.filter (!definedIn env i? ·.name)
  let metas := (declMetaEntries env i?).filter (!definedIn env i? ·)
  let withDigest (e : Enc) (n : Name) := e.name n |>.opt (digestOf n) Enc.digest
  let mut e : Enc := ({} : Enc).bool compilerCode |>.nat csimp.size
  for x in csimp do
    e := scopedEnc (fun e (c : Compiler.CSimp.Entry) =>
      let ⟨fromDeclName, toDeclName, thmName⟩ := c
      e.name fromDeclName |>.name toDeclName |>.name thmName) e x
  e := e.nat insts.size
  for x in insts do
    e := scopedEnc instanceEntryEnc e x
  e := e.nat reds.size
  for x in reds do
    e := scopedEnc (fun e ((n, st) : Name × ReducibilityStatus) => reducibilityEnc (e.name n) st) e x
  e := e.nat classes.size
  for c in classes do
    let ⟨name, outParams, outLevelParams⟩ := c
    e := e.name name |>.nats outParams |>.nats outLevelParams
  e := e.nat passes.size
  for p in passes do e := withDigest e p
  e := e.nat folders.size
  for f in folders do
    let ⟨declName, folderDeclName⟩ := f
    e := withDigest (e.name declName) folderDeclName
  e := e.nat hints.size
  for x in hints do
    e := scopedEnc (fun e (h : Meta.UnificationHintEntry) => withDigest e h.val) e x
  e := e.nat matchers.size
  for m in matchers do
    let ⟨name, info⟩ := m
    e := (matcherInfoEnc { e := e.name name } info).e
  e := e.nat metas.size
  for n in metas do e := e.name n
  let shaped := compilerShapedConsts env i?
  e := e.nat shaped.size
  for n in shaped do e := e.name n
  return e.finish

/-- A digest of the module's import closure: its modules in import order (`env.header.moduleNames`, the order
in which every compiler table applies their entries, so that the last import wins where entries conflict), and
for every module (imported ones with digests, and the current one) the digest of its cross-module compiler
tables and compiler-code bit (`tableDigest`). Importers compare it through Lake's `closureHash`, so a change to
any module's tables or bit, or to the import order, rebuilds every module downstream. -/
def closureDigest (env : Environment) (own : Array (Name × Digest)) (compilerCode : Bool) : Digest := Id.run do
  let s := state env
  let ownMap : Std.HashMap Name Digest := own.foldl (fun m (n, d) => m.insert n d) {}
  let digestOf (n : Name) : Option Digest := ownMap[n]? <|> s.find? env n
  let mods := env.header.moduleNames
  let mut e : Enc := ({} : Enc).nat mods.size
  for (m, i) in mods.zipIdx do
    e := e.name m
    e := e.opt (if s.hasEntries i then some (tableDigest env (some i) digestOf (s.compilerCodeAt i)) else none)
      Enc.digest
  return e.digest (tableDigest env none digestOf compilerCode) |>.finish

/-- The imported modules whose `.olean` carries digests (`State.hasEntries`), sorted. -/
def digestedModules (env : Environment) : Array Name :=
  let s := state env
  env.header.moduleNames.zipIdx.filterMap (fun (m, i) => if s.hasEntries i then some m else none)
    |>.qsort Name.quickLt

/-- The format version of the `.usage` sidecar and of Lake's `.usekey`; Lake reads a sidecar of any other
version as absent. -/
def usageVersion : Nat := 8

/-- `own` is `localDigests env nodes`; `used` holds the imported names recorded while elaborating
(`moduleUsed`'s `extra`); `compilerCode` says whether the module's compiles ran code inside the compiler
(`compilerCodeSeen`). The extra module uses are the environment's and `extraModUsesByChecks` (those of
commands whose environment was discarded). If the module's compiles or those of any imported module with
digests ran code inside the compiler, every imported module with digests is an extra use: a specialization
reused from another module's cache then need not compute what the module's own one does. `noskip` is set when
the run reused commands from an `--incr-load` snapshot, since reused commands never call `addDecl` in this
process and `used` may miss constants they used. -/
def writeUsage (env : Environment) (nodes : Array Node) (own : Array (Name × Digest)) (used : NameSet)
    (compilerCode : Bool) (incrLoaded : Bool) (path : System.FilePath) : IO Unit := do
  let s := state env
  let allExtra := (getLocalExtraModUses env).foldl (·.insert ·) (← extraModUsesByChecks)
  let digested := env.header.moduleNames.zipIdx.filter fun (_, i) => s.hasEntries i
  let allExtra := if compilerCode || digested.any (s.compilerCodeAt ·.2) then
      digested.foldl (fun u (m, _) => u.insert { module := m, isExported := false, isMeta := false }) allExtra
    else allExtra
  let extraMods := allExtra.toArray.filter (fun u => (env.getModuleIdx? u.module).any s.hasEntries)
    |>.qsort fun a b => let k (u : ExtraModUse) := 2 * u.isExported.toNat + u.isMeta.toNat
      Name.quickLt a.module b.module || (a.module == b.module && k a < k b)
  let pair (n : Name) (d : Digest) := Json.arr #[nameToJson n, toJson d]
  let moduleDigest := (own.foldl (fun e (n, d) => e.name n |>.digest d) (({} : Enc).nat own.size)).finish
  let j := Json.mkObj [("version", usageVersion), ("noskip", incrLoaded),
    ("moduleDigest", toJson moduleDigest),
    ("closure", toJson (closureDigest env own compilerCode)),
    ("digested", Json.arr ((digestedModules env).map nameToJson)),
    ("own", Json.arr (own.map fun (n, d) => pair n d)),
    ("used", Json.arr ((moduleUsed env used nodes).map fun (m, cs) =>
      Json.arr #[nameToJson m, Json.arr (cs.map fun (n, d) => pair n d)])),
    ("extra", Json.arr (extraMods.map fun u => Json.arr #[nameToJson u.module, u.isMeta]))]
  IO.FS.writeFile path j.compress

end Lean.ModuleUsage
