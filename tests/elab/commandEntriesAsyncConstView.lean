import Lean
/-! A kept command's asynchronously elaborated constant keeps its own extension states (`decl2f-delta2-review.md`
finding 2). A docstring on a theorem elaborated in an asynchronous branch is written to that branch: the full run has
it in the checked view and in the theorem's own states (`getState (asyncDecl := t)`, which `findDocString?` and
`@[inherit_doc]` read), not in the main-branch view. The command is kept by re-adding its constants from the
recorded branch states (`readdCommandConstants`), replaying its payload and registering its realization contexts
(`finishRealizationContexts`); the read then finds the docstring and the next command, `@[inherit_doc t] def g`, gets
it, as in the full run. -/
open Lean Elab Command

def docIn (env : Environment) (v : EnvExtension.View) (n : Name) : Bool :=
  (docStringExt.toEnvExtension.getStateIn env v).state.contains n

def newConsts (before after : Environment) : NameMap ConstantInfo :=
  after.constants.foldStage2 (fun m n c => if before.constants.contains n then m else m.insert n c) {}

unsafe def main : IO Unit := IO.FS.withTempDir fun dir => do
  initSearchPath (← getBuildDir)
  enableInitializersExecution
  let src := "import Lean\n/-- doc of t -/\ntheorem t : True := trivial\n@[inherit_doc t] def g : Nat := 0\n"
  IO.FS.writeFile (dir / "M.lean") src
  let some full ← Elab.runFrontend src {} "M.lean" `M (oleanFileName? := some (dir / "M.olean")) |
    throw <| IO.userError "elaboration failed"
  let obs := (← ModuleUsage.commandObservationsRef.get).qsort (·.i < ·.i)
  let (md, _) ← readModuleData (dir / "M.olean")
  let payloads := CommandEntries.ofModuleData md
  IO.println s!"full run, t: docstring in checked view {docIn full .checked `t}, in main-branch view \
    {docIn full .main `t}, read with asyncDecl {(← findDocString? full `t).isSome}"
  let some o := obs.find? (·.i == 0) | throw <| IO.userError "no observation 0"
  let some next := obs.find? (·.i == 1) | throw <| IO.userError "no observation 1"
  let some ce := payloads.find? (·.idx == 0) | throw <| IO.userError "no payload 0"
  IO.println s!"command 0 payload: stateOnly {ce.stateOnly}"
  let env ← readdCommandConstants o.before.env ce (newConsts o.before.env o.after.env) {}
  let env ← replayCommandEntries env ce (scopeDepth o.before.env) {}
  let env ← finishRealizationContexts env ce {}
  IO.println "keep succeeded"
  IO.println s!"after keep, t: docstring in checked view {docIn env .checked `t}, in main-branch view \
    {docIn env .main `t}, read with asyncDecl {(← findDocString? env `t).isSome}"
  let ctx : Command.Context := { fileName := "M.lean", fileMap := src.toFileMap, snap? := none, cancelTk? := none }
  let (_, after) ← ((elabCommandTopLevel next.stx).run ctx |>.run { o.after with env }).toIO
    fun _ => IO.userError "failed"
  IO.println s!"next command @[inherit_doc t] def g: docstring full run {← findDocString? full `g}, after keep \
    {← findDocString? after.env `g}"

#eval main
