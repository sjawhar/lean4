import Lean
/-! While a module is compiled with usage recording, a lookup of a name's defining module (`getModuleIdxFor?`) is
recorded in its `.resolved` sidecar, but not one made under `withoutResolvedNotes`: `N` looks up `M`'s `foo` under
it and `bar` without it, so only `bar` is recorded. -/
open Lean

def mSource : String := "def foo : Nat := 1
def bar : Nat := 2
"

def nSource : String := "import M
import Lean
open Lean
#eval show CoreM Unit from do
  let unrecorded ← withoutResolvedNotes do return (← getEnv).getModuleIdxFor? `foo
  let recorded := (← getEnv).getModuleIdxFor? `bar
  IO.println s!\"foo found: {unrecorded.isSome}, bar found: {recorded.isSome}\"
"

#eval IO.FS.withTempDir fun dir => do
  IO.FS.writeFile (dir / "M.lean") mSource
  IO.FS.writeFile (dir / "N.lean") nSource
  for m in ["M", "N"] do
    let args := #["-o", s!"{m}.olean", s!"--usage={m}.usage", s!"{m}.lean"]
    let out ← IO.Process.output { cmd := "lean", args, cwd := dir, env := #[("LEAN_PATH", some dir.toString)] }
    IO.println s!"{m}: exit {out.exitCode}"
    IO.print ((out.stdout ++ out.stderr).replace dir.toString "DIR")
  let .ok t := ModuleUsage.ResolvedTable.decode? (← IO.FS.readBinFile (dir / "N.resolved"))
    | throw (IO.userError "N.resolved does not decode")
  for n in [`foo, `bar] do
    IO.println s!"N.resolved records `{n}`: {t.entries.contains (ModuleUsage.resolvedId n)}"
