import Lake
open Lake DSL

/-!
Fixture for `--fail-fast` and an importer: `Fail` fails quickly while `slowA` is in flight. Under `--fail-fast`,
`slowA` completes only once the cancellation token is set, so the build of `Slow`, which `needs` it, is canceled. The
module `Importer` imports `Slow`; its build must be reported as canceled, not as a bad import.
-/

package test

@[default_target] lean_lib Fail

-- Under `--fail-fast`, waits (bounded, in case cancellation never comes) for the token.
@[default_target]
target slowA pkg : Unit := Job.async (prio := .dedicated) do
  if let some tk := (← getBuildContext).cancelTk? then
    for _ in [0:100] do
      if ← tk.isSet then break
      IO.sleep 100
  IO.FS.writeFile (pkg.dir / "slowA.produced.out") ""

-- Not gated itself; its module imports `Slow`.
@[default_target] lean_lib Importer

@[default_target] lean_lib Slow where
  needs := #[slowA]
