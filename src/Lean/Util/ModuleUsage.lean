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
import Lean.ExtraModUses
import Lean.Compiler.Old
import Lean.Server.InfoUtils
import Lean.Util.Path
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

/-- A process-local expression digest cache. Its entries are valid while the expressions' environment is live. -/
opaque ExprDigestCacheSpec : NonemptyType.{0}
def ExprDigestCache := ExprDigestCacheSpec.type
instance : Nonempty ExprDigestCache := ExprDigestCacheSpec.property

@[extern "lean_usage_expr_digest_cache_new"]
opaque mkExprDigestCache : Unit → ExprDigestCache

@[extern "lean_usage_expr_digest_cached"]
opaque exprDigestCached (cache : @& ExprDigestCache) (binders : Bool) (e : @& Expr) : Digest

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
def localHash (env : Environment) (c : ConstantInfo) (cache := mkExprDigestCache ()) : Digest :=
  let v := exprDigestCached cache false
  let e := ({} : Enc).names c.levelParams |>.digest (exprDigestCached cache true c.type)
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

/--
Imported per-constant digests loaded on demand from `.usage` sidecars. `none` distinguishes a
missing, invalid, old-version, or module-system sidecar from a valid sidecar whose `own` array is empty.
-/
structure ImportedDigests where
  entries : Array (Option (Array (Name × Digest))) := #[]

instance : Inhabited ImportedDigests := ⟨{}⟩

/-- The digest of `c` if module `i` has a usable `.usage` sidecar. -/
def ImportedDigests.findAt? (s : ImportedDigests) (i : ModuleIdx) (c : Name) : Option Digest := do
  let es ← s.entries[i.toNat]?
  let es ← es
  (·.2) <$> es.binSearch (c, default) (fun a b => Name.quickLt a.1 b.1)

def ImportedDigests.find? (s : ImportedDigests) (env : Environment) (c : Name) : Option Digest := do
  s.findAt? (← env.getModuleIdxFor? c) c

/-- Whether module `i` has a usable current-version `.usage` sidecar. -/
def ImportedDigests.hasEntries (s : ImportedDigests) (i : ModuleIdx) : Bool :=
  (s.entries[i.toNat]?.join).isSome

/-- The current module's own constants, from the kernel environment, each with its `refs`. -/
def ownConsts (env : Environment) : Array (Name × ConstantInfo × Array Name) :=
  env.checked.get.constants.foldStage2 (fun cs n ci => cs.push (n, ci, refs env ci)) #[]

/-- Digests of the current module's constants: SCCs in dependency order; each SCC's digest hashes its members'
names and local hashes with the name and digest of every constant outside it that they refer to (tagged absent
if that constant has no digest). -/
def compute (env : Environment) (imported : ImportedDigests) (consts := ownConsts env) :
    Array (Name × Digest) := Id.run do
  let byName : Std.HashMap Name (ConstantInfo × Array Name) :=
    consts.foldl (fun m (n, ci, rs) => m.insert n (ci, rs)) {}
  let sccs := SCC.scc (consts.map (·.1)).toList fun n => byName[n]!.2.toList.filter byName.contains
  let mut out : Std.HashMap Name Digest := {}
  let cache := mkExprDigestCache ()
  for scc in sccs do
    let members := NameSet.ofList scc
    let sorted := scc.toArray.qsort Name.quickLt
    let mut e : Enc := ({} : Enc).nat sorted.size
    for m in sorted do
      let (ci, rs) := byName[m]!
      let outside := rs.filter (!members.contains ·)
      e := e.name m |>.digest (localHash env ci cache) |>.nat outside.size
      for r in outside do
        e := e.name r |>.opt (out[r]? <|> imported.find? env r) Enc.digest
    let d := e.finish
    for m in scc do out := out.insert m d
  return (consts.map fun (n, _) => (n, out[n]!)).qsort fun a b => Name.quickLt a.1 b.1


def localDigests (env : Environment) (imported : ImportedDigests) (consts := ownConsts env) :
    Array (Name × Digest) :=
  compute env imported consts

/-- Per defining module, sorted: every imported constant that the current module's own constants refer to or
that is in `extra`, with its digest. Constants without a digest (from a module built without a usable `.usage`)
are left out. -/
def moduleUsed (env : Environment) (imported : ImportedDigests) (extra : NameSet)
    (consts := ownConsts env) : Array (Name × Array (Name × Digest)) :=
  let used := consts.foldl (init := extra) fun u (_, _, rs) => rs.foldl (·.insert ·) u
  let byMod := used.foldl (init := (∅ : Std.HashMap Name (Array (Name × Digest)))) fun m c => Id.run do
    let some i := env.getModuleIdxFor? c | return m
    let some d := imported.findAt? i c | return m
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

