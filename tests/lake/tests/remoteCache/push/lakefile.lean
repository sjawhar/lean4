import Lake
open System Lake DSL

/-!
The package that `test.sh` builds with the write-back queue on and uploads with
`lake cache push`: modules (one with an `admit` warning), a native executable
(an object file and its link), a precompiled module that another module loads
(an object file and a shared library), and a target that builds two files in one job.
-/

package push where
  enableArtifactCache := true

lean_lib Push

lean_lib Pre where
  precompileModules := true

lean_exe pushexe where
  root := `Main

/-- Builds `<name>.out` from `<name>.in`, under a trace of that input alone. -/
def copyInput (pkg : Package) (name : String) : JobM FilePath := do
  let src := pkg.dir / s!"{name}.in"
  let out := pkg.buildDir / s!"{name}.out"
  setTrace (← computeTrace (TextFilePath.mk src))
  let art ← buildArtifactUnlessUpToDate out do
    createParentDirs out
    IO.FS.writeFile out (← IO.FS.readFile src)
  return art.path

/--
One job that builds `a.out` and then `b.out`. When only `a.in` changed, the
job compiles `a.out` and replays `b.out`.
-/
target pair pkg : Array FilePath := withCurrPackage pkg <| Job.async do
  let a ← copyInput pkg "a"
  let b ← copyInput pkg "b"
  return #[a, b]
