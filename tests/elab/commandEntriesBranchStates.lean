import Lean
/-! An asynchronous constant's own extension states survive a keep, whatever mode the extension was registered with
and whether or not its record is empty (`decl2f-delta3-review.md` finding 2). A per-declaration read,
`getState (asyncMode := .async .asyncEnv) (asyncDecl := t)`, returns the states of `t`'s branch, as core does for
`matchEqnsExt`. Module `X` registers a `.local` and a `.sync` persistent extension, a command cache over a `.local`
`EnvExtension`, and a scoped extension; its tactics and attributes write them from a theorem's branch. Each theorem
of `M` is kept (`readdCommandConstants`, `replayCommandEntries`, `finishRealizationContexts` on the command's
before-environment) and read per declaration; the read must equal the full run's:
* (a) `record_in_branch` writes the `.local`, the `.sync` extension and the cache in the branch;
* (b) a theorem with an empty record: a macro adds `mainSide` to the `.local` extension on the main branch after the
  theorem's branch forked, so a theorem re-added synchronously would read it, the full run's branch does not;
* (c) a scoped stack in the branch: `open Foo in theorem` forks the branch inside a pushed level with `Foo` active;
* (d) a local entry in that scope (`attribute [local …] x in theorem`);
* (e) a branch write to a scoped extension's state that no stack operation expresses: the command is refused
  (`stateOnly`, replay throws) and the module is `noskip`. -/
open Lean

