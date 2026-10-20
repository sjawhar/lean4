import Lean
import UsageProducer
/-! Used-constant capture: without an `.olean` to write (the language server, or `lean` without `-o`)
usage recording is off and nothing is recorded; with recording on, constants of discarded declarations
(`example`) are recorded.
`moduleUsed` finds the digest of `p` in `UsageProducer`, which the `lean` under test compiled with `--usage`
(`.init.sh`); of the imported modules only it carries digests, since the toolchain's own are built without. -/
open Lean Elab Command
example : Nat.pred 1 = 0 := rfl
#eval show CommandElabM Unit from do
  logInfo m!"{(← usageRecordingEnabled)} {(← usedNames).isEmpty}"
#eval enableUsageRecording
def a := p
example : Nat.succ 0 = 1 := rfl
#eval show CommandElabM Unit from do
  let env ← getEnv
  let used ← IO.ofExcept (ModuleUsage.moduleUsed env {})
  let producer := used.find? (·.1 == `UsageProducer) |>.map (·.2.map (·.1))
  logInfo m!"{(← usedNames).contains ``Nat.succ} {producer}"
#eval show CommandElabM Unit from do
  let env ← getEnv
  let withDigests := env.header.moduleNames.filter fun m =>
    (env.getModuleIdx? m).any (ModuleUsage.state env).hasEntries
  logInfo m!"{withDigests}"
