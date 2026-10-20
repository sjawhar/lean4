import Lean
/-! A declaration command whose writes to a persistent extension's state the recorder cannot see has its payload
refused for that extension: an entry plus a write through the extension's
underlying `EnvExtension` (`toEnvExtension.modifyState`) on a simple, a parametric and a scoped extension; such a raw
write alone in each view a write can reach (the main-branch view of a `.mainOnly` extension, both views of a `.sync`
extension, the main-branch view alone of a `.sync` extension); and a log-based extension's `modifyState` in the
main-branch view alone of an `.async` extension. Writes the recorder sees are replayed into the views they reached,
and replay reproduces both views: an entry added to the main-branch view alone (`addEntry` with
`asyncMode := .local`) of an `.async` extension, one added on the main thread (both views), and one added from an
asynchronous proof (checked view only). The attributes are registered by an imported module, so each command that runs
one is also refused for it (`Refusal.foreignAttribute`); the replay drops that refusal to check the records themselves.
-/
open Lean

def runLean (dir : System.FilePath) (args : Array String) : IO Unit := do
  let out ← IO.Process.output { cmd := "lean", args, cwd := dir, env := #[("LEAN_PATH", some dir.toString)] }
  unless out.exitCode = 0 do
    throw <| IO.userError s!"lean {args} failed ({out.exitCode}):\n{out.stdout}\n{out.stderr}"

def xSource : String := "import Lean\nopen Lean\n\
  initialize mainLog : SimplePersistentEnvExtension Name NameSet ← registerSimplePersistentEnvExtension { \
    addEntryFn := fun s n => s.insert n, addImportedFn := fun _ => {} }\n\
  initialize syncLog : SimplePersistentEnvExtension Name NameSet ← registerSimplePersistentEnvExtension { \
    addEntryFn := fun s n => s.insert n, addImportedFn := fun _ => {}, asyncMode := .sync }\n\
  initialize asyncLog : SimplePersistentEnvExtension Name NameSet ← registerSimplePersistentEnvExtension { \
    addEntryFn := fun s n => s.insert n, addImportedFn := fun _ => {}, asyncMode := .async .mainEnv }\n\
  initialize branchLog : SimplePersistentEnvExtension Name NameSet ← registerSimplePersistentEnvExtension { \
    addEntryFn := fun s n => s.insert n, addImportedFn := fun _ => {}, asyncMode := .async .asyncEnv }\n\
  initialize paramAttr : ParametricAttribute Nat ← registerParametricAttribute { \
    name := `my_param, ref := `myParamExt, descr := \"test\", getParam := fun _ _ => pure 3 }\n\
  initialize scopeExt : SimpleScopedEnvExtension Name NameSet ← registerSimpleScopedEnvExtension { \
    addEntry := fun s n => s.insert n, initial := {} }\n\
  initialize registerBuiltinAttribute { name := `scope_add, descr := \"test\", \
    add := fun decl _ kind => scopeExt.add decl kind }\n\
  def rawSide (ext : PersistentEnvExtension Name Name (List Name × NameSet)) (side : Name) \
      (mode := ext.toEnvExtension.asyncMode) (env : Environment) : Environment := \
    ext.toEnvExtension.modifyState (asyncMode := mode) env fun ps => \
      { ps with state := (ps.state.1, ps.state.2.insert side) }\n\
  initialize registerBuiltinAttribute { name := `raw_simple, descr := \"test\", \
    add := fun decl _ _ => modifyEnv fun env => rawSide mainLog `simpleSide (env := mainLog.addEntry env decl) }\n\
  initialize registerBuiltinAttribute { name := `raw_param, descr := \"test\", \
    add := fun _ _ _ => modifyEnv fun env => paramAttr.ext.toEnvExtension.modifyState env fun ps => \
      { ps with state := (ps.state.1, ps.state.2.insert `paramSide 9) } }\n\
  initialize registerBuiltinAttribute { name := `raw_scoped, descr := \"test\", \
    add := fun _ _ _ => modifyEnv fun env => scopeExt.ext.toEnvExtension.modifyState env fun ps => { ps with state := \
      { ps.state with stateStack := ps.state.stateStack.map fun l => { l with state := l.state.insert `scopeSide } } } }\n\
  initialize registerBuiltinAttribute { name := `raw_main_view, descr := \"test\", \
    add := fun _ _ _ => modifyEnv (rawSide mainLog `mainViewSide (env := ·)) }\n\
  initialize registerBuiltinAttribute { name := `raw_both_views, descr := \"test\", \
    add := fun _ _ _ => modifyEnv (rawSide syncLog `bothViewsSide (env := ·)) }\n\
  initialize registerBuiltinAttribute { name := `raw_base_view, descr := \"test\", \
    add := fun _ _ _ => modifyEnv (rawSide syncLog `baseViewSide (mode := .local) (env := ·)) }\n\
  initialize registerBuiltinAttribute { name := `local_add, descr := \"test\", \
    add := fun decl _ _ => modifyEnv (asyncLog.addEntry (asyncMode := .local) · decl) }\n\
  initialize registerBuiltinAttribute { name := `local_modify, descr := \"test\", \
    add := fun _ _ _ => modifyEnv fun env => \
      PersistentEnvExtension.modifyState (asyncMode := .local) asyncLog env fun (l, s) => (l, s.insert `localSide) }\n\
  initialize registerBuiltinAttribute { name := `main_add, descr := \"test\", \
    add := fun decl _ _ => modifyEnv (asyncLog.addEntry (asyncDecl := decl) · decl) }\n"

def mSource : String := "import X\n\
  @[raw_simple] def d1 : Nat := 0\n\
  @[my_param, raw_param] def d2 : Nat := 0\n\
  @[scope_add, raw_scoped] def d3 : Nat := 0\n\
  @[raw_main_view] def d4 : Nat := 0\n\
  @[raw_both_views] def d5 : Nat := 0\n\
  @[raw_base_view] def d6 : Nat := 0\n\
  @[local_add] def d7 : Nat := 0\n\
  @[local_modify] def d8 : Nat := 0\n\
  @[main_add] def d9 : Nat := 0\n\
  elab \"add_t10\" : tactic => Lean.modifyEnv (branchLog.addEntry (asyncDecl := `t10) · `t10)\n\
  theorem t10 : True := by\n  add_t10\n  exact trivial\n"

/-- Every state of the test's own extensions a later command can read: the checked and the main-branch view of each,
whatever its registered mode (a write in another mode reaches the other view). -/
unsafe def view (exts : List (PersistentEnvExtension EnvExtensionEntry EnvExtensionEntry EnvExtensionState))
    (env : Environment) : String := Id.run do
  let mut parts := #[]
  for ext in exts do
    for v in [EnvExtension.View.checked, .main] do
      let s := (ext.toEnvExtension.getStateIn env v).state
      let shown : String :=
        if ext.name == `myParamExt then
          let (keys, m) : List Name × NameMap Nat := unsafeCast s
          s!"{keys}/{m.toList}"
        else if ext.name == `scopeExt then
          let st : ScopedEnvExtension.StateStack Name Name NameSet := unsafeCast s
          s!"{st.stateStack.map (·.state.toList)}"
        else
          let (log, set) : List Name × NameSet := unsafeCast s
          s!"{log}/{set.toList}"
      parts := parts.push s!"{ext.name}.{v}={shown}"
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
  let names := [`mainLog, `syncLog, `asyncLog, `branchLog, `myParamExt, `scopeExt]
  let exts := (← persistentEnvExtensionsRef.get).toList.filter (names.contains ·.name)
  for o in obs do
    let some ce := payloads.find? (·.idx == o.i) | throw <| IO.userError s!"no payload {o.i}"
    let ce := { ce with refusals := ce.refusals.filter (!· matches .foreignAttribute _) }
    let replay ← try
        let env ← replayCommandEntries (← CommandEntries.Testing.rollbackTo o.before.env o.after.env) ce {}
        let full := view exts o.after.env
        let got := view exts env
        pure (if full == got then "replay matches" else s!"replay differs:\n    full     {full}\n    replayed {got}")
      catch _ => pure "refused"
    IO.println s!"{o.i}: refused for {(ce.refusals.filterMap (·.ext?)).filter names.contains}, \
      entries {CommandEntries.Testing.shownEntries ce names.contains}; {replay}"

#eval main
