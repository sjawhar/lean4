/-
Copyright (c) 2026 Theorem Labs. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
-/
module
prelude
public import Lean.Util.SCC
public import Lean.Util.FoldConsts
public import Lean.Util.PtrSet
public import Lean.Compiler.ImplementedByAttr
public import Lean.Compiler.ExternAttr
public import Lean.Compiler.ExportAttr
public import Lean.Compiler.NoncomputableAttr
public import Lean.Elab.InfoTree.Types
public import Lean.Util.UsedByChecks
import Lean.ExtraModUses
import Lean.Compiler.Old
import Lean.Compiler.IR.CompilerM
import Lean.Compiler.InlineAttrs
import Lean.Compiler.NeverExtractAttr
import Lean.Meta.Native
import Lean.Elab.InfoTree.Util
public section

/-!
Usage data for Lake's usage cutoff: meaning digests of a module's constants (written into its `.olean`
when Lean runs with `--usage`), and the `.usage` sidecar recording, per imported module, the digests of
the constants the module used, from which Lake decides whether the module must be compiled again.
-/

namespace Lean.ModuleUsage

/-- A 128-bit digest, read big-endian into `hi` then `lo`: a meaning digest is the first 128 bits of a
SHA-256 (`src/library/usage_digest.cpp`), a file's digest the XXH3-128 of its bytes (`fileDigest`). -/
structure Digest where
  hi : UInt64
  lo : UInt64
  deriving BEq, Hashable, Inhabited

/-- The SHA-256 of `bytes`, truncated to a `Digest`. -/
@[extern "lean_usage_digest_bytes"]
opaque Digest.ofBytes (bytes : @& ByteArray) : Digest

/-- The XXH3-128 hash of the file's bytes, read in fixed-size chunks: what Lake compares to tell whether
a file it checks for usage cutoff is the one it recorded. -/
@[extern "lean_usage_file_digest"]
opaque fileDigest (path : @& System.FilePath) : IO Digest

private def hex16 (v : UInt64) : String :=
  let s := String.ofList (Nat.toDigits 16 v.toNat); "".pushn '0' (16 - s.length) ++ s

/-- 32 lowercase hex digits. -/
def Digest.hex (d : Digest) : String := hex16 d.hi ++ hex16 d.lo

/-- Parses exactly 32 lowercase hex digits. -/
def Digest.ofHex? (s : String) : Option Digest := do
  let bs := s.toUTF8
  guard (bs.size == 32)
  let v ← bs.foldlM (init := 0) fun (n : Nat) b =>
    if '0'.toUInt8 ≤ b && b ≤ '9'.toUInt8 then
      some (16 * n + (b.toNat - '0'.toNat))
    else if 'a'.toUInt8 ≤ b && b ≤ 'f'.toUInt8 then
      some (16 * n + (b.toNat - 'a'.toNat + 10))
    else none
  return ⟨(v >>> 64).toUInt64, v.toUInt64⟩

instance : ToJson Digest := ⟨fun d => .str d.hex⟩
instance : FromJson Digest := ⟨fun j => do
  let s ← j.getStr?
  (Digest.ofHex? s).elim (throw s!"expected a digest of 32 hex digits, got {s}") pure⟩

/-- An injective byte encoding, hashed by `finish`: every variable-length field is length-prefixed and
every alternative tagged, so different values never encode to the same bytes. -/
structure Enc where
  buf : ByteArray := .emptyWithCapacity 256

namespace Enc
@[inline] def u8 (e : Enc) (v : UInt8) : Enc := ⟨e.buf.push v⟩
def u64 (e : Enc) (v : UInt64) : Enc :=
  ⟨e.buf.push v.toUInt8 |>.push (v >>> 8).toUInt8 |>.push (v >>> 16).toUInt8 |>.push (v >>> 24).toUInt8
    |>.push (v >>> 32).toUInt8 |>.push (v >>> 40).toUInt8 |>.push (v >>> 48).toUInt8 |>.push (v >>> 56).toUInt8⟩
def bool (e : Enc) (v : Bool) : Enc := e.u8 (if v then 1 else 0)
def str (e : Enc) (s : String) : Enc := let b := s.toUTF8; ⟨(e.u64 b.size.toUInt64).buf ++ b⟩
def nat (e : Enc) (n : Nat) : Enc := e.str (toString n)
def digest (e : Enc) (d : Digest) : Enc := e.u64 d.hi |>.u64 d.lo
/-- The component count, then each component root first, tagged string or number. -/
def name (e : Enc) (n : Name) : Enc :=
  go n (e.nat n.getNumParts)
