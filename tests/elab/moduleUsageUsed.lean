import Lean
/-! Used-constant capture: without an `.olean` to write (the language server, or `lean` without `-o`)
`usedByChecksRef` stays empty; with recording on, constants of discarded declarations (`example`) reach it;
`moduleUsed` is empty when every import was built by stage0. -/
open Lean Elab Command
example : Nat.pred 1 = 0 := rfl
#eval show CommandElabM Unit from do
  logInfo m!"{(← usageRecordingRef.get)} {(← usedByChecksRef.get).isEmpty}"
#eval usageRecordingRef.set true
def a := 1
example : Nat.succ 0 = 1 := rfl
#eval show CommandElabM Unit from do
  let env ← getEnv
  let noneUsed : Bool := match ModuleUsage.moduleUsed env {} with | .ok used => used.isEmpty | .error _ => false
  logInfo m!"{(← usedByChecksRef.get).contains ``Nat.succ} {noneUsed}"
