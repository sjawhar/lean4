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
import Lean.Compiler.LCNF.Specialize
import Lean.Elab.InfoTree.Util
import Init.Data.String.TakeDrop
import Init.Data.String.Search
import Init.Data.String.Iterate
public section

/-!
Usage data for Lake's usage cutoff: meaning digests of a module's declarations (written into its `.olean`
when Lean runs with `--usage`), and the `.usage` sidecar recording, per imported module, the digests of
the declarations the module used, from which Lake decides whether the module must be compiled again.

A digest covers a declaration's kernel data and its compiled interface (`compiledEnc`), Merkle-closed over the
declarations both refer to. Compiler-only names (`f._redArg`, `g._at_.h.spec_0`, ...) fold into an owner, a
kernel constant of the same module (`ownerOf`), whose digest covers them.
-/

namespace Lean.ModuleUsage

/-- Everything of `c`'s kernel data except its own name and the meaning of the constants it refers to. Types and every
value but a theorem's keep binder names and infos (`BinderMode.namesInfos`) and `[borrowed]` annotations
(`MDataMode.compilerRead`): the compiler reads all three from imported values, from `@[macro_inline]` bodies it
inlines and from type aliases it unfolds into code types. A theorem's proof is never compiled, so its binders' names
and infos and its `mdata` are left out. -/
def localHash (c : ConstantInfo) : Digest :=
  let v := exprDigest .namesInfos .compilerRead
  let e := ({} : Enc).names c.levelParams |>.digest (exprDigest .namesInfos .compilerRead c.type)
  let e := match c with
    | .defnInfo d => hintsEnc (e.u8 1 |>.digest (v d.value)) d.hints |> (safetyEnc · d.safety)
    | .thmInfo t => e.u8 2 |>.digest (exprDigest .none .none t.value)
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
the first `_at_`, joined as they are (`Name.append` would treat a `_hyg` component as macro scopes, which `o`
can contain in the middle). A specialization created inside another specialization is `g._at_.g'._at_.o.spec_M`,
whose creator `g'._at_.o.spec_M` is itself a specialization name that strips to `o`. Folding does not depend on
the result being the creator: writer and reader strip the same way, and an owner's digest covers whatever folds
into it. -/
def atOwner? (p : Name) : Option Name :=
  let cs := p.components
  match cs.findIdx? (· == `_at_) with
  | some j =>
    let o := (cs.drop (j + 1)).foldl (init := Name.anonymous) fun acc c => match c with
      | .str _ s => .str acc s
      | .num _ n => .num acc n
      | .anonymous => acc
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
  toolchain without this extension); otherwise a marker entry at index 0, whose digest is the module's
  `closureDigest`, then the module's digests sorted by name. The marker's name is never looked up, so no user
  constant can collide with it. -/
  importedModuleEntries : Array (Array (Name × Digest)) := #[]
  /-- The current module's digests and `closureDigest`, if `setLocalDigests` stored them for the `.olean` write. -/
  localDigests? : Option (Array (Name × Digest) × Digest) := none
instance : Inhabited State := ⟨{}⟩

/-- The digest of node `c` if module `i` (the module defining `c`) wrote one. -/
def State.findAt? (s : State) (i : ModuleIdx) (c : Name) : Option Digest := do
  let es ← s.importedModuleEntries[i.toNat]?
  (·.2) <$> es.binSearch (c, default) (fun a b => Name.quickLt a.1 b.1) (lo := 1)

def State.find? (s : State) (env : Environment) (c : Name) : Option Digest := do
  s.findAt? (← env.getModuleIdxFor? c) c

/-- Whether module `i`'s `.olean` carries digests (it has the marker entry). -/
def State.hasEntries (s : State) (i : ModuleIdx) : Bool :=
  !(s.importedModuleEntries[i.toNat]?.getD #[]).isEmpty

/-- A module's `moduleDigest`: a digest of its digests (`own`, sorted by name), as its `.usage` records it. -/
def moduleDigestOf (own : Array (Name × Digest)) : Digest :=
  (own.foldl (fun e (n, d) => e.name n |>.digest d) (({} : Enc).nat own.size)).finish

/-- Module `i`'s `moduleDigest` and `closureDigest` as the current module imported them, from its `.olean`, or
`none` if it carries no digests. -/
def State.importedDigests? (s : State) (i : ModuleIdx) : Option (Digest × Digest) := do
  let es ← s.importedModuleEntries[i.toNat]?
  let (_, closure) ← es[0]?
  return (moduleDigestOf (es.extract 1 es.size), closure)

/-- The node of the imported name `x`, found in its defining module's digests: a module's nodes are its
kernel constants and the compiler-only names that fold into none (`ownNodes`), so the first of `x`'s
`ownerOf` candidates among them is the owner that module folded `x` into. `x` itself if `x` is local or its
module carries no digests. -/
def State.ownerOf (s : State) (env : Environment) (x : Name) : Name :=
  match env.getModuleIdxFor? x with
  | some i => if s.hasEntries i then ModuleUsage.ownerOf (fun c => (s.findAt? i c).isSome) x else x
  | none => x

/-- Private, so that a module's code cannot rewrite the digests it sees for its imports. -/
private builtin_initialize ext : PersistentEnvExtension (Name × Digest) (Name × Digest) State ←
  registerPersistentEnvExtension {
    mkInitial := pure {}
    addImportedFn := fun es => pure { importedModuleEntries := es }
    addEntryFn := fun s _ => s
    -- Private level only: digests cover private constants and unexposed bodies, which must not change the
    -- exported `.olean` of a `module` file. Non-module files are written and read at the private level.
    exportEntriesFnEx := fun _ s =>
      let es := s.localDigests?.elim #[] fun (own, closure) => #[(.anonymous, closure)] ++ own
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

/-- The current module's nodes, from its kernel constants (`consts`). -/
def ownNodes (env : Environment) (consts : Array (Name × ConstantInfo × Array Name)) : Array Node := Id.run do
  let s := state env
  let lc := LocalCompiled.ofEnv env
  let kernel : Std.HashMap Name (ConstantInfo × Array Name) :=
    consts.foldl (fun m (n, ci, rs) => m.insert n (ci, rs)) {}
  let mut folded : Std.HashMap Name (Array Name) := {}
  for x in (compiledNames env lc).toArray do
    unless kernel.contains x do
      folded := folded.alter (ownerOf kernel.contains x) fun o => some ((o.getD #[]).push x)
  let localOwner (x : Name) : Name :=
    if kernel.contains x || folded.contains x then x else ownerOf kernel.contains x
  let pkg := env.getModulePackage?
  let names := consts.map (·.1) ++ (folded.toArray.filterMap fun (n, _) => if kernel.contains n then none else some n)
  return names.map fun n => Id.run do
    let k? := kernel[n]?
    let mut c : CEnc := { e := ({} : Enc).opt pkg Enc.str |>.opt k? fun e (ci, _) => e.digest (localHash ci) }
    c := compiledEnc env lc n c
    let fs := (folded.getD n #[]).filter (· != n) |>.qsort Name.quickLt
    c := c.nat fs.size
    for x in fs do
      c := compiledEnc env lc x (c.name x)
    let mentions := (k?.elim #[] (·.2)).foldl (·.insert ·) c.ms
    let rs : NameSet := mentions.foldl (init := {}) fun rs m =>
      let o := if (env.getModuleIdxFor? m).isSome then s.ownerOf env m else localOwner m
      if o == n then rs else rs.insert o
    { name := n, localDigest := c.e.finish, refs := rs.toArray.qsort Name.quickLt }

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

/-- Stores `own` (`localDigests env`) and the module's `closureDigest` for the extension to export. Without it, the
`.olean` carries no digests. -/
def setLocalDigests (env : Environment) (own : Array (Name × Digest)) (closure : Digest) : Environment :=
  ext.modifyState (asyncMode := .mainOnly) env ({ · with localDigests? := some (own, closure) })

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

/-- Whether module `i` (`none`: the current module) defines `n` as a kernel constant; `priv` is the environment
in its private scope (`setExporting false`). `getModuleIdxFor?` alone also maps a module's claimed compiler-only
names, and maps nothing for a name no import defines; neither is a declaration of the module, so an entry for it
stays in `tableDigest`, and a claimed name the module does not own is listed (`claimedForeignNames`). -/
private def definedIn (priv : Environment) (i? : Option ModuleIdx) (n : Name) : Bool :=
  priv.getModuleIdxFor? n == i? && priv.contains n (skipRealize := false)

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

/-- Every reading of a specialization name `d._at_.c.spec_N` (`compilerShapedName`) as a specialization of `d`
created by `c`: one `c` per `_at_` component, the components between it and `spec_N`, joined as `atOwner?` joins
them. A specialization of a specialization, or one created inside a specialization, has more than one `_at_`, so
the name alone does not say which split is the creator. -/
def specCreators (x : Name) : Array Name := Id.run do
  let cs := x.components.toArray
  let some (.str .anonymous s) := cs.back? | return #[]
  unless s.startsWith "spec_" do return #[]
  let body := cs.pop
  let mut out := #[]
  for j in [0:body.size] do
    unless body[j]! == `_at_ do continue
    let c := (body.extract (j + 1) body.size).foldl Name.appendCore .anonymous
    unless c.isAnonymous do out := out.push c
  return out

/-- Whether module `i?` owns the claimed compiler-only name `n`: `n` is a constant the module defines, or `n` has a
compiler shape (`compilerShapedName`) and a name it comes from by one compiler suffix is owned: for a specialization
name, any reading of its creator (`specCreators`), otherwise `stripSuffix?`. The walk stops at the first name
without a compiler shape, so a module that defines a namespace prefix of another module's declaration (`NS` for
`NS.foo._redArg`) does not own the claim. -/
private def ownsClaim (priv : Environment) (i? : Option ModuleIdx) (n : Name) : Bool :=
  go (n.getNumParts + 1) n
