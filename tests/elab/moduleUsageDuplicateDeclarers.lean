import Lean
/-! A theorem that two imports declare, whose copies differ only in a binder name (the import's duplicate check ignores
binder names): the environment can hold either copy, so a command's statement-only use of it, and the module's
statement digest, cover every declarer's copy (`State.digestOf`): a change to the binder name in the declarer that does
not resolve the name changes both. -/
open Lean

def runLean (dir : System.FilePath) (args : Array String) : IO Unit := do
  let out ← IO.Process.output { cmd := "lean", args, cwd := dir, env := #[("LEAN_PATH", some dir.toString)] }
  unless out.exitCode = 0 do
    throw <| IO.userError s!"lean {args} failed ({out.exitCode}):\n{out.stdout}\n{out.stderr}"

/-- The use of `dup` in `M`'s records (`usesStmt` or `usesFull`, with its digest), and `M`'s statement digest of
`useDupT`, whose statement mentions `dup`. -/
def observe (dir : System.FilePath) : IO (String × String) := do
  runLean dir #["-o", "B.olean", "--usage=B.usage", "B.lean"]
  runLean dir #["-o", "M.olean", "--usage=M.usage", "M.lean"]
  let j ← IO.ofExcept <| ModuleUsage.parseUsage (← IO.FS.readFile (dir / "M.usage"))
  let cmds ← IO.ofExcept <| j.getObjValAs? (Array Json) "commands"
  let mut use := "none"
  for r in cmds do
    for k in ["usesStmt", "usesFull"] do
      for e in (r.getObjValAs? (Array Json) k).toOption.getD #[] do
        if (e.getArrVal? 0).toOption.map Json.compress == some "[\"dup\"]" then use := s!"{k} {e.compress}"
  let stmt ← IO.ofExcept <| j.getObjValAs? (Array Json) "stmt"
  let some s := stmt.find? fun e => (e.getArrVal? 0).toOption.map Json.compress == some "[\"useDupT\"]" |
    throw <| IO.userError "no statement digest of useDupT"
  return (use, s.compress)

#eval IO.FS.withTempDir fun dir => do
  IO.FS.writeFile (dir / "A.lean") "theorem dup (x : Nat) : x + 0 = x := rfl\n"
  IO.FS.writeFile (dir / "B.lean") "theorem dup (x : Nat) : x + 0 = x := rfl\n"
  IO.FS.writeFile (dir / "M.lean")
    "import A\nimport B\ntheorem useDup : 3 + 0 = 3 := dup 3\ntheorem useDupT : dup 3 = dup 3 := rfl\n"
  runLean dir #["-o", "A.olean", "--usage=A.usage", "A.lean"]
  let (use₀, stmt₀) ← observe dir
  IO.FS.writeFile (dir / "B.lean") "theorem dup (y : Nat) : y + 0 = y := rfl\n"
  let (use₁, stmt₁) ← observe dir
  IO.println s!"use recorded: {use₀ != "none"}, use changed: {use₀ != use₁}, statement digest changed: {stmt₀ != stmt₁}"
