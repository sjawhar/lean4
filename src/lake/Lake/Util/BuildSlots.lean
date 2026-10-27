/-
Copyright (c) 2026 Lean FRO. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Sami Jawhar
-/
module

prelude
public import Lake.Util.Log
import Lake.Util.IO
import Std.Sync.Mutex
import Init.System.Platform
import Init.Data.String.TakeDrop
import Init.Data.String.Search

/-! # Build Slots

How many commands of a build run at once: one slot for each worker of Lean's task pool
(`LEAN_NUM_THREADS`, or the machine's processors). A slot is held by `lean`, `leanir`, the C
compiler, the archiver (`ar`, or `libtool` on macOS), the shared-library and executable linkers,
`leantar` (packing and unpacking an archive), `tar` (unpacking a package's release) and the
hashing of a downloaded artifact. A command that a package's own target runs takes none, as it
did before.

A job used to hold its worker for as long as it ran, so the pool's size bounded the commands by
itself. A job that waits for the shared remote cache no longer holds one (see
`Lake.ReadBroker.send`): the build then reads at the rate of the network instead of the rate of
its workers, and many more jobs run at once. The slots keep the commands of those jobs bounded as
the workers used to: a build that misses in the cache and compiles everything runs no more
compiles at once than it did before.

A slot that comes free goes to the waiting job of highest priority, and among jobs of one priority
to the one that asked first. A module's compile asks at the priority its job was scheduled with
(`JobState.slotPrio`); every other command asks at `Task.Priority.max`, so it goes before any
module compile that waits for a slot. When Lake's other jobs run at `Task.Priority.max` and module
compiles at their own priority (as with the module-times record), this is the order in which the
task pool would have started them.

Neither a job that waits for a slot nor a job whose command holds one keeps a worker of the task
pool from other jobs: the wait (`takeBuildSlot`) and the command (`Lake.outputLending`) each lend
their worker. So while every slot is busy and jobs wait for one, the pool still starts the jobs
that become ready (the reads of a module whose imports are done, a job on the critical path), and
such a job asks for a slot at its own priority. The slots bound the commands; the pool's workers
bound Lake's own work in jobs (trace checks, hashing, usage-cutoff checks), which runs beside the
commands. Two waits keep their worker: a slot wait beyond `maxLentSlotWaits`, and the hashing of a
downloaded artifact, which holds a slot without a command.
-/

namespace Lake

/--
How many commands of a build run at once: `LEAN_NUM_THREADS` if it names a number above zero, and
otherwise the number of processors that Lean's task pool uses (`get_lean_num_threads` in the
runtime takes the same two).
-/
def buildSlotCount : BaseIO Nat := do
  let n? := (← IO.getEnv "LEAN_NUM_THREADS").bind (·.trimAscii.toNat?)
  if let some n := n? then
    if n > 0 then
      return n
  return max 1 (System.Platform.Internal.getHardwareConcurrency ()).toNat

structure BuildSlotState where
  /-- How many slots are free. -/
  free : Nat
  /-- The jobs that wait for a slot, each with its priority, in the order in which they asked. -/
  waiting : Array (Task.Priority × IO.Promise Unit) := #[]

builtin_initialize buildSlots : Std.Mutex (Option BuildSlotState) ← Std.Mutex.new none

/--
How many jobs wait for a slot with their worker lent to the task pool at once (see
`takeBuildSlot`): as many as the read broker lends for reads (`Lake.ReadBroker.send`).
-/
def maxLentSlotWaits : Nat := 1024

/-- How many jobs wait for a slot with their worker lent (see `takeBuildSlot`). -/
builtin_initialize lentSlotWaits : IO.Ref Nat ← IO.mkRef 0

/--
Takes a slot, waiting for one if none is free; returns how long it waited (in milliseconds).

The wait lends this job's worker to the task pool (`IO.wait` adds a worker to the pool's limit while
it waits), as the command of a slot holder does (`Lake.outputLending`): after a burst of
remote-cache reads more jobs run than the pool has workers, and a wait that held its worker would
keep the pool from starting any queued job (the next module's reads, a job on the critical path)
until every waiting compile had run. Only `maxLentSlotWaits` jobs wait that way at once; a job
beyond them waits holding its worker (`IO.waitAny` adds none), so waiting jobs cannot take an
unbounded number of threads.
-/
def takeBuildSlot (prio : Task.Priority) : BaseIO Nat := do
  let wait? ← buildSlots.atomically do
    let s ← match ← get with
      | some s => pure s
      | none =>
        let s : BuildSlotState := {free := ← buildSlotCount}
        pure s
    if s.free > 0 then
      set (some {s with free := s.free - 1})
      return none
    let promise ← IO.Promise.new
    set (some {s with waiting := s.waiting.push (prio, promise)})
    return some promise
  let some promise := wait?
    | return 0
  let start ← IO.monoMsNow
  let lend ← lentSlotWaits.modifyGet fun n =>
    if n < maxLentSlotWaits then (true, n + 1) else (false, n)
  if lend then
    try discard <| IO.wait promise.result? finally lentSlotWaits.modify (· - 1)
  else
    discard <| IO.waitAny [promise.result?]
  return (← IO.monoMsNow) - start

/--
Gives a slot back: to the waiting job of highest priority, and among those to the one that asked
first, if any job waits.
-/
def giveBuildSlot : BaseIO Unit := do
  let wake? ← buildSlots.atomically do
    let some s ← get
      | return none
    let top := s.waiting.foldl (fun top (prio, _) => max top prio) 0
    if let some i := s.waiting.findFinIdx? (·.1 == top) then
      let promise := s.waiting[i].2
      set (some {s with waiting := s.waiting.eraseIdx i})
      return some promise
    set (some {s with free := s.free + 1})
    return none
  if let some promise := wake? then
    promise.resolve ()

/--
Runs `act`, a command of the build, in a slot of this build (see `buildSlotCount`): it waits
until one is free, and gives it back when `act` ends, also when it fails. A waiting command gets
the next slot before those of lower `prio`. `waited` receives how long it waited (in
milliseconds) before `act` runs.
-/
@[inline] public def withBuildSlot [Monad m] [MonadFinally m] [MonadLiftT BaseIO m] (act : m α)
    (prio := Task.Priority.max) (waited : Nat → m PUnit := fun _ => pure ()) : m α := do
  let ms ← liftM (takeBuildSlot prio)
  try
    waited ms
    act
  finally
    liftM giveBuildSlot

end Lake
