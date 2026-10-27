import Lake.Util.BuildSlots
import Lake.Util.Proc

open Lake

/-!
Run with two workers in the task pool and two build slots (`LEAN_NUM_THREADS=2`). Two pool tasks hold
both slots, each running a 4 s `sleep` command, and two more pool tasks wait for a slot. A fifth pool
task, started then, runs within two seconds only if neither the slot holders' commands nor the slot
waits keep a worker from the pool. With the argument `lend` the holders run their command with
`Lake.outputLending`, as a build's commands do; with `hold`, with `IO.Process.output`, which keeps
the worker (the test's control). Prints `ran` or `blocked`.
-/

def main (args : List String) : IO Unit := do
  let lend := args == ["lend"]
  let sleep : IO.Process.SpawnArgs := {cmd := "sleep", args := #["4"]}
  let holding ← IO.mkRef 0
  let holders ← (List.range 2).mapM fun _ => IO.asTask do
    withBuildSlot do
      holding.modify (· + 1)
      discard <| if lend then outputLending sleep else IO.Process.output sleep
  while (← holding.get) < 2 do
    IO.sleep 20
  let waiters ← (List.range 2).mapM fun _ => IO.asTask do
    withBuildSlot (pure ())
  IO.sleep 300
  let ran ← IO.mkRef false
  let other ← IO.asTask (ran.set true)
  let deadline := (← IO.monoMsNow) + 2000
  while !(← ran.get) && (← IO.monoMsNow) < deadline do
    IO.sleep 50
  IO.println (if ← ran.get then "ran" else "blocked")
  for w in waiters do
    discard <| IO.wait w
  discard <| IO.wait other
  for h in holders do
    discard <| IO.wait h