/-- The `.usage` format version; Lake reads a sidecar of any other version as absent. -/
def usageVersion : Nat := 3

private def nameFromSidecarJson? (j : Json) : Except String Name := do
  (← j.getArr?).foldlM (init := .anonymous) fun p c => match c with
    | .str s => return .str p s
    | .num _ => return .num p (← c.getNat?)
    | _ => throw s!"expected a name component, got {c.compress}"

private def usageOwnFromJson? (j : Json) : Except String (Option (Array (Name × Digest))) := do
  if (← j.getObjValAs? Nat "version") != usageVersion then return none
  let entries ← (← j.getObjVal? "own").getArr?
  return some (← entries.mapM fun entry => do
    let #[n, d] ← entry.getArr? | throw s!"expected a pair, got {entry.compress}"
    return (← nameFromSidecarJson? n, ← fromJson? d))

private def readImportedDigests? (olean : System.FilePath) :
    IO (Option (Array (Name × Digest))) := do
  -- Module-system private data is intentionally covered by Lake's artifact hash instead.
  if ← (olean.addExtension "private").pathExists then return none
  let path := olean.withExtension "usage"
  match ← (IO.FS.readFile path).toBaseIO with
  | .ok contents => return (Json.parse contents >>= usageOwnFromJson?).toOption.getD none
  | .error (.noFileOrDirectory ..) => return none
  | .error e => throw e

/--
Loads imported digests only for modules referenced by the current module's declarations, recorded
elaboration uses, or extra module uses. Each matching `.usage` is read at most once.
-/
def loadImportedDigests (env : Environment)
    (consts : Array (Name × ConstantInfo × Array Name)) (extra : NameSet) : IO ImportedDigests := do
  let mut needed := Array.replicate env.header.modules.size false
  for (_, _, rs) in consts do
    for c in rs do
      if let some i := env.getModuleIdxFor? c then
        needed := needed.set! i.toNat true
  for c in extra do
    if let some i := env.getModuleIdxFor? c then
      needed := needed.set! i.toNat true
  let allExtra := (getLocalExtraModUses env).foldl (·.insert ·) (← extraModUsesByChecksRef.get)
  for u in allExtra do
    if let some i := env.getModuleIdx? u.module then
      needed := needed.set! i.toNat true
  let mut entries := Array.replicate env.header.modules.size none
  for i in [:needed.size] do
    if needed[i]! then
      let moduleName := env.header.modules[i]!.module
      let olean ← findOLean moduleName
      entries := entries.set! i (← readImportedDigests? olean)
  return { entries }

/-- `own` is `localDigests env imported consts`. `extra` lists the extra module uses of the environment and of
`extraModUsesByChecksRef` (those of commands whose environment was discarded). With `incrLoaded` (the run reused
commands from an `--incr-load` snapshot), `noskip` is set: reused commands never call `addDecl` in this process,
so `extra` may miss constants they used. -/
def writeUsage (env : Environment) (imported : ImportedDigests)
    (consts : Array (Name × ConstantInfo × Array Name)) (own : Array (Name × Digest))
    (extra : NameSet) (incrLoaded : Bool) (path : System.FilePath) : IO Unit := do
  let noskip := incrLoaded || consts.any fun (_, _, rs) => rs.any
    (· matches ``Lean.reduceBool | ``Lean.reduceNat | ``Lean.ofReduceBool | ``Lean.ofReduceNat)
  let allExtra := (getLocalExtraModUses env).foldl (·.insert ·) (← extraModUsesByChecksRef.get)
  let extraMods := allExtra.toArray.filter (fun u => (env.getModuleIdx? u.module).any imported.hasEntries)
    |>.qsort fun a b => let k (u : ExtraModUse) := 2 * u.isExported.toNat + u.isMeta.toNat
      Name.quickLt a.module b.module || (a.module == b.module && k a < k b)
  let pair (n : Name) (d : Digest) := Json.arr #[nameToJson n, toJson d]
  let moduleDigest := (own.foldl (fun e (n, d) => e.name n |>.digest d) (({} : Enc).nat own.size)).finish
  let j := Json.mkObj [("version", usageVersion), ("noskip", noskip),
    ("moduleDigest", toJson moduleDigest),
    ("closure", toJson (closureDigest env)),
    ("own", Json.arr (own.map fun (n, d) => pair n d)),
    ("used", Json.arr ((moduleUsed env imported extra consts).map fun (m, cs) =>
      Json.arr #[nameToJson m, Json.arr (cs.map fun (n, d) => pair n d)])),
    ("extra", Json.arr (extraMods.map fun u => Json.arr #[nameToJson u.module, u.isMeta]))]
  IO.FS.writeFile path j.compress

end Lean.ModuleUsage
