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
milliseconds, built only when named.
-/
lean_lib Wide where
  roots := #[`Wide.One, `Wide.Two, `Wide.Three]

/-- Checks both sides of the claim threshold with one explicitly counted operation. -/
target claimSaturated pkg : Unit := Job.async do
  match ← claimInput pkg (Hash.ofHex "0000000000000002") with
  | .compile none => pure ()
  | .compile (some claim) => withClaim (some claim) do
    error "claimed an input below the compile threshold"
  | .wait _ => error "waited for a claim below the compile threshold"
  withClaim none do
    match ← claimInput pkg (Hash.ofHex "0000000000000003") with
    | .compile (some claim) => withClaim (some claim) (pure ())
    | .compile none => error "did not claim an input at the compile threshold"
    | .wait _ => error "waited for an unclaimed input at the compile threshold"
  match ← claimInput pkg (Hash.ofHex "0000000000000004") with
  | .compile none => pure ()
  | .compile (some claim) => withClaim (some claim) do
    error "claimed an input after the counted operation ended"
  | .wait _ => error "waited for a claim after the counted operation ended"


/--
Checks that a compile ending below the slot limit wakes a pending claim wait: the compile's end
resolves the wait's promise before `withClaim` returns, where only the wait's timer
(`remoteClaimPollMs`, 5 s) would resolve it otherwise.
-/
target freeSlotWake pkg : Unit := Job.async do
  let wait ← withClaim none do
    match ← claimInput pkg (Hash.ofHex "0000000000000001") with
    | .wait wait => pure wait
    | .compile _ => error "expected the seeded claim to make this job wait"
  unless ← wait.promise.isResolved do
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
