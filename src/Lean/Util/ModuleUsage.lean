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
import Lean.Util.Path
import Lean.Compiler.ImplementedByAttr
import Lean.Compiler.CSimpAttr
import Lean.Compiler.ModPkgExt
import Lean.Compiler.LCNF.Passes
import Lean.Compiler.LCNF.Simp.ConstantFold
import Lean.ReducibilityAttrs
import Lean.Meta.Instances
import Lean.Meta.Tactic.Simp.Attr
import Lean.Compiler.NoncomputableAttr
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
value but a theorem's keep binder names and infos (`BinderMode.namesInfos`) and every `mdata` payload
(`MDataMode.eqv`): the compiler reads binders and `[borrowed]` annotations from imported values, from
`@[macro_inline]` bodies it inlines and from type aliases it unfolds into code types, and elaboration and inlining
copy them, `mdata` included, into the importer's own terms and `.olean`. A theorem's proof is never compiled or
copied, so its binders' names and infos and its `mdata` are left out; proof-mode annotations in proofs carry
fresh-name counters that differ between two builds of the same sources. -/
def localHash (c : ConstantInfo) : Digest :=
  let v := exprDigest .namesInfos .eqv
  let e := ({} : Enc).names c.levelParams |>.digest (v c.type)
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
the first `_at_`, joined by `Name.appendCore` (`Name.append` would treat a `_hyg` component as macro scopes, which
`o` can contain in the middle). A specialization created inside another specialization is
`g._at_.g'._at_.o.spec_M`, whose creator `g'._at_.o.spec_M` is itself a specialization name that strips to `o`.
Folding does not depend on the result being the creator: writer and reader strip the same way, and an owner's
digest covers whatever folds into it. -/
def atOwner? (p : Name) : Option Name :=
  let cs := p.components
  match cs.findIdx? (· == `_at_) with
  | some j =>
    let o := (cs.drop (j + 1)).foldl Name.appendCore .anonymous
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

/-- The suffixes the compiler and the `Meta` functions it calls append to a declaration's name to look a constant up:
`X._sunfold` (`Meta.mkSmartUnfoldingNameFor`; `whnf` unfolds `X` through it, or not at all), `X._unsafe_rec`
(`Compiler.mkUnsafeRecName`; compiled in place of `X`, and its `noncomputable` mark read for every use of `X`) and
`T.casesOn` (`mkCasesOnName`; its `implemented_by` rewrites every `cases` on `T`). No term mentions the derived
constant, so a digest covers it three ways: it is a reference of its base when both are in one module
(`ownNodes`), a module that uses or defines the base uses it (`derivedReads`), and a module that defines it for
another module's base lists it in its `tableDigest`, so that its appearing rebuilds every module downstream. -/
def derivedSuffixes : List String := ["_sunfold", "_unsafe_rec", "casesOn"]

/-- The base of a derived constant name (`derivedSuffixes`). -/
def derivedBase? : Name → Option Name
  | .str p s => if derivedSuffixes.contains s then some p else none
  | _ => none

/-- The prefixes of `n` whose attributes the compiler reads when it compiles a use of `n`: while the name is internal
(a component starts with `_`), its `getPrefix` (`hasNeverExtractAttribute`; `toDecl` reads the base of an
`_unsafe_rec` name, `isUnsafeRecName?`). -/
def internalPrefixes (n : Name) : Array Name := Id.run do
  let mut out := #[]
  let mut c := n
  while c.isInternal do
    c := c.getPrefix
    out := out.push c
  return out

/-- The entries that open a module's digest payload in its `.olean`, before the module's digests sorted by name
(`Markers.entries`). Their name is never looked up, so no user constant can collide with it. -/
structure Markers where
  /-- The module's `closureDigest`. -/
  closure : Digest
  /-- The digest of the names the module provides to importers' resolvers (`providesDigestOf`). -/
  provides : Digest
  deriving Inhabited

/-- `m`'s payload entries, in payload order. -/
def Markers.entries (m : Markers) : Array (Name × Digest) := #[(.anonymous, m.closure), (.anonymous, m.provides)]

/-- The number of marker entries: the index of a payload's first digest. -/
def Markers.count : Nat := (default : Markers).entries.size

/-- The markers of a module's payload, or `none` if it is empty (its `.olean` carries no digests). -/
def Markers.ofPayload? (payload : Array (Name × Digest)) : Option Markers := do
  let #[(_, closure), (_, provides)] := payload.extract 0 count | none
  return { closure, provides }

structure State where
  /-- Per imported module, its digest payload: empty if its `.olean` carries no digests (written without
  `lean --usage`, or by a toolchain without this extension); otherwise its `Markers.entries`, then its digests
  sorted by name. -/
  importedModuleEntries : Array (Array (Name × Digest)) := #[]
  /-- The current module's digests and markers, if `setLocalDigests` stored them for the `.olean` write. -/
  localDigests? : Option (Array (Name × Digest) × Markers) := none
instance : Inhabited State := ⟨{}⟩

/-- The digest of node `c` if module `i` (the module defining `c`) wrote one. -/
def State.findAt? (s : State) (i : ModuleIdx) (c : Name) : Option Digest := do
  let es ← s.importedModuleEntries[i.toNat]?
  (·.2) <$> es.binSearch (c, default) (fun a b => Name.quickLt a.1 b.1) (lo := Markers.count)

def State.find? (s : State) (env : Environment) (c : Name) : Option Digest := do
  s.findAt? (← env.getModuleIdxFor? c) c

/-- Whether module `i`'s `.olean` carries digests (it has the marker entries). -/
def State.hasEntries (s : State) (i : ModuleIdx) : Bool :=
  !(s.importedModuleEntries[i.toNat]?.getD #[]).isEmpty

/-- A module's `moduleDigest`: a digest of its digests (`own`, sorted by name), as its `.usage` records it. -/
def moduleDigestOf (own : Array (Name × Digest)) : Digest :=
  (({} : Enc).array own fun e (n, d) => e.name n |>.digest d).finish

/-- Module `i`'s `moduleDigest` and `closureDigest` as the current module imported them, from its `.olean`, or
`none` if it carries no digests. -/
def State.importedDigests? (s : State) (i : ModuleIdx) : Option (Digest × Digest) := do
  let es ← s.importedModuleEntries[i.toNat]?
  let m ← Markers.ofPayload? es
  return (moduleDigestOf (es.extract Markers.count es.size), m.closure)

/-- Module `i`'s provides digest (`providesDigestOf`), from its `.olean`, or `none` if it carries no digests. -/
def State.importedProvides? (s : State) (i : ModuleIdx) : Option Digest := do
  (·.provides) <$> Markers.ofPayload? (← s.importedModuleEntries[i.toNat]?)

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
      let es := s.localDigests?.elim #[] fun (own, markers) => markers.entries ++ own
      { exported := #[], server := #[], «private» := es }
    asyncMode := .mainOnly
    perCommand := .recorder
  }

def state (env : Environment) : State := ext.getState (asyncMode := .mainOnly) env

/-- The kind bit of a name a module lists among its kernel constants (`ModuleData.constNames`). -/
def kernelKind : UInt8 := 1
/-- The kind bit of a name a module lists among its compiled names (`ModuleData.extraConstNames`). -/
def extraKind : UInt8 := 2

set_option compiler.ignoreBorrowAnnotation true in
@[extern "lean_get_ir_extra_const_names"]
private opaque irExtraConstNames (env : Environment) (level : OLeanLevel) (includeDecls := false) : Array Name

/-- The names the current module provides to its importers' resolvers (`Environment.getModuleIdxFor?`): its kernel
constants and its compiled names, each sorted, as its `.olean` lists them at the private level (`mkModuleData`), the
level at which a non-`module` file is written and read. A `module` file's bytes are pinned by Lake's `modsysHash`. -/
def ownProvides (env : Environment) : Array Name × Array Name :=
  let priv := env.setExporting false
  let kernel := priv.toKernelEnv.constants.foldStage2 (fun ns n _ => ns.push n) #[]
  (kernel.qsort Name.quickLt, (irExtraConstNames priv .private).qsort Name.quickLt)

/-- A digest of a module's `ownProvides`, which its `.olean` carries (`Markers.provides`) and its `.usage` records. -/
def providesDigestOf (provides : Array Name × Array Name) : Digest :=
  (({} : Enc).array provides.1 Enc.name |>.array provides.2 Enc.name).finish

/-- The current module's `ownProvides` once `setLocalDigests` stored them, exported as the two arrays. Private level
only, as `ext`. -/
private builtin_initialize providesExt :
    PersistentEnvExtension (Array Name) (Array Name) (Option (Array Name × Array Name)) ←
  registerPersistentEnvExtension {
    mkInitial := pure none
    addImportedFn := fun _ => pure none
    addEntryFn := fun s _ => s
    exportEntriesFnEx := fun _ s =>
      { exported := #[], server := #[], «private» := s.elim #[] fun (k, e) => #[k, e] }
    asyncMode := .mainOnly
    perCommand := .recorder
  }

/-- The kind bits (`kernelKind`, `extraKind`) with which `provides` (the arrays of `ownProvides`) lists `n`. -/
def kindsIn (kernel extra : Array Name) (n : Name) : UInt8 :=
  (if kernel.binSearchContains n Name.quickLt then kernelKind else 0) |||
    (if extra.binSearchContains n Name.quickLt then extraKind else 0)

/-- The kind bits with which imported module `i` provides `n`, from its `.olean` (`ownProvides`): `0` if it lists
no such name or carries no digests. -/
def providedKinds (env : Environment) (i : ModuleIdx) (n : Name) : UInt8 :=
  let es := providesExt.getModuleEntries env i
  kindsIn (es[0]?.getD #[]) (es[1]?.getD #[]) n

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
  -- Each base of the module with its derived constants of the module (`derivedBase?`).
  let fwd : Std.HashMap Name (Array Name) := consts.foldl (init := {}) fun m (n, _) =>
    match derivedBase? n with
    | some p => if kernel.contains p then m.alter p fun o => some ((o.getD #[]).push n) else m
    | none => m
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
    -- A base of the module refers to its derived constants of the module, which no term mentions.
    let mentions := (k?.elim #[] (·.2)).foldl (·.insert ·) ((fwd.getD n #[]).foldl (·.insert ·) c.ms)
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
    let d := ({} : Enc).array (scc.toArray.qsort Name.quickLt) (fun e m =>
      let node := byName[m]!
      e.name m |>.digest node.localDigest |>.array (node.refs.filter (!members.contains ·)) fun e r =>
        e.name r |>.opt (out[r]? <|> s.find? env r) Enc.digest) |>.finish
    for m in scc do out := out.insert m d
  return (nodes.map fun n => (n.name, out[n.name]!)).qsort fun a b => Name.quickLt a.1 b.1

def localDigests (env : Environment) (nodes := ownNodes env (ownConsts env)) : Array (Name × Digest) :=
  compute env (state env) nodes

/-- Stores `own` (`localDigests env`), the module's `closureDigest` and its `ownProvides` for the extensions to
export. Without it, the `.olean` carries no digests. -/
def setLocalDigests (env : Environment) (own : Array (Name × Digest)) (closure : Digest)
    (provides : Array Name × Array Name) : Environment :=
  let env := ext.modifyState (asyncMode := .mainOnly) env
    ({ · with localDigests? := some (own, { closure, provides := providesDigestOf provides }) })
  providesExt.modifyState (asyncMode := .mainOnly) env fun _ => some provides

/-- `c`'s statement digests `(core, attrs)`. `core` covers its level params and type, binders included, never
its value. `attrs` covers what steers its users without changing the kernel constant: reducibility, instance
membership and priority, `@[simp]` membership, `protected`, `private` and `noncomputable`. -/
def stmtHash (env : Environment) (c : ConstantInfo) : Digest × Digest :=
  let core := ({} : Enc).names c.levelParams |>.digest (exprDigest .namesInfos .eqv c.type) |>.finish
  let simp := Meta.simpExtension.getState env
  let prio := (Meta.instanceExtension.getState env).instanceNames.find? c.name |>.map (·.priority)
  let attrs := reducibilityEnc {} (getReducibilityStatusCore env c.name)
    |>.opt prio Enc.nat
    |>.bool (simp.isLemma (.decl c.name) || simp.isLemma (.decl c.name (inv := true)) ||
      simp.isDeclToUnfold c.name)
    |>.bool (isProtected env c.name) |>.bool (isPrivateName c.name) |>.bool (isNoncomputable env c.name)
    |>.finish
  (core, attrs)

/-- The kernel never unfolds a theorem, opaque or axiom, so a type mentioning one depends on its statement
only. -/
def isStmtOnly : ConstantInfo → Bool
  | .thmInfo _ | .opaqueInfo _ | .axiomInfo _ => true
  | _ => false

structure StmtState where
  /-- Per imported module: empty if its `.olean` carries no statement digests, otherwise a marker entry, then
  `(core, attrs)` per kernel constant, sorted by name. -/
  importedModuleEntries : Array (Array (Name × Digest × Digest)) := #[]
  /-- The current module's statement digests, if `setLocalStmt` stored them for the `.olean` write. -/
  localStmt? : Option (Array (Name × Digest × Digest)) := none
instance : Inhabited StmtState := ⟨{}⟩

def StmtState.findAt? (s : StmtState) (i : ModuleIdx) (c : Name) : Option (Digest × Digest) := do
  let es ← s.importedModuleEntries[i.toNat]?
  (·.2) <$> es.binSearch (c, default, default) (fun a b => Name.quickLt a.1 b.1) (lo := 1)

def StmtState.find? (s : StmtState) (env : Environment) (c : Name) : Option (Digest × Digest) := do
  s.findAt? (← env.getModuleIdxFor? c) c

/-- Statement digests of the current module's kernel constants, sorted by name: per SCC, as `compute` does, each
member's name and `stmtHash` core with the name of every constant its type mentions and, for a theorem, opaque
or axiom, that constant's statement digest, for anything else its full digest (`own` for the current module's),
since a definition's value decides what a type mentioning it means. `attrs` is `stmtHash`'s, per constant. -/
def computeStmt (env : Environment) (s : StmtState) (own : Array (Name × Digest)) (consts := ownConsts env) :
    Array (Name × Digest × Digest) := Id.run do
  let full : Std.HashMap Name Digest := own.foldl (fun m (n, d) => m.insert n d) {}
  let fs := state env
  let byName : Std.HashMap Name (ConstantInfo × (Digest × Digest) × Array Name) :=
    consts.foldl (init := {}) fun m (n, ci, _) =>
      m.insert n (ci, stmtHash env ci, ci.type.getUsedConstantsAsSet.toArray.qsort Name.quickLt)
  let stmtOnly (r : Name) : Bool := ((byName[r]?.map (·.1)) <|> env.find? r).any isStmtOnly
  let sccs := SCC.scc (consts.map (·.1)).toList fun n =>
    byName[n]!.2.2.toList.filter fun r => byName.contains r && stmtOnly r
  let mut out : Std.HashMap Name Digest := {}
  for scc in sccs do
    let members := NameSet.ofList scc
    let sorted := scc.toArray.qsort Name.quickLt
    let mut e : Enc := ({} : Enc).nat sorted.size
    for m in sorted do
      let (_, (core, _), rs) := byName[m]!
      let outside := rs.filter (!members.contains ·)
      e := e.name m |>.digest core |>.nat outside.size
      for r in outside do
        let so := stmtOnly r
        let d := if so then out[r]? <|> (s.find? env r).map (·.1) else full[r]? <|> fs.find? env r
        e := e.name r |>.bool so |>.opt d Enc.digest
    let d := e.finish
    for m in scc do out := out.insert m d
  return (consts.map fun (n, _) => (n, out[n]!, byName[n]!.2.1.2)).qsort fun a b => Name.quickLt a.1 b.1

/-- Private, as `ext`. -/
private builtin_initialize stmtExt : PersistentEnvExtension (Name × Digest × Digest) (Name × Digest × Digest) StmtState ←
  registerPersistentEnvExtension {
    mkInitial := pure {}
    addImportedFn := fun es => pure { importedModuleEntries := es }
    addEntryFn := fun s _ => s
    -- Private level only, as `ext`.
    exportEntriesFnEx := fun _ s =>
      let es := s.localStmt?.elim #[] fun stmt => #[(.anonymous, default, default)] ++ stmt
      { exported := #[], server := #[], «private» := es }
    asyncMode := .mainOnly
    perCommand := .recorder
  }

def stmtState (env : Environment) : StmtState := stmtExt.getState (asyncMode := .mainOnly) env

/-- Stores `computeStmt`'s result for the extension to export. Without it, the `.olean` carries no statement
digests. -/
def setLocalStmt (env : Environment) (stmt : Array (Name × Digest × Digest)) : Environment :=
  stmtExt.modifyState (asyncMode := .mainOnly) env ({ · with localStmt? := some stmt })

/-- What imported module `i`'s usage entries give for `c`, a name `Environment.getModuleIdxFor?` assigns to `i`
(`importedConstDigests?`). -/
inductive ImportedDigests where
  /-- `i` carries no usage digests: a module compiled without `--usage` or by a toolchain without these extensions
  (stage 0 compiles the stage-1 toolchain's own `Init`, `Std` and `Lean`; Lake pins those by the Lean githash in the
  module's trace) or a `module` imported without its private level (Lake compares those through `modsysHash`) -/
  | untracked
  /-- `c` is one of `i`'s kernel constants, with its full, statement core and attrs digests -/
  | digests (full core attrs : Digest)
  /-- `c` is not one of `i`'s kernel constants (`providedKinds`): a name `i` only compiled code for (an
  `extraConstNames` entry), which another module may define; `i` has no digest for it -/
  | codeOnly

/-- `ImportedDigests` of `c` for imported module `i`. A module that carries digests has all three for each of its
kernel constants, so a missing one is an error. -/
def importedConstDigests? (env : Environment) (i : ModuleIdx) (c : Name) : Except String ImportedDigests := do
  let s := state env
  unless s.hasEntries i do return .untracked
  if providedKinds env i c &&& kernelKind == 0 then return .codeOnly
  let mod := env.header.modules[i.toNat]!.module
  let some full := s.findAt? i c |
    throw s!"usage: `{c}` from `{mod}` has no full digest in that module's usage entries"
  let some (core, attrs) := (stmtState env).findAt? i c |
    throw s!"usage: `{c}` from `{mod}` has no statement digest in that module's usage entries"
  return .digests full core attrs

/-- The imported constants the compiler reads by a name derived from `x` when it compiles a use of `x`: `x`'s derived
constants (`derivedSuffixes`) and the prefixes whose attributes it reads with `x`'s (`internalPrefixes`). -/
def derivedReads (env : Environment) (x : Name) : Array Name :=
  (derivedSuffixes.toArray.map x.str ++ internalPrefixes x).filter fun d =>
    (env.getModuleIdxFor? d).isSome && env.contains d

/-- Per defining module, sorted: the node of every imported name that the current module's nodes refer to or
that is in `extra`, and of every imported constant the compiler reads by a name derived from one of those or from
a node (`derivedReads`), with its digest. Names without a digest (from a module whose `.olean` carries none) are
left out; a kernel constant of a module that carries digests has one (`ownNodes`), so a missing one is an error. -/
def moduleUsed (env : Environment) (extra : NameSet) (nodes := ownNodes env (ownConsts env)) :
    Except String (Array (Name × Array (Name × Digest))) := do
  let s := state env
  let used := extra.foldl (init := (∅ : NameSet)) fun u x => u.insert (s.ownerOf env x)
  let used := nodes.foldl (init := used) fun u n => n.refs.foldl (·.insert ·) u
  let sources := nodes.foldl (·.insert ·.name) (extra.foldl (·.insert ·) used)
  let used := sources.foldl (init := used) fun u x =>
    (derivedReads env x).foldl (fun u d => u.insert (s.ownerOf env d)) u
  let mut byMod : Std.HashMap Name (Array (Name × Digest)) := {}
  for c in used do
    let some i := env.getModuleIdxFor? c | continue
    let mod := env.header.modules[i.toNat]!.module
    let some d := s.findAt? i c |
      -- a kernel constant of `i` has a digest; a name `i` only compiled code for has none
      if s.hasEntries i && providedKinds env i c &&& kernelKind != 0 then
        throw s!"usage: `{c}` from `{mod}` has no full digest in that module's usage entries"
      continue
    byMod := byMod.alter mod fun o => some ((o.getD #[]).push (c, d))
  return byMod.toArray.map (fun (k, v) => (k, v.qsort fun a b => Name.quickLt a.1 b.1))
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

/-- Whether `n` is in `kernel`, a module's kernel constants as `ownProvides` lists them (sorted, realized constants
included): a fact of that module alone, whichever module an importer's resolver picks for `n`. -/
private def definedIn (kernel : Array Name) (n : Name) : Bool :=
  kernel.binSearchContains n Name.quickLt

/-- Module `i?`'s entries of an extension: `imported i` for an imported module, `loc` (the current module's,
newest first) reversed for `none`. -/
private def pickEntries {α : Type} (i? : Option ModuleIdx) (imported : ModuleIdx → Array α) (loc : List α) :
    Array α :=
  match i? with
  | some i => imported i
  | none => loc.reverse.toArray

/-- The derived constants (`derivedBase?`) among a module's kernel constants `kernel` whose base it does not define:
the compiler finds them by name when it compiles a use of the base in any module that also imports this one, and no
term mentions them. -/
private def foreignDerivedConsts (kernel : Array Name) : Array Name :=
  kernel.filter fun n => (derivedBase? n).any (!definedIn kernel ·)

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
installer and folder with its declaration's digest, matcher info and IR meta marks written for another module's
declaration, and its derived constants for another module's base with their digests (`foreignDerivedConsts`).
`i? = none` is the current module, `kernel` the module's kernel constants (`ownProvides`), `ownDigest` its digests.
Which declarations are the module's own comes from `kernel` alone, and an own declaration's digest from
`ownDigest`; `digestOf` gives another module's declaration's digest, through the resolver of the module that
computes the digest. -/
def tableDigest (env : Environment) (i? : Option ModuleIdx) (kernel : Array Name)
    (ownDigest digestOf : Name → Option Digest) : Digest :=
  let csimp := pickEntries i? (Compiler.CSimp.ext.ext.getModuleEntries env ·)
    (Compiler.CSimp.ext.ext.getState env).newEntries
  let insts := pickEntries i? (Meta.instanceExtension.ext.getModuleEntries env ·)
    (Meta.instanceExtension.ext.getState env).newEntries
  let insts := insts.filter fun e => match e with
    | .global a | .scoped _ a => a.globalName?.any (!definedIn kernel ·)
  let reds := pickEntries i? (reducibilityExtraExt.ext.getModuleEntries env ·)
    (reducibilityExtraExt.ext.getState env).newEntries
  let classes := pickEntries i? (classExtension.getModuleEntries env ·) (classExtension.getEntries env)
  let classes := classes.filter (!definedIn kernel ·.name)
  let passes := pickEntries i? (Compiler.LCNF.passManagerExt.getModuleEntries env ·)
    (Compiler.LCNF.passManagerExt.getState env).1
  let folders := pickEntries i? (Compiler.LCNF.Simp.ConstantFold.folderExt.getModuleEntries env ·)
    ((Compiler.LCNF.Simp.ConstantFold.folderExt.getState env).1.map (·.toFolderOleanEntry))
  let hints := pickEntries i? (Meta.unificationHintExtension.ext.getModuleEntries env ·)
    (Meta.unificationHintExtension.ext.getState env).newEntries
  let matchers := pickEntries i? (Meta.Match.Extension.extension.getModuleEntries env ·)
    (Meta.Match.Extension.extension.getEntries env)
  let matchers := matchers.filter (!definedIn kernel ·.name)
  let metas := (declMetaEntries env i?).filter (!definedIn kernel ·)
  let withDigest (e : Enc) (n : Name) :=
    e.name n |>.opt (if definedIn kernel n then ownDigest n else digestOf n) Enc.digest
  ({} : Enc)
    |>.array csimp (scopedEnc fun e (c : Compiler.CSimp.Entry) =>
      let ⟨fromDeclName, toDeclName, thmName⟩ := c
      e.name fromDeclName |>.name toDeclName |>.name thmName)
    |>.array insts (scopedEnc instanceEntryEnc)
    |>.array reds (scopedEnc fun e ((n, st) : Name × ReducibilityStatus) => reducibilityEnc (e.name n) st)
    |>.array classes (fun e c =>
      let ⟨name, outParams, outLevelParams⟩ := c
      e.name name |>.nats outParams |>.nats outLevelParams)
    |>.array passes withDigest
    |>.array folders (fun e f =>
      let ⟨declName, folderDeclName⟩ := f
      withDigest (e.name declName) folderDeclName)
    |>.array hints (scopedEnc fun e (h : Meta.UnificationHintEntry) =>
      withDigest (e.array h.keys discrKeyEnc) h.val)
    |>.array matchers (fun e m =>
      let ⟨name, info⟩ := m
      (matcherInfoEnc { e := e.name name } info).e)
    |>.array metas Enc.name
    |>.array (foreignDerivedConsts kernel) withDigest |>.finish

/-- The registered names of the environment extensions whose entries for other modules' names `tableDigest`
reads. The census test checks that every extension it classifies as a cross-module table is listed here. -/
def digestedCrossTables : List Name := [
  `Lean.Compiler.CSimp.ext, `Lean.Meta.instanceExtension, `reducibilityExtra, `Lean.classExtension,
  `Lean.Compiler.LCNF.passManagerExt, `Lean.Compiler.LCNF.Simp.ConstantFold.folderExt,
  `Lean.Meta.unificationHintExtension, `Lean.Meta.Match.Extension.extension,
  mkPrivateNameCore `Lean.Compiler.MetaAttr `Lean.declMetaExt]

/-- Imported module `i`'s kernel constants as its `ownProvides` lists them (sorted), from its `.olean`: empty if it
carries no digests. -/
private def importedKernel (env : Environment) (i : ModuleIdx) : Array Name :=
  (providesExt.getModuleEntries env i)[0]?.getD #[]

/-- A digest of the module's import closure: its modules in import order (`env.header.moduleNames`, the order
in which every compiler table applies their entries, so that the last import wins where entries conflict), and
for every module (imported ones with digests, and the current one, whose digests are `own` and kernel constants
`provides.1`) the digest of its cross-module compiler tables (`tableDigest`). Importers compare it through Lake's
`closureHash`, so a change to any module's tables, or to the import order, rebuilds every module downstream. -/
def closureDigest (env : Environment) (own : Array (Name × Digest)) (provides : Array Name × Array Name) :
    Digest :=
  let s := state env
  let ownMap : Std.HashMap Name Digest := own.foldl (fun m (n, d) => m.insert n d) {}
  let digestOf (n : Name) : Option Digest := ownMap[n]? <|> s.find? env n
  ({} : Enc).array env.header.moduleNames.zipIdx (fun e (m, i) =>
      e.name m |>.opt (if s.hasEntries i then some (tableDigest env (some i) (importedKernel env i) (s.findAt? i)
        digestOf) else none) Enc.digest)
    |>.digest (tableDigest env none provides.1 (ownMap[·]?) digestOf) |>.finish

/-- The imported modules whose `.olean` carries digests (`State.hasEntries`), sorted, each with the digest of the
names it provides (`State.importedProvides?`). -/
def digestedModules (env : Environment) : Array (Name × Digest) :=
  let s := state env
  env.header.moduleNames.zipIdx.filterMap (fun (m, i) => (m, ·) <$> s.importedProvides? i)
    |>.qsort (Name.quickLt ·.1 ·.1)

/-- `names` grouped by the module the resolver maps each to (`Environment.getModuleIdxFor?`; `none`: the current
module, or no module), each with the kinds under which that module provides it (`providedKinds`; `0` for `none` and
for a module without digests). The `none` group comes first, then the modules by name, names sorted. -/
def resolvedGroups (env : Environment) (names : NameHashSet) : Array (Option Name × Array (Name × UInt8)) :=
  let byMod : Std.HashMap (Option Nat) (Array (Name × UInt8)) := (names : Std.HashSet Name).fold (init := {}) fun m n =>
    let i? := env.getModuleIdxFor? n
    let k := i?.elim 0 (providedKinds env · n)
    m.alter (i?.map (·.toNat)) fun o => some ((o.getD #[]).push (n, k))
  let groups := byMod.toArray.map fun (i?, ns) =>
    (i?.map (env.header.moduleNames[·]!), ns.qsort (Name.quickLt ·.1 ·.1))
  groups.qsort fun a b => match a.1, b.1 with
    | none, some _ => true
    | some x, some y => Name.quickLt x y
    | _, _ => false

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
specialization of its last entry, the one the cache keeps (`Specialize.addEntry` replaces), in no particular order. -/
def specKeysOf (entries : Array (Expr × Name)) : Array (Digest × Name) :=
  let last : Std.HashMap Digest Name := entries.foldl (fun m (k, n) => m.insert (specKeyDigest k) n) {}
  last.toArray

/-- For each key identity in `keys`, a digest of its providers: the modules in `modules`, given with their
`specKeys` (`specKeysOf`), that map the key, each with the specialization it maps the key to, listed by module
name. The provider that wins is the last one in import order, which `closureDigest` pins, so an unchanged digest
resolves the key to the same specialization. Lean computes these when it writes a module's `.usage`
(`specLookups`) and Lake recomputes them from the closure's `.usage` files (`UsageSidecar.specProvidersUnchanged`),
so both sides group providers alike. -/
def specProviders (keys : Array Digest) (modules : Array (Name × Array (Digest × Name))) :
    Array (Digest × Digest) := Id.run do
  let wanted : Std.HashSet Digest := keys.foldl (·.insert ·) {}
  let mut providers : Std.HashMap Digest (Array (Name × Name)) := {}
  for (m, ks) in modules do
    for (k, n) in ks do
      if wanted.contains k then providers := providers.alter k fun o => some ((o.getD #[]).push (m, n))
  return keys.map fun k =>
    let ps := (providers.getD k #[]).qsort (Name.quickLt ·.1 ·.1)
    (k, (({} : Enc).array ps fun e (m, n) => e.name m |>.name n).finish)

/-- The specialization-cache keys the current module created (its own cache entries, `specKeysOf`), sorted: what
importers' `specLookups` are checked against. -/
private def ownSpecKeys (env : Environment) : Array (Digest × Name) :=
  (specKeysOf (specCacheEntries env none)).qsort (·.1.lt ·.1)

/-- `specProviders` of `keys` in `env`: their providers among the imported non-`module` files with digests. -/
def specProvidersIn (env : Environment) (keys : Array Digest) : Array (Digest × Digest) :=
  if keys.isEmpty then #[] else
  let s := state env
  specProviders keys <| env.header.moduleNames.zipIdx.filterMap fun (m, i) =>
    if s.hasEntries i && !(env.header.moduleData[i]?.any (·.isModule)) then
      some (m, specKeysOf (specCacheEntries env (some i)))
    else none

/-- For each key the current module looked up in the specialization cache (`lookups`), deduplicated and sorted,
its providers among the imported non-`module` files with digests (`specProvidersIn`); Lake rebuilds the module when
one of these changes. Providers in modules without digests (the toolchain) are pinned by the Lean githash, those in
`module` files by Lake's `modsysHash`. -/
private def specLookups (env : Environment) (lookups : Array Expr) : Array (Digest × Digest) :=
  specProvidersIn env <| (lookups.foldl (·.insert <| specKeyDigest ·) ({} : Std.HashSet Digest)).toArray.qsort Digest.lt

/-- The imported modules without digests outside the toolchain (`module` files imported without their private level,
or modules compiled without `--usage`), each with the digest of its `.olean` (`fileDigest`), sorted by name: what pins
them for a check made in another process (`ModuleUsage.keepPermit`), as Lake's `modsysHash` pins `module` files.
A toolchain module (its `.olean` under the running Lean's library directory) is pinned by the Lean githash. -/
def untrackedImports (env : Environment) : IO (Array (Name × Digest)) := do
  let s := state env
  let lib := toString (← getLibDir (← getBuildDir))
  let mut out := #[]
  for (m, i) in env.header.moduleNames.zipIdx do
    if s.hasEntries i then continue
    let olean ← findOLean m
    if (toString olean).startsWith lib then continue
    out := out.push (m, ← fileDigest olean)
  return out.qsort (Name.quickLt ·.1 ·.1)

/-- The format version of the `.usage` sidecar and of Lake's `.usekey`; Lake reads a sidecar of any other
version as absent. -/
def usageVersion : Nat := 12

/-- `own` is `localDigests env nodes`, `closure` the module's `closureDigest` and `provides` its `ownProvides`, as
`setLocalDigests` stored them; `used` holds the imported names recorded while elaborating (`moduleUsed`'s `extra`);
`lookups` the specialization-cache keys looked up (`lookedUpSpecKeys`). The extra module uses are the environment's
and `extraModUsesByChecks` (those of commands whose environment was discarded); if a compile ran code or read state
the used names do not cover (`compilerCodeSeen`, or a unification hint from an imported module with digests matched
inside a compile, `compileHints`), every imported module with digests is one. `importedClosures` records each direct
import's `closureDigest` and `importedDigests` each extra module's `moduleDigest`, as this compile imported them from
their `.olean` files: Lake writes a `.usekey` only if those are still what the modules' `.usage` files say when it
writes it, so the key describes what the compile read. `digested` records each imported module's provides digest, and
`resolved` the module and kinds every name of `used`, of the nodes' references and of `resolvedNames` resolves to
(`resolvedGroups`), so that Lake rebuilds the module when a closure module whose provides changed gains, loses or
changes the kinds of any of those names; `resolvedAll` is set when the whole resolver map was read
(`allResolved`), so that Lake rebuilds the module when any closure module's provides changed. Call it after
everything else the process writes: `resolvedNames` is read last here, after this function's own lookups. `noskip`
is set when the run reused commands from an `--incr-load` snapshot, since reused commands never call `addDecl` in
this process and `used` may miss constants they used.

The fields for keeping the module's commands one by one (`ModuleUsage.keepPermit`): `module`, the module's name; `olean`,
the digest of the `.olean` written beside it (`oleanDigest`, `fileDigest`), which holds the command payloads;
`githash`, the Lean that wrote both; `untracked`, the imports without digests outside the toolchain with their `.olean`
digests (`untrackedImports`); `stmt`, `computeStmt`'s result; `commands`, the per-command records; `usedAttrs`, beside
each kernel constant of a `used` entry, the attrs digest the defining module recorded for it (`importedConstDigests?`);
and `noreuse`, set when no command may be kept (`noreuseReason?`, written as `noreuseReason`). `noreuse` decides nothing
about skipping the module whole. -/
def writeUsage (env : Environment) (nodes : Array Node) (own : Array (Name × Digest)) (closure : Digest)
    (provides : Array Name × Array Name) (used : NameSet) (lookups : Array Expr)
    (stmt : Array (Name × Digest × Digest)) (commands : Array Json) (incrLoaded : Bool) (path : System.FilePath)
    (oleanDigest : Digest) (noreuseReason? : Option String := none) : IO Unit := do
  let s := state env
  let allExtra := (getLocalExtraModUses env).foldl (·.insert ·) (← extraModUsesByChecks)
  let importedHint := (← compileHints).any fun n => (env.getModuleIdxFor? n).any s.hasEntries
  let allExtra := if (← compilerCodeSeen) || importedHint then
      env.header.moduleNames.foldl (·.insert { module := ·, isExported := false, isMeta := false }) allExtra
    else allExtra
  let extraMods := allExtra.toArray.filter (fun u => (env.getModuleIdx? u.module).any s.hasEntries)
    |>.qsort fun a b => let k (u : ExtraModUse) := 2 * u.isExported.toNat + u.isMeta.toNat
      Name.quickLt a.module b.module || (a.module == b.module && k a < k b)
  let imported (ms : Array Name) (field : Digest × Digest → Digest) : Json :=
    Json.arr <| (ms.qsort Name.quickLt).toList.eraseDups.toArray.filterMap fun m => do
      return Json.arr #[nameToJson m, toJson (field (← s.importedDigests? (← env.getModuleIdx? m)))]
  let pair (n : Name) (d : Digest) := Json.arr #[nameToJson n, toJson d]
  let usedByMod ← IO.ofExcept (moduleUsed env used nodes)
  let usedAttrs ← IO.ofExcept <| usedByMod.mapM fun (m, cs) => do
    let attrs ← cs.filterMapM fun (n, _) => do
      let some i := env.getModuleIdxFor? n | return none
      unless env.contains n do return none
      return match ← importedConstDigests? env i n with
        | .digests _ _ attrs => some (n, attrs)
        | _ => none
    return (m, attrs)
  let resolvedAll ← allResolved
  -- Every name whose resolution can reach an output: used, looked up, referred to by a node, or a prefix whose
  -- attributes the compiler reads with one of those (`internalPrefixes`). `resolvedGroups` looks up only these.
  let names : NameHashSet := (← resolvedNames).foldl (·.insert ·) {}
  let names := nodes.foldl (fun s n => n.refs.foldl (·.insert ·) s) (used.foldl (·.insert ·) names)
  let names := (names : Std.HashSet Name).fold (fun s x => (internalPrefixes x).foldl (·.insert ·) s) names
  let untracked ← untrackedImports env
  let fields : List (String × Json) := [("version", usageVersion), ("noskip", incrLoaded),
    ("moduleDigest", toJson (moduleDigestOf own)),
    ("closure", toJson closure),
    ("providesDigest", toJson (providesDigestOf provides)),
    ("provides", Json.arr #[Json.arr (provides.1.map nameToJson), Json.arr (provides.2.map nameToJson)]),
    ("digested", Json.arr ((digestedModules env).map fun (m, d) => pair m d)),
    ("importedClosures", imported (env.header.imports.map (·.module)) (·.2)),
    ("importedDigests", imported (extraMods.map (·.module)) (·.1)),
    ("own", Json.arr (own.map fun (n, d) => pair n d)),
    ("used", Json.arr (usedByMod.map fun (m, cs) =>
      Json.arr #[nameToJson m, Json.arr (cs.map fun (n, d) => pair n d)])),
    ("resolvedAll", resolvedAll),
    ("resolved", Json.arr ((resolvedGroups env names).map fun (m?, ns) =>
      Json.arr #[m?.elim Json.null nameToJson, Json.arr (ns.map fun (n, k) => Json.arr #[nameToJson n, toJson k.toNat])])),
    ("usedAttrs", Json.arr (usedAttrs.map fun (m, cs) =>
      Json.arr #[nameToJson m, Json.arr (cs.map fun (n, a) => pair n a)])),
    ("extra", Json.arr (extraMods.map fun u => Json.arr #[nameToJson u.module, u.isMeta])),
    ("specKeys", Json.arr ((ownSpecKeys env).map fun (d, n) => Json.arr #[toJson d, nameToJson n])),
    ("specLookups", Json.arr ((specLookups env lookups).map fun (k, p) => Json.arr #[toJson k, toJson p])),
    ("module", nameToJson env.mainModule),
    ("olean", toJson oleanDigest),
    ("githash", toJson Lean.githash),
    ("untracked", Json.arr (untracked.map fun (m, d) => pair m d)),
    ("stmt", Json.arr (stmt.map fun (n, c, a) => Json.arr #[nameToJson n, toJson c, toJson a])),
    ("commands", Json.arr commands),
    ("noreuse", noreuseReason?.isSome)]
  let fields := match noreuseReason? with
    | some reason => fields ++ [("noreuseReason", toJson reason)]
    | none => fields
  IO.FS.writeFile path (Json.mkObj fields).compress

end Lean.ModuleUsage
