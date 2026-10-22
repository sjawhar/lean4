import Lean
/-! A command is refused (`Refusal.effect`) for every effect on state outside it that the runtime notes, which no
payload carries and a later command may read: a write to an `IO.Ref` it did not create (one an imported module's
initializer created, also on a worker thread or held in an extension's initial state; one core created, such as
`IO.stdGenRef`; one another command created), the resolution of a promise another command created, and a use of
process-wide state through the runtime's primitives (a file it did not create, or one it created and left in place,
the process environment, the working directory, a child process). Reading a reference, writing one the command itself creates, output its
elaboration captures, and a temporary file it creates and removes are not effects. -/
open Lean

def runLean (dir : System.FilePath) (args : Array String) : IO Unit := do
  let out ← IO.Process.output { cmd := "lean", args, cwd := dir, env := #[("LEAN_PATH", some dir.toString)] }
  unless out.exitCode = 0 do
    throw <| IO.userError s!"lean {args} failed ({out.exitCode}):\n{out.stdout}\n{out.stderr}"

def xSource : String := "import Lean
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

/-- process-wide state -/
elab \"write_file\" s:str : command => IO.FS.writeFile s.getString \"x\"
elab \"read_file\" s:str : command => discard <| IO.FS.readFile s.getString
elab \"temp_file\" : command => IO.FS.withTempFile fun h _ => h.putStrLn \"x\"
elab \"get_env\" : command => discard <| IO.getEnv \"HOME\"
elab \"get_cwd\" : command => discard <| IO.currentDir
elab \"spawn\" : command => discard <| IO.Process.output { cmd := \"true\" }
elab \"print_out\" : command => IO.println \"captured\"
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
write_file \"written.txt\"
read_file \"X.lean\"
temp_file
get_env
get_cwd
spawn
print_out
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
