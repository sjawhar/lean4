/-
A module whose compile, when `LAKE_TEST_REBUILD_GATE` names a directory, makes the file `started`
there and then waits until the file `go` is there too (and fails after 300 s, which only ends a
hang). The environment is not part of Lake's input hash, so a build can hold this compile while
the outputs of an earlier compile, which did not wait, describe the same input.
-/
#eval show IO Unit from do
  if let some dir ← IO.getEnv "LAKE_TEST_REBUILD_GATE" then
    IO.FS.writeFile (System.FilePath.mk dir / "started") ""
    let deadline := (← IO.monoMsNow) + 300000
    repeat
      if ← (System.FilePath.mk dir / "go").pathExists then break
      if (← IO.monoMsNow) ≥ deadline then
        throw <| IO.userError s!"{dir}/go did not appear within 300 s"
      IO.sleep 100

namespace Rebuild

def held := 5
