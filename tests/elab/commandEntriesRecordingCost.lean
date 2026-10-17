import Lean
/-! Recording a command's entry delta (`recordCommandDelta`) costs in proportion to what that command added,
not to what the module added before it: recording a module of 4N commands allocates at most 6 times what
recording a module of N such commands allocates. The allocation count (`IO.getNumHeartbeats`) of the
recording loop is deterministic; a recorder that re-examines every earlier entry for each command scales
quadratically and exceeds the bound. -/
open Lean

def moduleOf (n : Nat) : String := Id.run do
  let mut s := ""
  for i in [:n] do
    s := s ++ s!"/-- Doc {i}. -/\n@[inline] def f{i} (n : Nat) : Nat := n + {i}\n\ntheorem t{i} : f{i} 0 = {i} := rfl\n\n"
  return s

unsafe def recordingCost (n : Nat) : IO Nat := do
  enableInitializersExecution
  usageRecordingRef.set true
  ModuleUsage.commandObservationsRef.set #[]
  let some _ ← Elab.runFrontend (moduleOf n) {} "M.lean" `M |
    throw <| IO.userError s!"elaboration of {n} commands failed"
  let observations ← ModuleUsage.commandObservationsRef.get
  if observations.size < 2 * n then
    throw <| IO.userError s!"expected {2 * n} command observations, got {observations.size}"
  let start ← IO.getNumHeartbeats
  for obs in observations do
    discard <| recordCommandDelta obs.before.env obs.after.env obs.i
  return (← IO.getNumHeartbeats) - start

unsafe def main : IO Unit := do
  initSearchPath (← getBuildDir)
  let small ← recordingCost 10
  let large ← recordingCost 40
  let linear := decide (large ≤ 6 * small)
  IO.println s!"linear: {linear}"
  unless linear do
    throw <| IO.userError s!"recording 80 commands allocated {large}, more than 6 × {small} for 20"

#eval main
