import Lean
/-! Recording a module's command payloads (`recordCommandDelta`, once per command) costs in proportion to each
command, not to the module elaborated before it (`decl2f-delta4-review.md` finding 2): over a module of 3,000
asynchronously elaborated theorems it allocates at most 1.5 times the theorem ratio more than over 190. A recorder
that walks each theorem's whole branch map, which holds every constant declared before the theorem, allocates
quadratically and exceeds the bound. -/
open Lean

def moduleOf (n : Nat) : String := Id.run do
  let mut s := ""
  for i in [:n] do
    s := s ++ s!"theorem t{i} : {i} + 0 = {i} := rfl\n"
  return s

/-- Theorems elaborated and heartbeats `recordCommandDelta` allocates over all commands of a module of `n`. -/
unsafe def recorderCost (n : Nat) : IO (Nat × Nat) := do
  enableInitializersExecution
  usageRecordingRef.set true
  ModuleUsage.commandObservationsRef.set #[]
  let some _ ← Elab.runFrontend (moduleOf n) {} "M.lean" `M |
    throw <| IO.userError s!"elaboration of {n} theorems failed"
  let obs ← ModuleUsage.commandObservationsRef.get
  let start ← IO.getNumHeartbeats
  for o in obs do
    discard <| recordCommandDelta o.before.env o.after.env o.i
  return (obs.size, (← IO.getNumHeartbeats) - start)

unsafe def main : IO Unit := do
  initSearchPath (← getBuildDir)
  let (c₁, small) ← recorderCost 190
  let (c₂, large) ← recorderCost 3000
  -- at most 1.5 × (c₂ / c₁) times `small`
  let linear := decide (2 * large * c₁ ≤ 3 * small * c₂)
  IO.println s!"recorder linear in the number of theorems: {linear}"
  unless linear do
    throw <| IO.userError s!"recordCommandDelta allocated {large} over {c₂} commands, {small} over {c₁}"

#eval main
