/-
Copyright (c) 2022 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Gabriel Ebner, Sebastian Ullrich, Mac Malone
-/
module

prelude
public import Lake.Util.Log
import Std.Sync.Mutex
import Init.Data.String.TakeDrop

namespace Lake

/-- Serializes the spawns of `spawnProc`. -/
builtin_initialize spawnMutex : Std.Mutex Unit ← Std.Mutex.new ()

/--
The handle of the workspace build lock this process holds (`Workspace.withBuildLock`), if any: the
processes Lake spawns while it is held inherit it (see `spawnProc`).
-/
public builtin_initialize buildLockHandle : IO.Ref (Option IO.FS.Handle) ← IO.mkRef none

/--
Spawns a process. Every process Lake's own code starts is spawned here, one spawn at a time (code
that a package's configuration runs, such as a custom target, may start processes itself). The
processes a build spawns inherit the workspace build lock (`buildLockHandle`), so that the compilers
of a killed Lake keep the workspace locked until they exit. A process that may outlive the build in
a session of its own (the kept-module checker, the detached `lake cache push` of the shared remote
cache, the cache token command) is spawned with `inheritBuildLock := false`: the lock is made
non-inheritable for that spawn only, which no other spawn can overlap.
-/
public def spawnProc (args : IO.Process.SpawnArgs) (inheritBuildLock := true) :
    IO (IO.Process.Child args.toStdioConfig) :=
  spawnMutex.atomically do
    let lock? ← if inheritBuildLock then pure none else buildLockHandle.get
    if let some h := lock? then h.setInheritable false
    try IO.Process.spawn args
    finally if let some h := lock? then h.setInheritable true

/--
Runs a process to completion, as `IO.Process.output` does, spawning it with `spawnProc`: its
standard input is null or `input?`, and its standard output and error are captured.
-/
public def outputProc (args : IO.Process.SpawnArgs) (input? : Option String := none) :
    IO IO.Process.Output := do
  let child ←
    if let some input := input? then
      let (stdin, child) ← (← spawnProc { args with stdout := .piped, stderr := .piped, stdin := .piped }).takeStdin
      stdin.putStr input
      stdin.flush
      pure child
    else
      spawnProc { args with stdout := .piped, stderr := .piped, stdin := .null }
  let stdout ← IO.asTask child.stdout.readToEnd Task.Priority.dedicated
  let stderr ← child.stderr.readToEnd
  let exitCode ← child.wait
  let stdout ← IO.ofExcept stdout.get
  return {exitCode, stdout, stderr}

/--
Runs a process to completion with `outputProc`, as `IO.Process.run` does: returns its standard
output if it exits with code 0, and throws otherwise.
-/
public def runProc (args : IO.Process.SpawnArgs) (input? : Option String := none) : IO String := do
  let out ← outputProc args input?
  if out.exitCode != 0 then
    throw <| IO.userError s!"process '{args.cmd}' exited with code {out.exitCode}\
      \nstderr:\
      \n{out.stderr}"
  return out.stdout

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
Runs a process to completion with `outputProc` on a dedicated thread, while this thread waits for it
with `IO.wait`, which lends this thread's worker to Lean's task pool for as long as the process
runs. A command that holds a build slot (`Lake.withBuildSlot`) runs this way once the build reads a
remote cache (`lendingWorkers`), so that while every slot is busy the pool can still start other jobs
(e.g., the reads of a module that has just become ready): the commands stay bounded by the slots, and
Lake's own work by the pool's workers.
-/
public def outputLending (args : IO.Process.SpawnArgs) (input? : Option String := none) :
    IO IO.Process.Output := do
  IO.ofExcept (← IO.wait (← IO.asTask (prio := .dedicated) (outputProc args input?)))

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
  let run := if lend then outputLending args input? else outputProc args input?
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
    let out ← outputProc args
    if out.exitCode = 0 then
      return some out.stdout.trimAscii.copy -- remove, e.g., newline at end
    else
      return none

public def testProc (args : IO.Process.SpawnArgs) : BaseIO Bool :=
  EIO.catchExceptions (h := fun _ => pure false) do
    let child ← spawnProc {
      args with
      stdin := IO.Process.Stdio.null
      stdout := IO.Process.Stdio.null
      stderr := IO.Process.Stdio.null
    }
    return (← child.wait) == 0
