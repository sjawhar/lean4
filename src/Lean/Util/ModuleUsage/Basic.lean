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

/-- `fileDigest` of a file whose bytes are `bytes`. -/
@[extern "lean_usage_file_bytes_digest"]
opaque fileDigestOfBytes (bytes : @& ByteArray) : Digest

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

/-- The permission bits (`st_mode & 0o7777`) of the file at `path`, following symbolic links, or `none` if it cannot
be read (or on Windows). -/
@[extern "lean_usage_file_mode"]
opaque fileMode (path : @& System.FilePath) : IO (Option UInt32)

/-- `fileDigest`, with the stamp of the file the bytes were read from if it stands for them: the open file's stamp
was the same before and after the read, and its status-change time lay far enough before the read began
(`stampSettled`, against the realtime clock read before the first `fstat`) that any later change to the file shows in
its stamp. `none` if not (or on Windows). -/
@[extern "lean_usage_file_digest_stamped"]
opaque fileDigestStamped (path : @& System.FilePath) : IO (Digest × Option FileStamp)

/-- Whether a stamp whose status-change time has nanosecond field `ctimeNsec` and lay `ageNs` nanoseconds before its
read began stands for the file's bytes, on a file system whose `statfs` type is `fsType` (`statfsOk`: `statfs`
succeeded) and whose timestamp clock advances every `tickNs` nanoseconds (not positive: unknown): more than
`max 50 ms (4 * tickNs)` on ext4, XFS, Btrfs and tmpfs with a nonzero `ctimeNsec` and a known tick, more than 2 s
otherwise (`src/library/usage_digest.cpp`, `stamp_settled`). -/
@[extern "lean_usage_stamp_settled"]
opaque stampSettled (statfsOk : Bool) (fsType ctimeNsec : UInt64) (tickNs ageNs : Int64) : Bool

/-- Whether the file system holding `path` is one whose stamps `stampSettled` judges by its fine rule (ext4, XFS,
Btrfs and tmpfs on Linux, with a known timestamp tick): its kernel sets a file's status-change time at every change,
so a settled stamp there with a nonzero `ctimeNsec` stands for the same bytes in a later process too. `false` if
`statfs` fails, and off Linux. -/
@[extern "lean_usage_stamps_fine"]
opaque stampsFine (path : @& System.FilePath) : IO Bool

/-- Writes `bytes` to `path` as a new file renamed over it, never changing the file at `path` in place: a stamp
(`fileDigestStamped`) cannot tell a file being rewritten in place, whose write stalls mid-copy, from one at rest. -/
def writeFileReplacing (path : System.FilePath) (bytes : ByteArray) : IO Unit := do
  let tmp := path.addExtension s!"tmp.{← IO.Process.getPID}"
  IO.FS.writeBinFile tmp bytes
  IO.FS.rename tmp path

/-- The file's bytes, with the stamp of the file they were read from if it stands for them, as for
`fileDigestStamped`. -/
@[extern "lean_usage_read_file_stamped"]
opaque readFileStamped (path : @& System.FilePath) : IO (ByteArray × Option FileStamp)

/-- `acc` followed by `v` as 16 lowercase hex digits, most significant first. Shifts a `UInt64` rather than converting
it to a `Nat`, which goes through big-number division at 2^63 and above. -/
private def hex16 (acc : String) (v : UInt64) : String := Id.run do
  let mut s := acc
  for i in [0:16] do
    let d := ((v >>> (4 * (15 - i)).toUInt64) &&& 0xf).toUInt8
    s := s.push (Char.ofUInt8 (if d < 10 then '0'.toUInt8 + d else 'a'.toUInt8 - 10 + d))
  return s

/-- `acc` followed by `d.hex`. -/
def Digest.hexInto (acc : String) (d : Digest) : String := hex16 (hex16 acc d.hi) d.lo

/-- 32 lowercase hex digits. -/
def Digest.hex (d : Digest) : String := d.hexInto ""

/-- The order of `hex`, without building the strings. -/
def Digest.lt (a b : Digest) : Bool := a.hi < b.hi || (a.hi == b.hi && a.lo < b.lo)

/-- Parses exactly 32 lowercase hex digits. -/
def Digest.ofHex? (s : String) : Option Digest := do
  let bs := s.toUTF8
  guard (bs.size == 32)
  let digit (b : UInt8) : Option UInt64 :=
    if '0'.toUInt8 ≤ b && b ≤ '9'.toUInt8 then some (b - '0'.toUInt8).toUInt64
    else if 'a'.toUInt8 ≤ b && b ≤ 'f'.toUInt8 then some (b - 'a'.toUInt8 + 10).toUInt64
    else none
  -- Each half in a `UInt64`: a `Nat` fold would pass 2^64 and allocate a big number per digit.
  let half (start : Nat) : Option UInt64 :=
    bs.foldlM (start := start) (stop := start + 16) (init := 0) fun v b => (v <<< 4 ||| ·) <$> digit b
  return ⟨← half 0, ← half 16⟩

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
/-- The component count, then each component root first, tagged string or number. A fold rather than a recursion on
the prefix, whose base case would return the buffer it borrows and make the next push copy the whole buffer. -/
def name (e : Enc) (n : Name) : Enc :=
  n.components.foldl (init := e.nat n.getNumParts) fun e c => match c with
    | .str _ s => e.u8 1 |>.str s
    | .num _ k => e.u8 2 |>.nat k
    | .anonymous => e
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
private partial def syntaxEnc (e : Enc) : Syntax → Enc
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

/-- `acc` followed by `nameToJson n` as `Json.compress` prints it, without building the JSON value. -/
def nameJsonInto (acc : String) (n : Name) : String :=
  (go acc n).push ']'
where
  go (acc : String) : Name → String
    | .anonymous => acc.push '['
    | .str p s => Json.renderString s (sep (go acc p) p)
    | .num p k => sep (go acc p) p ++ toString k
  sep (acc : String) (p : Name) : String := if p.isAnonymous then acc else acc.push ','

/-- `acc` followed by `toJson d` as `Json.compress` prints it. -/
def digestJsonInto (acc : String) (d : Digest) : String := (d.hexInto (acc.push '"')).push '"'

/-- `acc` followed by `xs` as `Json.compress` prints a JSON array, each element printed by `f`. -/
@[inline] def arrayJsonInto {α : Type} (acc : String) (xs : Array α) (f : String → α → String) : String :=
  let acc := acc.push '['
  let acc := if h : 0 < xs.size then f acc xs[0] else acc
  (xs.foldl (start := 1) (init := acc) fun acc x => f (acc.push ',') x).push ']'

end Lean.ModuleUsage
