import Lean
/-! Building the per-command usage records (`ModuleUsage.commandRecords`) costs in proportion to each command,
not to the module elaborated before it: over a module of 16N commands it allocates at most 1.5 times the command
ratio more than over N commands. A record that re-encodes state accumulated over all earlier commands (here the
quotation contexts, one per command) grows quadratically and exceeds the bound. The records are built on this thread
(one lane), whose heartbeats count the allocations. -/
open Lean

def moduleOf (n : Nat) : String := Id.run do
  let mut s := ""
  for i in [:n] do
    s := s ++ s!"/-- Doc {i}. -/\n@[inline] def f{i} (n : Nat) : Nat := n + {i}\n\ntheorem t{i} : f{i} 0 = {i} := rfl\n\n"
  return s

/-- Commands observed and heartbeats `commandRecords` allocates over a module of `n` units. -/
unsafe def recordsCost (n : Nat) : IO (Nat × Nat) := do
  enableInitializersExecution
  discard <| startFrontendRun (record := true)
  let some env ← Elab.runFrontend (moduleOf n) {} "M.lean" `M |
    throw <| IO.userError s!"elaboration of {n} units failed"
  let consts := ModuleUsage.ownConsts env
  let own := ModuleUsage.localDigests env (ModuleUsage.ownNodes env consts)
  let stmt := ModuleUsage.computeStmt env (ModuleUsage.stmtState env) own consts
  let commands := (← ModuleUsage.commandObservations).size
  let start ← IO.getNumHeartbeats
  discard <| ModuleUsage.commandRecords env (← ModuleUsage.commandObservations) own stmt #[] (lanes := 1)
  return (commands, (← IO.getNumHeartbeats) - start)

unsafe def main : IO Unit := do
  initSearchPath (← getBuildDir)
  let (c₁, small) ← recordsCost 20
  let (c₂, large) ← recordsCost 320
  -- at most 1.5 × (c₂ / c₁) times `small`
  let linear := decide (2 * large * c₁ ≤ 3 * small * c₂)
  IO.println s!"command records linear: {linear}"
  unless linear do
    throw <| IO.userError s!"command records allocated {large} over {c₂} commands, {small} over {c₁}"

#eval main
