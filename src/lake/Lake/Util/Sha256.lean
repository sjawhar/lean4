/-
Copyright (c) 2026 Lean FRO. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Sami Jawhar
-/
module

prelude
public import Init.System.IO
public import Lean.Data.Json
import Lake.Util.String
import Init.Data.String.Length
import Init.Data.String.TakeDrop

/-! # SHA-256

SHA-256 as NIST FIPS 180-4 defines it, which names the artifacts of a remote cache by their
content, so that a reader can check the bytes it receives. The section numbers below are those of
FIPS 180-4. `sha256File` reads a file in pieces of 64 KiB, so its memory use does not grow with the
file.
-/

open System

namespace Lake

/--
A SHA-256 digest: 64 lowercase hexadecimal digits, as `sha256sum` prints it. Only `sha256Bytes`,
`sha256File` and `Sha256.ofHex?` make one, so its digits are always well-formed.
-/
public structure Sha256 where
  private mk ::
  /-- The digest's 64 lowercase hexadecimal digits. -/
  hex : String
  deriving BEq

namespace Sha256

/-- The eight working variables of the hash computation (§6.2.2). -/
structure State where
  a : UInt32
  b : UInt32
  c : UInt32
  d : UInt32
  e : UInt32
  f : UInt32
  g : UInt32
  h : UInt32

/-- The initial hash value (§5.3.3). -/
def State.init : State :=
  ⟨0x6a09e667, 0xbb67ae85, 0x3c6ef372, 0xa54ff53a, 0x510e527f, 0x9b05688c, 0x1f83d9ab, 0x5be0cd19⟩

/-- The digest of a final state (§6.2.2, step 4): 64 lowercase hexadecimal digits. -/
def State.toHex (s : State) : String :=
  let pair (x y : UInt32) := lowerHexUInt64 (x.toUInt64 <<< 32 ||| y.toUInt64)
  pair s.a s.b ++ pair s.c s.d ++ pair s.e s.f ++ pair s.g s.h

/-! The functions of §4.1.2. -/

@[inline] def rotr (x n : UInt32) : UInt32 := x >>> n ||| x <<< (32 - n)
@[inline] def ch (x y z : UInt32) : UInt32 := (x &&& y) ^^^ (~~~x &&& z)
@[inline] def maj (x y z : UInt32) : UInt32 := (x &&& y) ^^^ (x &&& z) ^^^ (y &&& z)
@[inline] def bigSigma0 (x : UInt32) : UInt32 := rotr x 2 ^^^ rotr x 13 ^^^ rotr x 22
@[inline] def bigSigma1 (x : UInt32) : UInt32 := rotr x 6 ^^^ rotr x 11 ^^^ rotr x 25
@[inline] def smallSigma0 (x : UInt32) : UInt32 := rotr x 7 ^^^ rotr x 18 ^^^ x >>> 3
@[inline] def smallSigma1 (x : UInt32) : UInt32 := rotr x 17 ^^^ rotr x 19 ^^^ x >>> 10

/-- The message schedule word `W_t` for `t ≥ 16` from `W_{t-2}`, `W_{t-7}`, `W_{t-15}` and
`W_{t-16}` (§6.2.2, step 1). -/
@[inline] def sched (w2 w7 w15 w16 : UInt32) : UInt32 :=
  smallSigma1 w2 + w7 + smallSigma0 w15 + w16

/-- One round of the hash computation with the constant `k` and the schedule word `w`
(§6.2.2, step 3). -/
@[inline] def State.round (s : State) (k w : UInt32) : State :=
  let t1 := s.h + bigSigma1 s.e + ch s.e s.f s.g + k + w
  let t2 := bigSigma0 s.a + maj s.a s.b s.c
  ⟨t1 + t2, s.a, s.b, s.c, s.d + t1, s.e, s.f, s.g⟩

/-- The big-endian 32-bit word at byte offset `i` of `b`. -/
@[inline] def word (b : ByteArray) (i : Nat) : UInt32 :=
  (b.get! i).toUInt32 <<< 24 ||| (b.get! (i + 1)).toUInt32 <<< 16 |||
    (b.get! (i + 2)).toUInt32 <<< 8 ||| (b.get! (i + 3)).toUInt32

