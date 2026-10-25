import Lean
/-! Recording a module's command payloads (`recordCommandDelta`, once per command) costs in proportion to each
command, not to the module elaborated before it: over a module of 3,000
asynchronously elaborated theorems it allocates at most 1.5 times the theorem ratio more than over 190. A recorder
that walks each theorem's whole branch map, which holds every constant declared before the theorem, allocates
quadratically and exceeds the bound. Every tenth theorem proves a fact about its own definition by `simp`, which
realizes the definition's equation lemma in the theorem's branch, so that its payload holds a realization record: a
recorder that looks the realization's observations up in the logs of the whole module for each such record allocates
quadratically too. -/
open Lean

def moduleOf (n : Nat) : String := Id.run do
  let mut s := ""
  for i in [:n] do
    s := s ++ s!"theorem t{i} : {i} + 0 = {i} := rfl\n"
    if i % 10 == 0 then
      s := s ++ s!"def f{i} (n : Nat) : Nat := n + {i}\ntheorem s{i} : f{i} 0 = {i} := by simp [f{i}]\n"
  return s

/-- Theorems elaborated and heartbeats `recordCommandDelta` allocates over all commands of a module of `n`. -/
unsafe def recorderCost (n : Nat) : IO (Nat × Nat) := do
  enableInitializersExecution
  discard <| startFrontendRun (record := true)
  let some _ ← Elab.runFrontend (moduleOf n) {} "M.lean" `M |
    throw <| IO.userError s!"elaboration of {n} theorems failed"
  let obs ← ModuleUsage.commandObservations
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
