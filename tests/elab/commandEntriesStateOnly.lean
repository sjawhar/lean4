import Lean
/-! A command that changes an extension's state without adding an entry to it (`attribute [-simp] x`, or a
declaration attribute that erases a simp lemma) records the extension in its payload's `stateOnly`, and
`replayCommandEntries` refuses that payload instead of replaying it without the erasure. A declaration command
with such a change declines the module (`noskip`). An erasure inside `attribute [-simp] x in theorem …` is undone
by the command's own scope and is not recorded. The commands after an erasure see which lemma it erased in their
context digest (`ctx`). -/
open Lean

def runLean (dir : System.FilePath) (args : Array String) : IO Unit := do
  let out ← IO.Process.output { cmd := "lean", args, cwd := dir, env := #[("LEAN_PATH", some dir.toString)] }
  unless out.exitCode = 0 do
    throw <| IO.userError s!"lean {args} failed ({out.exitCode}):\n{out.stdout}\n{out.stderr}"

unsafe def commandEntriesOf (e : EnvExtensionEntry) : CommandEntries := unsafeCast e

def modeOf (ext : PersistentEnvExtension EnvExtensionEntry EnvExtensionEntry EnvExtensionState) :
    EnvExtension.AsyncMode :=
  match ext.toEnvExtension.asyncMode with
  | .async _ => .sync
  | m => m

/-- `target` with the state of every extension a command payload replays (persistent and scoped extensions,
registered command caches, the local-entry log) taken from `source`: a kept command is replayed with its
constants present and every extension in its before-state. -/
def withReplayStateOf (source target : Environment) : IO Environment := do
  let mut target := target
  for ext in ← persistentEnvExtensionsRef.get do
    target := ext.toEnvExtension.setState target (ext.toEnvExtension.getState source (asyncMode := modeOf ext))
      (asyncMode := modeOf ext)
  for ext in ← commandCacheExtensionsRef.get do
    target := ext.copyState source target
  return localEntriesExt.setState target (localEntriesExt.getState source (asyncMode := .local))
    (asyncMode := .local)

/-- Elaborates `src` as module `M` in `dir` as `lean -o` does; returns the command observations, the payloads
written to `M.olean` and `M.usage`. -/
unsafe def elabM (dir : System.FilePath) (src : String) :
    IO (Array ModuleUsage.CommandObservation × Array CommandEntries × Json) := do
  IO.FS.writeFile (dir / "M.lean") src
  enableInitializersExecution
  let some _ ← Elab.runFrontend src {} (dir / "M.lean").toString `M
      (oleanFileName? := some (dir / "M.olean")) |
    throw <| IO.userError "elaboration of M failed"
  let obs := (← ModuleUsage.commandObservationsRef.get).qsort (·.i < ·.i)
  let (md, _) ← readModuleData (dir / "M.olean")
  let payloads := ((md.entries.find? (·.1 == commandEntriesExt.name)).map (·.2)).getD #[] |>.map commandEntriesOf
  let usage ← IO.ofExcept <| Json.parse (← IO.FS.readFile (dir / "M.usage"))
  return (obs, payloads, usage)

def source (erased : Name) : String :=
  s!"import X\n@[simp] def victim : Nat := 1\n@[simp] def keep : Nat := 2\n@[simp] def other : Nat := 3\n\
    attribute [-simp] {erased}\nattribute [-simp] keep in theorem t1 : True := trivial\n\
    @[erase_probe] def d : Nat := 0\ntheorem t2 : True := trivial\n"

def unfolds (env : Environment) (n : Name) : Bool := (Meta.simpExtension.getState env).isDeclToUnfold n

unsafe def replayed (obs : Array ModuleUsage.CommandObservation) (payloads : Array CommandEntries) (i : Nat)
    (n : Name) : IO String := do
  let some o := obs.find? (·.i == i) | throw <| IO.userError s!"no observation {i}"
  let some ce := payloads.find? (·.idx == i) | throw <| IO.userError s!"no payload {i}"
  try
    let env ← replayCommandEntries (← withReplayStateOf o.before.env o.after.env) ce (scopeDepth o.before.env) {}
    return s!"replayed: {n} unfolds {unfolds env n} (full run: {unfolds o.after.env n})"
  catch e =>
    return s!"refused: {e}"

def ctxs (usage : Json) : Array Json :=
  ((usage.getObjValAs? (Array Json) "commands").toOption.getD #[]).map fun c => (c.getObjVal? "ctx").toOption.getD .null

unsafe def main : IO Unit := IO.FS.withTempDir fun dir => do
  IO.FS.writeFile (dir / "X.lean") "import Lean\nopen Lean\ninitialize registerBuiltinAttribute { name := `erase_probe, descr := \"test\", add := fun _ _ _ => Attribute.erase `keep `simp }\n"
  runLean dir #["-o", "X.olean", "X.lean"]
  initSearchPath (← getBuildDir) [dir]
  -- commands: 0 victim, 1 keep, 2 other, 3 attribute [-simp] victim, 4 … in theorem t1, 5 @[erase_probe] def d, 6 t2
  let (obs, payloads, usage) ← elabM dir (source `victim)
  IO.println s!"command 3 (attribute [-simp] victim): {← replayed obs payloads 3 `victim}"
  IO.println s!"command 4 (attribute [-simp] keep in theorem t1): {← replayed obs payloads 4 `keep}"
  IO.println s!"command 5 (@[erase_probe] def d): {← replayed obs payloads 5 `keep}"
  IO.println s!"noskip: {(usage.getObjValAs? Bool "noskip").toOption}, \
    reason: {(usage.getObjValAs? String "noskipReason").toOption}"
  IO.FS.createDirAll (dir / "v2")
  let (_, _, usage₂) ← elabM (dir / "v2") (source `other)
  let c₁ := ctxs usage
  let c₂ := ctxs usage₂
  IO.println s!"ctx after erasing victim vs other differs: {[4, 5, 6].map fun i => c₁[i]? != c₂[i]?}"
  IO.println s!"ctx before the erasure equal: {[0, 1, 2, 3].map fun i => c₁[i]? == c₂[i]?}"

#eval main