/--
Processes the 64-byte block at byte offset `i` of `b` (§6.2.2). The 64 rounds are written out,
with the constants of §4.2.2, so that the compiled code works on unboxed 32-bit words and
allocates nothing per round.
-/
def compress (s : State) (b : ByteArray) (i : Nat) : State :=
  let w0 := word b (i + 0)
  let w1 := word b (i + 4)
  let w2 := word b (i + 8)
  let w3 := word b (i + 12)
  let w4 := word b (i + 16)
  let w5 := word b (i + 20)
  let w6 := word b (i + 24)
  let w7 := word b (i + 28)
  let w8 := word b (i + 32)
  let w9 := word b (i + 36)
  let w10 := word b (i + 40)
  let w11 := word b (i + 44)
  let w12 := word b (i + 48)
  let w13 := word b (i + 52)
  let w14 := word b (i + 56)
  let w15 := word b (i + 60)
  let w16 := sched w14 w9 w1 w0
  let w17 := sched w15 w10 w2 w1
  let w18 := sched w16 w11 w3 w2
  let w19 := sched w17 w12 w4 w3
  let w20 := sched w18 w13 w5 w4
  let w21 := sched w19 w14 w6 w5
  let w22 := sched w20 w15 w7 w6
  let w23 := sched w21 w16 w8 w7
  let w24 := sched w22 w17 w9 w8
  let w25 := sched w23 w18 w10 w9
  let w26 := sched w24 w19 w11 w10
  let w27 := sched w25 w20 w12 w11
  let w28 := sched w26 w21 w13 w12
  let w29 := sched w27 w22 w14 w13
  let w30 := sched w28 w23 w15 w14
  let w31 := sched w29 w24 w16 w15
  let w32 := sched w30 w25 w17 w16
  let w33 := sched w31 w26 w18 w17
  let w34 := sched w32 w27 w19 w18
  let w35 := sched w33 w28 w20 w19
  let w36 := sched w34 w29 w21 w20
  let w37 := sched w35 w30 w22 w21
  let w38 := sched w36 w31 w23 w22
  let w39 := sched w37 w32 w24 w23
  let w40 := sched w38 w33 w25 w24
  let w41 := sched w39 w34 w26 w25
  let w42 := sched w40 w35 w27 w26
  let w43 := sched w41 w36 w28 w27
  let w44 := sched w42 w37 w29 w28
  let w45 := sched w43 w38 w30 w29
  let w46 := sched w44 w39 w31 w30
  let w47 := sched w45 w40 w32 w31
  let w48 := sched w46 w41 w33 w32
  let w49 := sched w47 w42 w34 w33
  let w50 := sched w48 w43 w35 w34
  let w51 := sched w49 w44 w36 w35
  let w52 := sched w50 w45 w37 w36
  let w53 := sched w51 w46 w38 w37
  let w54 := sched w52 w47 w39 w38
  let w55 := sched w53 w48 w40 w39
  let w56 := sched w54 w49 w41 w40
  let w57 := sched w55 w50 w42 w41
  let w58 := sched w56 w51 w43 w42
  let w59 := sched w57 w52 w44 w43
  let w60 := sched w58 w53 w45 w44
  let w61 := sched w59 w54 w46 w45
  let w62 := sched w60 w55 w47 w46
  let w63 := sched w61 w56 w48 w47
  let r := s
  let r := r.round 0x428a2f98 w0
  let r := r.round 0x71374491 w1
  let r := r.round 0xb5c0fbcf w2
  let r := r.round 0xe9b5dba5 w3
  let r := r.round 0x3956c25b w4
  let r := r.round 0x59f111f1 w5
  let r := r.round 0x923f82a4 w6
  let r := r.round 0xab1c5ed5 w7
  let r := r.round 0xd807aa98 w8
  let r := r.round 0x12835b01 w9
  let r := r.round 0x243185be w10
  let r := r.round 0x550c7dc3 w11
  let r := r.round 0x72be5d74 w12
  let r := r.round 0x80deb1fe w13
  let r := r.round 0x9bdc06a7 w14
  let r := r.round 0xc19bf174 w15
  let r := r.round 0xe49b69c1 w16
  let r := r.round 0xefbe4786 w17
  let r := r.round 0x0fc19dc6 w18
  let r := r.round 0x240ca1cc w19
  let r := r.round 0x2de92c6f w20
  let r := r.round 0x4a7484aa w21
  let r := r.round 0x5cb0a9dc w22
  let r := r.round 0x76f988da w23
  let r := r.round 0x983e5152 w24
  let r := r.round 0xa831c66d w25
  let r := r.round 0xb00327c8 w26
  let r := r.round 0xbf597fc7 w27
  let r := r.round 0xc6e00bf3 w28
  let r := r.round 0xd5a79147 w29
  let r := r.round 0x06ca6351 w30
  let r := r.round 0x14292967 w31
  let r := r.round 0x27b70a85 w32
  let r := r.round 0x2e1b2138 w33
  let r := r.round 0x4d2c6dfc w34
  let r := r.round 0x53380d13 w35
  let r := r.round 0x650a7354 w36
  let r := r.round 0x766a0abb w37
  let r := r.round 0x81c2c92e w38
  let r := r.round 0x92722c85 w39
  let r := r.round 0xa2bfe8a1 w40
  let r := r.round 0xa81a664b w41
  let r := r.round 0xc24b8b70 w42
  let r := r.round 0xc76c51a3 w43
  let r := r.round 0xd192e819 w44
  let r := r.round 0xd6990624 w45
  let r := r.round 0xf40e3585 w46
  let r := r.round 0x106aa070 w47
  let r := r.round 0x19a4c116 w48
  let r := r.round 0x1e376c08 w49
  let r := r.round 0x2748774c w50
  let r := r.round 0x34b0bcb5 w51
  let r := r.round 0x391c0cb3 w52
  let r := r.round 0x4ed8aa4a w53
  let r := r.round 0x5b9cca4f w54
  let r := r.round 0x682e6ff3 w55
  let r := r.round 0x748f82ee w56
  let r := r.round 0x78a5636f w57
  let r := r.round 0x84c87814 w58
  let r := r.round 0x8cc70208 w59
  let r := r.round 0x90befffa w60
  let r := r.round 0xa4506ceb w61
  let r := r.round 0xbef9a3f7 w62
  let r := r.round 0xc67178f2 w63
  ⟨s.a + r.a, s.b + r.b, s.c + r.c, s.d + r.d, s.e + r.e, s.f + r.f, s.g + r.g, s.h + r.h⟩

