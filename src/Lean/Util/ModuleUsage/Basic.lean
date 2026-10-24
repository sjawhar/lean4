/-
Copyright (c) 2026 Theorem Labs. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
-/
module
prelude
public import Lean.Expr
public import Lean.Data.Json.FromToJson
public import Lean.Compiler.ExternAttr
import Lean.Compiler.BorrowedAnnotation
public section

/-!
The digests and the injective byte encoding that usage data is built from, shared by Lean and Lake.
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

/-- What a file system records of a file, besides its bytes, that every write to it, truncation of it or replacement
of its path changes: its device and inode, its size, and its modification and status-change times in seconds and
nanoseconds. -/
structure FileStamp where
  dev : UInt64
  ino : UInt64
  size : UInt64
  mtimeSec : UInt64
  mtimeNsec : UInt64
  ctimeSec : UInt64
  ctimeNsec : UInt64
  deriving BEq, Inhabited

/-- The stamp of the file at `path` now, or `none` if it cannot be read (or on Windows). -/
@[extern "lean_usage_file_stamp"]
opaque fileStamp (path : @& System.FilePath) : IO (Option FileStamp)

/-- `fileDigest`, with the stamp of the file the bytes were read from if it stands for them: the open file's stamp
was the same before and after the read, and its status-change time lay more than two seconds in the past (longer
than any file system's timestamp granularity), so that any later change to the file shows in its stamp. `none` if
not (or on Windows). -/
@[extern "lean_usage_file_digest_stamped"]
opaque fileDigestStamped (path : @& System.FilePath) : IO (Digest × Option FileStamp)

/-- The file's bytes, with the stamp of the file they were read from if it stands for them, as for
`fileDigestStamped`. -/
@[extern "lean_usage_read_file_stamped"]
opaque readFileStamped (path : @& System.FilePath) : IO (ByteArray × Option FileStamp)

/-- `s` followed by `v`'s 16 lowercase hex digits. -/
private def pushHex16 (s : String) (v : UInt64) : String := Id.run do
  let mut s := s
  for i in [0:16] do
    let d := ((v >>> (60 - 4 * i.toUInt64)) &&& 15).toNat
    s := s.push (Char.ofNat (if d < 10 then 48 + d else 87 + d))
  return s

/-- 32 lowercase hex digits. -/
def Digest.hex (d : Digest) : String := pushHex16 (pushHex16 "" d.hi) d.lo

/-- The order of `hex`, without building the strings. -/
def Digest.lt (a b : Digest) : Bool := a.hi < b.hi || (a.hi == b.hi && a.lo < b.lo)

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
/-- The component count, then each component root first, tagged string or number. The buffer is threaded through a
loop, not a recursion over the prefix: there the compiler borrows it, and each component's push copies it. -/
def name (e : Enc) (n : Name) : Enc := Id.run do
  let mut e := e.nat n.getNumParts
  for c in n.components do
    e := match c with
      | .str _ s => e.u8 1 |>.str s
      | .num _ k => e.u8 2 |>.nat k
      | .anonymous => e
  return e
def names (e : Enc) (ns : List Name) : Enc := ns.foldl name (e.nat ns.length)
/-- `xs`'s size, then each element encoded by `f`. -/
@[inline] def array {α : Type} (e : Enc) (xs : Array α) (f : Enc → α → Enc) : Enc := xs.foldl f (e.nat xs.size)
def nats (e : Enc) (ns : Array Nat) : Enc := e.array ns nat
def opt {α : Type} (e : Enc) (o : Option α) (f : Enc → α → Enc) : Enc :=
  match o with
  | none => e.u8 0
  | some a => f (e.u8 1) a
def finish (e : Enc) : Digest := Digest.ofBytes e.buf
end Enc

/-- What of a binder, besides its domain, an expression digest counts. -/
inductive BinderMode where
  /-- Nothing: exactly what `Expr.eqv` compares. -/
  | none
  /-- Binder infos (the compiler reads `instImplicit`), not names. -/
  | infos
  /-- Names and infos: types whose binders steer elaboration downstream. -/
  | namesInfos

/-- What of an `mdata` node an expression digest counts, besides its expression. -/
inductive MDataMode where
  /-- Nothing: the node is invisible. For theorem proofs, which the compiler never reads. -/
  | none
  /-- What the compiler reads: whether the node is a `[borrowed]` annotation (`isMarkedBorrowed`). Other payloads
  are left out; some carry fresh-name counters (proof-mode annotations), which differ between two runs. -/
  | compilerRead
  /-- The whole payload, exactly as `Expr.eqv` compares it (`mdataBytes`). For specialization-cache keys. -/
  | eqv

/-- `s` encoded so that two syntax trees encode alike exactly when `Syntax.structEq` holds: source information
is left out, and an identifier's raw text is the bytes `Substring.Raw.beq` compares. -/
partial def syntaxEnc (e : Enc) : Syntax → Enc
  | .missing => e.u8 0
  | .node _ k args => args.foldl syntaxEnc (e.u8 1 |>.name k |>.nat args.size)
  | .atom _ v => e.u8 2 |>.str v
  | .ident _ raw v pre =>
    pre.foldl (init := e.u8 3 |>.str raw.repair.toString |>.name v |>.nat pre.length) fun e p => match p with
      | .namespace ns => e.u8 0 |>.name ns
      | .decl n fs => fs.foldl Enc.str (e.u8 1 |>.name n |>.nat fs.length)

/-- An `mdata` payload encoded so that two payloads encode alike exactly when they are `==` (`DataValue`'s derived
`BEq`, which compares syntax with `Syntax.structEq`), as `Expr.eqv` compares them: what `MDataMode.eqv` hashes. -/
@[export lean_usage_mdata_bytes]
private def mdataBytes (m : KVMap) : ByteArray :=
  (m.entries.foldl (init := ({} : Enc).nat m.entries.length) fun e (k, v) => valueEnc (e.name k) v).buf
where
  valueEnc (e : Enc) : DataValue → Enc
    | .ofString s => e.u8 0 |>.str s
    | .ofBool b => e.u8 1 |>.bool b
    | .ofName n => e.u8 2 |>.name n
    | .ofNat n => e.u8 3 |>.nat n
    | .ofInt (.ofNat n) => e.u8 4 |>.nat n
    | .ofInt (.negSucc n) => e.u8 5 |>.nat n
    | .ofSyntax s => syntaxEnc (e.u8 6) s

/-- Whether an `mdata` node with payload `m` is a `[borrowed]` annotation, as the compiler decides it
(`isMarkedBorrowed`): what `MDataMode.compilerRead` hashes. -/
@[export lean_usage_mdata_borrowed]
private def mdataBorrowed (m : KVMap) : Bool :=
  isMarkedBorrowed (.mdata m (.bvar 0))

/-- A Merkle SHA-256 digest of `e`'s structure (`src/library/usage_digest.cpp`), linear in its distinct
subterms, counting of binders what `mode` says and of `mdata` nodes what `mdata` says. -/
@[extern "lean_usage_expr_digest"]
opaque exprDigest (mode : BinderMode) (mdata : MDataMode) (e : @& Expr) : Digest

/-- One digest of `es` in order, by one digester, so subterms they share are digested once. -/
@[extern "lean_usage_exprs_digest"]
opaque exprsDigest (mode : BinderMode) (mdata : MDataMode) (es : @& Array Expr) : Digest

/-- For each of `xs`, a digest of its contents (`src/library/usage_digest.cpp`): a Merkle hash of XXH3-128 nodes over
its objects that counts what `CompactedRegion.bytes` stores of each, so two elements with equal contents get equal
digests however their objects are shared; `none` for an element holding a value it refuses: a closure or an external
object (`CompactedRegion.bytes` refuses them too), an unresolved promise, or a reference, whose identity a content
digest does not see. The objects the elements share are digested once. -/
@[extern "lean_usage_objects_digests"]
opaque objectsDigests {α : Type} (xs : @& Array α) : Array (Option Digest)

def externEnc (e : Enc) (d : ExternAttrData) : Enc :=
  let ⟨entries⟩ := d
  entries.foldl (init := e.nat entries.length) fun e x => match x with
    | .adhoc b => e.u8 1 |>.name b
    | .inline b p => e.u8 2 |>.name b |>.str p
    | .standard b f => e.u8 3 |>.name b |>.str f
    | .opaque => e.u8 4

def hintsEnc (e : Enc) : ReducibilityHints → Enc
  | .opaque => e.u8 0 | .abbrev => e.u8 1 | .regular h => e.u8 2 |>.u64 h.toUInt64
def safetyEnc (e : Enc) : DefinitionSafety → Enc
  | .safe => e.u8 0 | .unsafe => e.u8 1 | .partial => e.u8 2

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

/-- A `Name` (de)serialized as `nameToJson`: Lean writes the usage sidecars with it, and Lean and Lake read them. -/
structure JName where
  name : Name
  deriving Inhabited, BEq
instance : ToJson JName := ⟨(nameToJson ·.name)⟩
instance : FromJson JName := ⟨fun j => JName.mk <$> nameOfJson? j⟩

/-- Reads a `.usage`'s `resolved` groups (`ModuleUsage.resolvedGroups`): `[module or null, [[name, kinds], ...]]`. -/
def resolvedOfJson (j : Json) : Except String (Array (Option Name × Array (Name × UInt8))) := do
  (← j.getArr?).mapM fun g => do
    let #[m, ns] ← g.getArr? | throw s!"expected a pair, got {g.compress}"
    let m? ← if m.isNull then pure none else some <$> nameOfJson? m
    let ns ← (← ns.getArr?).mapM fun e => do
      let #[n, k] ← e.getArr? | throw s!"expected a pair, got {e.compress}"
      return (← nameOfJson? n, (← fromJson? (α := Nat) k).toUInt8)
    return (m?, ns)

end Lean.ModuleUsage
