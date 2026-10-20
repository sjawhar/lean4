import Lean
/-! An unaccounted write made inside `realizeConst` reaches the realizing command's recorded delta: merging the
realization into the caller (`replayConsts`) applies each extension's `replay?` and carries the realization's count
of unaccounted writes to that extension. A command whose realization writes a
`.sync` log extension through `toEnvExtension.modifyState`, beside an entry, which the extension's `replay?` copies,
is refused; one whose realization only adds the entry replays, both views equal to the
full run's. -/
open Lean

def runLean (dir : System.FilePath) (args : Array String) : IO Unit := do
  let out ← IO.Process.output { cmd := "lean", args, cwd := dir, env := #[("LEAN_PATH", some dir.toString)] }
  unless out.exitCode = 0 do
    throw <| IO.userError s!"lean {args} failed ({out.exitCode}):\n{out.stdout}\n{out.stderr}"

def xSource : String := "import Lean\nopen Lean Elab Command Meta\n\
  initialize foldLog : PersistentEnvExtension Name Name (List Name × NameMap Nat) ← registerPersistentEnvExtension { \
    mkInitial := pure ([], {}), addImportedFn := fun _ => pure ([], {}), \
    addEntryFn := fun (l, m) n => (n :: l, m.insert n 1), ofOLeanEntry? := some fun _ e => pure e, \
    stateDelta? := some StateDelta.ofLog, exportEntriesFn := fun (l, _) => l.reverse.toArray, asyncMode := .sync, \
    replay? := some fun old new _ (l, m) => \
      let ns := new.1.take (new.1.length - old.1.length); \
      (ns ++ l, ns.foldl (init := m) fun m n => m.insert n (new.2.find? n |>.getD 0)) }\n\
  elab \"realize_raw \" n:ident : command => liftTermElabM do\n  \
  let aux := n.getId ++ `raw\n  \
  realizeConst n.getId aux do\n    \
  Lean.addDecl (.axiomDecl { name := aux, levelParams := [], type := mkConst ``True, isUnsafe := false })\n    \
  modifyEnv (foldLog.addEntry · aux)\n    \
  modifyEnv fun env => foldLog.toEnvExtension.modifyState env fun ps => \
  { ps with state := (ps.state.1, ps.state.2.insert aux 99) }\n\
  elab \"realize_entry \" n:ident : command => liftTermElabM do\n  \
  let aux := n.getId ++ `entry\n  \
  realizeConst n.getId aux do\n    \
  Lean.addDecl (.axiomDecl { name := aux, levelParams := [], type := mkConst ``True, isUnsafe := false })\n    \
  modifyEnv (foldLog.addEntry · aux)\n"

def mSource : String := "import X\n\
  def base : Nat := 0\n\
  realize_raw base\n\
  realize_entry base\n"

unsafe def view (env : Environment) : IO String := do
  let exts ← persistentEnvExtensionsRef.get
  let some e := exts.find? (·.name == `foldLog) | throw <| IO.userError "no foldLog"
  let mut parts := #[]
  for v in [EnvExtension.View.checked, .main] do
    let (log, m) : List Name × NameMap Nat := unsafeCast (e.toEnvExtension.getStateIn env v).state
    parts := parts.push s!"{v}={log}/{m.toList}"
  return ", ".intercalate parts.toList

unsafe def main : IO Unit := IO.FS.withTempDir fun dir => do
  IO.FS.writeFile (dir / "X.lean") xSource
  runLean dir #["-o", "X.olean", "--usage=X.usage", "X.lean"]
  initSearchPath (← getBuildDir) [dir]
  IO.FS.writeFile (dir / "M.lean") mSource
  enableInitializersExecution
  let some _ ← Elab.runFrontend mSource {} "M.lean" `M (oleanFileName? := some (dir / "M.olean")) (usageFileName? := some (dir / "M.usage")) |
    throw <| IO.userError "elaboration of M failed"
  let obs := (← ModuleUsage.commandObservations).qsort (·.i < ·.i)
  let (md, _) ← readModuleData (dir / "M.olean")
  let payloads := CommandEntries.ofModuleData md
  let usage ← IO.ofExcept <| Json.parse (← IO.FS.readFile (dir / "M.usage"))
  IO.println s!"noskip {(usage.getObjValAs? Bool "noskip").toOption}, \
    reason {(usage.getObjValAs? String "noskipReason").toOption}"
  for o in obs do
    let some ce := payloads.find? (·.idx == o.i) | throw <| IO.userError s!"no payload {o.i}"
    let replay ← try
        let env ← replayCommandEntries (← CommandEntries.Testing.rollbackTo o.before.env o.after.env) ce {}
        let full ← view o.after.env
        let got ← view env
        pure (if full == got then s!"replay matches: {full}" else s!"replay differs:\n    full     {full}\n    replayed {got}")
      catch _ => pure "refused"
    IO.println s!"{o.i}: refused for {(ce.refusals.filterMap (·.ext?)).filter (· == `foldLog)}, \
      entries {CommandEntries.Testing.shownEntries ce (· == `foldLog)}; {replay}"

#eval main