where
  go : Nat → Name → Bool
    | 0, _ => false
    | k + 1, c =>
      definedIn priv i? c || (compilerShapedName c &&
        match specCreators c with
        | #[] => (stripSuffix? c).any (go k)
        | creators => creators.any (go k))

/-- Module `i?`'s claimed compiler-only names (IR declarations without a kernel constant, which importers resolve
to the first module in import order that claims them, `findExtEntry?`) that the module does not own
(`ownsClaim`). A name the module's own compile generates strips through compiler suffixes to a constant the module
defines, whose digest covers its entries; any other claimed name can take a call to that name over from another
module, so it is listed. -/
private def claimedForeignNames (priv : Environment) (i? : Option ModuleIdx) : Array Name :=
  let names := match i? with
    | some i => priv.header.moduleData[i.toNat]?.elim #[] (·.extraConstNames)
    | none => (IR.getDecls priv).toArray.filterMap fun (d : IR.Decl) =>
        if priv.contains d.name (skipRealize := false) then none else some d.name
  let foreign := names.filter (!ownsClaim priv i? ·)
  (foreign.qsort Name.quickLt).eraseReps

/-- A discrimination-tree key, encoded so that two keys encode alike exactly when they are `==`, as the tree
compares them when it matches. -/
def discrKeyEnc (e : Enc) : Meta.DiscrTree.Key → Enc
  | .star => e.u8 0
  | .other => e.u8 1
  | .lit (.natVal n) => e.u8 2 |>.nat n
  | .lit (.strVal s) => e.u8 3 |>.str s
  | .fvar f n => e.u8 4 |>.name f.name |>.nat n
  | .const c n => e.u8 5 |>.name c |>.nat n
  | .arrow => e.u8 6
  | .proj s i n => e.u8 7 |>.name s |>.nat i |>.nat n

