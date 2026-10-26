/-!
Finishing a task signals only the threads that wait for that task.

Threads blocked in `Task.get`/`IO.wait` once shared a single condition variable with every other
blocked thread, so finishing any task woke all of them. This test blocks `numWaiters` threads on
their own promises, resolves `numResolves` unrelated promises, and counts the voluntary context
switches of all threads of the process: a blocked thread that is woken and goes back to sleep adds
one. Without targeted wake-ups the count grows by about `numWaiters` per resolved task.

The count comes from `/proc`, so on a system without it the test reports the same line without
checking anything.
-/

def numWaiters : Nat := 16
def numResolves : Nat := 20000
/-- Generous against the about `numWaiters * numResolves` wake-ups of an untargeted runtime. -/
def wakeupBudget : Nat := numResolves / 10

/-- Voluntary context switches of every thread of this process. -/
def threadSwitches : IO (Option Nat) := do
  let taskDir : System.FilePath := "/proc/self/task"
  unless ← taskDir.isDir do
    return none
  let key := "voluntary_ctxt_switches:"
  let mut total := 0
  for entry in ← taskDir.readDir do
    -- a thread can exit between the listing and the read
    let status ← try IO.FS.readFile (entry.path / "status") catch _ => pure ""
    for line in status.splitOn "\n" do
      if line.startsWith key then
        let digits := line.foldl (fun s c => if c.isDigit then s.push c else s) ""
        total := total + digits.toNat?.getD 0
  return some total

def main : IO Unit := do
  let mut promises : Array (IO.Promise Unit) := #[]
  let mut ready : Array (IO.Promise Unit) := #[]
  let mut waiters : Array (Task (Except IO.Error Unit)) := #[]
  for _ in [0:numWaiters] do
    promises := promises.push (← IO.Promise.new)
    ready := ready.push (← IO.Promise.new)
  for (p, r) in promises.zip ready do
    waiters := waiters.push (← IO.asTask (prio := .dedicated) do
      r.resolve ()
      let _ ← IO.wait p.result?)
  for r in ready do
    let _ ← IO.wait r.result?
  -- give every waiter time to reach its wait
  IO.sleep 500
  let before ← threadSwitches
  for _ in [0:numResolves] do
    let q : IO.Promise Unit ← IO.Promise.new
    q.resolve ()
  let after ← threadSwitches
  for p in promises do
    p.resolve ()
  for w in waiters do
    match ← IO.wait w with
    | .ok _ => pure ()
    | .error e => throw e
  match before, after with
  | some b, some a =>
    let woke := a - b
    if woke ≤ wakeupBudget then
      IO.println "waiting threads stayed asleep"
    else
      IO.println s!"waiting threads woke {woke} times for tasks they do not wait for"
  | _, _ => IO.println "waiting threads stayed asleep"

  -- `IO.waitAny` must return the task that finished and leave no record on the others
  let a : IO.Promise Nat ← IO.Promise.new
  let b : IO.Promise Nat ← IO.Promise.new
  let waitEither : IO (Option Nat) := IO.waitAny [a.result?, b.result?]
  let any ← IO.asTask (prio := .dedicated) waitEither
  IO.sleep 200
  b.resolve 7
  let picked ← IO.wait any
  -- dropping `a` earlier would resolve it to `none` and end the wait
  a.resolve 0
  match picked with
  | .ok v => IO.println s!"waitAny: {v.getD 0}"
  | .error e => throw e

  -- `Task.get` from inside a task
  let inner ← IO.asTask (prio := .default) (pure 41)
  let outer ← IO.asTask (prio := .default) do
    match ← IO.wait inner with
    | .ok n => return n + 1
    | .error e => throw e
  match ← IO.wait outer with
  | .ok n => IO.println s!"nested wait: {n}"
  | .error e => throw e
