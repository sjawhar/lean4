/-!
Growth pacing of the task pool (`lean_task_pool_set_growth`), with `LEAN_NUM_THREADS=64`
(`taskPoolGrowth.lean.init.sh`) and four eager workers:
* with a 2 s delay, a burst of 64 tasks of 0.2 ms runs on the eager workers;
* with a 5 ms delay, 16 tasks that wait for a task queued behind them finish, and 32 tasks that each
  hold their thread for 200 ms run side by side;
* unpaced (the default, in a child process, as workers never exit), 32 tasks that each spin until
  all 32 have started do start, so the pool has at least 32 threads;
* with a 200 ms delay, in a child process, a burst of 2250 tasks that each hold their thread for
  20 ms, queued at once, ends with at most 20 threads: the pacer starts no worker after a delay in
  which fewer tasks were queued than finished (batches of at most 4 per delay alone reach about 46
  threads, and doubling batches the limit of 64 workers);
* with no eager workers and a 5 ms delay, in a child process, 4 tasks that wait for a task queued
  behind them finish: the pacer starts at least one worker per starved delay (a watchdog on a
  dedicated thread ends the child with an error after 20 s without that, and stops once they finish).
The thread counts come from `/proc/self/status`; without it they are not checked.
-/

@[extern "lean_task_pool_set_growth"]
opaque setTaskPoolGrowth (eager spawnDelayUs : UInt32) : BaseIO Unit

/-- The number of threads of this process, if `/proc/self/status` tells. -/
def threadCount? : IO (Option Nat) := do
  let some status ← try some <$> IO.FS.readFile "/proc/self/status" catch _ => pure none
    | return none
  let some line := (status.splitOn "\n").find? (·.startsWith "Threads:")
    | return none
  return (line.drop 8).trimAscii.toNat?

/-- Prints `name: ok` if the thread count satisfies `ok` (or is unknown), else the count. -/
def report (name : String) (ok : Nat → Bool) : IO Unit := do
  match ← threadCount? with
  | some n => IO.println (if ok n then s!"{name}: ok" else s!"{name}: {n} threads")
  | none => IO.println s!"{name}: ok"

/-- Spins on the calling thread for `ns` nanoseconds. -/
def spin (ns : Nat) : BaseIO Unit := do
  let t0 ← IO.monoNanosNow
  while (← IO.monoNanosNow) - t0 < ns do
    pure ()

/-- Runs `n` tasks that each spin until all `n` have started (or 10 s have passed). -/
def barrier (n : Nat) : IO Unit := do
  let started ← IO.mkRef 0
  let tasks ← (List.range n).mapM fun _ => BaseIO.asTask do
    started.modify (· + 1)
    let t0 ← IO.monoMsNow
    while (← started.get) < n && (← IO.monoMsNow) - t0 < 10000 do
      pure ()
  for t in tasks do discard <| IO.wait t

def main (args : List String) : IO Unit := do
  if args == ["unpaced"] then
    barrier 32
    report "unpaced barrier" (· ≥ 32)
    return
  if args == ["burst"] then
    -- All 2250 tasks are queued within the pacer's first delay, after which it starts at most one
    -- worker; every later delay sees tasks finish and none queued, so starts none. Only a stall of
    -- every worker for a whole delay, or of the queueing thread past the first, can start more: 20
    -- threads (main, libuv's event loop, pacer, 17 workers) leave room for three, starting 2, 4, 4.
    setTaskPoolGrowth 4 200000
    let tasks ← (List.range 2250).mapM fun _ => BaseIO.asTask (IO.sleep 20)
    for t in tasks do discard <| IO.wait t
    report "paced short burst" (· ≤ 20)
    return
  if args == ["noeager"] then
    setTaskPoolGrowth 0 5000
    let done ← IO.mkRef false
    let watchdog ← IO.asTask (prio := .dedicated) (α := Unit) do
      let t0 ← IO.monoMsNow
      while !(← done.get) do
        if (← IO.monoMsNow) - t0 > 20000 then
          IO.println "paced without eager workers: no progress in 20 s"
          IO.Process.exit 1
        IO.sleep 100
    let gate ← IO.Promise.new
    let waiters ← (List.range 4).mapM fun _ => IO.asTask (discard <| IO.wait gate.result?)
    let opener ← BaseIO.asTask (gate.resolve ())
    discard <| IO.wait opener
    for t in waiters do discard <| IO.wait t
    done.set true
    discard <| IO.wait watchdog
    IO.println "paced without eager workers: ok"
    return
  setTaskPoolGrowth 4 2000000
  let tasks ← (List.range 64).mapM fun _ => BaseIO.asTask (spin 200000)
  for t in tasks do discard <| IO.wait t
  report "paced burst" (· < 16)
  setTaskPoolGrowth 4 5000
  let gate ← IO.Promise.new
  let waiters ← (List.range 16).mapM fun _ => IO.asTask (discard <| IO.wait gate.result?)
  let opener ← BaseIO.asTask (gate.resolve ())
  discard <| IO.wait opener
  for t in waiters do discard <| IO.wait t
  IO.println "paced waits: ok"
  let t0 ← IO.monoMsNow
  let sleepers ← (List.range 32).mapM fun _ => BaseIO.asTask (IO.sleep 200)
  for t in sleepers do discard <| IO.wait t
  let ms := (← IO.monoMsNow) - t0
  IO.println (if ms < 600 then "paced sleepers: ok" else s!"paced sleepers: {ms} ms")
  let out ← IO.Process.output { cmd := (← IO.appPath).toString, args := #["unpaced"] }
  IO.print out.stdout
  let out ← IO.Process.output { cmd := (← IO.appPath).toString, args := #["burst"] }
  IO.print out.stdout
  let out ← IO.Process.output { cmd := (← IO.appPath).toString, args := #["noeager"] }
  IO.print out.stdout
