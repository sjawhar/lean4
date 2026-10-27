/-
Copyright (c) 2022 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Gabriel Ebner, Sebastian Ullrich, Mac Malone
-/
module

prelude
public import Lake.Util.Log
import Init.Data.String.TakeDrop

namespace Lake

public def mkCmdLog (args : IO.Process.SpawnArgs) : String :=
  let envStr := String.join <| args.env.toList.map fun (k, v) =>
    if k == "PATH" then "PATH " else s!"{k}={v.getD ""} " -- PATH too big
  let cmdStr := " ".intercalate (args.cmd :: args.args.toList)
  let cwd := args.cwd.getD "."
  s!"{cwd}> {envStr}{cmdStr}"

@[inline] public def logOutput
  [Monad m] (out : IO.Process.Output) (log : String → m PUnit)
: m Unit := do
  unless out.stdout.isEmpty do
    log s!"stdout:\n{out.stdout.trimAscii}"
  unless out.stderr.isEmpty do
    log s!"stderr:\n{out.stderr.trimAscii}"

/--
Whether this process lends task-pool workers while commands that hold a build slot run and while jobs
wait for a slot (`rawProc`'s `lend`, `Lake.takeBuildSlot`). It is set when the build first reads the
shared remote cache (`Lake.ReadBroker.send`). Its reads lend their workers by the thousand, so after
a burst of them far more jobs run than the pool has workers, and a slot backlog would keep the pool
from starting ready jobs. A build that reads no remote cache lends no worker for slots: its commands
run on the calling thread and its slot waits keep their worker (its commands still take slots).
-/
public builtin_initialize lendingWorkers : IO.Ref Bool ← IO.mkRef false

/--
Runs a process to completion, as `IO.Process.output` does, on a dedicated thread, while this thread
waits for it with `IO.wait`, which lends this thread's worker to Lean's task pool for as long as the
process runs. A command that holds a build slot (`Lake.withBuildSlot`) runs this way once the build
reads a remote cache (`lendingWorkers`), so that while every slot is busy the pool can still start
other jobs (e.g., the reads of a module that has just become ready): the commands stay bounded by
the slots, and Lake's own work by the pool's workers.
-/
public def outputLending (args : IO.Process.SpawnArgs) (input? : Option String := none) :
    IO IO.Process.Output := do
  IO.ofExcept (← IO.wait (← IO.asTask (prio := .dedicated) (IO.Process.output args input?)))

/--
Runs a command and returns its output. With `lend`, and once the build reads a remote cache
(`lendingWorkers`), the command runs with `outputLending`: only a command that holds a build slot
may lend its worker, or a build could run any number of commands at once.
-/
@[inline] public def rawProc
  (args : IO.Process.SpawnArgs) (quiet := false) (input? : Option String := none) (lend := false)
: LogIO IO.Process.Output := do
  withLogErrorPos do
  unless quiet do logVerbose (mkCmdLog args)
  let lend ← if lend then lendingWorkers.get else pure false
  let run := if lend then outputLending args input? else IO.Process.output args input?
  let out ← run.toBaseIO
  match out with
  | .ok out => return out
  | .error err => error s!"failed to execute '{args.cmd}': {err}"

/-- Runs a command (see `rawProc`, also for `lend`) and logs its output; fails if it fails. -/
public def proc
  (args : IO.Process.SpawnArgs) (quiet := false) (input? : Option String := none) (lend := false)
: LogIO Unit := do
  withLogErrorPos do
  let out ← rawProc args (input? := input?) (lend := lend)
  if out.exitCode = 0 then
    logOutput out (if quiet then logVerbose else logInfo)
  else
    logOutput out logInfo
    error s!"external command '{args.cmd}' exited with code {out.exitCode}"

public def captureProc' (args : IO.Process.SpawnArgs) : LogIO (IO.Process.Output) := do
  let out ← rawProc args (quiet := true)
  if out.exitCode = 0 then
    return out
  else errorWithLog do
    logVerbose (mkCmdLog args)
    logOutput out logInfo
    logError s!"external command '{args.cmd}' exited with code {out.exitCode}"

@[inline] public def captureProc (args : IO.Process.SpawnArgs) : LogIO String := do
  return (← captureProc' args).stdout.trimAscii.copy -- remove, e.g., newline at end

public def captureProc? (args : IO.Process.SpawnArgs) : BaseIO (Option String) := do
  EIO.catchExceptions (h := fun _ => pure none) do
    let out ← IO.Process.output args
    if out.exitCode = 0 then
      return some out.stdout.trimAscii.copy -- remove, e.g., newline at end
    else
      return none

public def testProc (args : IO.Process.SpawnArgs) : BaseIO Bool :=
  EIO.catchExceptions (h := fun _ => pure false) do
    let child ← IO.Process.spawn {
      args with
      stdin := IO.Process.Stdio.null
      stdout := IO.Process.Stdio.null
      stderr := IO.Process.Stdio.null
    }
    return (← child.wait) == 0
