import Lean
/-! The parts of `Elab.Command.State` other than the environment that a declaration command can change, and how
the recorder treats each (`ModuleUsage.commandStateFields`). A change to the command scope (`scopes`: an option, a
`variable`, a `universe`, made by a macro next to a `def`) refuses the payload (`Refusal.commandState`) and declines
the module (`noskip`); a scope the command restores
(`set_option … in`, `open … in`, dotted names) is not. `maxRecDepth`, which `set_option maxRecDepth … in` leaves
changed after the command, and the name generator `ngen` are replayed: the record's `post` holds them after the
command and the next command's context digest includes them (`commandEntriesNgenRestore`, `commandEntriesNgenDiff`
show why `ngen` matters). `nextMacroScope` is the same before and after every command. `messages` and `traceState`
are reset before every command, so a command does not see an earlier one's. -/
open Lean

structure Run where
  obs : Array ModuleUsage.CommandObservation
  payloads : Array CommandEntries
  usage : Json
  records : Array Json

unsafe def elabM (dir : System.FilePath) (src : String) : IO Run := do
  IO.FS.createDirAll dir
  IO.FS.writeFile (dir / "M.lean") src
  enableInitializersExecution
  let some _ ← Elab.runFrontend src {} "M.lean" `M (oleanFileName? := some (dir / "M.olean")) |
    throw <| IO.userError s!"elaboration failed:\n{src}"
  let obs := (← ModuleUsage.commandObservationsRef.get).qsort (·.i < ·.i)
  let (md, _) ← readModuleData (dir / "M.olean")
  let payloads := CommandEntries.ofModuleData md
  let usage ← IO.ofExcept <| Json.parse (← IO.FS.readFile (dir / "M.usage"))
  let records := (usage.getObjValAs? (Array Json) "commands").toOption.getD #[]
  return { obs, payloads, usage, records }

/-- Per command: its kind, the command-state fields its payload is refused for, and whether replay accepts it. -/
unsafe def report (dir : System.FilePath) (label src : String) : IO Run := do
  let r ← elabM dir src
  IO.println s!"== {label}: noskip {(r.usage.getObjValAs? Bool "noskip").toOption}, \
    reason {(r.usage.getObjValAs? String "noskipReason").toOption}"
  for o in r.obs do
    let some ce := r.payloads.find? (·.idx == o.i) | throw <| IO.userError s!"no payload {o.i}"
    let kind := (r.records[o.i]?.bind fun c => (c.getObjValAs? String "kind").toOption).getD "?"
    let markers := ce.refusals.filterMap fun | .commandState field => some field | _ => none
    let replay ← try
        discard <| replayCommandEntries (← CommandEntries.Testing.rollbackTo o.before.env o.after.env) ce {}
        pure "replayed"
      catch _ => pure "refused"
    IO.println s!"{o.i} {kind}: command-state markers {markers}, {replay}"
  return r

def postField (r : Run) (i : Nat) (field : String) : Option Json :=
  r.records[i]?.bind fun c => (c.getObjVal? "post").toOption.bind fun p => (p.getObjVal? field).toOption

unsafe def main : IO Unit := IO.FS.withTempDir fun dir => do
  initSearchPath (← getBuildDir)
  let header := "import Lean\nopen Lean Elab Command\n"
  discard <| report (dir / "option") "a macro sets an option next to a def" (header ++
    "set_option autoImplicit false\n\
    syntax \"opt_def \" ident : command\n\
    macro_rules | `(opt_def $n) => return mkNullNode #[← `(set_option autoImplicit true), ← `(def $n : Nat := 1)]\n\
    opt_def x\n\
    def g (y : α) : α := y\n")
  discard <| report (dir / "variable") "a macro adds a variable next to a def" (header ++
    "syntax \"var_def \" ident : command\n\
    macro_rules | `(var_def $n) => return mkNullNode #[← `(variable ($(mkIdent `k) : Nat)), ← `(def $n : Nat := 1)]\n\
    var_def x\n\
    def h : Nat := k\n")
  discard <| report (dir / "universe") "a macro declares a universe next to a def" (header ++
    "syntax \"univ_def \" ident : command\n\
    macro_rules | `(univ_def $n) => return mkNullNode #[← `(universe $(mkIdent `w)), ← `(def $n : Nat := 1)]\n\
    univ_def x\n\
    def idw (α : Sort w) (a : α) : α := a\n")
  let kept ← report (dir / "kept") "scopes the command restores" (header ++
    "set_option maxHeartbeats 1000 in def a : Nat := 0\n\
    open Nat in def b : Nat := succ 0\n\
    theorem A.B.c : True := trivial\n\
    set_option maxRecDepth 777 in theorem m1 : True := trivial\n\
    theorem m2 (n : Nat) : n + 0 = n ∧ True := by simp\n")
  for o in kept.obs do
    IO.println s!"{o.i}: nextMacroScope unchanged {o.before.nextMacroScope == o.after.nextMacroScope}, \
      maxRecDepth before {o.before.maxRecDepth} after {o.after.maxRecDepth}, \
      post {postField kept o.i "maxRecDepth" |>.map (·.compress)}, \
      post ngen idx is the generator's after the command \
      {((postField kept o.i "ngen").bind fun j => (fromJson? (α := ModuleUsage.NGenRecord) j).toOption).map (·.idx) == some o.after.ngen.idx}"
  let some o := kept.obs.back? | throw <| IO.userError "no observation"
  let st := o.before
  let d (s : Elab.Command.State) := ModuleUsage.ctxDigest s {} default
  IO.println s!"ctx depends on maxRecDepth: {d st != d { st with maxRecDepth := st.maxRecDepth + 1 }}, \
    on ngen: {d st != d { st with ngen := st.ngen.mkChild.2 }}"
  -- a command does not see the messages or traces of the command before it (the frontend prints the info)
  discard <| report (dir / "perCommand") "messages and traces are per command" (header ++
    "run_cmd logWarning \"a warning\"\n\
    set_option trace.debug true in run_cmd trace[debug] \"a trace\"\n\
    run_cmd logInfo m!\"messages {(← get).messages.toList.length}, traces {(← get).traceState.traces.size}\"\n")

#eval main