where
  go : Name → Enc → Enc
    | .anonymous, e => e
    | .str p s, e => (go p e).u8 1 |>.str s
    | .num p k, e => (go p e).u8 2 |>.nat k
def names (e : Enc) (ns : List Name) : Enc := ns.foldl name (e.nat ns.length)
def opt {α : Type} (e : Enc) (o : Option α) (f : Enc → α → Enc) : Enc :=
  match o with
  | none => e.u8 0
  | some a => f (e.u8 1) a
def finish (e : Enc) : Digest := Digest.ofBytes e.buf
end Enc

/-- A Merkle SHA-256 digest of `e`'s structure (`src/library/usage_digest.cpp`), linear in its distinct
subterms. Ignores `mdata`. With `binders`, binder names and infos count (types: they steer elaboration
downstream); without, it sees what the kernel sees. -/
@[extern "lean_usage_expr_digest"]
opaque exprDigest (binders : Bool) (e : @& Expr) : Digest

def externEnc (e : Enc) (d : ExternAttrData) : Enc :=
  d.entries.foldl (init := e.nat d.entries.length) fun e x => match x with
    | .adhoc b => e.u8 1 |>.name b
    | .inline b p => e.u8 2 |>.name b |>.str p
    | .standard b f => e.u8 3 |>.name b |>.str f
    | .opaque => e.u8 4

def hintsEnc (e : Enc) : ReducibilityHints → Enc
  | .opaque => e.u8 0 | .abbrev => e.u8 1 | .regular h => e.u8 2 |>.u64 h.toUInt64
def safetyEnc (e : Enc) : DefinitionSafety → Enc
  | .safe => e.u8 0 | .unsafe => e.u8 1 | .partial => e.u8 2

/-- The parameter borrow flags of `c`'s IR declaration, explicit (`@&`) or inferred: its callers' compiled
code follows them (who releases an argument), and `@&` is `mdata`, which `exprDigest` ignores. -/
private def borrowEnc (e : Enc) (d : IR.Decl) : Enc :=
  d.params.foldl (fun e p => e.bool p.borrow) (e.nat d.params.size)

private def inlineEnc (e : Enc) : Compiler.InlineAttributeKind → Enc
  | .inline => e.u8 0 | .noinline => e.u8 1 | .macroInline => e.u8 2 | .inlineIfReduce => e.u8 3
  | .alwaysInline => e.u8 4

/-- Everything of `c` except its own name and the meaning of the constants it refers to, including what its
importers' compiled code depends on: the `@[extern]` entries, the `@[export]` name, the borrow flags of its
IR parameters, its inline attribute (`@[macro_inline]` inlines it into callers and stops emitting it) and
`@[never_extract]` (whether callers may share one evaluation of a closed application). -/
def localHash (env : Environment) (c : ConstantInfo) : Digest :=
  let v := exprDigest false
  let e := ({} : Enc).names c.levelParams |>.digest (exprDigest true c.type)
    |>.opt (Compiler.getImplementedBy? env c.name) Enc.name
    |>.opt (getExternAttrData? env c.name) externEnc
    |>.bool (isNoncomputable env c.name)
    |>.opt (getExportNameFor? env c.name) Enc.name
    |>.opt (IR.findEnvDecl env c.name) borrowEnc
    |>.opt (Compiler.getInlineAttribute? env c.name) inlineEnc
    |>.bool (hasNeverExtractAttribute env c.name)
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

/-- The constants `c`'s meaning depends on: those in its type and value, its inductive's block and constructors,
its recursor rules' right-hand sides, its `implemented_by` target, and the `_unsafe_rec` definition holding a
`partial def`'s compiled body (the kernel constant is an opaque with an inhabitant value, while compiled code and
`native_decide` run the body). The constants of its type and value are `recorded`'s if it holds an equal type
and value under `c`'s name (`declConstsRef`). -/
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
  let unsafeRec := Compiler.mkUnsafeRecName c.name
  let s := if env.contains unsafeRec then s.insert unsafeRec else s
  s.toArray.qsort Name.quickLt

