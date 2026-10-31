import Lake
open System Lake DSL

package test

/-- Spins on the calling thread for `ns` nanoseconds. -/
def spin (ns : Nat) : BaseIO Unit := do
  let t0 ← IO.monoNanosNow
  while (← IO.monoNanosNow) - t0 < ns do
    pure ()

/-- Writes the number of threads of this process, from `/proc/self/status`, to `threads`. -/
def recordThreads (pkg : Package) : IO Unit := do
  let status ← IO.FS.readFile "/proc/self/status"
  let some line := (status.splitOn "\n").find? (·.startsWith "Threads:")
    | throw <| IO.userError "/proc/self/status has no `Threads:` line"
  IO.FS.createDirAll pkg.buildDir
  IO.FS.writeFile (pkg.buildDir / "threads") (line.drop 8).trimAscii.copy

/-- 64 jobs of 0.2 ms each, started together. -/
target burst pkg : Unit := do
  let jobs ← (Array.range 64).mapM fun _ => Job.async (spin 200000)
  (Job.collectArray jobs).mapM fun _ => recordThreads pkg

/-- 32 jobs that each spin until all 32 have started (or 10 s have passed). -/
target barrier pkg : Unit := do
  let started ← IO.mkRef 0
  let jobs ← (Array.range 32).mapM fun _ => Job.async do
    started.modify (· + 1)
    let t0 ← IO.monoMsNow
    while (← started.get) < 32 && (← IO.monoMsNow) - t0 < 10000 do
      pure ()
  (Job.collectArray jobs).mapM fun _ => recordThreads pkg
