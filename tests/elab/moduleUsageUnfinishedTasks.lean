import Lean
/-! While a module is compiled with usage recording, the runtime counts per command the tasks that run code which the
command started and which are not finished (`unfinishedCommandTasks`): a task command 2 (the first `#eval`) starts and
that waits for command 4 counts until it ends, and a promise does not count. `Elab.async` is off so that no linter task
of the commands runs concurrently. -/
open Lean

def mSource : String := "import Lean
open Lean

initialize gate : IO.Ref Bool ← IO.mkRef false
initialize done : IO.Ref (Option (Task (Except IO.Error Unit))) ← IO.mkRef none
"

def nSource : String := "import M
open Lean

set_option Elab.async false
#eval show IO Unit from do
  let _ ← IO.Promise.new (α := Nat)
  done.set (some (← IO.asTask (prio := .dedicated) do while !(← gate.get) do IO.sleep 10))
#eval show IO Unit from do
  IO.println s!\"while command 2's task waits: {← unfinishedCommandTasks 2}\"
#eval show IO Unit from do
  gate.set true
  if let some t ← done.get then discard <| IO.wait t
#eval show IO Unit from do
  IO.println s!\"after it ended: {← unfinishedCommandTasks 2}\"
"

#eval IO.FS.withTempDir fun dir => do
  IO.FS.writeFile (dir / "M.lean") mSource
  IO.FS.writeFile (dir / "N.lean") nSource
  for m in ["M", "N"] do
    let args := #["-o", s!"{m}.olean", s!"--usage={m}.usage", s!"{m}.lean"]
    let env := #[("LEAN_PATH", some dir.toString)]
    let out ← IO.Process.output { cmd := "lean", args, cwd := dir, env }
    IO.println s!"{m}: exit {out.exitCode}"
    IO.print (out.stdout ++ out.stderr)
