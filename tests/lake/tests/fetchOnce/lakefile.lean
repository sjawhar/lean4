module
import Lake

/-! # One job per build key when two threads fetch it at the same time

Each target here fetches one build key from two jobs that start at the same time.
-/
open Lake DSL

package test

lean_lib Lib

/-- Its fetch function takes 500 ms before it returns its job, and records each time it runs. -/
target slow pkg : Unit := do
  IO.FS.withFile (pkg.dir / "slow.produced.out") .append fun h => h.putStrLn "slow"
  IO.sleep 500
  return .nil

target slowTwice : Unit := do
  let j1 ← Job.async (prio := .dedicated) do discard (← slow.fetch).await
  let j2 ← Job.async (prio := .dedicated) do discard (← slow.fetch).await
  return j1.mix j2

/-- Its fetch function takes 500 ms, records each time it runs, and then fails. -/
target failing pkg : Unit := do
  IO.FS.withFile (pkg.dir / "failing.produced.out") .append fun h => h.putStrLn "failing"
  IO.sleep 500
  error "failing: failed on purpose"

target failingTwice : Unit := do
  let j1 ← Job.async (prio := .dedicated) do discard (← failing.fetch).await
  let j2 ← Job.async (prio := .dedicated) do discard (← failing.fetch).await
  return j1.mix j2

def fetchOlean : JobM Unit := do
  let some mod ← findModule? `Lib.M | error "no module Lib.M"
  discard (← mod.olean.fetch).await

target oleanTwice : Unit := do
  let j1 ← Job.async (prio := .dedicated) fetchOlean
  let j2 ← Job.async (prio := .dedicated) fetchOlean
  return j1.mix j2
