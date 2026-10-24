import Lean
/-! A command whose recorded change holds a closure, which no `.olean` can store (here a `store_traces_as` trace in
the stored-traces cache), is refused for that part (`Refusal.uncompactable`) and the part is left out of its payload,
so `lean -o --usage` writes the module as it does without usage recording, and a module importing it compiles. -/
open Lean

def runLean (dir : System.FilePath) (args : Array String) : IO Unit := do
  let out ← IO.Process.output { cmd := "lean", args, cwd := dir, env := #[("LEAN_PATH", some dir.toString)] }
  IO.println s!"lean {args}: exit {out.exitCode}"
  unless out.exitCode = 0 do
    IO.println s!"{out.stdout.trimAscii}{out.stderr.trimAscii}"

#eval IO.FS.withTempDir fun dir => do
  IO.FS.writeFile (dir / "ST.lean") "import Lean
open Lean.PostprocessTraces

store_traces_as tr in
set_option trace.Meta.Tactic.simp.rewrite true in
theorem foo (n : Nat) : n + 0 = n := by simp

#eval show Lean.CoreM Unit from do
  let t ← tr
  IO.println s!\"stored messages: {t.messages.size}\"
"
  IO.FS.writeFile (dir / "Importer.lean") "import ST\ntheorem bar (n : Nat) : n + 0 = n := foo n\n"
  runLean dir #["-o", "ST.olean", "--usage=ST.usage", "ST.lean"]
  let (md, _) ← readModuleData (dir / "ST.olean")
  for ce in CommandEntries.ofModuleData md do
    IO.println s!"command {ce.idx}: refusals {ce.refusals}, caches {ce.main.caches.map Prod.fst ++ ce.checked.caches.map Prod.fst}"
  let usage ← IO.ofExcept <| ModuleUsage.parseUsage (← IO.FS.readFile (dir / "ST.usage"))
  IO.println s!"noreuse {(usage.getObjValAs? Bool "noreuse").toOption}, \
    reason {(usage.getObjValAs? String "noreuseReason").toOption}"
  runLean dir #["-o", "Importer.olean", "--usage=Importer.usage", "Importer.lean"]
