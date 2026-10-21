import Lean
/-! An extension with no typed state delta whose exporter keeps only keys that are constants: a declaration
attribute inserts `d.later` (command 0) before `def d.later` declares it (command 1), so the entry shows up in
the export one command after the state change. Its state change refuses command 0's payload (`replayCommandEntries`
throws on it), and the module is declined (`noskip`); nothing is recorded for
command 1, whose state did not change. -/
open Lean

def runLean (dir : System.FilePath) (args : Array String) : IO Unit := do
  let out ← IO.Process.output { cmd := "lean", args, cwd := dir, env := #[("LEAN_PATH", some dir.toString)] }
  unless out.exitCode = 0 do
    throw <| IO.userError s!"lean {args} failed ({out.exitCode}):\n{out.stdout}\n{out.stderr}"

/-- `preExt`'s entries in `ce`'s main-branch view, the view its `.mainOnly` writes reach. -/
unsafe def preEntries (ce : CommandEntries) : Array (Name × Nat) :=
  ((ce.main.entries.find? fun (n, _) => n == `preExt).map (·.2) |>.getD #[]).map unsafeCast

unsafe def main : IO Unit := IO.FS.withTempDir fun dir => do
  IO.FS.writeFile (dir / "X.lean") "import Lean\nopen Lean\n\
    initialize preExt : PersistentEnvExtension (Name × Nat) (Name × Nat) (NameMap Nat) ← \
    registerPersistentEnvExtension { mkInitial := pure {}, addImportedFn := fun _ => pure {}, \
    addEntryFn := fun s (n, v) => s.insert n v, ofOLeanEntry? := some fun _ e => pure e, \
    exportEntriesFnEx := fun env s => .uniform <| \
      (s.foldl (fun a n v => a.push (n, v)) #[]).filter (env.contains (skipRealize := false) ·.1) }\n\
    initialize registerBuiltinAttribute { name := `pre_tag, descr := \"test\", \
      add := fun decl _ _ => modifyEnv (preExt.addEntry · (decl ++ `later, 42)) }\n"
  runLean dir #["-o", "X.olean", "--usage=X.usage", "X.lean"]
  initSearchPath (← getBuildDir) [dir]
  let src := "import X\n@[pre_tag] def d : Nat := 0\ndef d.later : Nat := 1\n"
  IO.FS.writeFile (dir / "M.lean") src
  enableInitializersExecution
  let some _ ← Elab.runFrontend src {} (dir / "M.lean").toString `M
      (oleanFileName? := some (dir / "M.olean")) (usageFileName? := some (dir / "M.usage")) |
    throw <| IO.userError "elaboration of M failed"
  let obs := (← ModuleUsage.commandObservations).qsort (·.i < ·.i)
  let some ext := (← persistentEnvExtensionsRef.get).find? (·.name == `preExt) |
    throw <| IO.userError "preExt not registered"
  let state (env : Environment) : NameMap Nat := unsafeCast (ext.getState (asyncMode := .mainOnly) env)
  let exportOf (env : Environment) : Array (Name × Nat) :=
    (ext.exportEntriesFn env (ext.getState (asyncMode := .mainOnly) env)).private.map unsafeCast
  let some o₀ := obs[0]? | throw <| IO.userError "no observation 0"
  let some o₁ := obs[1]? | throw <| IO.userError "no observation 1"
  IO.println s!"full run: export after command 0 {exportOf o₀.after.env}, after command 1 {exportOf o₁.after.env}"
  let (md, _) ← readModuleData (dir / "M.olean")
  let payloads := CommandEntries.ofModuleData md
  let some ce₀ := payloads.find? (·.idx == 0) | throw <| IO.userError "no payload 0"
  let some ce₁ := payloads.find? (·.idx == 1) | throw <| IO.userError "no payload 1"
  let permit ← IO.ofExcept <| ModuleUsage.keepPermit o₀.before.env (← ModuleUsage.ResolutionRecord.read (dir / "M.usage"))
  try
    let env ← replayCommandEntries permit (← CommandEntries.Testing.rollbackTo o₀.before.env o₀.after.env) ce₀ {}
    IO.println s!"command 0 (@[pre_tag] def d): replayed: state has d.later {(state env).contains `d.later} \
      (full run: {(state o₀.after.env).contains `d.later})"
  catch e =>
    IO.println s!"command 0 (@[pre_tag] def d): refused: {e}"
  IO.println s!"command 1 (def d.later): preExt payload {preEntries ce₁}"
  let usage ← IO.ofExcept <| Json.parse (← IO.FS.readFile (dir / "M.usage"))
  IO.println s!"noskip: {(usage.getObjValAs? Bool "noskip").toOption}, \
    reason: {(usage.getObjValAs? String "noskipReason").toOption}"

#eval main
