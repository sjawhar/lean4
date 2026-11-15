import Lake.Util.BuildSlots
import Lake.Util.Proc

open Lake

/-!
Run with two workers in the task pool and two build slots (`LEAN_NUM_THREADS=2`). Two tasks hold both
slots, each running a 4 s `sleep` command through `rawProc (lend := true)`, as a build runs its
commands, and two pool tasks wait for a slot. A fifth pool task, started then, runs within two
seconds only if the pool has a worker free. The argument chooses what may lend:
- `remote`: the process first turns on `Lake.lendingWorkers`, as a build does when it first reads the
  shared remote cache; the holders (pool tasks) and the waits lend, so the fifth task runs;
- `local-cmd`: no switch, holders are pool tasks, no waiters: only a command that lent without the
  switch would leave the pool a free worker;
- `local-wait`: no switch, holders on dedicated threads (outside the pool): only a slot wait that lent
  without the switch would leave the pool a free worker.
Prints `ran` or `blocked`.
-/

def main (args : List String) : IO Unit := do
  let mode := args.headD ""
  if mode == "remote" then lendingWorkers.set true
  let sleep : IO.Process.SpawnArgs := {cmd := "sleep", args := #["4"]}
  let holding ← IO.mkRef 0
  let holderPrio := if mode == "local-wait" then Task.Priority.dedicated else .default
  let holders ← (List.range 2).mapM fun _ => IO.asTask (prio := holderPrio) do
    withBuildSlot do
      holding.modify (· + 1)
      discard <| (rawProc sleep (quiet := true) (lend := true)).toBaseIO
  while (← holding.get) < 2 do
    IO.sleep 20
  let waiters ← (List.range (if mode == "local-cmd" then 0 else 2)).mapM fun _ => IO.asTask do
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
