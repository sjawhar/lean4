/-
Copyright (c) 2026 Theorem Labs. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
-/
module
prelude
public import Lean.Expr
public import Lean.Data.Json.FromToJson
public import Lean.Compiler.ExternAttr
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
def nats (e : Enc) (ns : Array Nat) : Enc := ns.foldl nat (e.nat ns.size)
def opt {α : Type} (e : Enc) (o : Option α) (f : Enc → α → Enc) : Enc :=
  match o with
  | none => e.u8 0
  | some a => f (e.u8 1) a
def finish (e : Enc) : Digest := Digest.ofBytes e.buf
end Enc

/-- What of a binder, besides its domain, an expression digest counts. -/
inductive BinderMode where
  /-- Nothing: what the kernel sees. -/
  | none
  /-- Binder infos (the compiler reads `instImplicit`), not names. -/
  | infos
  /-- Names and infos: types whose binders steer elaboration downstream. -/
  | namesInfos

/-- A Merkle SHA-256 digest of `e`'s structure (`src/library/usage_digest.cpp`), linear in its distinct
subterms. Ignores `mdata`. -/
@[extern "lean_usage_expr_digest"]
opaque exprDigest (mode : BinderMode) (e : @& Expr) : Digest

/-- One digest of `es` in order, by one digester, so subterms they share are digested once. -/
@[extern "lean_usage_exprs_digest"]
opaque exprsDigest (mode : BinderMode) (es : @& Array Expr) : Digest

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

/-- A name as the JSON array of its components, root first: each a string or a number. Unlike `toJson Name`
(`Name.toString`), this round-trips macro-scoped names and components containing `»`. -/
def nameToJson (n : Name) : Json :=
  .arr (go n #[])
where
  go : Name → Array Json → Array Json
    | .anonymous, acc => acc
    | .str p s, acc => (go p acc).push (.str s)
    | .num p k, acc => (go p acc).push (.num k)

end Lean.ModuleUsage
