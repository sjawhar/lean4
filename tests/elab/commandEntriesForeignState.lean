import Lean
/-! A command that writes an `IO.Ref` an imported module's initializer created, from a tactic, a term elaborator or a
command elaborator, synchronously or in an asynchronously elaborated proof, is refused (`Refusal.foreignState`): no
payload carries the reference's value, which a later command may read. Reading the reference, and writing a
reference the elaborator itself creates, are not refused. -/
open Lean

def runLean (dir : System.FilePath) (args : Array String) : IO Unit := do
  let out ← IO.Process.output { cmd := "lean", args, cwd := dir, env := #[("LEAN_PATH", some dir.toString)] }
  unless out.exitCode = 0 do
    throw <| IO.userError s!"lean {args} failed ({out.exitCode}):\n{out.stdout}\n{out.stderr}"

def xSource : String := "import Lean
open Lean Elab Tactic Command

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
"

def mSource : String := "import X
def a : Nat := 0
def e := count_term
theorem t : True := by bump_ref; trivial
bump_cmd
#ref
local_ref
theorem u : True := trivial
"

#eval IO.FS.withTempDir fun dir => do
  IO.FS.writeFile (dir / "X.lean") xSource
  IO.FS.writeFile (dir / "M.lean") mSource
  runLean dir #["-o", "X.olean", "--usage=X.usage", "X.lean"]
  runLean dir #["-o", "M.olean", "--usage=M.usage", "M.lean"]
  let (md, _) ← readModuleData (dir / "M.olean")
  for ce in CommandEntries.ofModuleData md do
    IO.println s!"command {ce.idx}: refusals {ce.refusals}"
