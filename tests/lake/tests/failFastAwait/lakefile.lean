import Lake
open Lake DSL

/-!
Fixture for `--fail-fast` and jobs that wait for canceled jobs. `Fail` fails quickly. Under `--fail-fast`, `slowA`
completes only once the cancellation token is set, so the build of `Slow`, which `needs` it, is canceled. The root of
the executable `app` imports `Slow`, and `sharedSlow` is the shared library of `Slow`: their builds must be reported
as canceled, neither as bad imports nor as run. `awaitsCanceled` is a running job that awaits a continuation of
`slowA`, which the cancellation cancels. `lateError` and `lateNoError` fail in their fetch once the build is canceled,
with and without an error entry. `NeedsFail` needs `failingNeed`, which fails, and `awaitsFailing` awaits
`failingNeed` once the build is canceled.
-/

package test

lean_lib Fail

/-- Under `--fail-fast`, waits (bounded, in case cancellation never comes) for the cancellation token. -/
def waitForCancel : FetchM Unit := do
  if let some tk := (← getBuildContext).cancelTk? then
    for _ in [0:600] do
      if ← tk.isSet then break
      IO.sleep 100

target slowA pkg : Unit := Job.async (prio := .dedicated) do
  waitForCancel
  IO.FS.writeFile (pkg.dir / "slowA.produced.out") ""

lean_lib Slow where
  needs := #[slowA]

lean_exe app where
  root := `App

-- Depends on `Slow`'s module through registered jobs: its `c.o` and the library's shared library.
target sharedSlow : Dynlib := do
  let some lib ← findLeanLib? `Slow | error "no library Slow"
  lib.shared.fetch

target awaitsCanceled : Unit := do
  let job ← (← slowA.fetch).mapM fun _ => pure ()
  Job.async do discard job.await

target lateError : Unit := do
  waitForCancel
  error "lateError: a failure of its own"

target lateNoError : Unit := do
  waitForCancel
  failure

target failingNeed : Unit := Job.async do
  error "failingNeed: a failure of its own"

lean_lib NeedsFail where
  needs := #[failingNeed]

target awaitsFailing : Unit := do
  let job ← failingNeed.fetch
  waitForCancel
  discard job.await
  return Job.nil
