import Lean
/-! Meaning digests: `localHash` (a constant's kernel data) ignores the constant's own name but sees binder info,
theorem proofs and Nat literals past 2^64; `attrsEnc` sees `noncomputable`, the `@[extern]` entries and the
`@[export]` name, and is equal for declarations without attributes; `localDigests` sees the names of referenced
constants. The serialized digest parser accepts exactly 32 lowercase hexadecimal digits, and `hex` and `ofHex?` are
inverse on digests with leading zeros and with the top bit of either half set. -/
open Lean Elab Command
def f (x : Nat) := x + 1
def f' (x : Nat) := x + 1
def g (x : Nat) := f x
def g' (x : Nat) := f' x
def h {y : Nat} := y
def h' (y : Nat) := y
theorem t1 : f 0 = 1 := rfl
theorem t2 : f 0 = 1 := by decide
def k0 := 0
def k1 := 18446744073709551616
def c0 : Nat := 0
noncomputable def c1 : Nat := 0
@[extern "lean_nat_add"] opaque e0 : @& Nat → @& Nat → Nat
@[extern "lean_nat_sub"] opaque e1 : @& Nat → @& Nat → Nat
@[export my_c_x0] def x0 (x : Nat) : Nat := x + 1
@[export my_c_x1] def x1 (x : Nat) : Nat := x + 1
#eval show CommandElabM Unit from do
  let env ← getEnv
  let lh n := ModuleUsage.localHash (env.find? n).get!
  let la n := (ModuleUsage.attrsEnc env (ModuleUsage.LocalCompiled.ofEnv env) n { e := {} }).e.finish
  let ds := (ModuleUsage.localDigests env).toList
  let dg n := (ds.lookup n).get!
  logInfo m!"{lh ``f == lh ``f'} {lh ``h == lh ``h'} {lh ``t1 == lh ``t2} {lh ``k0 == lh ``k1} {dg ``g == dg ``g'} {la ``c0 == la ``c1} {la ``e0 == la ``e1} {la ``x0 == la ``x1} {la ``f == la ``f'}"
#eval show CommandElabM Unit from do
  let d := "0123456789abcdef0123456789abcdef"
  logInfo m!"{(ModuleUsage.Digest.ofHex? d).map (·.hex) == some d} \
    {(ModuleUsage.Digest.ofHex? d.toUpper).isNone} {(ModuleUsage.Digest.ofHex? (d.drop 1).toString).isNone}"
#eval show CommandElabM Unit from do
  let ds : List ModuleUsage.Digest := [⟨0, 0⟩, ⟨0, 1⟩, ⟨1, 0⟩, ⟨0x8000000000000000, 0xffffffffffffffff⟩,
    ⟨0xffffffffffffffff, 0x8000000000000000⟩, ⟨0x0123456789abcdef, 0xfedcba9876543210⟩]
  logInfo m!"{" ".intercalate (ds.map fun d => d.hex)}"
  logInfo m!"{ds.all fun d => ModuleUsage.Digest.ofHex? d.hex == some d}"
  -- a non-digit in either half, and a non-ASCII string of 32 bytes
  logInfo m!"{(ModuleUsage.Digest.ofHex? "0123456789abcdeg0123456789abcdef").isNone} \
    {(ModuleUsage.Digest.ofHex? "0123456789abcdef0123456789abcdeg").isNone} \
    {(ModuleUsage.Digest.ofHex? "é123456789abcdef0123456789abcde").isNone}"
