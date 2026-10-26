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
  /-- The jobs that wait for a slot, in the order in which they asked. -/
  waiting : Array (IO.Promise Unit) := #[]

builtin_initialize buildSlots : Std.Mutex (Option BuildSlotState) ← Std.Mutex.new none

/-- Takes a slot, waiting for one if none is free. -/
def takeBuildSlot : BaseIO Unit := do
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
    set (some {s with waiting := s.waiting.push promise})
    return some promise
  -- The wait holds this job's worker (`IO.waitAny` adds none to the pool's limit): the job has
  -- nothing to do until a command of another job ends.
  if let some promise := wait? then
    discard <| IO.waitAny [promise.result?]

/-- Gives a slot back, to the job that has waited longest for one, if any. -/
def giveBuildSlot : BaseIO Unit := do
  let wake? ← buildSlots.atomically do
    let some s ← get
      | return none
    if h : 0 < s.waiting.size then
      let promise := s.waiting[0]
      set (some {s with waiting := s.waiting.extract 1 s.waiting.size})
      return some promise
    set (some {s with free := s.free + 1})
    return none
  if let some promise := wake? then
    promise.resolve ()

/--
Runs `act`, a command of the build, in a slot of this build (see `buildSlotCount`): it waits
until one is free, and gives it back when `act` ends, also when it fails.
-/
@[inline] public def withBuildSlot [Monad m] [MonadFinally m] [MonadLiftT BaseIO m] (act : m α) : m α := do
  liftM takeBuildSlot
  try
    act
  finally
    liftM giveBuildSlot

end Lake
