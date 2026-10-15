import Lean
/-! Per-command extra module uses in `.usage` (version 3, field `commands`): each top-level command that used a
workspace module's tactics, macros or syntax lists those modules, with its start line and the declarations it
defined. This includes commands whose environment is discarded (`example`) and theorem proofs elaborated
asynchronously. `x` uses only `B`'s tactic, `y` and the `example` only `C`'s, `z` neither, so it has no entry. -/
open Lean

def lean (dir : System.FilePath) (args : Array String) : IO Unit := do
  let out ← IO.Process.output { cmd := "lean", args := #[s!"--root={dir}"] ++ args, cwd := dir,
                                env := #[("LEAN_PATH", some dir.toString)] }
  unless out.exitCode = 0 do
    throw <| IO.userError s!"lean {args} failed ({out.exitCode}):\n{out.stdout}\n{out.stderr}"

def nameStr (j : Json) : Except String String := do
  return ".".intercalate ((← j.getArr?).toList.map fun c => c.getStr?.toOption.getD "?")

def summary (j : Json) : Except String String := do
  let cmds ← j.getObjValAs? (Array Json) "commands"
  let lines ← cmds.mapM fun c => do
    let decls ← (← c.getObjValAs? (Array Json) "decls").mapM nameStr
    let mods ← (← c.getObjValAs? (Array Json) "extra").mapM fun u => do
      let #[m, _] ← u.getArr? | throw "expected a pair"
      nameStr m
    return s!"{← c.getObjValAs? Nat "line"} {decls.toList} {mods.toList.eraseDups}"
  return s!"version {← j.getObjValAs? Nat "version"}\n" ++ "\n".intercalate lines.toList

#eval IO.FS.withTempDir fun dir => do
  IO.FS.writeFile (dir / "B.lean") "macro \"tacB\" : tactic => `(tactic| trivial)\n"
  IO.FS.writeFile (dir / "C.lean") "macro \"tacC\" : tactic => `(tactic| exact rfl)\n"
  IO.FS.writeFile (dir / "A.lean") <|
    "import B\nimport C\ntheorem x : True := by tacB\ntheorem y : 1 = 1 := by tacC\n" ++
    "example : 2 = 2 := by tacC\ndef z := 1\n"
  lean dir #["-o", "B.olean", "B.lean"]
  lean dir #["-o", "C.olean", "C.lean"]
  lean dir #["-o", "A.olean", "A.lean"]
  let j ← IO.ofExcept <| Json.parse (← IO.FS.readFile (dir / "A.usage"))
  IO.println (← IO.ofExcept (summary j))
