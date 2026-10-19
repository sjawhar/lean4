module
prelude
public import Lean.Util.SCC
public import Lean.Util.FoldConsts
public import Lean.Util.PtrSet
public import Lean.Compiler.ImplementedByAttr
public import Lean.Compiler.ExternAttr
public import Lean.Compiler.ExportAttr
public import Lean.Compiler.NoncomputableAttr
public import Lean.Elab.Command
import Lean.ExtraModUses
import Lean.Compiler.Old
import Lean.Server.InfoUtils
import Lean.Meta.Instances
import Lean.Meta.Tactic.Simp.Attr
public import Lean.Util.CommandEntries
import Lean.Util.ValueSensitive
import Lean.Meta.Match.Match
import Lean.Meta.Tactic.AuxLemma
import Lean.Meta.Eqns
import Lean.Meta.Constructions.SparseCasesOn
import Lean.Structure
public section
namespace Lean.ModuleUsage

/-- A meaning digest: the first 128 bits of a SHA-256, read big-endian into `hi` then `lo`
(`src/library/usage_digest.cpp`). -/
structure Digest where
  hi : UInt64
  lo : UInt64
  deriving BEq, Hashable, Inhabited

/-- The SHA-256 of `bytes`, truncated to a `Digest`. -/
@[extern "lean_usage_digest_bytes"]
opaque Digest.ofBytes (bytes : @& ByteArray) : Digest

def hex16 (v : UInt64) : String :=
  let s := String.ofList (Nat.toDigits 16 v.toNat); "".pushn '0' (16 - s.length) ++ s

/-- 32 lowercase hex digits. -/
def Digest.hex (d : Digest) : String := hex16 d.hi ++ hex16 d.lo

/-- Parses exactly 32 lowercase hex digits. -/
def Digest.ofHex? (s : String) : Option Digest := do
  let cs := s.toList
  guard (cs.length == 32)
  let v ← cs.foldlM (init := 0) fun (n : Nat) c =>
    if '0' ≤ c && c ≤ '9' then some (16 * n + (c.toNat - '0'.toNat))
    else if 'a' ≤ c && c ≤ 'f' then some (16 * n + (c.toNat - 'a'.toNat + 10))
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

/-- Everything of `c` except its own name and the meaning of the constants it refers to, including what its
importers' compiled code links against: the `@[extern]` entries and the `@[export]` name. -/
def localHash (env : Environment) (c : ConstantInfo) : Digest :=
  let v := exprDigest false
  let e := ({} : Enc).names c.levelParams |>.digest (exprDigest true c.type)
    |>.opt (Compiler.getImplementedBy? env c.name) Enc.name
    |>.opt (getExternAttrData? env c.name) externEnc
    |>.bool (isNoncomputable env c.name)
    |>.opt (getExportNameFor? env c.name) Enc.name
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
`native_decide` run the body). -/
def refs (env : Environment) (c : ConstantInfo) : Array Name :=
  let s : NameSet := c.getUsedConstantsAsSet
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
  /-- Per imported module: empty if the module was not written by this extension; otherwise a marker entry at
  index 0, then the module's digests sorted by name. The marker's own name is never looked up, so no user
  constant can collide with it. -/
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

