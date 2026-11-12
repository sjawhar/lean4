import Lake
open Lake DSL

package test

/--
Registers `n` jobs for the build monitor, captioned `job i` for `i` from `first`. Each job is done
and has a log entry, so the monitor reports each one in the order it takes them from its queue.
-/
def registerJobs (first n : Nat) : FetchM (Array (Job Unit)) :=
  (Array.range n).mapM fun i =>
    registerJob s!"job {first + i}" <| Job.pure () {entries := #[.info s!"job {first + i}"]}

/--
Registers 20,000 jobs, waits for longer than the monitor's polling interval (100 ms), then registers
20,000 more, so the monitor takes the jobs from its queue in more than one batch.
-/
target jobs : Unit := do
  let first ← registerJobs 0 20000
  IO.sleep 500
  let second ← registerJobs 20000 20000
  return Job.mixArray (first ++ second)
