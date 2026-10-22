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
import Lean.Util.CollectAxioms
import Init.Data.String.TakeDrop
import Init.Data.String.Search
import Init.Data.String.Iterate
public section

/-!
Usage data for Lake's usage cutoff: meaning digests of a module's declarations (written into its `.olean`
when Lean runs with `--usage`), and the `.usage` sidecar recording, per imported module, the digests of
the declarations the module used, from which Lake decides whether the module must be compiled again.

A digest covers a declaration's kernel data, the axioms its module exports for it (`storedExportedAxioms?`, from which
importers compute their own) and its compiled interface (`compiledEnc`), Merkle-closed over the declarations these
refer to. Compiler-only names (`f._redArg`, `g._at_.h.spec_0`, ...) fold into an owner, a kernel constant of the same
module (`ownerOf`), whose digest covers them.
-/

namespace Lean.ModuleUsage

/-- Everything of `c`'s kernel data except its own name and the meaning of the constants it refers to; its mutual
block (`all`), which the import compares between two copies of a theorem (`subsumesInfo`), tags `c` instead of naming
it. Types and every value but a theorem's keep binder names and infos (`BinderMode.namesInfos`) and every `mdata`
payload (`MDataMode.eqv`): the compiler reads binders and `[borrowed]` annotations from imported values, from
`@[macro_inline]` bodies it inlines and from type aliases it unfolds into code types, and elaboration and inlining
copy them, `mdata` included, into the importer's own terms and `.olean`. A theorem's proof is never compiled or
copied, so its binders' names and infos and its `mdata` are left out; proof-mode annotations in proofs carry
fresh-name counters that differ between two builds of the same sources. -/
def localHash (c : ConstantInfo) : Digest :=
  let v := exprDigest .namesInfos .eqv
  let e := ({} : Enc).names c.levelParams |>.digest (v c.type)
  let all (e : Enc) (ns : List Name) := ns.foldl (init := e.nat ns.length) fun e n =>
    if n == c.name then e.u8 0 else e.u8 1 |>.name n
  let e := match c with
    | .defnInfo d => hintsEnc (all (e.u8 1) d.all |>.digest (v d.value)) d.hints |> (safetyEnc · d.safety)
    | .thmInfo t => all (e.u8 2) t.all |>.digest (exprDigest .none .none t.value)
    | .opaqueInfo o => all (e.u8 3) o.all |>.digest (v o.value) |>.bool o.isUnsafe
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

