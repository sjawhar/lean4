import Lean
/-! The recorder records both views of every persistent extension, whatever mode it is registered with and whatever
mode each write is called with: an `addEntry (asyncMode := .sync)` on a
`.mainOnly` and on a `.local` extension writes both views, an `addEntry (asyncMode := .local)` on a `.sync` extension
the main-branch view alone, and each replays into exactly the views it reached; a default-mode `addEntry` on each
is the control. A raw `toEnvExtension.modifyState (asyncMode := .sync)` on the `.mainOnly` extension beside an entry
reaches its checked view and is refused. The attributes are registered by an imported module, so each command is also
refused for its attribute (`Refusal.foreignAttribute`); the replay drops that refusal to check the records themselves.
-/
open Lean

def runLean (dir : System.FilePath) (args : Array String) : IO Unit := do
  let out ← IO.Process.output { cmd := "lean", args, cwd := dir, env := #[("LEAN_PATH", some dir.toString)] }
  unless out.exitCode = 0 do
    throw <| IO.userError s!"lean {args} failed ({out.exitCode}):\n{out.stdout}\n{out.stderr}"

def xSource : String := "import Lean\nopen Lean\n\
  initialize mainLog : SimplePersistentEnvExtension Name NameSet ← registerSimplePersistentEnvExtension { \
    addEntryFn := fun s n => s.insert n, addImportedFn := fun _ => {} }\n\
  initialize localLog : SimplePersistentEnvExtension Name NameSet ← registerSimplePersistentEnvExtension { \
    addEntryFn := fun s n => s.insert n, addImportedFn := fun _ => {}, asyncMode := .local }\n\
  initialize syncLog : SimplePersistentEnvExtension Name NameSet ← registerSimplePersistentEnvExtension { \
    addEntryFn := fun s n => s.insert n, addImportedFn := fun _ => {}, asyncMode := .sync }\n\
  initialize registerBuiltinAttribute { name := `main_sync, descr := \"t\", \
    add := fun decl _ _ => modifyEnv (mainLog.addEntry (asyncMode := .sync) · decl) }\n\
  initialize registerBuiltinAttribute { name := `local_sync, descr := \"t\", \
    add := fun decl _ _ => modifyEnv (localLog.addEntry (asyncMode := .sync) · decl) }\n\
  initialize registerBuiltinAttribute { name := `sync_local, descr := \"t\", \
    add := fun decl _ _ => modifyEnv (syncLog.addEntry (asyncMode := .local) · decl) }\n\
  initialize registerBuiltinAttribute { name := `plain, descr := \"t\", \
    add := fun decl _ _ => modifyEnv fun env => \
      syncLog.addEntry (localLog.addEntry (mainLog.addEntry env decl) decl) decl }\n\
  initialize registerBuiltinAttribute { name := `main_sync_raw, descr := \"t\", \
    add := fun decl _ _ => modifyEnv fun env => \
      mainLog.toEnvExtension.modifyState (asyncMode := .sync) (mainLog.addEntry env decl) fun ps => \
        { ps with state := (ps.state.1, ps.state.2.insert `rawSide) } }\n"

def mSource : String := "import X\n\
  @[main_sync] def d0 : Nat := 0\n\
  @[local_sync] def d1 : Nat := 0\n\
  @[sync_local] def d2 : Nat := 0\n\
  @[plain] def d3 : Nat := 0\n\
  @[main_sync_raw] def d4 : Nat := 0\n"

def names : List Name := [`mainLog, `localLog, `syncLog]

/-- Both views of the test's extensions. -/
unsafe def view (env : Environment) : IO String := do
  let exts ← persistentEnvExtensionsRef.get
  let mut parts := #[]
  for name in names do
    let some e := exts.find? (·.name == name) | throw <| IO.userError s!"no {name}"
    for v in [EnvExtension.View.checked, .main] do
      let (log, set) : List Name × NameSet := unsafeCast (e.toEnvExtension.getStateIn env v).state
      parts := parts.push s!"{name}.{v}={log}/{set.toList}"
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
  -- the test's attributes are registered by an imported module, so a command that runs one is refused for it
  -- (`Refusal.foreignAttribute`); the replay drops that refusal to check the records themselves
  let some first := obs[0]? | throw <| IO.userError "no commands"
  let permit := CommandEntries.Testing.substitutePayloads
    (← IO.ofExcept (← ModuleUsage.Testing.keepPermit first.before.env `M (dir / "M.olean") (dir / "M.usage")))
    (·.map fun ce => { ce with refusals := ce.refusals.filter (!· matches .foreignAttribute _) })
  let payloads := permit.payloads
  let usage ← IO.ofExcept <| ModuleUsage.parseUsage (← IO.FS.readFile (dir / "M.usage"))
  IO.println s!"noreuse {(usage.getObjValAs? Bool "noreuse").toOption}, \
    reason {(usage.getObjValAs? String "noreuseReason").toOption}"
  for o in obs do
    let some ce := payloads.find? (·.idx == o.i) | throw <| IO.userError s!"no payload {o.i}"
    let replay ← try
        let env ← replayCommandEntries permit (← CommandEntries.Testing.rollbackTo o.before.env o.after.env) ce {}
        let full ← view o.after.env
        let got ← view env
        pure (if full == got then "replay matches" else s!"replay differs:\n    full     {full}\n    replayed {got}")
      catch _ => pure "refused"
    IO.println s!"{o.i}: refused for {(ce.refusals.filterMap (·.ext?)).filter names.contains}, \
      entries {CommandEntries.Testing.shownEntries ce names.contains}; {replay}"

#eval main
