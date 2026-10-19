import Lean
/-! The public test-support function `CommandEntries.Testing.rollbackTo` writes extension states through the counted
core, so a declaration command whose attribute uses it to install a changed state of a log extension is refused and
the module is `noskip` (`decl2f-delta3-review.md` finding 5). Writing below the counters would leave
the payload empty and its replay would lose the change. The attribute builds a state with an extra derived element in
a scratch environment and copies it into the real one. `d0` is the module's only declaration, so the module's
`noskip` comes from it alone; the copy writes every extension, each counted, so the reason names the first extension
in registration order, and the test checks that `logExt` is among the extensions the command is refused for. -/
open Lean

def runLean (dir : System.FilePath) (args : Array String) : IO Unit := do
  let out ← IO.Process.output { cmd := "lean", args, cwd := dir, env := #[("LEAN_PATH", some dir.toString)] }
  unless out.exitCode = 0 do
    throw <| IO.userError s!"lean {args} failed ({out.exitCode}):\n{out.stdout}\n{out.stderr}"

def xSource : String := "import Lean\nopen Lean\n\
  abbrev LogExt := PersistentEnvExtension Name Name (List Name × NameSet)\n\
  initialize logExt : SimplePersistentEnvExtension Name NameSet ← registerSimplePersistentEnvExtension { \
    addEntryFn := fun s n => s.insert n, addImportedFn := fun _ => {} }\n\
  initialize registerBuiltinAttribute { name := `bypass, descr := \"t\", \
    add := fun decl _ _ => do \
      let env ← getEnv; \
      let src := PersistentEnvExtension.modifyState (logExt : LogExt) (logExt.addEntry env decl) \
        fun (l, s) => (l, s.insert `bypassSide); \
      setEnv (← CommandEntries.Testing.rollbackTo src (logExt.addEntry env decl)) }\n"

def mSource : String := "import X\n@[bypass] def d0 : Nat := 0\n"

unsafe def view (env : Environment) : IO String := do
  let some e := (← persistentEnvExtensionsRef.get).find? (·.name == `logExt) | throw <| IO.userError "no logExt"
  let mut parts := #[]
  for v in [EnvExtension.View.checked, .main] do
    let (log, set) : List Name × NameSet := unsafeCast (e.toEnvExtension.getStateIn env v).state
    parts := parts.push s!"{v}={log}/{set.toList}"
  return ", ".intercalate parts.toList

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
  let reason := (usage.getObjValAs? String "noskipReason").toOption
  IO.println s!"module noskip {(usage.getObjValAs? Bool "noskip").toOption}, reason {reason}"
  for o in obs do
    let some ce := payloads.find? (·.idx == o.i) | throw <| IO.userError s!"no payload {o.i}"
    let replay ← try
        let env ← replayCommandEntries (← CommandEntries.Testing.rollbackTo o.before.env o.after.env) ce {}
        let full ← view o.after.env
        let got ← view env
        pure (if full == got then "replay matches" else s!"replay differs:\n    full     {full}\n    replayed {got}")
      catch _ => pure "refused"
    IO.println s!"{o.i}: refused for logExt {(ce.refusals.filterMap (·.ext?)).contains `logExt}; {replay}"

#eval main
