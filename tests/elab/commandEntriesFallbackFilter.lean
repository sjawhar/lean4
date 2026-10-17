import Lean
/-! An extension with no typed state delta whose exporter keeps only keys that are constants: a declaration
attribute inserts `d.later` (command 0) before `def d.later` declares it (command 1), so the entry shows up in
the export one command after the state change. Its state change is recorded as `stateOnly` on command 0, whose
payload `replayCommandEntries` then refuses, and the module is declined (`noskip`); nothing is recorded for
command 1, whose state did not change. -/
open Lean

def runLean (dir : System.FilePath) (args : Array String) : IO Unit := do
  let out ← IO.Process.output { cmd := "lean", args, cwd := dir, env := #[("LEAN_PATH", some dir.toString)] }
  unless out.exitCode = 0 do
    throw <| IO.userError s!"lean {args} failed ({out.exitCode}):\n{out.stdout}\n{out.stderr}"

unsafe def commandEntriesOf (e : EnvExtensionEntry) : CommandEntries := unsafeCast e

def modeOf (ext : PersistentEnvExtension EnvExtensionEntry EnvExtensionEntry EnvExtensionState) :
    EnvExtension.AsyncMode :=
  match ext.toEnvExtension.asyncMode with
  | .async _ => .sync
  | m => m

/-- `target` with the state of every extension a command payload replays (persistent and scoped extensions,
registered command caches, the local-entry log) taken from `source`: a kept command is replayed with its
constants present and every extension in its before-state. -/
def withReplayStateOf (source target : Environment) : IO Environment := do
  let mut target := target
  for ext in ← persistentEnvExtensionsRef.get do
    target := ext.toEnvExtension.setState target (ext.toEnvExtension.getState source (asyncMode := modeOf ext))
      (asyncMode := modeOf ext)
  for ext in ← commandCacheExtensionsRef.get do
    target := ext.copyState source target
  return localEntriesExt.setState target (localEntriesExt.getState source (asyncMode := .local))
    (asyncMode := .local)

unsafe def preEntries (ce : CommandEntries) : Array (Name × Nat) :=
  ((ce.entries.find? (·.1 == `preExt)).map (·.2) |>.getD #[]).map unsafeCast

unsafe def main : IO Unit := IO.FS.withTempDir fun dir => do
  IO.FS.writeFile (dir / "X.lean") "import Lean\nopen Lean\n\
    initialize preExt : PersistentEnvExtension (Name × Nat) (Name × Nat) (NameMap Nat) ← \
    registerPersistentEnvExtension { mkInitial := pure {}, addImportedFn := fun _ => pure {}, \
    addEntryFn := fun s (n, v) => s.insert n v, ofOLeanEntry? := some fun _ e => pure e, \
    exportEntriesFnEx := fun env s => .uniform <| \
      (s.foldl (fun a n v => a.push (n, v)) #[]).filter (env.contains (skipRealize := false) ·.1) }\n\
    initialize registerBuiltinAttribute { name := `pre_tag, descr := \"test\", \
      add := fun decl _ _ => modifyEnv (preExt.addEntry · (decl ++ `later, 42)) }\n"
  runLean dir #["-o", "X.olean", "X.lean"]
  initSearchPath (← getBuildDir) [dir]
  let src := "import X\n@[pre_tag] def d : Nat := 0\ndef d.later : Nat := 1\n"
  IO.FS.writeFile (dir / "M.lean") src
  enableInitializersExecution
  let some _ ← Elab.runFrontend src {} (dir / "M.lean").toString `M
      (oleanFileName? := some (dir / "M.olean")) |
    throw <| IO.userError "elaboration of M failed"
  let obs := (← ModuleUsage.commandObservationsRef.get).qsort (·.i < ·.i)
  let some ext := (← persistentEnvExtensionsRef.get).find? (·.name == `preExt) |
    throw <| IO.userError "preExt not registered"
  let state (env : Environment) : NameMap Nat := unsafeCast (ext.getState (asyncMode := .mainOnly) env)
  let exportOf (env : Environment) : Array (Name × Nat) :=
    (ext.exportEntriesFn env (ext.getState (asyncMode := .mainOnly) env)).private.map unsafeCast
  let some o₀ := obs[0]? | throw <| IO.userError "no observation 0"
  let some o₁ := obs[1]? | throw <| IO.userError "no observation 1"
  IO.println s!"full run: export after command 0 {exportOf o₀.after.env}, after command 1 {exportOf o₁.after.env}"
  let (md, _) ← readModuleData (dir / "M.olean")
  let payloads := ((md.entries.find? (·.1 == commandEntriesExt.name)).map (·.2)).getD #[] |>.map commandEntriesOf
  let some ce₀ := payloads.find? (·.idx == 0) | throw <| IO.userError "no payload 0"
  let some ce₁ := payloads.find? (·.idx == 1) | throw <| IO.userError "no payload 1"
  try
    let env ← replayCommandEntries (← withReplayStateOf o₀.before.env o₀.after.env) ce₀
      (scopeDepth o₀.before.env) {}
    IO.println s!"command 0 (@[pre_tag] def d): replayed: state has d.later {(state env).contains `d.later} \
      (full run: {(state o₀.after.env).contains `d.later})"
  catch e =>
    IO.println s!"command 0 (@[pre_tag] def d): refused: {e}"
  IO.println s!"command 1 (def d.later): preExt payload {preEntries ce₁}"
  let usage ← IO.ofExcept <| Json.parse (← IO.FS.readFile (dir / "M.usage"))
  IO.println s!"noskip: {(usage.getObjValAs? Bool "noskip").toOption}, \
    reason: {(usage.getObjValAs? String "noskipReason").toOption}"

#eval main
