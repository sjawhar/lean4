import Lean
/-! A command that changes an extension's state without adding an entry to it or logging a stack operation (a
declaration attribute that edits the simp state through the scoped extension's underlying persistent extension) is
refused for the extension (`Refusal.inexpressible`), and `replayCommandEntries` refuses that payload instead of replaying it
without the change. An erasure (`attribute [-simp] x`) is a `ScopedEnvExtension.modifyState` (`Op.modify`), which
`ScopedEnvExtension.stackDelta` does not express, so it is refused too. A declaration command with such a change
makes the module `noreuse`. An erasure inside `attribute [-simp] x in theorem …` is undone on the main branch by
the command's own scope, but the theorem's asynchronous branch forked inside that scope and keeps it, and no stack
operation expresses an erasure, so that command is refused too (a refusal in the theorem's record). The commands after
an erasure see which lemma it erased in their context digest (`ctx`). -/
open Lean

def runLean (dir : System.FilePath) (args : Array String) : IO Unit := do
  let out ← IO.Process.output { cmd := "lean", args, cwd := dir, env := #[("LEAN_PATH", some dir.toString)] }
  unless out.exitCode = 0 do
    throw <| IO.userError s!"lean {args} failed ({out.exitCode}):\n{out.stdout}\n{out.stderr}"

/-- Elaborates `src` as module `M` in `dir` as `lean -o --usage` does; returns the command observations, the payloads
written to `M.olean` and `M.usage`. -/
unsafe def elabM (dir : System.FilePath) (src : String) :
    IO (Array ModuleUsage.CommandObservation × KeepPermit × Json) := do
  IO.FS.writeFile (dir / "M.lean") src
  enableInitializersExecution
  let some _ ← Elab.runFrontend src {} (dir / "M.lean").toString `M
      (oleanFileName? := some (dir / "M.olean")) (usageFileName? := some (dir / "M.usage")) |
    throw <| IO.userError "elaboration of M failed"
  let obs := (← ModuleUsage.commandObservations).qsort (·.i < ·.i)
  let some first := obs[0]? | throw <| IO.userError "no commands"
  let permit ← IO.ofExcept (← ModuleUsage.Testing.keepPermit first.before.env `M (dir / "M.olean") (dir / "M.usage"))
  let usage ← IO.ofExcept <| ModuleUsage.parseUsage (← IO.FS.readFile (dir / "M.usage"))
  return (obs, permit, usage)

def source (erased : Name) : String :=
  s!"import X\n@[simp] def victim : Nat := 1\n@[simp] def keep : Nat := 2\n@[simp] def other : Nat := 3\n\
    attribute [-simp] {erased}\nattribute [-simp] keep in theorem t1 : True := trivial\n\
    @[erase_probe] def d : Nat := 0\ntheorem t2 : True := trivial\n@[raw_erase] def d2 : Nat := 0\n"

def unfolds (env : Environment) (n : Name) : Bool := (Meta.simpExtension.getState env).isDeclToUnfold n

unsafe def replayed (obs : Array ModuleUsage.CommandObservation) (permit : KeepPermit) (i : Nat) (n : Name) :
    IO String := do
  let some o := obs.find? (·.i == i) | throw <| IO.userError s!"no observation {i}"
  let some ce := permit.payloads.find? (·.idx == i) | throw <| IO.userError s!"no payload {i}"
  try
    let env ← replayCommandEntries permit (← CommandEntries.Testing.rollbackTo o.before.env o.after.env) ce {}
    return s!"replayed: {n} unfolds {unfolds env n} (full run: {unfolds o.after.env n})"
  catch e =>
    return s!"refused: {e}"

def ctxs (usage : Json) : Array Json :=
  ((usage.getObjValAs? (Array Json) "commands").toOption.getD #[]).map fun c => (c.getObjVal? "ctx").toOption.getD .null

unsafe def main : IO Unit := IO.FS.withTempDir fun dir => do
  IO.FS.writeFile (dir / "X.lean") "import Lean\nopen Lean\n\
    initialize registerBuiltinAttribute { name := `erase_probe, descr := \"test\", \
      add := fun _ _ _ => Attribute.erase `keep `simp }\n\
    initialize registerBuiltinAttribute { name := `raw_erase, descr := \"test\", \
      add := fun _ _ _ => modifyEnv fun env => Meta.simpExtension.ext.modifyState env fun s => \
        { s with stateStack := s.stateStack.map fun st => { st with state := st.state.eraseCore (.decl `other) } } }\n"
  runLean dir #["-o", "X.olean", "--usage=X.usage", "X.lean"]
  initSearchPath (← getBuildDir) [dir]
  -- commands: 0 victim, 1 keep, 2 other, 3 attribute [-simp] victim, 4 … in theorem t1, 5 @[erase_probe] def d, 6 t2,
  -- 7 @[raw_erase] def d2
  let (obs, permit, usage) ← elabM dir (source `victim)
  IO.println s!"command 3 (attribute [-simp] victim): {← replayed obs permit 3 `victim}"
  IO.println s!"command 4 (attribute [-simp] keep in theorem t1): {← replayed obs permit 4 `keep}"
  IO.println s!"command 5 (@[erase_probe] def d): {← replayed obs permit 5 `keep}"
  IO.println s!"command 7 (@[raw_erase] def d2): {← replayed obs permit 7 `other}"
  IO.println s!"noreuse: {(usage.getObjValAs? Bool "noreuse").toOption}, \
    reason: {(usage.getObjValAs? String "noreuseReason").toOption}"
  IO.FS.createDirAll (dir / "v2")
  let (_, _, usage₂) ← elabM (dir / "v2") (source `other)
  let c₁ := ctxs usage
  let c₂ := ctxs usage₂
  IO.println s!"ctx after erasing victim vs other differs: {[4, 5, 6].map fun i => c₁[i]? != c₂[i]?}"
  IO.println s!"ctx before the erasure equal: {[0, 1, 2, 3].map fun i => c₁[i]? == c₂[i]?}"

#eval main