/-- A digest of one module's entries in the cross-module compiler tables: `@[csimp]` replacements, instances
and classes declared for another module's declaration, reducibility set for another module's declaration,
unification hints, `@[cpass]` installers and constant folders, each hint (with its discrimination-tree keys),
installer and folder with its declaration's digest (`digestOf`), matcher info and IR meta marks written for another
module's declaration; its kernel constants with compiler-generated names (`compilerShapedConsts`) and its claimed
compiler-only names whose owner it does not define (`claimedForeignNames`). `i? = none` is the current module. -/
def tableDigest (env : Environment) (i? : Option ModuleIdx) (digestOf : Name → Option Digest) : Digest :=
  Id.run do
  let priv := env.setExporting false
  let csimp := pickEntries i? (Compiler.CSimp.ext.ext.getModuleEntries env ·)
    (Compiler.CSimp.ext.ext.getState env).newEntries
  let insts := pickEntries i? (Meta.instanceExtension.ext.getModuleEntries env ·)
    (Meta.instanceExtension.ext.getState env).newEntries
  let insts := insts.filter fun e => match e with
    | .global a | .scoped _ a => a.globalName?.any (!definedIn priv i? ·)
  let reds := pickEntries i? (reducibilityExtraExt.ext.getModuleEntries env ·)
    (reducibilityExtraExt.ext.getState env).newEntries
  let classes := pickEntries i? (classExtension.getModuleEntries env ·) (classExtension.getEntries env)
  let classes := classes.filter (!definedIn priv i? ·.name)
  let passes := pickEntries i? (Compiler.LCNF.passManagerExt.getModuleEntries env ·)
    (Compiler.LCNF.passManagerExt.getState env).1
  let folders := pickEntries i? (Compiler.LCNF.Simp.ConstantFold.folderExt.getModuleEntries env ·)
    ((Compiler.LCNF.Simp.ConstantFold.folderExt.getState env).1.map (·.toFolderOleanEntry))
  let hints := pickEntries i? (Meta.unificationHintExtension.ext.getModuleEntries env ·)
    (Meta.unificationHintExtension.ext.getState env).newEntries
  let matchers := pickEntries i? (Meta.Match.Extension.extension.getModuleEntries env ·)
    (Meta.Match.Extension.extension.getEntries env)
  let matchers := matchers.filter (!definedIn priv i? ·.name)
  let metas := (declMetaEntries env i?).filter (!definedIn priv i? ·)
  let withDigest (e : Enc) (n : Name) := e.name n |>.opt (digestOf n) Enc.digest
  let mut e : Enc := ({} : Enc).nat csimp.size
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
    e := scopedEnc (fun e (h : Meta.UnificationHintEntry) =>
      withDigest (h.keys.foldl discrKeyEnc (e.nat h.keys.size)) h.val) e x
  e := e.nat matchers.size
  for m in matchers do
    let ⟨name, info⟩ := m
    e := (matcherInfoEnc { e := e.name name } info).e
  e := e.nat metas.size
  for n in metas do e := e.name n
  let shaped := compilerShapedConsts env i?
  e := e.nat shaped.size
  for n in shaped do e := e.name n
  let claimed := claimedForeignNames priv i?
  e := e.nat claimed.size
  for n in claimed do e := e.name n
  return e.finish

