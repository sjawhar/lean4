import Lake
open System Lake DSL

package test where
  weakLeancArgs := (get_config? weakLeancArgs).toArray

lean_lib Foo

/-- A C object built by `buildO` with the compiler `LEAN_CC` names. -/
target ffi.o pkg : FilePath := do
  let srcJob ← inputTextFile <| pkg.dir / "ffi.c"
  let cc := (← IO.getEnv "LEAN_CC").getD "cc"
  buildO (pkg.buildDir / "c" / "ffi.o") srcJob #[] #["-O2"] cc

/-- Writes the number of threads of this process, from `/proc/self/status`, to `file`. -/
def recordThreads (file : FilePath) : IO Unit := do
  let status ← IO.FS.readFile "/proc/self/status"
  let some line := (status.splitOn "\n").find? (·.startsWith "Threads:")
    | throw <| IO.userError "/proc/self/status has no `Threads:` line"
  IO.FS.writeFile file (line.drop 8).trimAscii.copy

/--
16 C objects built by `buildO` with the compiler `LEAN_CC` names and 16 built by `buildLeanO`, all
from `ffi.c`; then writes the number of threads of this process to `threads`.
-/
target manyFfi pkg : Unit := do
  let srcJob ← inputTextFile <| pkg.dir / "ffi.c"
  let cc := (← IO.getEnv "LEAN_CC").getD "cc"
  let ccJobs ← (Array.range 16).mapM fun i =>
    buildO (pkg.buildDir / "c" / s!"ffi{i}.o") srcJob #[] #["-O2"] cc
  let leanJobs ← (Array.range 16).mapM fun i =>
    buildLeanO (pkg.buildDir / "c" / s!"lean{i}.o") srcJob #[] #["-O2"]
  (Job.collectArray (ccJobs ++ leanJobs)).mapM fun _ => recordThreads (pkg.buildDir / "threads")
