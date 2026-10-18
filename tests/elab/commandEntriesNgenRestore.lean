import Lean
/-! The name generator reaches the environment: an imported command elaborator names an axiom after `mkFreshId`, and
proof-mode tactics store generated names in theorem values. So a kept command leaves the generator its record holds
after it (`post.ngen`, `ModuleUsage.CommandPost.restoreNgen`), keeping the current generator when it is already ahead
(a re-elaborated earlier command used more identifiers), so that no identifier is generated twice. Here the first
`fresh_axiom` command is kept (its payload replayed) and the later commands are elaborated again from the generator
the restore gives: from the generator as it was before the kept command, they give the full run's constants and
values; from a generator already ahead, nothing collides (the proof-mode theorem's value then has other generated
names, and its context digest, which covers the generator, tells it apart). -/
open Lean Elab Command

def runLean (dir : System.FilePath) (args : Array String) : IO Unit := do
  let out ← IO.Process.output { cmd := "lean", args, cwd := dir, env := #[("LEAN_PATH", some dir.toString)] }
  unless out.exitCode = 0 do
    throw <| IO.userError s!"lean {args} failed ({out.exitCode}):\n{out.stdout}\n{out.stderr}"

unsafe def commandEntriesOf (e : EnvExtensionEntry) : CommandEntries := unsafeCast e

/-- `target` with the state of every extension a command payload replays taken from `source`. -/
def withReplayStateOf (source target : Environment) : IO Environment := do
  let mut target := target
  for ext in ← persistentEnvExtensionsRef.get do
    let mode := ext.toEnvExtension.asyncMode.forExport
    target := ext.toEnvExtension.setState target (ext.toEnvExtension.getState source (asyncMode := mode))
      (asyncMode := mode)
  for ext in ← commandCacheExtensionsRef.get do
    target := ext.copyState source target
  return localEntriesExt.setState target (localEntriesExt.getState source (asyncMode := .local))
    (asyncMode := .local)

def xSource : String := "import Lean\nopen Lean Elab Command\n\
  syntax \"fresh_axiom\" : command\n\
  elab \"fresh_axiom\" : command => do\n\
  \x20 let .num _ i ← liftCoreM mkFreshId | unreachable!\n\
  \x20 let n := Name.mkSimple s!\"generated{i}\"\n\
  \x20 liftCoreM <| addDecl (.axiomDecl { name := n, levelParams := [], type := mkConst ``Nat, isUnsafe := false })\n"

def mSource : String := "import X\nimport Std.Tactic.Do\nopen Std.Do\n\
  fresh_axiom\n\
  fresh_axiom\n\
  theorem pm (σs : List Type) (Q : SPred σs) : Q ⊢ₛ Q := by\n  mstart\n  mintro HQ\n  mexact HQ\n"

def localNames (env : Environment) : List Name :=
  (env.constants.foldStage2 (fun ns n _ => ns.push n) #[]).toList.filter
    fun n => n.toString.startsWith "generated" || n == `pm

/-- The generator a kept command leaves, by the rule `keepCommand` uses (`ModuleUsage.CommandPost.restoreNgen`). -/
def restored (post : Json) (current : NameGenerator) : IO NameGenerator := do
  let post ← IO.ofExcept (fromJson? post : Except String ModuleUsage.CommandPost)
  return post.restoreNgen current

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
  let payloads := ((md.entries.find? (·.1 == commandEntriesExt.name)).map (·.2)).getD #[] |>.map commandEntriesOf
  let usage ← IO.ofExcept <| Json.parse (← IO.FS.readFile (dir / "M.usage"))
  let records := (usage.getObjValAs? (Array Json) "commands").toOption.getD #[]
  -- commands: 0 `open`, 1 and 2 `fresh_axiom`, 3 `theorem pm`
  let some kept := obs.find? (·.i == 1) | throw <| IO.userError "no observation 1"
  let some ce := payloads.find? (·.idx == 1) | throw <| IO.userError "no payload 1"
  let post := (records[1]?.bind fun r => (r.getObjVal? "post").toOption).getD .null
  IO.println s!"full run: {localNames fullEnv}; command 1 stateOnly {ce.stateOnly}"
  let replayed ← replayCommandEntries (← withReplayStateOf kept.before.env kept.after.env) ce
    (scopeDepth kept.before.env) {}
  let ctx : Command.Context := { fileName := "M.lean", fileMap := mSource.toFileMap, snap? := none, cancelTk? := none }
  let fullValue := (fullEnv.find? `pm).bind (·.value? (allowOpaque := true))
  let ahead := { kept.before.ngen with idx := kept.after.ngen.idx + 100 }
  for (label, current) in [("generator as before command 1", kept.before.ngen),
      ("generator already ahead of post.ngen", ahead)] do
    let ngen ← restored post current
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
    IO.println s!"{label}: restored idx {decide (ngen.idx ≥ kept.after.ngen.idx)}, constants {localNames st.env}, \
      pm value as in the full run {sameValue}, errors {errs.toList.map (·.trimAscii.copy)}"

#eval main
