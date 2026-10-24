import Lean
/-! Whether a module's commands may be kept one by one (`noreuse`, `noreuseReason`) is recorded apart from whether
Lake may skip the module (`noskip`), which only an `--incr-load` run sets: a module-system file and a module with a
refused declaration command are `noreuse`, and Lake skips them as it does without per-command records. -/
open Lean

def runLean (dir : System.FilePath) (args : Array String) : IO Unit := do
  let out ← IO.Process.output { cmd := "lean", args, cwd := dir, env := #[("LEAN_PATH", some dir.toString)] }
  unless out.exitCode = 0 do
    throw <| IO.userError s!"lean {args} failed ({out.exitCode}):\n{out.stdout}\n{out.stderr}"

#eval IO.FS.withTempDir fun dir => do
  IO.FS.writeFile (dir / "X.lean") "import Lean\nopen Lean Elab Term\n\
    initialize counter : IO.Ref Nat ← IO.mkRef 0\n\
    elab \"count\" : term => do return mkNatLit (← counter.modifyGet fun k => (k, k + 1))\n"
  IO.FS.writeFile (dir / "Plain.lean") "def p : Nat := 1\ntheorem tp : p = 1 := rfl\n"
  IO.FS.writeFile (dir / "MS.lean") "module\n\npublic def m : Nat := 1\n"
  IO.FS.writeFile (dir / "Ec.lean") "import X\ndef a : Nat := 0\ndef b : Nat := count\n"
  for m in ["X", "Plain", "MS", "Ec"] do
    runLean dir #["-o", s!"{m}.olean", s!"--usage={m}.usage", s!"{m}.lean"]
  for m in ["Plain", "MS", "Ec"] do
    let j ← IO.ofExcept <| ModuleUsage.parseUsage (← IO.FS.readFile (dir / s!"{m}.usage"))
    IO.println s!"{m}: noskip {(j.getObjValAs? Bool "noskip").toOption}, noreuse {(j.getObjValAs? Bool "noreuse").toOption}, \
      reason {(j.getObjValAs? String "noreuseReason").toOption}"
