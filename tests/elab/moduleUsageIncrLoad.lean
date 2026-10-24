import Lean
/-! A `.usage` written by a run that loaded an `--incr-load` snapshot has `noskip` set: reused commands never
call `addDecl`, so its used set may be incomplete. The same file built without the snapshot has `noskip` unset. -/
open Lean

def noskipOf (dir : System.FilePath) (args : Array String) : IO Bool := do
  let out ← IO.Process.output { cmd := "lean", args := #[s!"--root={dir}"] ++ args, cwd := dir }
  unless out.exitCode = 0 do
    throw <| IO.userError s!"lean {args} failed ({out.exitCode}):\n{out.stdout}\n{out.stderr}"
  let j ← IO.ofExcept <| ModuleUsage.parseUsage (← IO.FS.readFile (dir / "A.usage"))
  IO.ofExcept <| j.getObjValAs? Bool "noskip"

#eval IO.FS.withTempDir fun dir => do
  IO.FS.writeFile (dir / "A.lean") "def a := 1\nexample : a = 1 := rfl\n"
  let plain ← noskipOf dir #["--incr-save=A.snap", "-o", "A.olean", "--usage=A.usage", "A.lean"]
  let loaded ← noskipOf dir #["--incr-load=A.snap", "-o", "A.olean", "--usage=A.usage", "A.lean"]
  IO.println s!"{plain} {loaded}"
