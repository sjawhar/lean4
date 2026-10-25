import Lake
open System Lake DSL

/-!
The package that `test.sh` builds on two machines at once with the write-back queue and claims on:
two modules that do not import each other and one that imports both, two modules whose compile the
environment controls (a failure and a wait, neither of which changes the input), a native
executable (an object file and its link), and a target of the package itself, which a build
registers before the modules.
-/

package claim where
  enableArtifactCache := true

lean_lib Claim

/-- Built only when named, so that a build of `Claim` does not wait or fail. -/
lean_lib Extra where
  roots := #[`Claim.Flaky, `Claim.Slow]

lean_exe claimexe where
  root := `Main

/-- Builds `copy.out` from `copy.in`, under a trace of that input alone. -/
target copied pkg : FilePath := withCurrPackage pkg <| Job.async do
  let src := pkg.dir / "copy.in"
  let out := pkg.buildDir / "copy.out"
  setTrace (← computeTrace (TextFilePath.mk src))
  let art ← buildArtifactUnlessUpToDate out do
    createParentDirs out
    IO.FS.writeFile out (← IO.FS.readFile src)
  return art.path
