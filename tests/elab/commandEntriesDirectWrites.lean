import Lean
/-! A declaration command that adds an entry to an extension whose state delta reads an entry log (a simple
persistent extension, a parametric attribute, a scoped extension) and in the same command writes that extension's
state directly (`modifyState`, `setState`, or a scoped extension's `ext.ext.modifyState`) refuses its payload for
the extension: replaying the entry alone would lose the direct write. A direct write alone refuses it too.
Extensions whose delta diffs the whole state (map families) see direct writes and stay
replayable: a `simproc` declaration inserts into its map directly, and compiling a definition memoizes types. The
attributes are registered by an imported module, so each command that runs one is also refused for it
(`Refusal.foreignAttribute`); the per-command lines show each extension's refusal. -/
open Lean

def runLean (dir : System.FilePath) (args : Array String) : IO Unit := do
  let out ← IO.Process.output { cmd := "lean", args, cwd := dir, env := #[("LEAN_PATH", some dir.toString)] }
  unless out.exitCode = 0 do
    throw <| IO.userError s!"lean {args} failed ({out.exitCode}):\n{out.stdout}\n{out.stderr}"

def xSource : String := "import Lean\nopen Lean\n\
  initialize logExt : SimplePersistentEnvExtension Name NameSet ← registerSimplePersistentEnvExtension { \
    addEntryFn := fun s n => s.insert n, addImportedFn := fun _ => {} }\n\
  initialize registerBuiltinAttribute { name := `mixed_modify, descr := \"test\", \
    add := fun decl _ _ => modifyEnv fun env => logExt.modifyState (logExt.addEntry env decl) (·.insert `modifySide) }\n\
  initialize registerBuiltinAttribute { name := `mixed_set, descr := \"test\", \
    add := fun decl _ _ => modifyEnv fun env => \
      let env := logExt.addEntry env decl; logExt.setState env ((logExt.getState env).insert `setSide) }\n\
  initialize registerBuiltinAttribute { name := `only_write, descr := \"test\", \
    add := fun _ _ _ => modifyEnv (logExt.modifyState · (·.insert `onlySide)) }\n\
  initialize paramAttr : ParametricAttribute Nat ← registerParametricAttribute { \
    name := `my_param, ref := `myParamExt, descr := \"test\", getParam := fun _ _ => pure 3 }\n\
  initialize registerBuiltinAttribute { name := `param_side, descr := \"test\", \
    add := fun _ _ _ => modifyEnv fun env => paramAttr.ext.modifyState env fun (l, m) => (l, m.insert `paramSide 9) }\n\
  initialize scopeExt : SimpleScopedEnvExtension Name NameSet ← registerSimpleScopedEnvExtension { \
    addEntry := fun s n => s.insert n, initial := {} }\n\
  initialize registerBuiltinAttribute { name := `scope_mixed, descr := \"test\", \
    add := fun decl _ kind => do \
      scopeExt.add decl kind; \
      modifyEnv fun env => scopeExt.ext.modifyState env fun s => \
        { s with stateStack := s.stateStack.map fun l => { l with state := l.state.insert `scopeSide } } }\n"

def mSource : String := "import X\n\
  @[mixed_modify] def d1 : Nat := 0\n\
  @[mixed_set] def d2 : Nat := 0\n\
  @[only_write] def d3 : Nat := 0\n\
  @[my_param, param_side] def d4 : Nat := 0\n\
  @[scope_mixed] def d5 : Nat := 0\n\
  open Lean Meta in simproc keepSucc (Nat.succ _) := fun _ => return .continue\n\
  def d6 (n : Nat) : Nat := n + 1\n"

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
  let exts ← persistentEnvExtensionsRef.get
  let find (n : Name) : IO (PersistentEnvExtension EnvExtensionEntry EnvExtensionEntry EnvExtensionState) := do
    let some e := exts.find? (·.name == n) | throw <| IO.userError s!"no extension {n}"
    return e
  let logExt ← find `logExt
  let paramExt ← find `myParamExt
  let scopeExt ← find `scopeExt
  -- the direct writes as later commands see them
  let view (env : Environment) : String :=
    let stateOf (ext : PersistentEnvExtension EnvExtensionEntry EnvExtensionEntry EnvExtensionState) :=
      ext.getState (asyncMode := ext.toEnvExtension.asyncMode.forExport) env
    let logState : NameSet := (unsafeCast (stateOf logExt) : List Name × NameSet).2
    let paramMap : NameMap Nat := (unsafeCast (stateOf paramExt) : List Name × NameMap Nat).2
    let scopeTop : NameSet :=
      match (unsafeCast (stateOf scopeExt) : ScopedEnvExtension.StateStack Name Name NameSet).stateStack with
      | top :: _ => top.state
      | [] => {}
    let side := [`modifySide, `setSide, `onlySide].filter logState.contains ++
      [`paramSide].filter paramMap.contains ++ [`scopeSide].filter scopeTop.contains
    s!"{side}"
  let watched := [`logExt, `myParamExt, `scopeExt, `Lean.Meta.Simp.simprocDeclExt, `Lean.Compiler.LCNF.monoTypeExt]
  for o in obs do
    let some ce := payloads.find? (·.idx == o.i) | throw <| IO.userError s!"no payload {o.i}"
    let replay ← try
        let env ← replayCommandEntries (← CommandEntries.Testing.rollbackTo o.before.env o.after.env) ce {}
        pure (if view env == view o.after.env then s!"replay matches {view env}"
          else s!"replay differs: full {view o.after.env}, replayed {view env}")
      catch _ => pure "refused"
    IO.println s!"{o.i}: refused for {(ce.refusals.filterMap (·.ext?)).filter watched.contains}, \
      entries {CommandEntries.Testing.shownEntries ce watched.contains}; {replay}"

#eval main
