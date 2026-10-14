import Lean
/-! Used-constant capture: constants of discarded declarations (`example`) reach `usedByChecksRef`;
`moduleUsed` is empty when every import was built by stage0. -/
open Lean Elab Command
def a := 1
example : Nat.succ 0 = 1 := rfl
#eval show CommandElabM Unit from do
  let env ← getEnv
  logInfo m!"{(← usedByChecksRef.get).contains ``Nat.succ} {(ModuleUsage.moduleUsed env {}).isEmpty}"