def runLean (dir : System.FilePath) (args : Array String) : IO Unit := do
  let out ← IO.Process.output { cmd := "lean", args, cwd := dir, env := #[("LEAN_PATH", some dir.toString)] }
  unless out.exitCode = 0 do
    throw <| IO.userError s!"lean {args} failed ({out.exitCode}):\n{out.stdout}\n{out.stderr}"

def xSource : String := "\n".intercalate [
  "import Lean", "open Lean Elab Tactic",
  "initialize localLog : SimplePersistentEnvExtension Name NameSet ← registerSimplePersistentEnvExtension {",
  "  addEntryFn := fun s n => s.insert n, addImportedFn := fun _ => {}, asyncMode := .local }",
  "initialize syncLog : SimplePersistentEnvExtension Name NameSet ← registerSimplePersistentEnvExtension {",
  "  addEntryFn := fun s n => s.insert n, addImportedFn := fun _ => {}, asyncMode := .sync }",
  "initialize cacheLogExt : EnvExtension NameSet ← do",
  "  let ext ← registerEnvExtension (pure {}) (asyncMode := .local)",
  "  registerCommandCacheExtension `cacheLog ext (fun before after => (NameSet.sharedDiff before after).1)",
  "    (fun s n => s.insert n)",
  "initialize scopeExt : SimpleScopedEnvExtension Name NameSet ← registerSimpleScopedEnvExtension {",
  "  addEntry := fun s n => s.insert n, initial := {} }",
  "initialize registerBuiltinAttribute {",
  "  name := `scope_attr, descr := \"t\", add := fun decl _ kind => scopeExt.add decl kind }",
  "initialize registerBuiltinAttribute {",
  "  name := `log_main, descr := \"t\", add := fun _ _ _ => modifyEnv fun env => localLog.addEntry env `mainSide }",
  "elab \"record_in_branch\" : tactic => do",
  "  modifyEnv fun env => localLog.addEntry env `fromBranch",
  "  modifyEnv fun env => syncLog.addEntry env `fromBranch",
  "  modifyEnv fun env => cacheLogExt.modifyState env fun s => s.insert `fromBranch",
  "elab \"modify_in_branch\" : tactic =>",
  "  modifyEnv fun env => scopeExt.ext.toEnvExtension.modifyState (asyncMode := .local) env fun ps =>",
  "    { ps with state := { ps.state with stateStack := ps.state.stateStack.map fun l =>",
  "      { l with state := l.state.insert `modSide } } }",
  "syntax \"thm_log \" ident : command",
  "macro_rules",
  "  | `(thm_log $n) => return mkNullNode #[← `(theorem $n : True := trivial), ← `(attribute [log_main] $n)]",
  "def cacheLogOf (env : Environment) (decl : Name) : List Name :=",
  "  (cacheLogExt.getState (asyncMode := .async .asyncEnv) (asyncDecl := decl) env).toList",
  ""]

def mSource : String := "\n".intercalate [
  "import X",
  "def x : Nat := 0",
  "namespace Foo",
  "def y : Nat := 0",
  "attribute [scoped scope_attr] y",
  "end Foo",
  "theorem t : True := by record_in_branch; trivial",
  "thm_log t2",
  "open Foo in theorem t3 : True := by trivial",
  "attribute [local scope_attr] x in theorem t4 : True := trivial",
  "theorem t5 : True := by modify_in_branch; trivial",
  ""]

def newConsts (before after : Environment) : NameMap ConstantInfo :=
  after.constants.foldStage2 (fun m n c => if before.constants.contains n then m else m.insert n c) {}

abbrev ErasedExt := PersistentEnvExtension EnvExtensionEntry EnvExtensionEntry EnvExtensionState

/-- The registered persistent extension `name`. -/
def persistentExt (name : Name) : IO ErasedExt := do
  let some e := (← persistentEnvExtensionsRef.get).find? (·.name == name) | throw <| IO.userError s!"no {name}"
  return e

/-- What a per-declaration read of the extensions of `X` gives for `decl`, and the main-branch view of `localLog`. -/
unsafe def reads (env : Environment) (decl : Name) (withStack : Bool) : IO String := do
  let async := EnvExtension.AsyncMode.async .asyncEnv
  let log (name : Name) : IO (List Name) := do
    let e ← persistentExt name
    return (unsafeCast (e.getState (asyncMode := async) (asyncDecl := decl) env) : List Name × NameSet).2.toList
  let cacheLogOf ← IO.ofExcept (env.evalConst (Environment → Name → List Name) {} `cacheLogOf)
  let cacheLog := cacheLogOf env decl
  let localMain := (unsafeCast ((← persistentExt `localLog).getState (asyncMode := .local) env) :
    List Name × NameSet).2.toList
  let mut s := s!"localLog {← log `localLog}, syncLog {← log `syncLog}, cacheLog {cacheLog}, \
    main localLog {localMain}"
  if withStack then
    let stack : ScopedEnvExtension.StateStack Name Name NameSet :=
      unsafeCast ((← persistentExt `scopeExt).getState (asyncMode := async) (asyncDecl := decl) env)
    s := s ++ s!", scopeExt stack {stack.stateStack.map (·.activeScopes.toList)}, \
      top {(stack.stateStack.head?.map (·.state.toList)).getD []}"
  return s

unsafe def main : IO Unit := IO.FS.withTempDir fun dir => do
  IO.FS.writeFile (dir / "X.lean") xSource
  runLean dir #["-o", "X.olean", "X.lean"]
  initSearchPath (← getBuildDir) [dir]
  enableInitializersExecution
  IO.FS.writeFile (dir / "M.lean") mSource
  let some _ ← Elab.runFrontend mSource {} "M.lean" `M (oleanFileName? := some (dir / "M.olean")) |
    throw <| IO.userError "elaboration of M failed"
  let obs := (← ModuleUsage.commandObservationsRef.get).qsort (·.i < ·.i)
  let (md, _) ← readModuleData (dir / "M.olean")
  let payloads := CommandEntries.ofModuleData md
  let usage ← IO.ofExcept <| Json.parse (← IO.FS.readFile (dir / "M.usage"))
  IO.println s!"module noskip {(usage.getObjValAs? Bool "noskip").toOption}"
  let cases : List (String × Name × Bool) := [
    ("a: record in the branch", `t, false), ("b: empty record, main-branch write after the fork", `t2, false),
    ("c: open Foo in", `t3, true), ("d: local entry in the scope", `t4, true),
    ("e: state write no operation expresses", `t5, true)]
  for (label, decl, withStack) in cases do
    let some o := obs.find? fun o => o.after.env.contains decl && !o.before.env.contains decl |
      throw <| IO.userError s!"no command declaring {decl}"
    let some ce := payloads.find? (·.idx == o.i) | throw <| IO.userError s!"no payload {o.i}"
    let full ← reads o.after.env decl withStack
    let kept ← try
        let env ← readdCommandConstants o.before.env ce (newConsts o.before.env o.after.env) {}
        let env ← replayCommandEntries env ce (scopeDepth o.before.env) {}
        let env ← finishRealizationContexts env ce {}
        let got ← reads env decl withStack
        pure (if got == full then "kept reads equal" else s!"kept DIFFERS: {got}")
      catch _ => pure "refused"
    IO.println s!"{label} ({decl}): full {full}; {kept}; stateOnly {ce.stateOnly.filter (· == `scopeExt)}"

#eval main