/-- Whether module `i` was written by this extension (it has the marker entry). -/
def State.hasEntries (s : State) (i : ModuleIdx) : Bool :=
  !(s.importedModuleEntries[i.toNat]?.getD #[]).isEmpty

/-- The current module's own constants, from the kernel environment, each with its `refs`. -/
def ownConsts (env : Environment) : Array (Name × ConstantInfo × Array Name) :=
  env.checked.get.constants.foldStage2 (fun cs n ci => cs.push (n, ci, refs env ci)) #[]

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
    exportEntriesFnEx := fun env s =>
      let es := #[(.anonymous, default)] ++ s.localDigests?.getD (compute env s)
      { exported := #[], server := #[], «private» := es }
    asyncMode := .mainOnly
    perCommand := .recorder
  }

def state (env : Environment) : State := ext.getState (asyncMode := .mainOnly) env

def localDigests (env : Environment) (consts := ownConsts env) : Array (Name × Digest) :=
  compute env (state env) consts

/-- Stores `own` (`localDigests env`) for the extension to export, so writing the `.olean` does not compute
them again. -/
def setLocalDigests (env : Environment) (own : Array (Name × Digest)) : Environment :=
  ext.modifyState (asyncMode := .mainOnly) env ({ · with localDigests? := some own })

def reducibilityEnc (e : Enc) : ReducibilityStatus → Enc
  | .reducible => e.u8 0 | .semireducible => e.u8 1 | .irreducible => e.u8 2
  | .implicitReducible => e.u8 3 | .instanceReducible => e.u8 4

/-- `c`'s statement digests `(core, attrs)`. `core` covers its level params and type, binders included, never
its value. `attrs` covers what steers its users without changing the kernel constant: reducibility, instance
membership and priority, `@[simp]` membership, `protected`, `private` and `noncomputable`. -/
def stmtHash (env : Environment) (c : ConstantInfo) : Digest × Digest :=
  let core := ({} : Enc).names c.levelParams |>.digest (exprDigest true c.type) |>.finish
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
  /-- Per imported module: as `State.importedModuleEntries`, with `(core, attrs)` per constant. -/
  importedModuleEntries : Array (Array (Name × Digest × Digest)) := #[]
  /-- The current module's statement digests, if `setLocalStmt` stored them for the `.olean` write. -/
  localStmt? : Option (Array (Name × Digest × Digest)) := none
instance : Inhabited StmtState := ⟨{}⟩

def StmtState.findAt? (s : StmtState) (i : ModuleIdx) (c : Name) : Option (Digest × Digest) := do
  let es ← s.importedModuleEntries[i.toNat]?
  (·.2) <$> es.binSearch (c, default, default) (fun a b => Name.quickLt a.1 b.1) (lo := 1)

def StmtState.find? (s : StmtState) (env : Environment) (c : Name) : Option (Digest × Digest) := do
  s.findAt? (← env.getModuleIdxFor? c) c

/-- Statement digests of the current module's constants, sorted by name: per SCC, as `compute` does, each
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

builtin_initialize stmtExt : PersistentEnvExtension (Name × Digest × Digest) (Name × Digest × Digest) StmtState ←
  registerPersistentEnvExtension {
    mkInitial := pure {}
    addImportedFn := fun es => pure { importedModuleEntries := es }
    addEntryFn := fun s _ => s
    -- Private level only, as `ext`.
    exportEntriesFnEx := fun env s =>
      let own := (ext.getState (asyncMode := .mainOnly) env).localDigests?.getD (localDigests env)
      let es := #[(.anonymous, default, default)] ++ s.localStmt?.getD (computeStmt env s own)
      { exported := #[], server := #[], «private» := es }
    asyncMode := .mainOnly
    perCommand := .recorder
  }

def stmtState (env : Environment) : StmtState := stmtExt.getState (asyncMode := .mainOnly) env

/-- Stores `computeStmt`'s result for the extension to export. -/
def setLocalStmt (env : Environment) (stmt : Array (Name × Digest × Digest)) : Environment :=
  stmtExt.modifyState (asyncMode := .mainOnly) env ({ · with localStmt? := some stmt })

/-- `(full, statement core, attrs)` digests of `c`, a constant of imported module `i`. `none` when `i` carries no
usage digests for this import: a module compiled without these extensions (stage 0 compiles the stage-1
toolchain's own `Init`, `Std` and `Lean`; Lake pins those by the Lean githash in the module's trace) or a
`module` imported without its private level (Lake compares those through `modsysHash`). A module that carries
digests has both for each of its constants, so a missing one is an error. -/
def importedDigests? (env : Environment) (i : ModuleIdx) (c : Name) :
    Except String (Option (Digest × Digest × Digest)) := do
  let s := state env
  unless s.hasEntries i do return none
  let mod := env.header.modules[i.toNat]!.module
  let some full := s.findAt? i c |
    throw s!"usage: `{c}` from `{mod}` has no full digest in that module's usage entries"
  let some (core, attrs) := (stmtState env).findAt? i c |
    throw s!"usage: `{c}` from `{mod}` has no statement digest in that module's usage entries"
  return some (full, core, attrs)

/-- Per defining module, sorted: every imported constant that the current module's own constants refer to or
that is in `extra`, with its full and attrs digests. Constants of a module without digests are left out
(`importedDigests?`), and so are names in `extra` that are no constant (an IR-only name, or one a rejected
declaration referred to), for which `commandRecords` refuses the module. -/
def moduleUsed (env : Environment) (extra : NameSet) (consts := ownConsts env) :
    Except String (Array (Name × Array (Name × Digest × Digest))) := do
  let used := consts.foldl (init := extra) fun u (_, _, rs) => rs.foldl (·.insert ·) u
  let mut byMod : Std.HashMap Name (Array (Name × Digest × Digest)) := {}
  for c in used do
    -- the current module's constants are in `own`
    let some i := env.getModuleIdxFor? c | continue
    unless env.contains c do continue
    let some (d, _, attrs) ← importedDigests? env i c | continue
    byMod := byMod.alter env.header.modules[i.toNat]!.module fun o => some ((o.getD #[]).push (c, d, attrs))
  return byMod.toArray.map (fun (k, v) => (k, v.qsort fun a b => Name.quickLt a.1 b.1))
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

/-- Inverse of `nameToJson`. -/
def nameOfJson? (j : Json) : Except String Name := do
  (← j.getArr?).foldlM (init := .anonymous) fun n c => match c with
    | .str s => pure (.str n s)
    | .num k => do
      unless k.exponent == 0 && k.mantissa ≥ 0 do throw s!"expected a name component, got {c.compress}"
      pure (.num n k.mantissa.toNat)
    | _ => throw s!"expected a name component, got {c.compress}"

/-- A `Name` (de)serialized as `nameToJson`. -/
structure JName where
  name : Name
  deriving Inhabited, BEq
instance : ToJson JName := ⟨(nameToJson ·.name)⟩
instance : FromJson JName := ⟨fun j => JName.mk <$> nameOfJson? j⟩

/-- How a command of the previous build is matched to one of this build: a declaration command by the sorted
top-level names it declared, any other command by its kind, text digest and occurrence index among commands with
that kind and text. -/
inductive CommandKey where
  | names (ns : Array Name)
  | kind (kind : Name) (text : Digest) (occ : Nat)
  deriving Inhabited, BEq, Hashable

instance : ToJson CommandKey where
  toJson
    | .names ns => .arr #["N", .arr (ns.map nameToJson)]
    | .kind k t o => .arr #["K", nameToJson k, toJson t, o]
instance : FromJson CommandKey where
  fromJson? j := do
    match ← j.getArr? with
    | #["N", ns] => return .names ((← fromJson? (α := Array JName) ns).map (·.name))
    | #["K", k, t, o] => return .kind (← nameOfJson? k) (← fromJson? t) (← fromJson? o)
    | _ => throw s!"expected a command key, got {j.compress}"

/-- The `DeclNameGenerator` state after a command. -/
structure DeclNGenRecord where
  namePrefix : Name
  idx : Nat
  parentIdxs : List Nat
  deriving Inhabited, BEq

instance : ToJson DeclNGenRecord := ⟨fun r => Json.mkObj [("prefix", nameToJson r.namePrefix), ("idx", r.idx),
  ("parentIdxs", toJson r.parentIdxs)]⟩
instance : FromJson DeclNGenRecord := ⟨fun j => return {
  namePrefix := ← nameOfJson? (← j.getObjVal? "prefix")
  idx := ← j.getObjValAs? Nat "idx"
  parentIdxs := ← j.getObjValAs? (List Nat) "parentIdxs" }⟩

/-- A `NameGenerator` state, as a record with `BEq`. -/
structure NGenRecord where
  namePrefix : Name
  idx : Nat
  deriving Inhabited, BEq

def NGenRecord.ofNameGenerator (g : NameGenerator) : NGenRecord := { namePrefix := g.namePrefix, idx := g.idx }

def NGenRecord.toNameGenerator (r : NGenRecord) : NameGenerator := { namePrefix := r.namePrefix, idx := r.idx }

instance : ToJson NGenRecord := ⟨fun r => Json.mkObj [("prefix", nameToJson r.namePrefix), ("idx", r.idx)]⟩
instance : FromJson NGenRecord := ⟨fun j => return {
  namePrefix := ← nameOfJson? (← j.getObjVal? "prefix")
  idx := ← j.getObjValAs? Nat "idx" }⟩

/-- The `Command.State` counters a kept command must restore (`commandStateFields`, `.replayed`). -/
structure CommandPost where
  auxDeclNGen : DeclNGenRecord
  /-- The quotation contexts the command added to `usedQuotCtxts`, sorted. -/
  quotCtxts : Array Name
  /-- `maxRecDepth` after the command: `set_option maxRecDepth n in` leaves it set (`elabSetOption` caches it in
  the state, and the `in` macro's `end` restores only the scope). -/
  maxRecDepth : Nat
  /-- The fresh-identifier generator after the command. Its identifiers reach the environment: a command elaborator
  can name a declaration with `mkFreshId`, and proof-mode tactics store generated names in theorem values. -/
  ngen : NGenRecord
  /-- The fresh-identifier generator before the command, which the command's `ctx` digests (`ctxDigest`). -/
  ngenBefore : NGenRecord
  deriving Inhabited, BEq

/-- What a command leaves in the `commandStateFields` it replays, for its record's `post`. -/
def CommandPost.ofStates (before after : Elab.Command.State) : CommandPost :=
  let g := after.auxDeclNGen.toRecord
  { auxDeclNGen := { namePrefix := g.namePrefix, idx := g.idx, parentIdxs := g.parentIdxs }
    quotCtxts := (NameSet.sharedDiff before.usedQuotCtxts after.usedQuotCtxts).1 |>.qsort Name.quickLt
    maxRecDepth := after.maxRecDepth
    ngen := .ofNameGenerator after.ngen
    ngenBefore := .ofNameGenerator before.ngen }

/-- The generator a kept command leaves: exactly `post.ngen`. `current`, the generator the command is kept from, must
be `post.ngenBefore`: the command's `ctx` digests the generator before it, so a kept command always starts from the
recorded one, and any other `current` is an error naming both. -/
def CommandPost.restoreNgen (post : CommandPost) (current : NameGenerator) : Except String NameGenerator := do
  let b := post.ngenBefore
  unless NGenRecord.ofNameGenerator current == b do
    throw s!"the name generator before the kept command is (prefix {current.namePrefix}, idx {current.idx}), \
      not the one recorded before it (prefix {b.namePrefix}, idx {b.idx})"
  return post.ngen.toNameGenerator

instance : ToJson CommandPost := ⟨fun p => Json.mkObj [("auxDeclNGen", toJson p.auxDeclNGen),
  ("quotCtxts", .arr (p.quotCtxts.map nameToJson)),
  ("maxRecDepth", p.maxRecDepth), ("ngen", toJson p.ngen), ("ngenBefore", toJson p.ngenBefore)]⟩
instance : FromJson CommandPost := ⟨fun j => return {
  auxDeclNGen := ← j.getObjValAs? DeclNGenRecord "auxDeclNGen"
  quotCtxts := (← j.getObjValAs? (Array JName) "quotCtxts").map (·.name)
  maxRecDepth := ← j.getObjValAs? Nat "maxRecDepth"
  ngen := ← j.getObjValAs? NGenRecord "ngen"
  ngenBefore := ← j.getObjValAs? NGenRecord "ngenBefore" }⟩

/-- A summary of the non-persistent cache entries a command added. Keys that hold `Expr`s are digests here; the
`.olean` payload carries the objects. -/
structure CommandCachesRecord where
  matcher : Array (Digest × Name) := #[]
  auxLemma : Array (Digest × Name × List Name) := #[]
  eqnsInv : Array (Name × Name) := #[]
  sparseCasesOn : Array (Digest × Name) := #[]
  structRes : Array (Name × Array Name) := #[]
  deriving Inhabited, BEq

/-- A flat JSON triple `[a, b, c]`, as the writers below emit (`Prod`'s codec nests: `[a, [b, c]]`). -/
def tripleOfJson? [FromJson α] [FromJson β] [FromJson γ] (j : Json) : Except String (α × β × γ) := do
  let #[a, b, c] ← j.getArr? | throw s!"expected a triple, got {j.compress}"
  return (← fromJson? a, ← fromJson? b, ← fromJson? c)

def triplesOfJson? [FromJson α] [FromJson β] [FromJson γ] (j : Json) (k : String) :
    Except String (Array (α × β × γ)) := do
  (← j.getObjValAs? (Array Json) k).mapM tripleOfJson?

instance : ToJson CommandCachesRecord := ⟨fun c => Json.mkObj [
  ("matcher", .arr (c.matcher.map fun (d, n) => .arr #[toJson d, nameToJson n])),
  ("auxLemma", .arr (c.auxLemma.map fun (d, n, ls) =>
    .arr #[toJson d, nameToJson n, .arr (ls.toArray.map nameToJson)])),
  ("eqnsInv", .arr (c.eqnsInv.map fun (a, b) => .arr #[nameToJson a, nameToJson b])),
  ("sparseCasesOn", .arr (c.sparseCasesOn.map fun (d, n) => .arr #[toJson d, nameToJson n])),
  ("structRes", .arr (c.structRes.map fun (s, o) => .arr #[nameToJson s, .arr (o.map nameToJson)]))]⟩
instance : FromJson CommandCachesRecord := ⟨fun j => return {
  matcher := (← j.getObjValAs? (Array (Digest × JName)) "matcher").map fun (d, n) => (d, n.name)
  auxLemma := (← triplesOfJson? (α := Digest) (β := JName) (γ := Array JName) j "auxLemma").map
    fun (d, n, ls) => (d, n.name, (ls.map (·.name)).toList)
  eqnsInv := (← j.getObjValAs? (Array (JName × JName)) "eqnsInv").map fun (a, b) => (a.name, b.name)
  sparseCasesOn := (← j.getObjValAs? (Array (Digest × JName)) "sparseCasesOn").map fun (d, n) => (d, n.name)
  structRes := (← j.getObjValAs? (Array (JName × Array JName)) "structRes").map
    fun (s, o) => (s.name, o.map (·.name)) }⟩

/-- One top-level command's record in `.usage` version 4. -/
structure CommandRecord where
  i : Nat
  key : CommandKey
  /-- D-text: the command's syntax without source positions. -/
  text : Digest
  /-- D-ctx: the scope stack, the counters and this module's entries before the command. -/
  ctx : Digest
  /-- Whether the command added a constant to the environment. -/
  isDecl : Bool
  /-- Whether the command is an `initialize`/`builtin_initialize` (JSON `initialize`). -/
  isInit : Bool
  decls : Array Name
  aux : Array Name
  /-- Theorems, opaques and axioms the command's constants use only through value-opaque edges, with their
  statement digest. -/
  usesStmt : Array (Name × Digest)
  /-- Every other constant the command used, with its full digest and attrs digest. -/
  usesFull : Array (Name × Digest × Digest)
  extra : Array (Name × Bool)
  post : CommandPost
  caches : CommandCachesRecord
  deriving Inhabited, BEq

instance : ToJson CommandRecord := ⟨fun r => Json.mkObj [
  ("i", r.i), ("key", toJson r.key), ("text", toJson r.text), ("ctx", toJson r.ctx),
  ("kind", if r.isDecl then "decl" else "other"), ("initialize", r.isInit),
  ("decls", .arr (r.decls.map nameToJson)), ("aux", .arr (r.aux.map nameToJson)),
  ("usesStmt", .arr (r.usesStmt.map fun (n, d) => .arr #[nameToJson n, toJson d])),
  ("usesFull", .arr (r.usesFull.map fun (n, d, a) => .arr #[nameToJson n, toJson d, toJson a])),
  ("extra", .arr (r.extra.map fun (m, isMeta) => .arr #[nameToJson m, isMeta])),
  ("post", toJson r.post), ("caches", toJson r.caches)]⟩

instance : FromJson CommandRecord := ⟨fun j => return {
  i := ← j.getObjValAs? Nat "i"
  key := ← j.getObjValAs? CommandKey "key"
  text := ← j.getObjValAs? Digest "text"
  ctx := ← j.getObjValAs? Digest "ctx"
  isDecl := ← do match ← j.getObjValAs? String "kind" with
    | "decl" => pure true | "other" => pure false
    | k => throw s!"expected a command kind, got {k}"
  isInit := ← j.getObjValAs? Bool "initialize"
  decls := (← j.getObjValAs? (Array JName) "decls").map (·.name)
  aux := (← j.getObjValAs? (Array JName) "aux").map (·.name)
  usesStmt := (← j.getObjValAs? (Array (JName × Digest)) "usesStmt").map fun (n, d) => (n.name, d)
  usesFull := (← triplesOfJson? (α := JName) (β := Digest) (γ := Digest) j "usesFull").map
    fun (n, d, a) => (n.name, d, a)
  extra := (← j.getObjValAs? (Array (JName × Bool)) "extra").map fun (m, b) => (m.name, b)
  post := ← j.getObjValAs? CommandPost "post"
  caches := ← j.getObjValAs? CommandCachesRecord "caches" }⟩

private def matcherKeyDigest (value : Expr) (compile isPrivate : Bool) : Digest :=
  (({} : Enc).digest (exprDigest true value) |>.bool compile |>.bool isPrivate).finish

private def auxLemmaKeyDigest (type : Expr) (isPrivate defeq : Bool) : Digest :=
  (({} : Enc).digest (exprDigest true type) |>.bool isPrivate |>.bool defeq).finish

private def sparseCasesOnKeyDigest (indName : Name) (ctors : Array Name) (isPrivate : Bool) : Digest :=
  (({} : Enc).name indName |>.names ctors.toList |>.bool isPrivate).finish

partial def syntaxEnc (e : Enc) (stx : Syntax) : Enc :=
  match stx with
  | .missing => e.u8 0
  | .node _ k args => args.foldl syntaxEnc (e.u8 1 |>.name k |>.nat args.size)
  | .atom _ val => e.u8 2 |>.str val
  | .ident _ rawVal val preresolved =>
    preresolved.foldl (fun e p => match p with
      | .namespace ns => e.u8 0 |>.name ns
      | .decl n fields => fields.foldl Enc.str (e.u8 1 |>.name n |>.nat fields.length))
      (e.u8 3 |>.str (Substring.Raw.Internal.toString rawVal) |>.name val |>.nat preresolved.length)

/-- D-text: syntax structure and values, excluding source positions. -/
def textDigest (stx : Syntax) : Digest :=
  (syntaxEnc {} stx.unsetTrailing).finish

def dataValueEnc (e : Enc) : DataValue → Enc
  | .ofString v => e.u8 0 |>.str v
  | .ofBool v => e.u8 1 |>.bool v
  | .ofName v => e.u8 2 |>.name v
  | .ofNat v => e.u8 3 |>.nat v
  | .ofInt v => e.u8 4 |>.str (toString v)
  | .ofSyntax v => e.u8 5 |> (syntaxEnc · v)

def openDeclEnc (e : Enc) : OpenDecl → Enc
  | .simple ns except => e.u8 0 |>.name ns |>.names except
  | .explicit id decl => e.u8 1 |>.name id |>.name decl

/-- An order-independent digest of a set of names: their count and the lane-wise sums of their digests, updated
name by name, so that following a set across commands costs what each command added. -/
structure NameSetDigest where
  size : Nat := 0
  hi : UInt64 := 0
  lo : UInt64 := 0
  deriving Inhabited

namespace NameSetDigest

private def nameDigest (n : Name) : Digest := (({} : Enc).name n).finish

def insert (d : NameSetDigest) (n : Name) : NameSetDigest :=
  let x := nameDigest n
  { size := d.size + 1, hi := d.hi + x.hi, lo := d.lo + x.lo }

def erase (d : NameSetDigest) (n : Name) : NameSetDigest :=
  let x := nameDigest n
  { size := d.size - 1, hi := d.hi - x.hi, lo := d.lo - x.lo }

end NameSetDigest

/-- Encodes the command scopes: every field of each `Elab.Command.Scope` (`scopeFields`). -/
def scopesEnc (e : Enc) (scopes : List Elab.Command.Scope) : Enc := Id.run do
  let mut e := e.nat scopes.length
  for scope in scopes do
    e := e.str scope.header
    let mut opts := #[]
    for p in scope.opts do opts := opts.push p
    opts := opts.qsort fun a b => Name.quickLt a.1 b.1
    e := e.nat opts.size
    for (n, v) in opts do e := dataValueEnc (e.name n) v
    e := scope.openDecls.foldl openDeclEnc (e.name scope.currNamespace |>.nat scope.openDecls.length)
    e := e.names scope.levelNames
    e := scope.varDecls.foldl (fun e s => syntaxEnc e s) (e.nat scope.varDecls.size)
    e := scope.varUIds.foldl Enc.name (e.nat scope.varUIds.size)
    e := e.names scope.includedVars |>.names scope.omittedVars
      |>.bool scope.isNoncomputable |>.bool scope.isPublic |>.bool scope.isMeta
    e := scope.attrs.foldl (fun e s => syntaxEnc e s.raw) (e.nat scope.attrs.length)
  return e

/-- The fields of `Elab.Command.Scope` that `scopesEnc` encodes: all of them. -/
def scopeFields : Array Name := #[`header, `opts, `currNamespace, `openDecls, `levelNames, `varDecls, `varUIds,
  `includedVars, `omittedVars, `isNoncomputable, `isPublic, `isMeta, `attrs]

/-- How the per-command recorder treats a field of `Elab.Command.State` other than through the command's
extension payload. -/
inductive CommandStateField where
  /-- Carried by the command's extension payload (`recordCommandDelta`). -/
  | env
  /-- Restored for a kept command from its record's `post` (`CommandPost.ofStates`), and covered by later commands'
  `ctx` (`ctxDigest`). -/
  | replayed
  /-- Reset before every command (`Language/Lean.lean`, `doElab`; `messages` also by `elabCommandTopLevel`), so no
  command reads an earlier one's. -/
  | reset
  /-- Read by no later command's elaboration; the reason is at `commandStateFields`. -/
  | unread
  /-- A change refuses the command's payload (`commandStateChanges`). -/
  | refused
  deriving Repr, BEq

/--
Every field of `Elab.Command.State`, classified:
- `env`: the extension payload.
- `messages`, `traceState`, `snapshotTasks`: reset before every command, reported per command.
- `scopes`: refused when `scopesEnc` differs; a kept command's scopes are not recorded.
- `usedQuotCtxts`, `auxDeclNGen`, `maxRecDepth`, `ngen`: `post` and `ctx`. `ngen` reaches the environment (see
  `CommandPost.ngen`), so a command elaborated from another generator can declare other names or values.
- `nextMacroScope`: `withInitQuotContext` restores it after every top-level command with source; refused otherwise.
- `infoState`: reset by `elabCommandTopLevel` except `enabled`, which is refused when it differs.
- `prevLinterStates`: read only by stateful linters, which run under `withoutModifyingEnv` and only log messages.
-/
def commandStateFields : Array (Name × CommandStateField) := #[
  (`env, .env), (`messages, .reset), (`scopes, .refused), (`usedQuotCtxts, .replayed),
  (`nextMacroScope, .refused), (`maxRecDepth, .replayed), (`ngen, .replayed), (`auxDeclNGen, .replayed),
  (`infoState, .refused), (`traceState, .reset), (`snapshotTasks, .reset), (`prevLinterStates, .unread)]

/-- The refusals for the `commandStateFields` a command changed that payloads do not carry. -/
def commandStateChanges (before after : Elab.Command.State) : Array Refusal := Id.run do
  let mut refused := #[]
  unless SharedDiff.sameObject before.scopes after.scopes ||
      (scopesEnc {} before.scopes).finish == (scopesEnc {} after.scopes).finish do
    refused := refused.push (.commandState `scopes)
  if before.nextMacroScope != after.nextMacroScope then
    refused := refused.push (.commandState `nextMacroScope)
  if before.infoState.enabled != after.infoState.enabled then
    refused := refused.push (.commandState `infoState)
  return refused

/-- The command-context portion available before payload recording is folded in by the reuse frontend.
`quotCtxts` is the digest of `st.usedQuotCtxts`. -/
def ctxDigest (st : Elab.Command.State) (quotCtxts : NameSetDigest) (entries : Digest) : Digest :=
  let g := st.auxDeclNGen.toRecord
  scopesEnc {} st.scopes |>.nat st.nextMacroScope |>.nat st.maxRecDepth |>.name g.namePrefix |>.nat g.idx
    |>.nat g.parentIdxs.length |> g.parentIdxs.foldl Enc.nat
    |>.name st.ngen.namePrefix |>.nat st.ngen.idx
    |>.nat quotCtxts.size |>.u64 quotCtxts.hi |>.u64 quotCtxts.lo
    |>.digest entries |>.finish

structure CommandObservation where
  i : Nat
  stx : Syntax
  before : Elab.Command.State
  after : Elab.Command.State
  deriving Nonempty

builtin_initialize commandObservationsRef : IO.Ref (Array CommandObservation) ← IO.mkRef #[]

def recordCommandObservation (i : Nat) (stx : Syntax) (before after : Elab.Command.State) :
    BaseIO Unit :=
  commandObservationsRef.modify (·.push { i, stx, before, after })

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

def isAuxName (env : Environment) (n : Name) : Bool :=
  let s := n.toString
  isAuxRecursor env n || Meta.isMatcherCore env n || isNoConfusion env n ||
    (Compiler.isUnsafeRecName? n).isSome || n.isInternalDetail ||
    s.contains "._auxLemma" || s.contains "._proof_" || s.contains "._eq_" ||
    s.endsWith "._sunfold" || s.endsWith "._native"

/-- What a command's record holds for one name it used. -/
private inductive UseDigests where
  /-- a constant of an imported module that carries no usage digests (`importedDigests?`) -/
  | untracked
  | digests (full core attrs : Digest)
  /-- no digest stands for the name; `commandRecords` writes no records -/
  | unattributed (reason : String)

/-- The constants the transient declaration `n` stands for: what it used, each transient declaration among
those replaced in turn. -/
private partial def transientDeps (transient : Std.HashMap Name NameSet) (seen out : NameSet) :
    List Name → NameSet
  | [] => out
  | c :: cs =>
    if seen.contains c then transientDeps transient seen out cs
    else match transient[c]? with
      | some ds => transientDeps transient (seen.insert c) out (ds.toList ++ cs)
      | none => transientDeps transient (seen.insert c) (out.insert c) cs

/-- The per-command records, or none and why, when a command used a name no digest stands for: one that names no
constant (a declaration the kernel or the elaborator rejected referred to it; an IR-only name), or a constant of this
module the kernel environment does not hold. The module is then `noskip`. -/
def commandRecords (env : Environment) (own : Array (Name × Digest))
    (stmt : Array (Name × Digest × Digest)) (payloads : Array CommandEntries) :
    IO (Array CommandRecord × Option String) := IO.FS.withTempDir fun dir => do
  let observations ← commandObservationsRef.get
  let declEntries ← declsByCommandRef.get
  let explicitUses ← usedByCommandRef.get
  let extras ← extraModUsesByCmdRef.get
  let fullLocal : Std.HashMap Name Digest := own.foldl (fun m (n, d) => m.insert n d) {}
  let stmtLocal : Std.HashMap Name (Digest × Digest) :=
    stmt.foldl (fun m (n, d, a) => m.insert n (d, a)) {}
  let fs := state env
  -- A declaration this module elaborated in an environment it then discarded (`example`, `#eval`, or a
  -- realization first requested inside one) has no digest; a use of it stands for the uses of what it used.
  let transient : Std.HashMap Name NameSet := declEntries.foldl (init := {}) fun m (_, ns, used) =>
    ns.foldl (init := m) fun m n =>
      if env.contains n then m else m.insert n (used.foldl (·.insert ·) (m.getD n {}))
  let digestsOf (i : Nat) (n : Name) : Except String UseDigests := do
    if !env.contains n then
      return .unattributed s!"command {i} uses `{n}`, which names no constant of this module or its imports"
    if let some m := env.getModuleIdxFor? n then
      return match ← importedDigests? env m n with
        | some (full, core, attrs) => .digests full core attrs
        | none => .untracked
    let some full := fullLocal[n]? |
      return .unattributed s!"command {i} uses `{n}`, a constant of this module the kernel environment does not hold"
    let some (core, attrs) := stmtLocal[n]? |
      throw s!"usage: command {i} uses `{n}`, a constant of this module without a statement digest"
    return .digests full core attrs
  let mut occurrences : Std.HashMap (Name × Digest) Nat := {}
  let payloadByIdx : Std.HashMap Nat CommandEntries :=
    payloads.foldl (fun m p => m.insert p.idx p) {}
  -- per-command lookups, so that each command's record costs what the command added
  let usedByIdx : Std.HashMap Nat (Array NameSet) := declEntries.foldl (init := {})
    fun m (i, _, used) => m.alter i fun us => some ((us.getD #[]).push used)
  let explicitByIdx : Std.HashMap Nat (Array Name) := explicitUses.foldl (init := {})
    fun m (i, n) => m.alter i fun ns => some ((ns.getD #[]).push n)
  let extrasByIdx : Std.HashMap Nat (Array ExtraModUse) := extras.toArray.foldl (init := {})
    fun m (i, u) => m.alter i fun us => some ((us.getD #[]).push u)
  -- a hash chain over the payloads so far: extending it costs the same at every command
  let mut entries : Digest := ({} : Enc).finish
  let mut quotSet : NameSet := {}
  let mut quotDigest : NameSetDigest := {}
  let mut out := #[]
  for obs in observations.qsort (·.i < ·.i) do
    let (quotAdded, quotRemoved) := NameSet.sharedDiff quotSet obs.before.usedQuotCtxts
    quotDigest := quotRemoved.foldl (·.erase ·) (quotAdded.foldl (·.insert ·) quotDigest)
    quotSet := obs.before.usedQuotCtxts
    let before := obs.before.env.checked.get
    let after := obs.after.env.checked.get
    let added : NameSet := match before.constants.sharedDiff? after.constants with
      | some (changed, _) => changed.foldl (init := {}) fun (s : NameSet) (n, _) =>
        if before.constants.contains n then s else s.insert n
      | none => after.constants.foldStage2 (fun (s : NameSet) n _ =>
        if before.constants.contains n then s else s.insert n) {}
    let addedNames := added.toArray.qsort Name.quickLt
    let decls := addedNames.filter (!isAuxName env ·)
    let aux := addedNames.filter (isAuxName env)
    let mut refsSet : NameSet := {}
    let mut full : NameSet := {}
    for n in addedNames do
      if let some ci := env.find? n then
        let rs := refs env ci
        refsSet := rs.foldl (·.insert ·) refsSet
        let stmtOnlyRefs : NameSet := rs.foldl (init := {}) fun s r =>
          match env.find? r with
          | some ri => if isStmtOnly ri && !env.contains (Compiler.mkUnsafeRecName r) then s.insert r else s
          | none => s
        let valueUsed := ValueSensitive.unsafelyUsedValues env stmtOnlyRefs ci
        let auxDefn := isAuxName env n && ci matches .defnInfo _
        for r in rs do
          if (env.find? r).isSome && (!stmtOnlyRefs.contains r || valueUsed.contains r || auxDefn) then
            full := full.insert r
    for used in usedByIdx.getD obs.i #[] do
      refsSet := used.foldl (·.insert ·) refsSet
    for n in explicitByIdx.getD obs.i #[] do
      full := full.insert n
    let infoSt := obs.after.infoState.substituteLazy.get
    let infoUsed := usedFromInfoTrees infoSt.trees.toArray {}
    for n in infoUsed do
      unless refsSet.contains n do full := full.insert n
    for n in refsSet do
      if let some ci := env.find? n then
        if !isStmtOnly ci then full := full.insert n
    -- a transient declaration's uses count as full: it may have been evaluated
    let mut usedAll : NameSet := {}
    for n in refsSet.foldl (·.insert ·) full do
      if transient.contains n then
        for d in transientDeps transient {} {} [n] do
          usedAll := usedAll.insert d
          full := full.insert d
      else
        usedAll := usedAll.insert n
    let used := added.foldl (fun s n => s.erase n) usedAll
    let mut fullUses := #[]
    let mut stmtUses := #[]
    for n in used do
      match ← IO.ofExcept (digestsOf obs.i n) with
      | .untracked => pure ()
      | .unattributed reason => return (#[], some reason)
      | .digests d core attrs =>
        if full.contains n then fullUses := fullUses.push (n, d, attrs)
        else stmtUses := stmtUses.push (n, core)
    let usesFull := fullUses.qsort fun a b => Name.quickLt a.1 b.1
    let usesStmt := stmtUses.qsort fun a b => Name.quickLt a.1 b.1
    let text := textDigest obs.stx
    let kind := obs.stx.getKind
    let key ← if !decls.isEmpty then
      pure (.names decls)
    else
      let occ := occurrences[(kind, text)]?.getD 0
      occurrences := occurrences.insert (kind, text) (occ + 1)
      pure (.kind kind text occ)
    let extra := ((extrasByIdx.getD obs.i #[]).filterMap fun u =>
      if (env.getModuleIdx? u.module).any fs.hasEntries then some (u.module, u.isMeta)
      else none).qsort fun a b => Name.quickLt a.1 b.1 ||
        (a.1 == b.1 && a.2.toNat < b.2.toNat)
    let matcher := Meta.Match.matcherCacheDelta obs.before.env obs.after.env
    let matcher := matcher.map fun (value, compile, isPrivate, n) =>
      (matcherKeyDigest value compile isPrivate, n)
    let matcher := matcher.qsort fun a b => Name.quickLt a.2 b.2
    let auxLemma := Meta.auxLemmaCacheDelta obs.before.env obs.after.env
    let auxLemma := auxLemma.map fun (type, isPrivate, defeq, n, ls) =>
      (auxLemmaKeyDigest type isPrivate defeq, n, ls)
    let auxLemma := auxLemma.qsort fun a b => Name.quickLt a.2.1 b.2.1
    let eqnsInv := Meta.eqnsCacheDelta obs.before.env obs.after.env
      |>.qsort fun a b => Name.quickLt a.1 b.1
    let sparseCasesOn := Meta.sparseCasesOnCacheDelta obs.before.env obs.after.env
    let sparseCasesOn := sparseCasesOn.map fun (indName, ctors, isPrivate, n) =>
      (sparseCasesOnKeyDigest indName ctors isPrivate, n)
    let sparseCasesOn := sparseCasesOn.qsort fun a b => Name.quickLt a.2 b.2
    let structRes := structureResolutionCacheDelta obs.before.env obs.after.env
      |>.qsort fun a b => Name.quickLt a.1 b.1
    let ctx := ctxDigest obs.before quotDigest entries
    out := out.push {
      i := obs.i, key, text, ctx
      isDecl := !decls.isEmpty
      isInit := kind == ``Lean.Parser.Command.«initialize»
      decls, aux, usesStmt, usesFull, extra
      post := CommandPost.ofStates obs.before obs.after
      caches := { matcher, auxLemma, eqnsInv, sparseCasesOn, structRes }
    }
    if let some payload := payloadByIdx[obs.i]? then
      let path := dir / s!"command-{obs.i}"
      let _ ← unsafe CompactedRegion.save path `commandEntries payload #[] none
      entries := (({} : Enc).digest entries |>.digest (Digest.ofBytes (← IO.FS.readBinFile path))).finish
      -- a change no entry expresses (an erasure) is determined by the command's text and context
      unless payload.refusals.isEmpty do
        entries := (({} : Enc).digest entries |>.digest text |>.digest ctx).finish
  return (out, none)

/-- The command payloads of the observed commands (`recordCommandDelta`), each also refused for the command-state
fields it changed (`commandStateChanges`) and the attributes with handlers outside core Lean it ran
(`foreignAttributesByCommandRef`). -/
def commandPayloads (observations : Array CommandObservation) : IO (Array CommandEntries) := do
  let foreign : Std.HashMap Nat (Array Refusal) := (← foreignAttributesByCommandRef.get).foldl (init := {})
    fun m (i, attr) => m.alter i fun rs => some ((rs.getD #[]).push (.foreignAttribute attr))
  (observations.qsort (·.i < ·.i)).mapM fun obs => do
    let ce ← recordCommandDelta obs.before.env obs.after.env obs.i
    let extra := commandStateChanges obs.before obs.after ++ foreign.getD obs.i #[]
    return { ce with refusals := extra.foldl (fun rs r => if rs.contains r then rs else rs.push r) ce.refusals }

/-- What a module records for reuse: its command payloads, its `.usage` command records, and why it is `noskip`. -/
structure ModuleRecords where
  payloads : Array CommandEntries := #[]
  commands : Array CommandRecord := #[]
  noskipReason? : Option String := none

/-- The module's payloads, records and `noskip` reason, from the observations (`commandObservationsRef`):
- a frontend the module ran in-process (`sessionChanged`: `runFrontend` reset the recording references; or a repeated
  command index: `Lean.Elab.process` recorded from index 0 again) leaves observations that are not the module's: none;
- a module-system file is never partially re-elaborated: no payloads, `noskip`;
- a command that used a name no digest stands for: no records, `noskip` (`commandRecords`);
- a declaration command with a refusal: `noskip` (`commandEntriesNoskipReason?`). -/
def moduleRecords (env : Environment) (own : Array (Name × Digest)) (stmt : Array (Name × Digest × Digest))
    (sessionChanged : Bool) : IO ModuleRecords := do
  let observations ← commandObservationsRef.get
  let nested := sessionChanged ||
    (observations.foldl (fun s o => s.insert o.i) ({} : Std.HashSet Nat)).size != observations.size
  let moduleSystem? := guard env.header.isModule *> some "module-system"
  if nested then
    return { noskipReason? := moduleSystem? <|> some "command observations of a nested frontend" }
  let payloads ← if env.header.isModule then pure #[] else commandPayloads observations
  let (commands, unattributed?) ← commandRecords env own stmt payloads
  let declIdxs := commands.foldl (init := ({} : Std.HashSet Nat)) fun s c => if c.isDecl then s.insert c.i else s
  return { payloads, commands,
           noskipReason? := moduleSystem? <|> unattributed? <|> commandEntriesNoskipReason? payloads declIdxs.contains }

/-- A digest of the module's import closure: its sorted module names. -/
def closureDigest (env : Environment) : Digest :=
  let names := env.header.moduleNames.qsort Name.quickLt
  (({} : Enc).nat names.size |> names.foldl Enc.name).finish

/-- The `.usage` format version; Lake reads a sidecar of any other version as absent. -/
def usageVersion : Nat := 4

/-- `own` is `localDigests env consts` and `stmt` is `computeStmt` over them. `extra` lists the extra module
uses of the environment and of `extraModUsesByChecksRef` (those of commands whose environment was discarded). With
`incrLoaded` (the run reused commands from an `--incr-load` snapshot), `noskip` is set: reused commands never call
`addDecl` in this process, so `extra` may miss constants they used. `noskipReason?` (a command payload that cannot
be replayed) also sets `noskip` and is written as `noskipReason`. `usedAttrs` holds, beside each `used` entry, the
attrs digest the defining module recorded for it in `stmt`; `moduleUsed` fails on a constant missing either. -/
def writeUsage (env : Environment) (consts : Array (Name × ConstantInfo × Array Name))
    (own : Array (Name × Digest)) (stmt : Array (Name × Digest × Digest)) (extra : NameSet)
    (commands : Array CommandRecord) (incrLoaded : Bool) (path : System.FilePath)
    (noskipReason? : Option String := none) : IO Unit := do
  let noskip := noskipReason?.isSome || incrLoaded || consts.any fun (_, _, rs) => rs.any
    (· matches ``Lean.reduceBool | ``Lean.reduceNat | ``Lean.ofReduceBool | ``Lean.ofReduceNat)
  let s := state env
  let allExtra := (getLocalExtraModUses env).foldl (·.insert ·) (← extraModUsesByChecksRef.get)
  let extraMods := allExtra.toArray.filter (fun u => (env.getModuleIdx? u.module).any s.hasEntries)
    |>.qsort fun a b => let k (u : ExtraModUse) := 2 * u.isExported.toNat + u.isMeta.toNat
      Name.quickLt a.module b.module || (a.module == b.module && k a < k b)
  let pair (n : Name) (d : Digest) := Json.arr #[nameToJson n, toJson d]
  let moduleDigest := (own.foldl (fun e (n, d) => e.name n |>.digest d) (({} : Enc).nat own.size)).finish
  let used ← IO.ofExcept (moduleUsed env extra consts)
  let fields : List (String × Json) := [("version", usageVersion), ("noskip", noskip),
    ("moduleDigest", toJson moduleDigest),
    ("closure", toJson (closureDigest env)),
    ("own", Json.arr (own.map fun (n, d) => pair n d)),
    ("used", Json.arr (used.map fun (m, cs) =>
      Json.arr #[nameToJson m, Json.arr (cs.map fun (n, d, _) => pair n d)])),
    ("usedAttrs", Json.arr (used.map fun (m, cs) =>
      Json.arr #[nameToJson m, Json.arr (cs.map fun (n, _, a) => pair n a)])),
    ("extra", Json.arr (extraMods.map fun u => Json.arr #[nameToJson u.module, u.isMeta])),
    ("stmt", Json.arr (stmt.map fun (n, c, a) => Json.arr #[nameToJson n, toJson c, toJson a])),
    ("commands", Json.arr (commands.map toJson))]
  let fields := match noskipReason? with
    | some reason => fields ++ [("noskipReason", toJson reason)]
    | none => fields
  IO.FS.writeFile path (Json.mkObj fields).compress

end Lean.ModuleUsage
