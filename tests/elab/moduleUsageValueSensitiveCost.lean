import Lean
/-! Classifying a command's uses as statement-only or full (`ModuleUsage.commandRecords`, which asks whether a
constant inspects a referenced theorem's value) costs in proportion to the size of the constant's term as a DAG,
not as a tree: a proof that reuses its subterms 2^K times as a tree is classified as fast for K = 20 as for K = 8. A
walk that revisits shared subterms takes 2^K steps and exceeds the bound. -/
open Lean

/-- A module whose last command adds `big : True`, a proof term of `k` nested `And.left (And.intro v v)` levels
whose two copies of `v` are one object. -/
def moduleOf (k : Nat) : String :=
  "import Lean\nopen Lean\ntheorem leaf : True := trivial\n" ++
  "run_cmd Elab.Command.liftCoreM do\n" ++
  "  let t := mkConst ``True\n" ++
  "  let mut v := mkConst ``leaf\n" ++
  s!"  for _ in [:{k}] do\n" ++
  "    v := mkApp3 (mkConst ``And.left) t t (mkApp4 (mkConst ``And.intro) t t v v)\n" ++
  "  addDecl (.thmDecl { name := `big, levelParams := [], type := t, value := v })\n"

/-- Heartbeats `commandRecords` allocates over the module for `k`. -/
unsafe def recordsCost (k : Nat) : IO Nat := do
  enableInitializersExecution
  discard <| startFrontendRun (record := true)
  let some env ← Elab.runFrontend (moduleOf k) {} "M.lean" `M |
    throw <| IO.userError s!"elaboration for {k} failed"
  unless env.contains `big do throw <| IO.userError "big was not added"
  let consts := ModuleUsage.ownConsts env
  let own := ModuleUsage.localDigests env (ModuleUsage.ownNodes env consts)
  let stmt := ModuleUsage.computeStmt env (ModuleUsage.stmtState env) own consts
  let start ← IO.getNumHeartbeats
  -- one lane: on this thread, whose heartbeats count the allocations
  discard <| ModuleUsage.commandRecords env (← ModuleUsage.commandObservations) own stmt #[] (lanes := 1)
  return (← IO.getNumHeartbeats) - start

unsafe def main : IO Unit := do
  initSearchPath (← getBuildDir)
  let small ← recordsCost 8
  let large ← recordsCost 20
  let shared := decide (large ≤ 2 * small)
  IO.println s!"value classification follows sharing: {shared}"
  unless shared do
    throw <| IO.userError s!"command records allocated {large} for 2^20 tree nodes, {small} for 2^8"

#eval main
