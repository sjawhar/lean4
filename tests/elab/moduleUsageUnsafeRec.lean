import Lean
/-! A recursive `partial def`'s kernel constant is an opaque whose value is an inhabitant; its compiled body is
`f._unsafe_rec`. Its meaning digest must see that body: two modules whose `f` differs only in the recursive body
give `f` different digests. The first value checks that `f._unsafe_rec` exists, so the second is not vacuous. -/
open Lean

partial def f (n : Nat) : Nat := if n = 0 then 2 else f (n - 1)

def digestOfF (dir : System.FilePath) (src : String) : IO String := do
  IO.FS.writeFile (dir / "A.lean") src
  let out ← IO.Process.output
    { cmd := "lean", args := #[s!"--root={dir}", "-o", "A.olean", "--usage=A.usage", "A.lean"], cwd := dir }
  unless out.exitCode = 0 do
    throw <| IO.userError s!"lean failed ({out.exitCode}):\n{out.stdout}\n{out.stderr}"
  let j ← IO.ofExcept <| Json.parse (← IO.FS.readFile (dir / "A.usage"))
  let own ← IO.ofExcept <| j.getObjValAs? (Array (Json × String)) "own"
  let some (_, d) := own.find? (·.1 == ModuleUsage.nameToJson `f)
    | throw <| IO.userError "no digest for f"
  return d

#eval show CoreM Unit from do
  let hasRec := (← getEnv).contains (Compiler.mkUnsafeRecName ``f)
  let changed ← IO.FS.withTempDir fun dir => do
    let d2 ← digestOfF dir "partial def f (n : Nat) : Nat := if n = 0 then 2 else f (n - 1)\n"
    let d3 ← digestOfF dir "partial def f (n : Nat) : Nat := if n = 0 then 3 else f (n - 1)\n"
    return d2 != d3
  IO.println s!"{hasRec} {changed}"
