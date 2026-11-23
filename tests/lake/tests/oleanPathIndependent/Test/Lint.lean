-- A classic (non-module) module with a linter warning (`linter.unusedVariables`,
-- default-on). Lean persists the warning in this module's `.olean` (`lintLogExt`).
def unusedVarHere : Nat :=
  let unusedLocal := 5
  3