/-- Processes `n` consecutive 64-byte blocks of `b`, the first at byte offset `i`. -/
def compressBlocks (s : State) (b : ByteArray) (i : Nat) : (n : Nat) → State
  | 0 => s
  | n + 1 => compressBlocks (compress s b i) b (i + 64) n

/-- Appends `n` zero bytes to `b`. -/
def pushZeros (b : ByteArray) : (n : Nat) → ByteArray
  | 0 => b
  | n + 1 => pushZeros (b.push 0) n

/-- Appends the big-endian bytes of `x` to `b`. -/
def pushBE64 (b : ByteArray) (x : UInt64) : ByteArray :=
  b.push (x >>> 56).toUInt8 |>.push (x >>> 48).toUInt8 |>.push (x >>> 40).toUInt8
    |>.push (x >>> 32).toUInt8 |>.push (x >>> 24).toUInt8 |>.push (x >>> 16).toUInt8
    |>.push (x >>> 8).toUInt8 |>.push x.toUInt8

/--
Pads and processes `rest`, the final bytes (fewer than 64) of a message of `len` bytes (§5.1.1):
a `1` bit, zero bits up to 64 bits short of a block boundary, and the message's length in bits as a
big-endian 64-bit number.
-/
def finish (s : State) (rest : ByteArray) (len : Nat) : State :=
  let blocks := if rest.size < 56 then 1 else 2
  let padded := pushZeros (rest.push 0x80) (blocks * 64 - 8 - (rest.size + 1))
  compressBlocks s (pushBE64 padded (len * 8).toUInt64) 0 blocks

/--
Hashes the rest of the file `h`. `s` is the state after the whole blocks of the first `len` bytes
of the file, and `pending` holds the bytes after those blocks (fewer than 64).
-/
partial def hashHandle (h : IO.FS.Handle) (s : State) (pending : ByteArray) (len : Nat) :
    IO Sha256 := do
  let piece ← h.read 65536
  if piece.isEmpty then
    return ⟨(finish s pending len).toHex⟩
  let data := if pending.isEmpty then piece else pending ++ piece
  let blocks := data.size / 64
  hashHandle h (compressBlocks s data 0 blocks) (data.extract (blocks * 64) data.size)
    (len + piece.size)

/-- Whether `c` is a lowercase hexadecimal digit. -/
def isLowerHexDigit (c : Char) : Bool :=
  c.isDigit || c == 'a' || c == 'b' || c == 'c' || c == 'd' || c == 'e' || c == 'f'

/-- Parses a digest from its 64 lowercase hexadecimal digits. -/
public def ofHex? (s : String) : Option Sha256 :=
  if s.length == 64 && s.all isLowerHexDigit then some ⟨s⟩ else none

public instance : ToString Sha256 := ⟨Sha256.hex⟩

public instance : Lean.ToJson Sha256 := ⟨(Lean.toJson ·.hex)⟩

public protected def fromJson? (json : Lean.Json) : Except String Sha256 := do
  let s ← json.getStr?
  let some digest := ofHex? s
    | throw s!"expected a SHA-256 digest (64 lowercase hexadecimal digits), got {s.quote}"
  return digest

public instance : Lean.FromJson Sha256 := ⟨Sha256.fromJson?⟩

end Sha256

/--
SHA-256 digests of files, keyed by their paths (for the artifacts of a remote cache mapping,
`ArtifactDescr.relPath`). In JSON, it is an object from path to digest.
-/
public abbrev Sha256Map := Std.TreeMap String Sha256

open Sha256

/-- The SHA-256 digest of `b`. -/
public def sha256Bytes (b : ByteArray) : Sha256 :=
  let blocks := b.size / 64
  ⟨(finish (compressBlocks .init b 0 blocks) (b.extract (blocks * 64) b.size) b.size).toHex⟩

/--
The SHA-256 digest of the file at `path` (the digest that `sha256sum` prints).
It reads the file in pieces of 64 KiB.
-/
public def sha256File (path : FilePath) : IO Sha256 := do
  hashHandle (← IO.FS.Handle.mk path .read) .init .empty 0