structure State where
  /-- Per imported module: empty if its `.olean` carries no digests (written without `lean --usage`, or by a
  toolchain without this extension); otherwise a marker entry at index 0, then the module's digests sorted by
  name. The marker's own name is never looked up, so no user constant can collide with it. -/
  importedModuleEntries : Array (Array (Name × Digest)) := #[]
  /-- The current module's digests, if `setLocalDigests` stored them for the `.olean` write. -/
  localDigests? : Option (Array (Name × Digest)) := none
instance : Inhabited State := ⟨{}⟩

/-- The digest of `c` if module `i` (the module defining `c`) wrote one. -/
def State.findAt? (s : State) (i : ModuleIdx) (c : Name) : Option Digest := do
  let es ← s.importedModuleEntries[i.toNat]?
  (·.2) <$> es.binSearch (c, default) (fun a b => Name.quickLt a.1 b.1) (lo := 1)

def State.find? (s : State) (env : Environment) (c : Name) : Option Digest := do
  s.findAt? (← env.getModuleIdxFor? c) c

/-- Whether module `i`'s `.olean` carries digests (it has the marker entry). -/
def State.hasEntries (s : State) (i : ModuleIdx) : Bool :=
  !(s.importedModuleEntries[i.toNat]?.getD #[]).isEmpty

/-- The current module's own constants, from the kernel environment, each with its `refs`. -/
def ownConsts (env : Environment) (recorded : NameMap DeclConsts := {}) :
    Array (Name × ConstantInfo × Array Name) :=
  env.checked.get.constants.foldStage2 (fun cs n ci => cs.push (n, ci, refs env ci recorded)) #[]

/-- Digests of the current module's constants: SCCs in dependency order; each SCC's digest hashes its members'
names and local hashes with the name and digest of every constant outside it that they refer to (tagged absent
if that constant has no digest). -/
def compute (env : Environment) (s : State) (consts := ownConsts env) : Array (Name × Digest) := Id.run do
  let byName : Std.HashMap Name (ConstantInfo × Array Name) :=
    consts.foldl (fun m (n, ci, rs) => m.insert n (ci, rs)) {}
  let sccs := SCC.scc (consts.map (·.1)).toList fun n => byName[n]!.2.toList.filter byName.contains
  let mut out : Std.HashMap Name Digest := {}
  for scc in sccs do
    let members := NameSet.ofList scc
    let sorted := scc.toArray.qsort Name.quickLt
    let mut e : Enc := ({} : Enc).nat sorted.size
    for m in sorted do
      let (ci, rs) := byName[m]!
      let outside := rs.filter (!members.contains ·)
      e := e.name m |>.digest (localHash env ci) |>.nat outside.size
      for r in outside do
        e := e.name r |>.opt (out[r]? <|> s.find? env r) Enc.digest
    let d := e.finish
    for m in scc do out := out.insert m d
  return (consts.map fun (n, _) => (n, out[n]!)).qsort fun a b => Name.quickLt a.1 b.1

builtin_initialize ext : PersistentEnvExtension (Name × Digest) (Name × Digest) State ←
  registerPersistentEnvExtension {
    mkInitial := pure {}
    addImportedFn := fun es => pure { importedModuleEntries := es }
    addEntryFn := fun s _ => s
    -- Private level only: digests cover private constants and unexposed bodies, which must not change the
    -- exported `.olean` of a `module` file. Non-module files are written and read at the private level.
    exportEntriesFnEx := fun _ s =>
      let es := s.localDigests?.elim #[] (#[(.anonymous, default)] ++ ·)
      { exported := #[], server := #[], «private» := es }
    asyncMode := .mainOnly
  }

def state (env : Environment) : State := ext.getState (asyncMode := .mainOnly) env

def localDigests (env : Environment) (consts := ownConsts env) : Array (Name × Digest) :=
  compute env (state env) consts

/-- Stores `own` (`localDigests env`) for the extension to export. Without it, the `.olean` carries no
digests. -/
def setLocalDigests (env : Environment) (own : Array (Name × Digest)) : Environment :=
  ext.modifyState (asyncMode := .mainOnly) env ({ · with localDigests? := some own })

/-- Per defining module, sorted: every imported constant that the current module's own constants refer to or
that is in `extra`, with its digest. Constants without a digest (from a module whose `.olean` carries none) are
left out. -/
def moduleUsed (env : Environment) (extra : NameSet) (consts := ownConsts env) :
    Array (Name × Array (Name × Digest)) :=
  let s := state env
  let used := consts.foldl (init := extra) fun u (_, _, rs) => rs.foldl (·.insert ·) u
  let byMod := used.foldl (init := (∅ : Std.HashMap Name (Array (Name × Digest)))) fun m c => Id.run do
    let some i := env.getModuleIdxFor? c | return m
    let some d := s.findAt? i c | return m
    m.alter env.header.modules[i.toNat]!.module fun o => some ((o.getD #[]).push (c, d))
  byMod.toArray.map (fun (k, v) => (k, v.qsort fun a b => Name.quickLt a.1 b.1))
    |>.qsort fun a b => Name.quickLt a.1 b.1

/-- A name as the JSON array of its components, root first: each a string or a number. Unlike `toJson Name`
(`Name.toString`), this round-trips macro-scoped names and components containing `»`. -/
def nameToJson (n : Name) : Json :=
  .arr (go n #[])
where
  go : Name → Array Json → Array Json
    | .anonymous, acc => acc
    | .str p s, acc => (go p acc).push (.str s)
    | .num p k, acc => (go p acc).push (.num k)

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

/-- A digest of the module's import closure: its sorted module names. -/
def closureDigest (env : Environment) : Digest :=
  let names := env.header.moduleNames.qsort Name.quickLt
  (({} : Enc).nat names.size |> names.foldl Enc.name).finish

/-- The imported modules whose `.olean` carries digests (`State.hasEntries`), sorted. -/
def digestedModules (env : Environment) : Array Name :=
  let s := state env
  env.header.moduleNames.zipIdx.filterMap (fun (m, i) => if s.hasEntries i then some m else none)
    |>.qsort Name.quickLt

/-- The format version of the `.usage` sidecar and of Lake's `.usekey`; Lake reads a sidecar of any other
version as absent. -/
def usageVersion : Nat := 5

/-- `own` is `localDigests env consts`. `extra` lists the extra module uses of the environment and of
`extraModUsesByChecksRef` (those of commands whose environment was discarded). `noskip` is set when the run
reused commands from an `--incr-load` snapshot, since reused commands never call `addDecl` in this process
and `extra` may miss constants they used. It is also set for modules containing a native evaluation axiom:
the compiled closure trusted by such an axiom can include compiler-only dependencies that are not represented
in its type. -/
def writeUsage (env : Environment) (consts : Array (Name × ConstantInfo × Array Name))
    (own : Array (Name × Digest)) (extra : NameSet) (incrLoaded : Bool) (path : System.FilePath) : IO Unit := do
  let noskip := incrLoaded ||
    consts.any fun (n, ci, _) => (ci matches .axiomInfo _) && Meta.isNativeAxiomName n
  let s := state env
  let allExtra := (getLocalExtraModUses env).foldl (·.insert ·) (← extraModUsesByChecksRef.get)
  let extraMods := allExtra.toArray.filter (fun u => (env.getModuleIdx? u.module).any s.hasEntries)
    |>.qsort fun a b => let k (u : ExtraModUse) := 2 * u.isExported.toNat + u.isMeta.toNat
      Name.quickLt a.module b.module || (a.module == b.module && k a < k b)
  let pair (n : Name) (d : Digest) := Json.arr #[nameToJson n, toJson d]
  let moduleDigest := (own.foldl (fun e (n, d) => e.name n |>.digest d) (({} : Enc).nat own.size)).finish
  let j := Json.mkObj [("version", usageVersion), ("noskip", noskip),
    ("moduleDigest", toJson moduleDigest),
    ("closure", toJson (closureDigest env)),
    ("digested", Json.arr ((digestedModules env).map nameToJson)),
    ("own", Json.arr (own.map fun (n, d) => pair n d)),
    ("used", Json.arr ((moduleUsed env extra consts).map fun (m, cs) =>
      Json.arr #[nameToJson m, Json.arr (cs.map fun (n, d) => pair n d)])),
    ("extra", Json.arr (extraMods.map fun u => Json.arr #[nameToJson u.module, u.isMeta]))]
  IO.FS.writeFile path j.compress

end Lean.ModuleUsage
