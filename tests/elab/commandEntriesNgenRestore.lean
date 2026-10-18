import Lean
/-! The name generator reaches the environment: an imported command elaborator names an axiom after `mkFreshId`, and
proof-mode tactics store generated names in theorem values. So a kept command leaves exactly the generator its record
holds after it (`post.ngen`, `ModuleUsage.CommandPost.restoreNgen`), and only from the generator its record holds
before it (`post.ngenBefore`), which the command's context digest covers; from any other generator the restore is an
error naming both. In `M` the first `fresh_axiom` command is kept (its payload replayed) and the later commands are
elaborated again from the restored generator: from the generator as it was before the kept command, they give the
full run's constants and values; from a generator already ahead, the restore refuses. In `N` the kept command sets
the generator back (`ngen := {}`) and declares, so the generator after it is below the one before it; the next
command, elaborated again from the restored generator, names the full run's axiom. -/
open Lean Elab Command

def runLean (dir : System.FilePath) (args : Array String) : IO Unit := do
  let out ← IO.Process.output { cmd := "lean", args, cwd := dir, env := #[("LEAN_PATH", some dir.toString)] }
  unless out.exitCode = 0 do
    throw <| IO.userError s!"lean {args} failed ({out.exitCode}):\n{out.stdout}\n{out.stderr}"

def xSource : String := "import Lean\nopen Lean Elab Command\n\
  syntax \"fresh_axiom\" : command\n\
  elab \"fresh_axiom\" : command => do\n\
  \x20 let .num _ i ← liftCoreM mkFreshId | unreachable!\n\
  \x20 let n := Name.mkSimple s!\"generated{i}\"\n\
  \x20 liftCoreM <| addDecl (.axiomDecl { name := n, levelParams := [], type := mkConst ``Nat, isUnsafe := false })\n\
  syntax \"reset_def \" ident : command\n\
  elab \"reset_def \" n:ident : command => do\n\
  \x20 modify fun s => { s with ngen := {} }\n\
  \x20 elabCommand (← `(def $n : Nat := 0))\n"

def mSource : String := "import X\nimport Std.Tactic.Do\nopen Std.Do\n\
  fresh_axiom\n\
  fresh_axiom\n\
  theorem pm (σs : List Type) (Q : SPred σs) : Q ⊢ₛ Q := by\n  mstart\n  mintro HQ\n  mexact HQ\n"

def nSource : String := "import X\n\
  def w1 (n : Nat) : Nat := match n with | 0 => 1 | k + 1 => k\n\
  def w2 (n : Nat) : Nat := match n with | 0 => 2 | k + 1 => k + 1\n\
  reset_def x\n\
  fresh_axiom\n"

def localNames (env : Environment) : List Name :=
  (env.constants.foldStage2 (fun ns n _ => ns.push n) #[]).toList.filter
    fun n => n.toString.startsWith "generated" || n == `pm

/-- The generator a kept command leaves (`ModuleUsage.CommandPost.restoreNgen`), given its record's `post`. -/
def restored (post : Json) (current : NameGenerator) : Except String NameGenerator := do
  let post ← (fromJson? post : Except String ModuleUsage.CommandPost)
  post.restoreNgen current

unsafe def main : IO Unit := IO.FS.withTempDir fun dir => do
  IO.FS.writeFile (dir / "X.lean") xSource
  runLean dir #["-o", "X.olean", "X.lean"]
  initSearchPath (← getBuildDir) [dir]
  IO.FS.writeFile (dir / "M.lean") mSource
  enableInitializersExecution
  let some fullEnv ← Elab.runFrontend mSource {} "M.lean" `M (oleanFileName? := some (dir / "M.olean")) |
    throw <| IO.userError "full elaboration failed"
  let obs := (← ModuleUsage.commandObservationsRef.get).qsort (·.i < ·.i)
  let (md, _) ← readModuleData (dir / "M.olean")
  let payloads := CommandEntries.ofModuleData md
  let usage ← IO.ofExcept <| Json.parse (← IO.FS.readFile (dir / "M.usage"))
  let records := (usage.getObjValAs? (Array Json) "commands").toOption.getD #[]
  -- commands: 0 `open`, 1 and 2 `fresh_axiom`, 3 `theorem pm`
  let some kept := obs.find? (·.i == 1) | throw <| IO.userError "no observation 1"
  let some ce := payloads.find? (·.idx == 1) | throw <| IO.userError "no payload 1"
  let post := (records[1]?.bind fun r => (r.getObjVal? "post").toOption).getD .null
  IO.println s!"full run: {localNames fullEnv}; command 1 stateOnly {ce.stateOnly}"
  let replayed ← replayCommandEntries (← CommandEntries.Testing.rollbackTo kept.before.env kept.after.env) ce
    (scopeDepth kept.before.env) {}
  let ctx : Command.Context := { fileName := "M.lean", fileMap := mSource.toFileMap, snap? := none, cancelTk? := none }
  let fullValue := (fullEnv.find? `pm).bind (·.value? (allowOpaque := true))
  let ahead := { kept.before.ngen with idx := kept.after.ngen.idx + 100 }
  for (label, current) in [("generator as before command 1", kept.before.ngen),
      ("generator already ahead of post.ngen", ahead)] do
    match restored post current with
    | .error e => IO.println s!"{label}: {e}"
    | .ok ngen =>
      let mut st := { kept.before with env := replayed, ngen }
      let mut errs : Array String := #[]
      for i in [2, 3] do
        let some o := obs.find? (·.i == i) | throw <| IO.userError s!"no observation {i}"
        let (_, after) ← ((elabCommandTopLevel o.stx).run ctx |>.run st).toIO fun _ => IO.userError "failed"
        errs := errs ++ (← (after.messages.toList.filter (·.severity == .error)).mapM (·.toString))
        st := { after with messages := {} }
      let value := (st.env.find? `pm).bind (·.value? (allowOpaque := true))
      let sameValue := match value, fullValue with
        | some v, some w => v.equal w
        | _, _ => false
      let exact := ModuleUsage.NGenRecord.ofNameGenerator ngen ==
        ModuleUsage.NGenRecord.ofNameGenerator kept.after.ngen
      IO.println s!"{label}: restored post.ngen {exact}, constants {localNames st.env}, \
        pm value as in the full run {sameValue}, errors {errs.toList.map (·.trimAscii.copy)}"
  -- N's commands: 0 `def w1`, 1 `def w2`, 2 `reset_def x`, 3 `fresh_axiom`
  IO.FS.writeFile (dir / "N.lean") nSource
  enableInitializersExecution
  let some nEnv ← Elab.runFrontend nSource {} "N.lean" `N (oleanFileName? := some (dir / "N.olean")) |
    throw <| IO.userError "full elaboration of N failed"
  let obs := (← ModuleUsage.commandObservationsRef.get).qsort (·.i < ·.i)
  let (md, _) ← readModuleData (dir / "N.olean")
  let payloads := CommandEntries.ofModuleData md
  let usage ← IO.ofExcept <| Json.parse (← IO.FS.readFile (dir / "N.usage"))
  let records := (usage.getObjValAs? (Array Json) "commands").toOption.getD #[]
  let some kept := obs.find? (·.i == 2) | throw <| IO.userError "no observation 2 in N"
  let some next := obs.find? (·.i == 3) | throw <| IO.userError "no observation 3 in N"
  let some ce := payloads.find? (·.idx == 2) | throw <| IO.userError "no payload 2 in N"
  let post := (records[2]?.bind fun r => (r.getObjVal? "post").toOption).getD .null
  let replayed ← replayCommandEntries (← CommandEntries.Testing.rollbackTo kept.before.env kept.after.env) ce
    (scopeDepth kept.before.env) {}
  let ngen ← IO.ofExcept (restored post kept.before.ngen)
  let ctx : Command.Context := { fileName := "N.lean", fileMap := nSource.toFileMap, snap? := none, cancelTk? := none }
  let st := { kept.before with env := replayed, ngen }
  let (_, after) ← ((elabCommandTopLevel next.stx).run ctx |>.run st).toIO fun _ => IO.userError "failed"
  IO.println s!"N, command 2 sets the generator back: stateOnly {ce.stateOnly}, generator after it below the one \
    before it {decide (kept.after.ngen.idx < kept.before.ngen.idx)}; command 3: full run {localNames nEnv}, \
    after keeping command 2 {localNames after.env}"

#eval main
