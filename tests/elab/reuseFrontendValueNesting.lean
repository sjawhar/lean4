import Lean
/-! Review finding R11: `withoutValueReads` nests. An inner `withoutValueReads` that ends must leave the outer one in
force, so a read of `FOO` after it, still inside the outer one, is not one of the module's process values. -/
open Lean

def mSource : String := "import Lean
open Lean in
#eval show IO Unit from do
  withoutValueReads do
    withoutValueReads (pure ())
    discard <| IO.getEnv \"FOO\"
def t : Nat := 1
"

#eval IO.FS.withTempDir fun dir => do
  IO.FS.writeFile (dir / "M.lean") mSource
  let out ← IO.Process.output {
    cmd := "lean", args := #["-o", "M.olean", "--usage=M.usage", "M.lean"], cwd := dir,
    env := #[("LEAN_PATH", some dir.toString), ("FOO", some "1")] }
  IO.println s!"exit {out.exitCode}, output {(out.stdout ++ out.stderr).replace dir.toString "DIR" |>.trimAscii.copy.quote}"
  let mut j := Json.mkObj []
  for line in (← IO.FS.readFile (dir / "M.usage")).splitOn "\n" do
    unless line.isEmpty do j := j.mergeObj (← IO.ofExcept (Json.parse line))
  let values : Array (String × Json) := (j.getObjValAs? (Array (String × Json)) "values").toOption.getD #[]
  let keys := values.toList.map Prod.fst
  IO.println s!"values lists env:FOO: {keys.contains "env:FOO"}"
