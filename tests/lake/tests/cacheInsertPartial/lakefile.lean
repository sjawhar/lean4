import Lake
open System Lake DSL

package p

input_file src where
  path := "input.txt"

/-- A text output (`text := true`), copied from `input.txt`; its cache entry is written, never linked. -/
@[default_target]
target out (pkg) : FilePath := do
  withCurrPackage pkg do
    let file := pkg.buildDir / "out.txt"
    buildFileAfterDep file (← src.fetch) (text := true) fun src => do
      createParentDirs file
      IO.FS.writeFile file (← IO.FS.readFile src)

/-- `Big.lean` is written by the test: its `.olean` is larger than the test's file size limit. -/
lean_lib Big
