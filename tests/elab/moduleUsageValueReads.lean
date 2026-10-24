import Lean
/-! Each command record of a module's `.usage` lists the process values its command read (`values`), by the runtime's
task context: what the command's elaboration and the tasks it starts read. The module's `values` lists every read. A
read outside any command, here by an imported module's initializer while the header is processed, is the module's
alone. -/
open Lean

def runLean (dir : System.FilePath) (args : Array String) (env : Array (String × Option String) := #[]) :
    IO (UInt32 × String) := do
  let out ← IO.Process.output { cmd := "lean", args, cwd := dir, env := env.push ("LEAN_PATH", some dir.toString) }
  return (out.exitCode, out.stdout ++ out.stderr)

def compile (dir : System.FilePath) (m : String) (env : Array (String × Option String) := #[]) : IO Unit := do
  let (code, out) ← runLean dir #["-o", s!"{m}.olean", s!"--usage={m}.usage", s!"{m}.lean"] env
  unless code = 0 do throw <| IO.userError s!"compiling {m} failed ({code}):\n{out}"

def xSource : String := "import Lean
open Lean Elab Term

elab \"foo_term\" : term => return mkStrLit ((← IO.getEnv \"FOO\").getD \"unset\")
elab \"bar_term\" : term => return mkStrLit ((← IO.getEnv \"BAR\").getD \"unset\")
/-- reads `QUX` in a task it starts -/
elab \"qux_task_term\" : term => do
  let t ← IO.asTask (IO.getEnv \"QUX\")
  return mkStrLit ((← IO.ofExcept t.get).getD \"unset\")
"

/-- an initializer that reads `BAZ` when the module is imported -/
def ySource : String := "import Lean

initialize yBaz : String ← return (← IO.getEnv \"BAZ\").getD \"unset\"
"

def mSource : String := "import X
import Y
def a : String := foo_term
def b : String := bar_term
theorem t : True := trivial
def q : String := qux_task_term
def ab : String := foo_term ++ bar_term
"

#eval IO.FS.withTempDir fun dir => do
  IO.FS.writeFile (dir / "X.lean") xSource
  IO.FS.writeFile (dir / "Y.lean") ySource
  IO.FS.writeFile (dir / "M.lean") mSource
  compile dir "X"
  compile dir "Y"
  compile dir "M" #[("FOO", some "1"), ("BAR", some "2"), ("QUX", some "3"), ("BAZ", some "4")]
  let j ← IO.ofExcept <| ModuleUsage.parseUsage (← IO.FS.readFile (dir / "M.usage"))
  let vs : Array (String × Option String) ← IO.ofExcept <| j.getObjValAs? _ "values"
  IO.println s!"module values {vs.map Prod.fst}, noreuse {(j.getObjValAs? Bool "noreuse").toOption}"
  for c in ← IO.ofExcept <| j.getObjValAs? (Array Json) "commands" do
    let keys := match c.getObjValAs? (Array String) "values" with
      | .ok ks => toString ks
      | .error _ => "-"
    IO.println s!"command {(c.getObjValAs? Nat "i").toOption.getD 0}: values {keys}"
