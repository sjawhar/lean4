import Lean
/-! The registered caches' per-command deltas (`CommandCacheExtension.delta`, which the recorder calls for every
command) cost in proportion to what each command added to the caches, not to the caches' size: over a module of
8N commands they allocate at most 1.25 times the command ratio more than over N commands. A delta that walks a
whole cache per command (here the compiler's `impureExt` and the matcher cache grow with every definition)
grows quadratically and exceeds the bound. Measured apart from the rest of the recording, whose linear part
would otherwise hide it. -/
open Lean

def moduleOf (n : Nat) : String := Id.run do
  let mut s := ""
  for i in [:n] do
    s := s ++ s!"def f{i} : Nat → Nat\n  | 0 => {i}\n  | k + 1 => k + {i}\n\ntheorem t{i} : f{i} 0 = {i} := rfl\n\n"
  return s

/-- Commands observed and heartbeats the cache deltas allocate over a module of `n` units. -/
unsafe def cacheCost (n : Nat) : IO (Nat × Nat) := do
  enableInitializersExecution
  usageRecordingRef.set true
  ModuleUsage.commandObservationsRef.set #[]
  let some _ ← Elab.runFrontend (moduleOf n) {} "M.lean" `M |
    throw <| IO.userError s!"elaboration of {n} units failed"
  let observations ← ModuleUsage.commandObservationsRef.get
  let caches ← commandCacheExtensionsRef.get
  let sink ← IO.mkRef 0
  let start ← IO.getNumHeartbeats
  for obs in observations do
    for c in caches do
      sink.set (c.delta obs.before.env obs.after.env).size
  return (observations.size, (← IO.getNumHeartbeats) - start)

unsafe def main : IO Unit := do
  initSearchPath (← getBuildDir)
  let (c₁, small) ← cacheCost 10
  let (c₂, large) ← cacheCost 80
  -- at most 1.25 × (c₂ / c₁) times `small`
  let linear := decide (4 * large * c₁ ≤ 5 * small * c₂)
  IO.println s!"cache deltas linear: {linear}"
  unless linear do
    throw <| IO.userError s!"cache deltas allocated {large} over {c₂} commands, {small} over {c₁}"

#eval main
