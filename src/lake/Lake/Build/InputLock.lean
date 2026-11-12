/-
Copyright (c) 2026 Lean FRO. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Sami Jawhar
-/
module

prelude
public import Lake.Build.Job.Monad
import Lake.Config.InstallPath
import Lake.Config.Monad
import Lake.Util.IO

/-! # Input Lock

When two Lake processes on one machine share one writable artifact cache and both must build
the same input (a module with the same input hash), only one of them builds it. Before a build
that would compile or unpack the input's outputs, a job takes an exclusive `flock` of the file
`<cache dir>/locks/<scope>/<input hash>`, looks in the local cache again, and keeps the lock
until the outputs are in the cache (or the build failed). A job that waited on the lock thus
restores the outputs the other process cached.

The lock is off when `LAKE_NO_BUILD_LOCK` is true, under `--no-build`, and wherever the cache is
not writable (the callers take it only on that path). If the lock file cannot be opened or locked,
the job builds without the lock: the error is logged at verbose level, and the first one in a
process is also printed to standard error (not the job log, which would fail `--wfail` or
`--iofail`).

`flock` blocks in the kernel, so the wait runs on a dedicated task: a blocking `flock` on a pool
thread would take that thread from the build, while `IO.wait` on a pool thread lets the runtime
add a worker. The lock file is opened close-on-exec, so no child process holds it and the kernel
releases it when its process dies.

No build deletes a lock file; `lake cache clean` deletes them with the rest of the cache.
-/

open System

namespace Lake

/-- The lock file for building the outputs of the given input of the scope. -/
@[inline] public def Cache.inputLockFile
  (cache : Cache) (scope : String) (inputHash : Hash)
: FilePath :=
  cache.dir / "locks" / scope / inputHash.toString

/-- Whether `LAKE_NO_BUILD_LOCK` turns Lake's build locks off. -/
public def isBuildLockDisabled : BaseIO Bool := do
  return (← IO.getEnv "LAKE_NO_BUILD_LOCK").bind envToBool? |>.getD false

/-- A held input lock (see `acquireInputLock?`). -/
public structure InputLock where
  file : FilePath
  handle : IO.FS.Handle

/-- Releases the input lock. Never deletes its file. -/
public def InputLock.release (lock : InputLock) : BaseIO Unit :=
  discard <| lock.handle.unlock.toBaseIO

builtin_initialize inputLockWarned : IO.Ref Bool ← IO.mkRef false

/-- The process's standard error. Within a job, `IO.getStderr` is the job's log (`withLoggedIO`). -/
builtin_initialize processStderr : IO.FS.Stream ← IO.getStderr

/-- Opens and locks `file`, returning the handle and the milliseconds spent waiting, if any. -/
def lockInputFile (file : FilePath) : IO (IO.FS.Handle × Option Nat) := do
  createParentDirs file
  let h ← IO.FS.Handle.mk file .append
  if (← h.tryLock) then
    return (h, none)
  let start ← IO.monoMsNow
  IO.ofExcept <| ← IO.wait <| ← IO.asTask (prio := .dedicated) h.lock
  return (h, some ((← IO.monoMsNow) - start))

/--
Takes the input lock of the input `inputHash` of `scope`, waiting while another process holds it.
Returns `none` if the lock is off or could not be taken; the job should then build without it.
If the build was canceled while the job waited, releases the lock and cancels the job.
-/
public def acquireInputLock? (scope : String) (inputHash : Hash) : JobM (Option InputLock) := do
  if (← isBuildLockDisabled) || (← getNoBuild) then
    return none
  let file := (← getLakeCache).inputLockFile scope inputHash
  match (← (lockInputFile file).toBaseIO) with
  | .error e =>
    let err := (toString e).replace "\n  " "; " |>.replace "\n" " "
    let msg := s!"could not lock '{file}': {err}; building without the input lock"
    logVerbose msg
    unless (← inputLockWarned.swap true) do
      discard <| (processStderr.putStrLn s!"warning: {msg}" *> processStderr.flush).toBaseIO
    return none
  | .ok (handle, waited?) =>
    let lock : InputLock := {file, handle}
    if let some ms := waited? then
      logVerbose s!"waited {ms / 1000}.{ms % 1000 / 100} s for another Lake process \
        to build this input ({file})"
      if let some tk := (← getBuildContext).cancelTk? then
        if (← tk.isSet) then
          lock.release
          Job.cancelJob
    return some lock

/-- Runs `act` holding the input lock of `inputHash` in `scope` (see `acquireInputLock?`). -/
public def withInputLock (scope : String) (inputHash : Hash) (act : JobM α) : JobM α := do
  let some lock ← acquireInputLock? scope inputHash
    | act
  try act finally lock.release
