import Lean
/-! A command is refused (`Refusal.effect`) for every effect on state outside it that the runtime notes, which no
payload carries and a later command may read: a write to an `IO.Ref` it did not create (one an imported module's
initializer created, also on a worker thread or held in an extension's initial state; one core created, such as
`IO.stdGenRef`; one another command created), the resolution of a promise and the cancellation of a task another
command created, the use of a SAT solver another command created, and a use of process-wide state through the
runtime's primitives (a file it did not create, among them an `.olean` read whole, or one it created and left in place;
a child process; the environment written; the host name; the network; the runtime's settings, which only compiled code
can change, in `usagePluginAttribute`). Reading a reference, writing one the command itself creates, output its
elaboration captures, a temporary file it creates and removes, a solver it creates, and reading the environment or the
working directory (whose values the module records, `commandEntriesProcessValues`) are not effects. -/
open Lean

def runLean (dir : System.FilePath) (args : Array String) : IO Unit := do
  let out ← IO.Process.output { cmd := "lean", args, cwd := dir, env := #[("LEAN_PATH", some dir.toString)] }
  unless out.exitCode = 0 do
    throw <| IO.userError s!"lean {args} failed ({out.exitCode}):\n{out.stdout}\n{out.stderr}"

def xSource : String := "import Lean
import Std.Internal.UV.System
import Std.Internal.UV.TCP
open Lean Elab Tactic Command Term

initialize tacticRef : IO.Ref Nat ← IO.mkRef 0
elab \"bump_ref\" : tactic => tacticRef.modify (· + 1)
elab \"#ref\" : command => do logInfo m!\"ref {← tacticRef.get}\"

initialize counterRef : IO.Ref Nat ← IO.mkRef 0
elab \"count_term\" : term => do
  let n ← counterRef.modifyGet fun k => (k, k + 1)
  return mkNatLit n
elab \"bump_cmd\" : command => counterRef.modify (· + 1)

elab \"local_ref\" : command => do
  let r ← IO.mkRef 0
  r.modify (· + 1)

/-- a ref an extension's initial state holds: the importing environment creates it after the initializers ran -/
initialize refExt : EnvExtension (Option (IO.Ref Nat)) ← registerEnvExtension (return some (← IO.mkRef 0))
elab \"ext_count\" : term => do
  let some r := refExt.getState (← getEnv) | throwError \"no ref\"
  return mkNatLit (← r.modifyGet fun k => (k, k + 1))

/-- a ref created at its first use, during elaboration, kept in a ref the initializer created -/
initialize cell : IO.Ref (Option (IO.Ref Nat)) ← IO.mkRef none
def lazyCounter : IO (IO.Ref Nat) := do
  match ← cell.get with
  | some r => return r
  | none => let r ← IO.mkRef 0; cell.set (some r); return r
elab \"lazy_count\" : term => do
  return mkNatLit (← (← lazyCounter).modifyGet fun k => (k, k + 1))

/-- a ref the initializer creates on a worker thread -/
initialize box : IO.Ref Nat ← do
  let t ← IO.asTask (IO.mkRef 0)
  IO.ofExcept t.get
elab \"box_count\" : term => do
  box.modify (· + 1)
  return mkNatLit (← box.get)

/-- core state: the random generator -/
elab \"seed_term\" : term => do IO.setRandSeed 7; return mkNatLit 0
elab \"rand_term\" : term => do return mkNatLit ((← IO.rand 0 1000000) * 0)

/-- a promise a command keeps in an extension's state, for a later command to resolve -/
initialize promiseExt : EnvExtension (Option (IO.Promise Nat)) ← registerEnvExtension (pure none)
elab \"make_promise\" : command => do
  let p ← IO.Promise.new
  modifyEnv (promiseExt.setState · (some p))
elab \"resolve_promise\" : command => do
  if let some p := promiseExt.getState (← getEnv) then p.resolve 1

/-- a task a command keeps in an extension's state, for a later command to cancel -/
initialize taskExt : EnvExtension (Option (Task Unit)) ← registerEnvExtension (pure none)
elab \"make_task\" : command => do
  let t ← IO.asTask (prio := .dedicated) (IO.sleep 2000)
  modifyEnv (taskExt.setState · (some (t.map fun _ => ())))
elab \"cancel_task\" : command => do
  if let some t := taskExt.getState (← getEnv) then IO.cancel t

/-- process-wide state -/
elab \"write_file\" s:str : command => IO.FS.writeFile s.getString \"x\"
elab \"read_file\" s:str : command => discard <| IO.FS.readFile s.getString
elab \"temp_file\" : command => IO.FS.withTempFile fun h _ => h.putStrLn \"x\"
elab \"get_env\" : command => discard <| IO.getEnv \"HOME\"
elab \"get_cwd\" : command => discard <| IO.currentDir
elab \"spawn\" : command => discard <| IO.Process.output { cmd := \"true\" }
elab \"print_out\" : command => IO.println \"captured\"
elab \"read_olean\" : command => discard <| readModuleData \"X.olean\"
elab \"uv_getenv\" : command => discard <| Std.Internal.UV.System.osGetenv \"HOME\"
elab \"uv_setenv\" : command => Std.Internal.UV.System.osSetenv \"DECL2_EFFECTS_TEST\" \"1\"
elab \"uv_hostname\" : command => discard Std.Internal.UV.System.osGetHostname
elab \"tcp_new\" : command => discard Std.Internal.UV.TCP.Socket.new

/-- a SAT solver a command keeps in an extension's state, for a later command to use -/
initialize solverExt : EnvExtension (Option Lean.Cadical.Internal.Solver) ← registerEnvExtension (pure none)
elab \"make_solver\" : command => do
  let s ← Lean.Cadical.Internal.Solver.new
  modifyEnv (solverExt.setState · (some s))
elab \"use_solver\" : command => do
  if let some s := solverExt.getState (← getEnv) then Lean.Cadical.Internal.Solver.add s 1
elab \"own_solver\" : command => do
  let s ← Lean.Cadical.Internal.Solver.new
  Lean.Cadical.Internal.Solver.add s 1
  Lean.Cadical.Internal.Solver.add s 0
  discard s.solve
"

def mSource : String := "import X
def a : Nat := 0
def e := count_term
theorem t : True := by bump_ref; trivial
bump_cmd
#ref
local_ref
theorem u : True := trivial
def e2 := ext_count
def l1 := lazy_count
def l2 := lazy_count
def b := box_count
def s := seed_term
def r := rand_term
make_promise
resolve_promise
make_task
cancel_task
write_file \"written.txt\"
read_file \"X.lean\"
temp_file
get_env
get_cwd
spawn
print_out
read_olean
uv_getenv
uv_setenv
uv_hostname
tcp_new
make_solver
use_solver
own_solver
"

#eval IO.FS.withTempDir fun dir => do
  IO.FS.writeFile (dir / "X.lean") xSource
  IO.FS.writeFile (dir / "M.lean") mSource
  runLean dir #["-o", "X.olean", "--usage=X.usage", "X.lean"]
  runLean dir #["-o", "M.olean", "--usage=M.usage", "M.lean"]
  let (md, _) ← readModuleData (dir / "M.olean")
  for ce in CommandEntries.ofModuleData md do
    -- the paths name the temporary directory
    let shown := ce.refusals.map fun r => (toString r).replace dir.toString "DIR"
    IO.println s!"command {ce.idx}: refusals {shown}"