/-- The registered names of the environment extensions whose entries for other modules' names `tableDigest`
reads. The census test checks that every extension it classifies as a cross-module table is listed here. -/
def digestedCrossTables : List Name := [
  `Lean.Compiler.CSimp.ext, `Lean.Meta.instanceExtension, `reducibilityExtra, `Lean.classExtension,
  `Lean.Compiler.LCNF.passManagerExt, `Lean.Compiler.LCNF.Simp.ConstantFold.folderExt,
  `Lean.Meta.unificationHintExtension, `Lean.Meta.Match.Extension.extension,
  mkPrivateNameCore `Lean.Compiler.MetaAttr `Lean.declMetaExt]

/-- A digest of the module's import closure: its modules in import order (`env.header.moduleNames`, the order
in which every compiler table applies their entries, so that the last import wins where entries conflict), and
for every module (imported ones with digests, and the current one) the digest of its cross-module compiler
tables (`tableDigest`). Importers compare it through Lake's `closureHash`, so a change to any module's tables,
or to the import order, rebuilds every module downstream. -/
def closureDigest (env : Environment) (own : Array (Name × Digest)) : Digest := Id.run do
  let s := state env
  let ownMap : Std.HashMap Name Digest := own.foldl (fun m (n, d) => m.insert n d) {}
  let digestOf (n : Name) : Option Digest := ownMap[n]? <|> s.find? env n
  let mods := env.header.moduleNames
  let mut e : Enc := ({} : Enc).nat mods.size
  for (m, i) in mods.zipIdx do
    e := e.name m
    e := e.opt (if s.hasEntries i then some (tableDigest env (some i) digestOf) else none) Enc.digest
  return e.digest (tableDigest env none digestOf) |>.finish

