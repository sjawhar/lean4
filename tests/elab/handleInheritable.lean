/-!
`IO.FS.Handle.setInheritable` makes processes spawned afterwards inherit a handle's descriptor (by
default they do not). This test observes it through a lock: a child that inherited the descriptor
of a locked handle keeps the lock after the parent has freed that handle, until the child exits.
-/

def testFile := "handleInheritable.lean.lock"

/--
Locks `testFile` through a handle that is freed (without unlocking it) on return, after spawning
a child that sleeps.
-/
def lockAndSpawn (inheritable : Bool) : IO (IO.Process.Child {}) := do
  let h ← IO.FS.Handle.mk testFile .write
  h.lock
  h.setInheritable inheritable
  let child ← IO.Process.spawn {cmd := "sleep", args := #["30"]}
  -- a use after the spawn, so that the handle is not freed before it
  h.flush
  return child

/-- Whether the lock outlives the parent's handle while the child runs; it is released after. -/
def lockHeldByChild (inheritable : Bool) : IO Bool := do
  let child ← lockAndSpawn inheritable
  let h ← IO.FS.Handle.mk testFile .write
  let held := !(← h.tryLock)
  child.kill
  discard <| child.wait
  unless (← h.tryLock) do
    throw <| IO.userError "the lock outlived the child"
  h.unlock
  return held

/-- info: (true, false) -/
#guard_msgs in
#eval show IO (Bool × Bool) from do
  -- `sleep` and the inheritance of `flock` locks are POSIX
  if System.Platform.isWindows then return (true, false)
  return (← lockHeldByChild true, ← lockHeldByChild false)
