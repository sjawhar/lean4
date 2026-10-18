import Lean
/-! A declaration command that writes an extension through a sanctioned writer (`PersistentEnvExtension.addEntry` or
`modifyState`, `ScopedEnvExtension.addLocalEntry`) called with a record other than the registered one is recorded as
`stateOnly` and refused, and the module is `noskip` (`decl2f-delta2-review.md` finding 1): a record with another
`addEntryFn`; one with `stateDeltaSeesDirectWrites` set where the registered record leaves it unset; another
extension's record over this extension's `EnvExtension`; a scoped record with another descriptor; and the registered
record over an `EnvExtension` whose index was changed through a structure extending `EnvExtension` (its constructor
is private, a child's is not). A write through the registered record replays. -/
open Lean

def runLean (dir : System.FilePath) (args : Array String) : IO Unit := do
  let out ← IO.Process.output { cmd := "lean", args, cwd := dir, env := #[("LEAN_PATH", some dir.toString)] }
  unless out.exitCode = 0 do
    throw <| IO.userError s!"lean {args} failed ({out.exitCode}):\n{out.stdout}\n{out.stderr}"

def xSource : String := "import Lean\nopen Lean\n\
  abbrev LogExt := PersistentEnvExtension Name Name (List Name × NameSet)\n\
  initialize logExt : SimplePersistentEnvExtension Name NameSet ← registerSimplePersistentEnvExtension { \
    addEntryFn := fun s n => s.insert n, addImportedFn := fun _ => {} }\n\
  initialize otherExt : SimplePersistentEnvExtension Name NameSet ← registerSimplePersistentEnvExtension { \
    addEntryFn := fun s n => (s.insert n).insert `otherSide, addImportedFn := fun _ => {} }\n\
  initialize scopeExt : SimpleScopedEnvExtension Name NameSet ← registerSimpleScopedEnvExtension { \
    addEntry := fun s n => s.insert n, initial := {} }\n\
  structure Child (σ : Type) extends EnvExtension σ\n\
  def flagged : LogExt := { (logExt : LogExt) with stateDeltaSeesDirectWrites := true }\n\
  def otherFn : LogExt := { (logExt : LogExt) with addEntryFn := fun (l, s) n => (n :: l, (s.insert n).insert `fnSide) }\n\
  def swapped : LogExt := { (otherExt : LogExt) with toEnvExtension := (logExt : LogExt).toEnvExtension }\n\
  def otherDescr : SimpleScopedEnvExtension Name NameSet := \
    { scopeExt with descr := { scopeExt.descr with addEntry := fun s n => (s.insert n).insert `localSide } }\n\
  def reindexed : LogExt := { (logExt : LogExt) with toEnvExtension := \
    ({ (Child.mk (logExt : LogExt).toEnvExtension) with idx := (otherExt : LogExt).toEnvExtension.idx } : \
      Child _).toEnvExtension }\n\
  initialize registerBuiltinAttribute { name := `honest, descr := \"t\", \
    add := fun decl _ _ => modifyEnv (logExt.addEntry · decl) }\n\
  initialize registerBuiltinAttribute { name := `forged_flag, descr := \"t\", \
    add := fun decl _ _ => modifyEnv fun env => \
      PersistentEnvExtension.modifyState flagged (logExt.addEntry env decl) fun (l, s) => (l, s.insert `flagSide) }\n\
  initialize registerBuiltinAttribute { name := `forged_fn, descr := \"t\", \
    add := fun decl _ _ => modifyEnv (PersistentEnvExtension.addEntry otherFn · decl) }\n\
  initialize registerBuiltinAttribute { name := `forged_swap, descr := \"t\", \
    add := fun decl _ _ => modifyEnv (PersistentEnvExtension.addEntry swapped · decl) }\n\
  initialize registerBuiltinAttribute { name := `forged_local, descr := \"t\", \
    add := fun decl _ _ => modifyEnv (otherDescr.addLocalEntry · decl) }\n\
  initialize registerBuiltinAttribute { name := `forged_index, descr := \"t\", \
    add := fun decl _ _ => modifyEnv (PersistentEnvExtension.addEntry reindexed · decl) }\n"

def mSource : String := "import X\n\
  @[honest] def d0 : Nat := 0\n\
  @[forged_flag] def d1 : Nat := 0\n\
  @[forged_fn] def d2 : Nat := 0\n\
  @[forged_swap] def d3 : Nat := 0\n\
  @[forged_local] def d4 : Nat := 0\n\
  @[forged_index] def d5 : Nat := 0\n"

/-- Both views of the test's extensions. -/
unsafe def view (env : Environment) : IO String := do
  let exts ← persistentEnvExtensionsRef.get
  let mut parts := #[]
  for name in [`logExt, `otherExt] do
    let some e := exts.find? (·.name == name) | throw <| IO.userError s!"no {name}"
    for v in [EnvExtension.View.checked, .main] do
      let (log, set) : List Name × NameSet := unsafeCast (e.toEnvExtension.getStateIn env v).state
      parts := parts.push s!"{name}.{v}={log}/{set.toList}"
  let some sc := exts.find? (·.name == `scopeExt) | throw <| IO.userError "no scopeExt"
  let st : ScopedEnvExtension.StateStack Name Name NameSet := unsafeCast (sc.toEnvExtension.getStateIn env .main).state
  parts := parts.push s!"scopeExt.main={st.stateStack.map (·.state.toList)}"
  return ", ".intercalate parts.toList

unsafe def main : IO Unit := IO.FS.withTempDir fun dir => do
  IO.FS.writeFile (dir / "X.lean") xSource
  runLean dir #["-o", "X.olean", "X.lean"]
  initSearchPath (← getBuildDir) [dir]
  IO.FS.writeFile (dir / "M.lean") mSource
  enableInitializersExecution
  let some _ ← Elab.runFrontend mSource {} "M.lean" `M (oleanFileName? := some (dir / "M.olean")) |
    throw <| IO.userError "elaboration of M failed"
  let obs := (← ModuleUsage.commandObservationsRef.get).qsort (·.i < ·.i)
  let (md, _) ← readModuleData (dir / "M.olean")
  let payloads := CommandEntries.ofModuleData md
  let usage ← IO.ofExcept <| Json.parse (← IO.FS.readFile (dir / "M.usage"))
  IO.println s!"noskip {(usage.getObjValAs? Bool "noskip").toOption}, \
    reason {(usage.getObjValAs? String "noskipReason").toOption}"
  let names := [`logExt, `otherExt, `scopeExt]
  for o in obs do
    let some ce := payloads.find? (·.idx == o.i) | throw <| IO.userError s!"no payload {o.i}"
    let replay ← try
        let env ← replayCommandEntries (← CommandEntries.Testing.rollbackTo o.before.env o.after.env) ce (scopeDepth o.before.env) {}
        let full ← view o.after.env
        let got ← view env
        pure (if full == got then "replay matches" else s!"replay differs:\n    full     {full}\n    replayed {got}")
      catch _ => pure "refused"
    IO.println s!"{o.i}: stateOnly {ce.stateOnly.filter names.contains}, \
      entries {ce.entries.filterMap fun e => if names.contains e.ext then some s!"{e.ext}.{e.view}" else none}; {replay}"

#eval main