/-- The imported modules whose `.olean` carries digests (`State.hasEntries`), sorted. -/
def digestedModules (env : Environment) : Array Name :=
  let s := state env
  env.header.moduleNames.zipIdx.filterMap (fun (m, i) => if s.hasEntries i then some m else none)
    |>.qsort Name.quickLt

set_option compiler.ignoreBorrowAnnotation true in
/-- `Compiler.LCNF.Specialize.specCacheEntries`, private to its module so that only the usage data reads the cache
without recording a lookup. -/
@[extern "lean_spec_cache_entries"]
private opaque specCacheEntries (env : Environment) (i? : Option ModuleIdx) : Array (Expr × Name)

/-- A specialization-cache key's identity in the usage data: a digest of exactly what the cache's key equality,
`Expr.eqv`, compares (`BinderMode.none`, `MDataMode.eqv`). It must be neither coarser nor finer: two keys the
cache tells apart sharing an identity let one key's providers stand for the other's, so that a lookup turning from
a miss into a hit goes unseen, and one key with two identities hides a provider. -/
def specKeyDigest (key : Expr) : Digest := exprDigest .none .eqv key

/-- One module's specialization-cache entries (oldest first) as its `specKeys`: each key's identity with the
specialization of its last entry, the one the cache keeps (`Specialize.addEntry` replaces), sorted by identity. -/
def specKeysOf (entries : Array (Expr × Name)) : Array (Digest × Name) :=
  let last : Std.HashMap Digest Name := entries.foldl (fun m (k, n) => m.insert (specKeyDigest k) n) {}
  last.toArray.qsort (·.1.hex < ·.1.hex)

