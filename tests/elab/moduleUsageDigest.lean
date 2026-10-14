import Lean
/-! Meaning digests: `localHash` ignores the constant's own name but sees binder info, theorem proofs, Nat
literals past 2^64 and `noncomputable`; `localDigests` sees the names of referenced constants. -/
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
#eval show CommandElabM Unit from do
  let env ← getEnv
  let lh n := ModuleUsage.localHash env (env.find? n).get!
  let ds := (ModuleUsage.localDigests env).toList
  let dg n := (ds.lookup n).get!
  logInfo m!"{lh ``f == lh ``f'} {lh ``h == lh ``h'} {lh ``t1 == lh ``t2} {lh ``k0 == lh ``k1} {dg ``g == dg ``g'} {lh ``c0 == lh ``c1}"
