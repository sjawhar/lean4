import Lean
/-! A module compiled with a `--plugin` that registers the attribute `fp_tag`: the plugin's initializers run while Lean
initializes, yet the commands applying `fp_tag` are refused, as for any attribute registered outside the builtin
initializers. `lean --run Refusals.lean P1.olean` prints each command payload's refusals. -/
open Lean

def main (args : List String) : IO Unit := do
  let [path] := args | throw <| IO.userError "usage: Refusals M.olean"
  let (md, _) ← readModuleData path
  for ce in CommandEntries.ofModuleData md do
    IO.println s!"{ce.idx}: refusals {ce.refusals}"