/-- For each key identity in `keys`, a digest of its providers: the modules in `modules`, given with their
`specKeys` (`specKeysOf`), that map the key, each with the specialization it maps the key to, listed by module
name. The provider that wins is the last one in import order, which `closureDigest` pins, so an unchanged digest
resolves the key to the same specialization. Lean computes these when it writes a module's `.usage`
(`specLookups`) and Lake recomputes them from the closure's `.usage` files (`UsageSidecar.specProvidersUnchanged`),
so both sides group providers alike. -/
def specProviders (keys : Array Digest) (modules : Array (Name × Array (Digest × Name))) :
    Array (Digest × Digest) := Id.run do
  if keys.isEmpty then return #[]
  let wanted : Std.HashSet Digest := keys.foldl (·.insert ·) {}
  let mut providers : Std.HashMap Digest (Array (Name × Name)) := {}
  for (m, ks) in modules do
    for (k, n) in ks do
      if wanted.contains k then providers := providers.alter k fun o => some ((o.getD #[]).push (m, n))
  return keys.map fun k =>
    let ps := (providers.getD k #[]).qsort (Name.quickLt ·.1 ·.1)
    (k, (ps.foldl (fun e (m, n) => e.name m |>.name n) (({} : Enc).nat ps.size)).finish)

/-- The specialization-cache keys the current module created (its own cache entries, `specKeysOf`): what
importers' `specLookups` are checked against. -/
private def ownSpecKeys (env : Environment) : Array (Digest × Name) :=
  specKeysOf (specCacheEntries env none)

/-- For each key the current module looked up in the specialization cache (`lookups`), deduplicated and sorted,
its providers among the imported non-`module` files with digests (`specProviders`); Lake rebuilds the module when
one of these changes. Providers in modules without digests (the toolchain) are pinned by the Lean githash, those in
`module` files by Lake's `modsysHash`. -/
private def specLookups (env : Environment) (lookups : Array Expr) : Array (Digest × Digest) :=
  let keys := (lookups.foldl (·.insert <| specKeyDigest ·) ({} : Std.HashSet Digest)).toArray.qsort (·.hex < ·.hex)
  if keys.isEmpty then #[] else
  let s := state env
  specProviders keys <| env.header.moduleNames.zipIdx.filterMap fun (m, i) =>
    if s.hasEntries i && !(env.header.moduleData[i]?.any (·.isModule)) then
      some (m, specKeysOf (specCacheEntries env (some i)))
    else none

/-- The format version of the `.usage` sidecar and of Lake's `.usekey`; Lake reads a sidecar of any other
version as absent. -/
def usageVersion : Nat := 10

/-- `own` is `localDigests env nodes` and `closure` the module's `closureDigest`, as `setLocalDigests` stored them;
`used` holds the imported names recorded while elaborating (`moduleUsed`'s `extra`); `lookups` the
specialization-cache keys looked up (`lookedUpSpecKeys`). The extra module uses are the environment's and
`extraModUsesByChecks` (those of commands whose environment was discarded); if a compile ran code or read state the
used names do not cover (`compilerCodeSeen`), every imported module with digests is one. `imported` records, for
each direct import and extra module with digests, its `moduleDigest` and `closureDigest` as this compile imported
them, from their `.olean` files: Lake writes a `.usekey` only if those are still what the modules' `.usage` files
say when it writes it, so the key describes what the compile read. `noskip` is set when the run reused commands
from an `--incr-load` snapshot, since reused commands never call `addDecl` in this process and `used` may miss
constants they used. -/
def writeUsage (env : Environment) (nodes : Array Node) (own : Array (Name × Digest)) (closure : Digest)
    (used : NameSet) (lookups : Array Expr) (incrLoaded : Bool) (path : System.FilePath) : IO Unit := do
  let s := state env
  let allExtra := (getLocalExtraModUses env).foldl (·.insert ·) (← extraModUsesByChecks)
  let allExtra ← if (← compilerCodeSeen) then
      pure <| env.header.moduleNames.zipIdx.foldl (init := allExtra) fun u (m, i) =>
        if s.hasEntries i then u.insert { module := m, isExported := false, isMeta := false } else u
    else pure allExtra
  let extraMods := allExtra.toArray.filter (fun u => (env.getModuleIdx? u.module).any s.hasEntries)
    |>.qsort fun a b => let k (u : ExtraModUse) := 2 * u.isExported.toNat + u.isMeta.toNat
      Name.quickLt a.module b.module || (a.module == b.module && k a < k b)
  let importedNames : NameSet := extraMods.foldl (·.insert ·.module) <|
    env.header.imports.foldl (·.insert ·.module) {}
  let imported := importedNames.toArray.qsort Name.quickLt |>.filterMap fun m => do
    let (md, cd) ← s.importedDigests? (← env.getModuleIdx? m)
    return Json.arr #[nameToJson m, toJson md, toJson cd]
  let pair (n : Name) (d : Digest) := Json.arr #[nameToJson n, toJson d]
  let j := Json.mkObj [("version", usageVersion), ("noskip", incrLoaded),
    ("moduleDigest", toJson (moduleDigestOf own)),
    ("closure", toJson closure),
    ("digested", Json.arr ((digestedModules env).map nameToJson)),
    ("imported", Json.arr imported),
    ("own", Json.arr (own.map fun (n, d) => pair n d)),
    ("used", Json.arr ((moduleUsed env used nodes).map fun (m, cs) =>
      Json.arr #[nameToJson m, Json.arr (cs.map fun (n, d) => pair n d)])),
    ("extra", Json.arr (extraMods.map fun u => Json.arr #[nameToJson u.module, u.isMeta])),
    ("specKeys", Json.arr ((ownSpecKeys env).map fun (d, n) => Json.arr #[toJson d, nameToJson n])),
    ("specLookups", Json.arr ((specLookups env lookups).map fun (k, p) => Json.arr #[toJson k, toJson p]))]
  IO.FS.writeFile path j.compress

end Lean.ModuleUsage
