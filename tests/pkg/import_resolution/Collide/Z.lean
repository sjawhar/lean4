import Lean
def zdummy : Nat := 1
-- an IR declaration without a kernel constant, whose name has no compiler-generated shape
open Lean IR in
run_cmd Lean.Elab.Command.liftCoreM <| IR.addDecl <| (.extern `bar
  #[{ x := ⟨1⟩, borrow := false, ty := .object }] .object
  { entries := [.standard `all "lean_nat_succ"] })