/-- `ps` with `internalPrefixes x`. The walk stops at the first prefix `ps` holds, since the prefixes after it are that
prefix's own `internalPrefixes`: the result holds every name's `internalPrefixes` if each name `ps` held before the
first call is passed here too. -/
def addInternalPrefixes (ps : NameHashSet) (x : Name) : NameHashSet := Id.run do
  let mut ps : Std.HashSet Name := ps
  for p in internalPrefixes x do
    let (had, ps') := ps.containsThenInsert p
    ps := ps'
    if had then break
  return ps

/-- The entries that open a module's digest payload in its `.olean`, before the module's digests sorted by name
(`Markers.entries`). Their name is never looked up, so no user constant can collide with it. -/
structure Markers where
  /-- The module's `closureDigest`. -/
  closure : Digest
  /-- The digest of the names the module provides to importers' resolvers and of the imported declarations it gives
  a non-local attribute (`providesDigestOf`). -/
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

/-- The digest a compile depends on for the imported name `c`: the resolver's module's; when `c` has kernel declarers
besides that module (`Environment.getKernelDeclarersIfOther?`), a digest of that digest and each declarer's, in import
order. -/
def State.digestOf (s : State) (env : Environment) (c : Name) : Option Digest :=
  let r? := env.getModuleIdxFor? c
  let d? := r?.bind (s.findAt? · c)
  match env.getKernelDeclarersIfOther? c r? with
  | none => d?
  | some ks => some (({} : Enc).opt d? Enc.digest |>.array ks fun e k => e.opt (s.findAt? k c) Enc.digest).finish

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

/-- The node of the imported name `x`, found in the digests of module `i?`, the resolver's answer for `x`: a module's
nodes are its kernel constants and the compiler-only names that fold into none (`ownNodes`), so the first of `x`'s
`ownerOf` candidates among them is the owner that module folded `x` into. `x` itself if `x` is local or its module
carries no digests. -/
def State.ownerOf (s : State) (i? : Option ModuleIdx) (x : Name) : Name :=
  match i? with
  | some i => if s.hasEntries i then ModuleUsage.ownerOf (fun c => (s.findAt? i c).isSome) x else x
  | none => x

/-- The imported nodes a use of the imported name `x` depends on: its node in the resolver's module (`ownerOf`), and
`x` itself when `x` has kernel declarers besides that module (`Environment.getKernelDeclarersIfOther?`), whose nodes
include each of their kernel constants. -/
def State.usedNodes (s : State) (env : Environment) (x : Name) : Array Name :=
  let r? := env.getModuleIdxFor? x
  let o := s.ownerOf r? x
  if o != x && (env.getKernelDeclarersIfOther? x r?).isSome then #[o, x] else #[o]

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

/-- The imported declarations the current module gives a non-local attribute (`indirectModUseExt`), sorted: an
importer that records an extra module use of one of them (`recordExtraModUseFromDecl`) records this module too. -/
def ownIndirect (env : Environment) : Array Name :=
  ((indirectModUseExt.getEntries env).toArray.map (·.declName)).qsort Name.quickLt |>.eraseReps

/-- A digest of a module's `ownProvides` and `ownIndirect`, which its `.olean` carries (`Markers.provides`) and its
`.usage` records. -/
def providesDigestOf (provides : Array Name × Array Name) (indirect : Array Name) : Digest :=
  (({} : Enc).array provides.1 Enc.name |>.array provides.2 Enc.name |>.array indirect Enc.name).finish

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
  /-- The node's kernel data and exported axioms, and the compiled interfaces of its name and its folded names
  (sorted, each named), with the module's package, which every native symbol of the module carries. -/
  localDigest : Digest
  /-- The nodes the node refers to (kernel references and compiled mentions, each mapped to its node), sorted,
  without the node itself. -/
  refs : Array Name
  deriving Inhabited

/-- The current module's nodes, from its kernel constants (`consts`) and the axioms `storeExportedAxioms` stored for
them. -/
def ownNodes (env : Environment) (consts : Array (Name × ConstantInfo × Array Name)) : Array Node := Id.run do
  let s := state env
  let lc := LocalCompiled.ofEnv env
  let axioms := (storedExportedAxioms? env).getD #[]
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
    let axs? := (axioms.binSearch (n, #[]) (Name.quickLt ·.1 ·.1)).map (·.2)
    let e := ({} : Enc).opt pkg Enc.str |>.opt k? (fun e (ci, _) => e.digest (localHash ci))
      |>.opt axs? (·.array · Enc.name)
    let mut c : CEnc := { e }
    c := compiledEnc env lc n c
    let fs := (folded.getD n #[]).filter (· != n) |>.qsort Name.quickLt
    c := c.nat fs.size
    for x in fs do
      c := compiledEnc env lc x (c.name x)
    -- A base of the module refers to its derived constants of the module, which no term mentions.
    let mentions := (k?.elim #[] (·.2)).foldl (·.insert ·) ((fwd.getD n #[]).foldl (·.insert ·) c.ms)
    let rs : NameSet := mentions.foldl (init := {}) fun rs m =>
      let os := if (env.getModuleIdxFor? m).isSome then s.usedNodes env m else #[localOwner m]
      os.foldl (fun rs o => if o == n then rs else rs.insert o) rs
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
        e.name r |>.opt (out[r]? <|> s.digestOf env r) Enc.digest) |>.finish
    for m in scc do out := out.insert m d
  return (nodes.map fun n => (n.name, out[n.name]!)).qsort fun a b => Name.quickLt a.1 b.1

def localDigests (env : Environment) (nodes := ownNodes env (ownConsts env)) : Array (Name × Digest) :=
  compute env (state env) nodes

/-- The imported constants the compiler reads by a name derived from one of `xs` when it compiles a use of it: each
one's derived constants (`derivedSuffixes`) and the prefixes whose attributes it reads with its own
(`internalPrefixes`). Each name is looked up once. -/
def derivedReads (env : Environment) (xs : NameSet) : Array Name :=
  let (derived, prefixes) := xs.foldl (init := (#[], ({} : NameHashSet))) fun (ds, ps) x =>
    (derivedSuffixes.foldl (fun ds s => ds.push (x.str s)) ds, addInternalPrefixes ps x)
  (derived ++ (prefixes : Std.HashSet Name).toArray).filter fun d => (env.getModuleIdxFor? d).isSome && env.contains d

/-- Per module, sorted: each imported node the current module depends on, with its digest in that module. The nodes
are the `State.usedNodes` of every imported name that the current module's nodes refer to or that is in `extra`, and
of every imported constant the compiler reads by a name derived from one of those or from a node (`derivedReads`),
and every imported kernel constant several modules declare (`Environment.getImportedKernelDuplicates`): the import
keeps a copy chosen from all of theirs, which an import's node may reach. Each is listed under the resolver's module
and, when `Environment.getKernelDeclarersIfOther?` lists declarers, under each of them. A node without a digest in a
module (its `.olean` carries none) is left out there. -/
def moduleUsed (env : Environment) (extra : NameSet) (nodes := ownNodes env (ownConsts env)) :
    Array (Name × Array (Name × Digest)) :=
  let s := state env
  let used := extra.foldl (init := (∅ : NameSet)) fun u x => (s.usedNodes env x).foldl (·.insert ·) u
  let used := nodes.foldl (init := used) fun u n => n.refs.foldl (·.insert ·) u
  let sources := nodes.foldl (·.insert ·.name) (extra.foldl (·.insert ·) used)
  let used := (derivedReads env sources).foldl (fun u d => (s.usedNodes env d).foldl (·.insert ·) u) used
  let used := env.getImportedKernelDuplicates.foldl (·.insert ·.1) used
  let push (m : Std.HashMap Name (Array (Name × Digest))) (i : ModuleIdx) (c : Name) :=
    match s.findAt? i c with
    | some d => m.alter env.header.modules[i.toNat]!.module fun o => some ((o.getD #[]).push (c, d))
    | none => m
  let byMod := used.foldl (init := (∅ : Std.HashMap Name (Array (Name × Digest)))) fun m c =>
    let r? := env.getModuleIdxFor? c
    let m := r?.elim m (push m · c)
    (env.getKernelDeclarersIfOther? c r?).elim m (·.foldl (fun m k => if r? == some k then m else push m k c) m)
  byMod.toArray.map (fun (k, v) => (k, v.qsort fun a b => Name.quickLt a.1 b.1))
    |>.qsort fun a b => Name.quickLt a.1 b.1

unsafe structure WalkState where
  /-- Visited metavariable-free subterms: their constants do not depend on any assignment. -/
  closed : PtrSet Expr := mkPtrSet
  /-- Visited subterms with metavariables, valid for `mctx` only. -/
  opened : PtrSet Expr := mkPtrSet
  mctx : MetavarContext := {}
  used : NameSet

/-- Whether `e` was visited, marking it visited. -/
@[inline] unsafe def WalkState.visit (s : WalkState) (e : Expr) : Bool × WalkState :=
  if e.hasMVar then
    let (seen, opened) := s.opened.containsThenInsert { value := e }
    (seen, { s with opened })
  else
    let (seen, closed) := s.closed.containsThenInsert { value := e }
    (seen, { s with closed })

/-- `s` with `c` used. -/
@[inline] unsafe def WalkState.use (s : WalkState) (c : Name) : WalkState :=
  { s with used := s.used.insert c }

/-- Adds the constants of `e` with its metavariables instantiated by `s.mctx`, following assignments in place
of building the instantiated term. -/
unsafe def walkExpr (e : Expr) : StateM WalkState Unit := do
  if ← modifyGet (·.visit e) then return
  match e with
  | .forallE _ d b _ | .lam _ d b _ => walkExpr d; walkExpr b
  | .letE _ t v b _ => walkExpr t; walkExpr v; walkExpr b
  | .app f a => walkExpr f; walkExpr a
  | .mdata _ b => walkExpr b
  | .proj n _ b => modify (·.use n); walkExpr b
  | .const c _ => modify (·.use c)
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
    | .ofFieldInfo fi => modify (·.use fi.projName)
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

/-- What `tableDigest` reads of one module's cross-module compiler tables. -/
private structure TableEntries where
  csimp : Array (ScopedEnvExtension.Entry Compiler.CSimp.Entry)
  insts : Array (ScopedEnvExtension.Entry Meta.InstanceEntry)
  reds : Array (ScopedEnvExtension.Entry (Name × ReducibilityStatus))
  classes : Array ClassEntry
  passes : Array Name
  folders : Array Compiler.LCNF.Simp.ConstantFold.FolderOleanEntry
  hints : Array (ScopedEnvExtension.Entry Meta.UnificationHintEntry)
  matchers : Array Meta.Match.Extension.Entry
  metas : Array Name

/-- Module `i?`'s `TableEntries`: an imported module's from its `.olean`, the current module's from its local
entries (`pickEntries`). -/
private def TableEntries.ofModule (env : Environment) (i? : Option ModuleIdx) : TableEntries where
  csimp := pickEntries i? (Compiler.CSimp.ext.ext.getModuleEntries env ·)
    (Compiler.CSimp.ext.ext.getState env).newEntries
  insts := pickEntries i? (Meta.instanceExtension.ext.getModuleEntries env ·)
    (Meta.instanceExtension.ext.getState env).newEntries
  reds := pickEntries i? (reducibilityExtraExt.ext.getModuleEntries env ·)
    (reducibilityExtraExt.ext.getState env).newEntries
  classes := pickEntries i? (classExtension.getModuleEntries env ·) (classExtension.getEntries env)
  passes := pickEntries i? (Compiler.LCNF.passManagerExt.getModuleEntries env ·)
    (Compiler.LCNF.passManagerExt.getState env).1
  folders := pickEntries i? (Compiler.LCNF.Simp.ConstantFold.folderExt.getModuleEntries env ·)
    ((Compiler.LCNF.Simp.ConstantFold.folderExt.getState env).1.map (·.toFolderOleanEntry))
  hints := pickEntries i? (Meta.unificationHintExtension.ext.getModuleEntries env ·)
    (Meta.unificationHintExtension.ext.getState env).newEntries
  matchers := pickEntries i? (Meta.Match.Extension.extension.getModuleEntries env ·)
    (Meta.Match.Extension.extension.getEntries env)
  metas := declMetaEntries env i?

/-- The current module's `TableEntries` as its importers read them (`ofModule env (some i)`): the entries its
`.olean` exports at the private level, which is where the module's digests are (`ext`). -/
private def TableEntries.ofExports (env : Environment) : TableEntries where
  csimp := (Compiler.CSimp.ext.ext.exportedEntries env).«private»
  insts := (Meta.instanceExtension.ext.exportedEntries env).«private»
  reds := (reducibilityExtraExt.ext.exportedEntries env).«private»
  classes := (PersistentEnvExtension.exportedEntries classExtension env).«private»
  passes := (Compiler.LCNF.passManagerExt.exportedEntries env).«private»
  folders := (Compiler.LCNF.Simp.ConstantFold.folderExt.exportedEntries env).«private»
  hints := (Meta.unificationHintExtension.ext.exportedEntries env).«private»
  matchers := (PersistentEnvExtension.exportedEntries Meta.Match.Extension.extension env).«private»
  metas := declMetaExportedEntries env

/-- A digest of one module's entries in the cross-module compiler tables (`t`): `@[csimp]` replacements, instances
and classes declared for another module's declaration, reducibility set for another module's declaration,
unification hints, `@[cpass]` installers and constant folders, each hint (with its discrimination-tree keys),
installer and folder with its declaration's digest, matcher info and IR meta marks written for another module's
declaration, and its derived constants for another module's base with their digests (`foreignDerivedConsts`).
`kernel` is the module's kernel constants (`ownProvides`) and `ownDigest` its digests: which declarations are the
module's own comes from `kernel` alone, and an own declaration's digest from `ownDigest`. `digestOf` gives another
module's declaration's digest, through the resolver of the module that computes the digest.

Generic in the monad so that `TableRecord.ofExports` can record each name it asks `digestOf` about with the answer:
the result depends on nothing but `t`, `kernel`, `ownDigest` and those answers. -/
@[specialize] private def tableDigestM {m : Type → Type} [Monad m] (t : TableEntries) (kernel : Array Name)
    (ownDigest : Name → Option Digest) (digestOf : Name → m (Option Digest)) : m Digest := do
  let foreign (n : Name) : Bool := !definedIn kernel n
  let insts := t.insts.filter fun e => match e with
    | .global a | .scoped _ a => a.globalName?.any foreign
  let classes := t.classes.filter (foreign ·.name)
  let matchers := t.matchers.filter (foreign ·.name)
  let metas := t.metas.filter foreign
  let digest (n : Name) : m (Option Digest) := if definedIn kernel n then pure (ownDigest n) else digestOf n
  let passes ← t.passes.mapM fun n => do return (n, ← digest n)
  let folders ← t.folders.mapM fun f => do return (f.declName, f.folderDeclName, ← digest f.folderDeclName)
  let hints ← t.hints.mapM fun e => do
    match e with
    | .global h | .scoped _ h => return (e, ← digest h.val)
  let derived := (foreignDerivedConsts kernel).map fun n => (n, ownDigest n)
  let digestEnc (e : Enc) (nd : Name × Option Digest) := e.name nd.1 |>.opt nd.2 Enc.digest
  return ({} : Enc)
    |>.array t.csimp (scopedEnc fun e (c : Compiler.CSimp.Entry) =>
      let ⟨fromDeclName, toDeclName, thmName⟩ := c
      e.name fromDeclName |>.name toDeclName |>.name thmName)
    |>.array insts (scopedEnc instanceEntryEnc)
    |>.array t.reds (scopedEnc fun e ((n, st) : Name × ReducibilityStatus) => reducibilityEnc (e.name n) st)
    |>.array classes (fun e c =>
      let ⟨name, outParams, outLevelParams⟩ := c
      e.name name |>.nats outParams |>.nats outLevelParams)
    |>.array passes digestEnc
    |>.array folders (fun e (declName, n, d) => digestEnc (e.name declName) (n, d))
    |>.array hints (fun e (x, d) => scopedEnc (fun e (h : Meta.UnificationHintEntry) =>
      digestEnc (e.array h.keys discrKeyEnc) (h.val, d)) e x)
    |>.array matchers (fun e mt =>
      let ⟨name, info⟩ := mt
      (matcherInfoEnc { e := e.name name } info).e)
    |>.array metas Enc.name
    |>.array derived digestEnc |>.finish

/-- The `tableDigestM` of module `i?`'s entries (`TableEntries.ofModule`). `i? = none` is the current module. -/
def tableDigest (env : Environment) (i? : Option ModuleIdx) (kernel : Array Name)
    (ownDigest digestOf : Name → Option Digest) : Digest :=
  Id.run <| tableDigestM (TableEntries.ofModule env i?) kernel ownDigest (pure <| digestOf ·)

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

/-- The digest `closureDigest` takes of a declaration a cross-module table entry names: the current module's
(`ownMap`), else the one the compile depends on (`State.digestOf`). -/
def State.closureDigestOf (s : State) (env : Environment) (ownMap : Std.HashMap Name Digest) (n : Name) :
    Option Digest :=
  ownMap[n]? <|> s.digestOf env n

/-- A module's `tableDigest` as its importers compute it, stored in its `.olean` (`tableExt`) with the questions the
digest asked about other modules' declarations: an importer whose own answers to all of them are these takes
`digest` instead of computing it (`importedTableDigest`). -/
structure TableRecord where
  /-- `tableDigestM` of the module's exported entries (`TableEntries.ofExports`), kernel constants and digests, and
  these answers. -/
  digest : Digest
  /-- Each name `tableDigestM` asked `digestOf` about, in order, with the answer. -/
  digests : Array (Name × Option Digest)
  deriving Inhabited

/-- The current module's `TableRecord`, from its exported entries (`TableEntries.ofExports`), its kernel constants
`provides.1` (`ownProvides`) and its digests `own` (`localDigests`), answering `digestOf` as the module's own
`closureDigest` does (`State.closureDigestOf`). -/
def TableRecord.ofExports (env : Environment) (own : Array (Name × Digest)) (provides : Array Name × Array Name) :
    TableRecord :=
  let ownMap : Std.HashMap Name Digest := own.foldl (fun m (n, d) => m.insert n d) {}
  let digestOf := (state env).closureDigestOf env ownMap
  let answer (n : Name) : StateM (Array (Name × Option Digest)) (Option Digest) := do
    let d := digestOf n
    modify (·.push (n, d))
    return d
  let (digest, digests) := (tableDigestM (TableEntries.ofExports env) provides.1 (ownMap[·]?) answer).run #[]
  { digest, digests }

/-- Private like `ext`, which holds the module's other digests. -/
private builtin_initialize tableExt : PersistentEnvExtension TableRecord TableRecord (Option TableRecord) ←
  registerPersistentEnvExtension {
    mkInitial := pure none
    addImportedFn := fun _ => pure none
    addEntryFn := fun _ r => some r
    exportEntriesFnEx := fun _ r? => { exported := #[], server := #[], «private» := r?.toArray }
    asyncMode := .mainOnly
  }

/-- Module `i`'s `TableRecord`, if its `.olean` has one. -/
def tableRecord? (env : Environment) (i : ModuleIdx) : Option TableRecord :=
  (tableExt.getModuleEntries env i)[0]?

/-- Stores `own` (`localDigests env`), the module's `closureDigest`, its `ownProvides` and the digest of those with
its `ownIndirect` for the extensions to export, and its `TableRecord` for `tableExt`. Without it, the `.olean` carries
no digests. `env` is the environment the `.olean` is written from: the record holds the entries that `writeModule`
exports from it. -/
def setLocalDigests (env : Environment) (own : Array (Name × Digest)) (closure : Digest)
    (provides : Array Name × Array Name) (indirect : Array Name) : Environment :=
  let record := TableRecord.ofExports env own provides
  let env := tableExt.modifyState (asyncMode := .mainOnly) env fun _ => some record
  let env := ext.modifyState (asyncMode := .mainOnly) env
    ({ · with localDigests? := some (own, { closure, provides := providesDigestOf provides indirect }) })
  providesExt.modifyState (asyncMode := .mainOnly) env fun _ => some provides

/-- Imported module `i`'s `tableDigest` as an importer whose other modules' digests are `digestOf` computes it:
`i`'s kernel constants (`importedKernel`) and digests (`State.findAt?`) come from its `.olean`. -/
def computedTableDigest (env : Environment) (i : ModuleIdx) (digestOf : Name → Option Digest) : Digest :=
  tableDigest env (some i) (importedKernel env i) ((state env).findAt? i) digestOf

/-- Whether `digestOf` answers each question of `r` as `r` does. -/
def TableRecord.holds (r : TableRecord) (digestOf : Name → Option Digest) : Bool :=
  r.digests.all fun (n, d) => digestOf n == d

/-- `computedTableDigest env i digestOf`: module `i`'s stored digest if its record holds (`TableRecord.holds`),
which then is that value (`tableDigestM` reads the same entries, kernel constants and digests and gets the same
answers), and computed otherwise. -/
def importedTableDigest (env : Environment) (i : ModuleIdx) (digestOf : Name → Option Digest) : Digest :=
  match tableRecord? env i with
  | some r => if r.holds digestOf then r.digest else computedTableDigest env i digestOf
  | none => computedTableDigest env i digestOf

/-- A digest of the module's import closure: its modules in import order (`env.header.moduleNames`, the order
in which every compiler table applies their entries, so that the last import wins where entries conflict), and
for every module (imported ones with digests, and the current one, whose digests are `own` and kernel constants
`provides.1`) the digest of its cross-module compiler tables (`tableDigest`; `importedTableDigest` for an imported
module). Importers compare it through Lake's `closureHash`, so a change to any module's tables, or to the import
order, rebuilds every module downstream. -/
def closureDigest (env : Environment) (own : Array (Name × Digest)) (provides : Array Name × Array Name) :
    Digest :=
  let s := state env
  let ownMap : Std.HashMap Name Digest := own.foldl (fun m (n, d) => m.insert n d) {}
  let digestOf := s.closureDigestOf env ownMap
  ({} : Enc).array env.header.moduleNames.zipIdx (fun e (m, i) =>
      e.name m |>.opt (if s.hasEntries i then some (importedTableDigest env i digestOf) else none) Enc.digest)
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

/-- A name's identity in a module's `.resolved` sidecar (`encodeResolved`): the digest of its canonical encoding
(`Enc.name`). Lean's writer and Lake's check (`ResolvedTable.providerUnchanged`) both call it. -/
def resolvedId (n : Name) : Digest := (({} : Enc).name n).finish

/-- Each distinct name of `provides`, a module's `ownProvides` (each array sorted by `Name.quickLt`), with its
`resolvedId` and the nonzero kinds under which `provides` lists it (`kindsIn`). -/
def providedIds (provides : Array Name × Array Name) : Array (Digest × UInt8) := Id.run do
  let (kernel, extra) := provides
  let mut out := Array.emptyWithCapacity (kernel.size + extra.size)
  for i in [0:kernel.size] do
    let n := kernel[i]!
    unless i > 0 && kernel[i - 1]! == n do
      out := out.push (resolvedId n, kindsIn kernel extra n)
  for i in [0:extra.size] do
    let n := extra[i]!
    unless (i > 0 && extra[i - 1]! == n) || kernel.binSearchContains n Name.quickLt do
      out := out.push (resolvedId n, extraKind)
  return out

/-- The bytes of a module's `.resolved` sidecar, from its `resolvedGroups`: the groups (`Enc.array`), each its module
(`Enc.opt`, `Enc.name`) and its entries (`Enc.array`), each its name's `resolvedId` (`Enc.digest`) and its kinds
(`Enc.u8`). Read by `ResolvedTable.decode?`. -/
def encodeResolved (groups : Array (Option Name × Array (Name × UInt8))) : ByteArray :=
  (({} : Enc).array groups fun e (m?, ns) =>
    e.opt m? Enc.name |>.array ns fun e (n, k) => e.digest (resolvedId n) |>.u8 k).buf

/-- A module's `.resolved` sidecar as Lake reads it (`ResolvedTable.decode?`): its `resolvedGroups`, each name by its
`resolvedId`. -/
structure ResolvedTable where
  /-- Each group's module (`none`: the module itself, or no module), in sidecar order. -/
  modules : Array (Option Name)
  /-- Per group, how many of its entries have nonzero kinds. -/
  provided : Array Nat
  /-- Each entry's name identity, with the index of its group in `modules` and its kinds. -/
  entries : Std.HashMap Digest (Nat × UInt8)

namespace ResolvedTable

/-- A position in the bytes `decode?` reads. -/
private abbrev DecM := StateT Nat (Except String)

private def u8 (b : ByteArray) : DecM UInt8 := do
  let i ← get
  unless i < b.size do throw "truncated"
  set (i + 1)
  return b[i]!

/-- `Enc.u64`: little-endian. -/
private def u64 (b : ByteArray) : DecM UInt64 := do
  let i ← get
  unless i + 8 ≤ b.size do throw "truncated"
  set (i + 8)
  let mut v : UInt64 := 0
  for k in [0:8] do
    v := v ||| (b[i + k]!.toUInt64 <<< (8 * k).toUInt64)
  return v

private def str (b : ByteArray) : DecM String := do
  let n := (← u64 b).toNat
  let i ← get
  unless i + n ≤ b.size do throw "truncated"
  set (i + n)
  match String.fromUTF8? (b.extract i (i + n)) with
  | some s => return s
  | none => throw "a string is not UTF-8"

/-- `Enc.nat`: the decimal digits `toString` writes. -/
private def nat (b : ByteArray) : DecM Nat := do
  let s ← str b
  match s.toNat? with
  | some n => if toString n == s then return n else throw s!"expected a natural number, got {s}"
  | none => throw s!"expected a natural number, got {s}"

private def name (b : ByteArray) : DecM Name := do
  let mut n := Name.anonymous
  for _ in [0:(← nat b)] do
    match ← u8 b with
    | 1 => n := .str n (← str b)
    | 2 => n := .num n (← nat b)
    | t => throw s!"unknown name component tag {t}"
  return n

private def decodeM (bytes : ByteArray) : DecM ResolvedTable := do
  let mut modules := #[]
  let mut provided := #[]
  let mut entries : Std.HashMap Digest (Nat × UInt8) := {}
  let mut seen : Std.HashSet (Option Name) := {}
  for _ in [0:(← nat bytes)] do
    let m? ← match ← u8 bytes with
      | 0 => pure none
      | 1 => some <$> name bytes
      | t => throw s!"unknown option tag {t}"
    if seen.contains m? then throw s!"two groups of the module {m?}"
    seen := seen.insert m?
    let g := modules.size
    let mut live := 0
    for _ in [0:(← nat bytes)] do
      let d : Digest := ⟨← u64 bytes, ← u64 bytes⟩
      let k ← u8 bytes
      if entries.contains d then throw s!"two entries of the identity {d.hex}"
      entries := entries.insert d (g, k)
      if k != 0 then live := live + 1
    modules := modules.push m?
    provided := provided.push live
  unless (← get) == bytes.size do throw "trailing bytes"
  return { modules, provided, entries }

/-- Reads the bytes `encodeResolved` writes. Fails on any other bytes, and if two groups have one module or two entries
one identity, which `resolvedGroups` never writes: each name is in one group. -/
def decode? (bytes : ByteArray) : Except String ResolvedTable :=
  (decodeM bytes).run' 0

/--
Whether module `m`, whose provides changed to `provides` (its `ownProvides`), still resolves every name of the table as
the compile saw it: each name recorded under `m` is provided by `m` with the recorded kinds, and each name recorded
under another module or under none is not provided by `m`, except as a kernel constant alone when the compile depended
on `m`'s copy (`declared`: the names `used` lists under `m`). Lean recorded each name `n` once (`resolvedGroups`),
under the module `g` the resolver mapped it to, with the kinds `k` under which `g` provided it.

This is the check `∀ (n, g, k) recorded, kindsIn m n = if g = m then k else 0 ∨ (g ≠ m ∧ kindsIn m n = kernelKind ∧
n ∈ declared)`, inverted so that it walks `m`'s names instead of every recorded one. Let `P` be the distinct names `m`
provides under nonzero kinds (`providedIds`); every other name has `kindsIn m n = 0`. The walk fails on an `n ∈ P`
recorded under another group (the check demands `kindsIn m n = 0` there) unless `n` is provided as a kernel constant
alone and is in `declared`, or recorded under `m` with `k ≠ kindsIn m n`, which also covers an entry of `m` with
`k = 0`; otherwise it counts the entries of `m` matched. The names of `P` are distinct and each identity is one entry,
so the matched entries are distinct, all of `m` with `k ≠ 0`, and `found = provided[m]` holds exactly when every
entry of `m` with `k ≠ 0` has its name in `P` with kinds `k`. Together these are the check: an entry of another group
must have its name outside `P` or be exempt, an entry of `m` with `k = 0` must have its name outside `P`, and an entry
of `m` with `k ≠ 0` inside it with kinds `k`.

Names are compared by `resolvedId`, a 128-bit truncated SHA-256 of the injective `Enc.name`: the construction of every
other usage digest (a declaration's digest, `moduleDigest`, `providesDigest`), so two names share an identity only
through a collision that would hide a change behind any of those as well. Two recorded names sharing one fail
`decode?`.
-/
def providerUnchanged (t : ResolvedTable) (m : Name) (provides : Array Name × Array Name) (declared : Array Name) :
    Bool := Id.run do
  let g? := t.modules.findIdx? (· == some m)
  let declaredIds : Std.HashSet Digest := declared.foldl (·.insert <| resolvedId ·) {}
  let mut found := 0
  for (d, k) in providedIds provides do
    if let some (g, k') := t.entries[d]? then
      if some g == g? then
        unless k' == k do return false
        found := found + 1
      else
        unless k == kernelKind && declaredIds.contains d do return false
  return found == g?.elim 0 (t.provided[·]!)

end ResolvedTable

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

/-- For each key the current module looked up in the specialization cache (`lookups`), deduplicated and sorted,
its providers among the imported non-`module` files with digests (`specProviders`); Lake rebuilds the module when
one of these changes. Providers in modules without digests (the toolchain) are pinned by the Lean githash, those in
`module` files by Lake's `modsysHash`. -/
private def specLookups (env : Environment) (lookups : Array Expr) : Array (Digest × Digest) :=
  let keys := (lookups.foldl (·.insert <| specKeyDigest ·) ({} : Std.HashSet Digest)).toArray.qsort Digest.lt
  if keys.isEmpty then #[] else
  let s := state env
  specProviders keys <| env.header.moduleNames.zipIdx.filterMap fun (m, i) =>
    if s.hasEntries i && !(env.header.moduleData[i]?.any (·.isModule)) then
      some (m, specKeysOf (specCacheEntries env (some i)))
    else none

/-- The format version of the `.usage` sidecar, of its `.resolved` sidecar and of Lake's `.usekey`; Lake reads a
sidecar of any other version as absent. -/
def usageVersion : Nat := 14

/-- `own` is `localDigests env nodes`, `closure` the module's `closureDigest`, `provides` its `ownProvides` and
`indirect` its `ownIndirect`, as `setLocalDigests` stored them; `used` holds the imported names recorded while
elaborating (`moduleUsed`'s `extra`);
`lookups` the specialization-cache keys looked up (`lookedUpSpecKeys`). The extra module uses are the environment's
and `extraModUsesByChecks` (those of commands whose environment was discarded); if a compile ran code or read state
the used names do not cover (`compilerCodeSeen`, or a unification hint from an imported module with digests matched
inside a compile, `compileHints`), every imported module with digests is one. `importedClosures` records each direct
import's `closureDigest` and `importedDigests` each extra module's `moduleDigest`, as this compile imported them from
their `.olean` files: Lake writes a `.usekey` only if those are still what the modules' `.usage` files say when it
writes it, so the key describes what the compile read. `digested` records each imported module's provides digest, and
the `.resolved` sidecar written next to `path` (`path` with the extension `resolved`, `encodeResolved`) the module and
kinds every name of `used`, of the nodes' references and of `resolvedNames` resolves to (`resolvedGroups`), so that
Lake rebuilds the module when a closure module whose provides changed gains, loses or changes the kinds of any of those
names, or gives one of them a non-local attribute (`indirect`, which makes a fresh compile record that module as an
extra use); the `.usage` records the digest of its bytes (`resolvedDigest`, `Digest.ofBytes`). `resolvedAll` is set
when the whole resolver map was read (`allResolved`), so that Lake rebuilds the module when any closure module's
provides changed. Call it after everything else the process writes: `resolvedNames` is read last here, after this
function's own lookups. `noskip` is set when the run reused commands from an `--incr-load` snapshot, since reused
commands never call `addDecl` in this process and `used` may miss constants they used. -/
def writeUsage (env : Environment) (nodes : Array Node) (own : Array (Name × Digest)) (closure : Digest)
    (provides : Array Name × Array Name) (indirect : Array Name) (used : NameSet) (lookups : Array Expr)
    (incrLoaded : Bool) (path : System.FilePath) : IO Unit := do
  let s := state env
  let allExtra := (getLocalExtraModUses env).foldl (·.insert ·) (← extraModUsesByChecks)
  let importedHint := (← compileHints).any fun n =>
    let r? := env.getModuleIdxFor? n
    r?.any s.hasEntries || (env.getKernelDeclarersIfOther? n r?).any (·.any s.hasEntries)
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
  let usedJson := Json.arr ((moduleUsed env used nodes).map fun (m, cs) =>
    Json.arr #[nameToJson m, Json.arr (cs.map fun (n, d) => pair n d)])
  let resolvedAll ← allResolved
  -- Every name whose resolution can reach an output: used, looked up, referred to by a node, an imported kernel
  -- constant several modules declare (`moduleUsed`), or a prefix whose attributes the compiler reads with one of those
  -- (`internalPrefixes`). `resolvedGroups` looks up only these.
  let names : NameHashSet := (← resolvedNames).foldl (·.insert ·) {}
  let names := nodes.foldl (fun s n => n.refs.foldl (·.insert ·) s) (used.foldl (·.insert ·) names)
  let names := env.getImportedKernelDuplicates.foldl (·.insert ·.1) names
  let names := (names : Std.HashSet Name).fold addInternalPrefixes names
  let resolved := encodeResolved (resolvedGroups env names)
  IO.FS.writeBinFile (path.withExtension "resolved") resolved
  let j := Json.mkObj [("version", usageVersion), ("noskip", incrLoaded),
    ("moduleDigest", toJson (moduleDigestOf own)),
    ("closure", toJson closure),
    ("providesDigest", toJson (providesDigestOf provides indirect)),
    ("provides", Json.arr #[Json.arr (provides.1.map nameToJson), Json.arr (provides.2.map nameToJson)]),
    ("indirect", Json.arr (indirect.map nameToJson)),
    ("digested", Json.arr ((digestedModules env).map fun (m, d) => pair m d)),
    ("importedClosures", imported (env.header.imports.map (·.module)) (·.2)),
    ("importedDigests", imported (extraMods.map (·.module)) (·.1)),
    ("own", Json.arr (own.map fun (n, d) => pair n d)),
    ("used", usedJson),
    ("resolvedAll", resolvedAll),
    ("resolvedDigest", toJson (Digest.ofBytes resolved)),
    ("extra", Json.arr (extraMods.map fun u => Json.arr #[nameToJson u.module, u.isMeta])),
    ("specKeys", Json.arr ((ownSpecKeys env).map fun (d, n) => Json.arr #[toJson d, nameToJson n])),
    ("specLookups", Json.arr ((specLookups env lookups).map fun (k, p) => Json.arr #[toJson k, toJson p]))]
  IO.FS.writeFile path j.compress

end Lean.ModuleUsage
