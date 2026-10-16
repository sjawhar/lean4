import Lean
/-! A module whose proof applies `Lean.ofReduceBool` directly gets `noskip`: the kernel runs compiled code for it,
and the term `Lean.ofReduceBool c true (@rfl Bool true)` never mentions `Lean.reduceBool` itself (the decided `c`
goes through a recursive `partial def`). The same module proved by `rfl` does not. -/
open Lean

def noskipOf (dir : System.FilePath) (src : String) : IO Bool := do
  IO.FS.writeFile (dir / "A.lean") src
  let out ← IO.Process.output { cmd := "lean", args := #[s!"--root={dir}", "-o", "A.olean", "A.lean"], cwd := dir }
  unless out.exitCode = 0 do
    throw <| IO.userError s!"lean failed ({out.exitCode}):\n{out.stdout}\n{out.stderr}"
  let j ← IO.ofExcept <| Json.parse (← IO.FS.readFile (dir / "A.usage"))
  IO.ofExcept <| j.getObjValAs? Bool "noskip"

#eval IO.FS.withTempDir fun dir => do
  let plain ← noskipOf dir "def c : Bool := true\ntheorem t : c = true := rfl\n"
  let native ← noskipOf dir
    "set_option linter.deprecated false\n\
    partial def f (n : Nat) : Nat := if n = 0 then 2 else f (n - 1)\ndef c : Bool := f 1 == 2\n\
    theorem t : c = true := Lean.ofReduceBool c true (@rfl Bool true)\n"
  IO.println s!"{plain} {native}"
