import Lean
/-! A command record's uses (`usesFull` in the `.usage` `commands`) of a declaration the command elaborated and then
discarded, as every `#eval` does with `_eval`, stand for what that command's own declaration used: the first `#eval`
does not use `later`, which only the second, under the same name `_eval`, does. -/
open Lean

def mSource : String := "#eval (1 : Nat)
def later : Nat := 5
#eval later
"

#eval IO.FS.withTempDir fun dir => do
  IO.FS.writeFile (dir / "M.lean") mSource
  let out ← IO.Process.output { cmd := "lean", args := #["-o", "M.olean", "--usage=M.usage", "M.lean"], cwd := dir }
  IO.println s!"M: exit {out.exitCode}"
  IO.print out.stdout
  let mut j := Json.mkObj []
  for line in (← IO.FS.readFile (dir / "M.usage")).splitOn "\n" do
    unless line.isEmpty do j := j.mergeObj (← IO.ofExcept (Json.parse line))
  for c in ((j.getObjValD "commands").getArr?.toOption.getD #[]) do
    let uses := (c.getObjValD "usesFull").compress
    IO.println s!"command {(c.getObjValD "i").compress}: uses `later`: {decide ((uses.splitOn "\"later\"").length > 1)}"
