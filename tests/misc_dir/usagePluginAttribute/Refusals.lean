import Lean
/-! A module compiled with a `--plugin` that registers the attributes `fp_tag` and `fp_panic`: the plugin's initializers
run while Lean initializes, yet the commands applying them are refused, as for any attribute registered outside the
builtin initializers, and for the effect each handler has: `fp_tag`'s writes a reference the plugin created,
`fp_panic`'s changes a runtime setting (`Refusal.effect`). `lean --run Refusals.lean P1.olean` prints each command
payload's refusals. -/
open Lean

def main (args : List String) : IO Unit := do
  let [path] := args | throw <| IO.userError "usage: Refusals M.olean"
  let (md, _) ← readModuleData path
  for ce in CommandEntries.ofModuleData md do
    IO.println s!"{ce.idx}: refusals {ce.refusals}"
