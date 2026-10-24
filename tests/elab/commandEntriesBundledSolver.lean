import Lean
/-! A command that runs the toolchain's own SAT solver (`bin/cadical`, `bv_decide`'s default) is not refused for it
when the solver reads no inherited standard stream, runs with no working directory or environment variable set, and
every argument but its options (`--name`, `--name=N`) is a file the command created: the Lean githash pins the solver
as it pins the toolchain's files, and the module records the value `toolchain` instead. Any other spawn is an effect:
the solver on a file the command did not create, under another name, with a working directory, an environment
variable, an inherited standard stream or an option naming a file, and another toolchain executable. -/
open Lean

def runLean (dir : System.FilePath) (args : Array String) : IO Unit := do
  let out ← IO.Process.output { cmd := "lean", args, cwd := dir, env := #[("LEAN_PATH", some dir.toString)] }
  unless out.exitCode = 0 do
    throw <| IO.userError s!"lean {args} failed ({out.exitCode}):\n{out.stdout}\n{out.stderr}"

def xSource : String := "import Lean
open Lean Elab Command

def solver : IO System.FilePath := do
  return ((← IO.appPath).parent.get! / \"cadical\").withExtension System.FilePath.exeExtension

/-- runs `cmd` with `args` on a CNF file the command creates, with `cfg`'s settings -/
def runOn (cmd : IO String) (args : System.FilePath → Array String) (cfg : IO.Process.SpawnArgs → IO.Process.SpawnArgs)
    : CommandElabM Unit := do
  IO.FS.withTempFile fun h cnf => do
    h.putStr \"p cnf 1 1\\n1 0\\n\"
    h.flush
    let spawn := cfg { cmd := ← cmd, args := args cnf, stdin := .null, stdout := .null, stderr := .null }
    try discard (← IO.Process.spawn spawn).wait catch _ => pure ()

elab \"own_file\" : command => runOn (toString <$> solver) (fun f => #[f.toString, \"--quiet\", \"--seed=1\"]) id
elab \"given_file\" : command => runOn (toString <$> solver) (fun _ => #[\"given.cnf\", \"--quiet\"]) id
elab \"by_name\" : command => runOn (pure \"cadical\") (fun f => #[f.toString, \"--quiet\"]) id
elab \"with_cwd\" : command => runOn (toString <$> solver) (fun f => #[f.toString]) ({ · with cwd := some ⟨\".\"⟩ })
elab \"with_env\" : command => runOn (toString <$> solver) (fun f => #[f.toString]) ({ · with env := #[(\"X\", some \"1\")] })
elab \"inherited\" : command => runOn (toString <$> solver) (fun f => #[f.toString]) ({ · with stderr := .inherit })
elab \"file_option\" : command => runOn (toString <$> solver) (fun f => #[f.toString, \"--output=out.txt\"]) id
elab \"other_tool\" : command =>
  runOn (return toString ((← IO.appPath).parent.get! / \"lean\")) (fun _ => #[\"--version\"]) id
"

def mSource : String := "import X
theorem bv (x y : BitVec 8) (h : x < y) : x + 1 ≤ y := by bv_decide
own_file
given_file
by_name
with_cwd
with_env
inherited
file_option
other_tool
"

#eval IO.FS.withTempDir fun dir => do
  IO.FS.writeFile (dir / "X.lean") xSource
  IO.FS.writeFile (dir / "M.lean") mSource
  IO.FS.writeFile (dir / "given.cnf") "p cnf 1 1\n1 0\n"
  runLean dir #["-o", "X.olean", "--usage=X.usage", "X.lean"]
  runLean dir #["-o", "M.olean", "--usage=M.usage", "M.lean"]
  let root := toString (← IO.appPath).parent.get!.parent.get!
  let (md, _) ← readModuleData (dir / "M.olean")
  for ce in CommandEntries.ofModuleData md do
    let shown := ce.refusals.map fun r => (toString r).replace root "TOOLCHAIN"
    IO.println s!"command {ce.idx}: refusals {shown}"
  let usage ← IO.ofExcept <| ModuleUsage.parseUsage (← IO.FS.readFile (dir / "M.usage"))
  let values : Array (String × Option String) ← IO.ofExcept <| usage.getObjValAs? _ "values"
  IO.println s!"values {values.map Prod.fst}"
