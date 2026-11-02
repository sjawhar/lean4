import Lean
-- an IR declaration without a kernel constant, named like the constants `M1` and `M3` declare
open Lean IR in
run_cmd Lean.Elab.Command.liftCoreM <| IR.addDecl <| (.extern `qux
  #[] .object { entries := [.standard `all "lean_nat_succ"] })
