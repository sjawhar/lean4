import Lean
/-! An extra module use is attributed to the command that requested it, also when it is recorded after the
main thread has moved on to later commands: by an asynchronous proof (`Y`), and inside a realization run from
an asynchronous proof (`Z`), which elaborates in the environment saved when the realized-for constant `base`
was declared but on behalf of the realizing command. -/
open Lean

def runLean (dir : System.FilePath) (args : Array String) : IO Unit := do
  let out ← IO.Process.output { cmd := "lean", args, cwd := dir, env := #[("LEAN_PATH", some dir.toString)] }
  unless out.exitCode = 0 do
    throw <| IO.userError s!"lean {args} failed ({out.exitCode}):\n{out.stdout}\n{out.stderr}"

#eval IO.FS.withTempDir fun dir => do
  IO.FS.writeFile (dir / "X.lean") "import Lean
open Lean Elab Tactic Meta
elab \"slow_extra\" : tactic => do
  IO.sleep 500
  recordExtraModUse `Y false
  evalTactic (← `(tactic| exact True.intro))
elab \"slow_realize \" id:ident : tactic => do
  IO.sleep 500
  let base := id.getId
  realizeConst base (base ++ `extra) do
    recordExtraModUse `Z false
    addDecl <| .defnDecl {
      name := base ++ `extra, levelParams := [], type := mkConst ``Nat
      value := mkNatLit 0, hints := .abbrev, safety := .safe }
  evalTactic (← `(tactic| exact True.intro))
"
  IO.FS.writeFile (dir / "Y.lean") "def y := 0\n"
  IO.FS.writeFile (dir / "Z.lean") "def z := 0\n"
  IO.FS.writeFile (dir / "M.lean") "import X
import Y
import Z
def base := 1
theorem asyncExtra : True := by slow_extra
def afterAsync := 0
theorem asyncRealize : True := by slow_realize base
def afterRealize := 0
"
  for m in ["X", "Y", "Z", "M"] do
    runLean dir #["-o", s!"{m}.olean", s!"--usage={m}.usage", s!"{m}.lean"]
  let j ← IO.ofExcept <| ModuleUsage.parseUsage (← IO.FS.readFile (dir / "M.usage"))
  let cmds ← IO.ofExcept <| j.getObjValAs? (Array ModuleUsage.CommandRecord) "commands"
  let owners (mod : Name) : List (Array Name) :=
    (cmds.filter fun (r : ModuleUsage.CommandRecord) => r.extra.contains (mod, false)).toList.map
      fun (r : ModuleUsage.CommandRecord) => r.decls.filter (· != `base.extra)
  IO.println s!"Y recorded by: {owners `Y}"
  IO.println s!"Z recorded by: {owners `Z}"
