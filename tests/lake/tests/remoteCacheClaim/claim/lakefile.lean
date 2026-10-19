import Lake
import Lake.Build.Claim
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

/-- Two roots that import `Claim.A` and `Claim.B` in opposite orders, built only when named. -/
lean_lib Order where
  roots := #[`Order.AB, `Order.BA]

/--
Three modules that import nothing, whose compiles wait 1, 2 and 3 times `LAKE_TEST_CLAIM_SLEEP`
milliseconds, built only when named: a build with fewer workers than three runs out of them.
-/
lean_lib Wide where
  roots := #[`Wide.One, `Wide.Two, `Wide.Three]


/-- Checks that a compile ending below the slot limit wakes a pending claim wait. -/
target freeSlotWake pkg : Unit := Job.async do
  let start ← IO.monoMsNow
  let wait ← withClaim none do
    match ← claimInput pkg (Hash.ofHex "0000000000000001") with
    | .wait wait => pure wait
    | .compile _ => error "expected the seeded claim to make this job wait"
  discard <| IO.wait wait.promise.result?
  unless (← IO.monoMsNow) - start < 1000 do
    error "claim wait did not wake when the compile slot freed"

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
