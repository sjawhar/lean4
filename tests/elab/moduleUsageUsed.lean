import Lean
import UsageProducer
/-! Used-constant capture: without an `.olean` to write (the language server, or `lean` without `-o`)
`usedByChecksRef` stays empty; with recording on, constants of discarded declarations (`example`) reach it.
`moduleUsed` finds the digest of `p` in `UsageProducer`, which the `lean` under test compiled (`.init.sh`). -/
open Lean Elab Command
example : Nat.pred 1 = 0 := rfl
#eval show CommandElabM Unit from do
  logInfo m!"{(← usageRecordingRef.get)} {(← usedByChecksRef.get).isEmpty}"
#eval usageRecordingRef.set true
def a := p
example : Nat.succ 0 = 1 := rfl
#eval show CommandElabM Unit from do
  let env ← getEnv
  let producer := (ModuleUsage.moduleUsed env {}).find? (·.1 == `UsageProducer) |>.map (·.2.map (·.1))
  logInfo m!"{(← usedByChecksRef.get).contains ``Nat.succ} {producer}"
