import Lean
/-! Review findings U1, U2 and N5 at the payload level, without the reuse flags: the static admission of entry
conversions. An entry conversion (`ofOLeanEntry?`, a scoped extension's `Descr.ofOLeanEntry`) is an `ImportM` action;
a keep with `admittedOnly` runs none, and adds the entries of an extension whose registration core states takes the
`.olean` entry as the entry (`oleanEntryIsEntry?`) as they are. `CommandEntries.firstUnadmittedConversion`, which reads
only the registries, names the first extension of a payload without it. An imported module's `initialize` registers
`identExt` directly with its own identity conversion and `countExt` with a conversion that counts its runs in
`convRuns` (neither admitted), `simpleExt` through `registerSimplePersistentEnvExtension`, `scopedExt` through
`registerSimpleScopedEnvExtension` and `tagAttr` through `registerTagAttribute` (all admitted); commands 0-4 of `M` add
an entry to each, and command 5 is a `@[delab]` definition, whose keyed attribute's conversion evaluates the definition
(not admitted). A keep with `admittedOnly` throws on the entries of an extension it does not admit before running any
conversion, and keeps the others; `CommandEntries.Testing.keep` without it runs the conversion. A keep caches the
realizations it re-adds only once it succeeds: command 7 realizes `f.count`, whose `realize` counts its runs in the
value, and the keep of its payload is made to fail, once in the realization's rebuild and once after it; the command
elaborated on the same environment then runs `realize` again (the full run ran it once). Command 8 adds the entry 5 to
`flagExt`, a user scoped extension that states its `.olean` entry is the entry (`oleanEntryIsEntry?`) while its
`toOLeanEntry` adds 100 and its `ofOLeanEntry` adds 1000 and counts its runs: it is admitted, and its kept state is the
full run's, with no conversion run. -/
open Lean Elab Command

def runLean (dir : System.FilePath) (args : Array String) : IO Unit := do
  let out ← IO.Process.output { cmd := "lean", args, cwd := dir, env := #[("LEAN_PATH", some dir.toString)] }
  unless out.exitCode = 0 do
    throw <| IO.userError s!"lean {args} failed ({out.exitCode}):\n{out.stdout}\n{out.stderr}"

def xSource : String := "import Lean
open Lean Elab Command Meta

initialize convRuns : IO.Ref Nat ← IO.mkRef 0

initialize identExt : PersistentEnvExtension Name Name (List Name × Unit) ←
  registerPersistentEnvExtension {
    mkInitial := pure ([], ())
    addImportedFn := fun _ => pure ([], ())
    addEntryFn := fun (ns, u) n => (n :: ns, u)
    ofOLeanEntry? := some fun _ n => pure n
    stateDelta? := some StateDelta.ofLog
    exportEntriesFn := fun (ns, _) => ns.reverse.toArray
  }

initialize countExt : PersistentEnvExtension Name Name (List Name × Unit) ←
  registerPersistentEnvExtension {
    mkInitial := pure ([], ())
    addImportedFn := fun _ => pure ([], ())
    addEntryFn := fun (ns, u) n => (n :: ns, u)
    ofOLeanEntry? := some fun _ n => do
      convRuns.modify (· + 1)
      pure n
    stateDelta? := some StateDelta.ofLog
    exportEntriesFn := fun (ns, _) => ns.reverse.toArray
  }

initialize simpleExt : SimplePersistentEnvExtension Name NameSet ←
  registerSimplePersistentEnvExtension { addEntryFn := NameSet.insert, addImportedFn := fun _ => {} }

initialize scopedExt : SimpleScopedEnvExtension Name NameSet ←
  registerSimpleScopedEnvExtension { addEntry := NameSet.insert, initial := {} }

initialize tagAttr : TagAttribute ← registerTagAttribute `test_tag \"test\"

initialize flagExt : ScopedEnvExtension Nat Nat Nat ←
  registerScopedEnvExtension {
    mkInitial := pure 0
    addEntry := fun s n => s + n
    toOLeanEntry := fun n => n + 100
    ofOLeanEntry := fun _ n => do convRuns.modify (· + 1); pure (n + 1000)
    oleanEntryIsEntry? := some ⟨rfl⟩
  }

initialize realizeRuns : IO.Ref Nat ← IO.mkRef 0

syntax \"add_ident \" ident : command
syntax \"add_count \" ident : command
syntax \"add_simple \" ident : command
syntax \"add_scoped \" ident : command
syntax \"add_tag \" ident : command
syntax \"realize_count \" ident : command
syntax \"add_flag \" num : command

elab_rules : command
  | `(add_ident $x:ident) => modifyEnv (identExt.addEntry · x.getId)
  | `(add_count $x:ident) => modifyEnv (countExt.addEntry · x.getId)
  | `(add_simple $x:ident) => modifyEnv (simpleExt.addEntry · x.getId)
  | `(add_scoped $x:ident) => modifyEnv (scopedExt.addEntry · x.getId)
  | `(add_tag $x:ident) => modifyEnv (tagAttr.ext.addEntry · x.getId)
  | `(add_flag $k:num) => modifyEnv (flagExt.addEntry · k.getNat)
  | `(realize_count $x:ident) => liftTermElabM do
    let f ← realizeGlobalConstNoOverload x
    let n := f ++ `count
    realizeConst f n do
      let v ← realizeRuns.modifyGet fun k => (k + 1, k + 1)
      addDecl (Declaration.defnDecl (mkDefinitionValEx n [] (mkConst ``Nat) (mkRawNatLit v) .abbrev .safe [n]))
"

def mSource : String := "import X
add_ident a
add_count b
add_simple c
add_scoped d
add_tag e
@[delab app.Nat.succ] def myDelab : Lean.PrettyPrinter.Delaborator.Delab := failure
def f : Nat := 0
realize_count f
add_flag 5
"

def newConsts (before after : Environment) : NameMap ConstantInfo :=
  after.constants.foldStage2 (fun m n c => if before.constants.contains n then m else m.insert n c) {}

/-- `a` with each of its records, nested ones first, passed through `f`. -/
partial def mapRecords (f : AddedConst → AddedConst) : AddedConst → AddedConst
  | .async n k s nested => f (.async n k s (nested.map (mapRecords f)))
  | a => f a

/-- Every realization record's states gain an entry for an unknown extension: rebuilding it throws. -/
def breakRebuild (ce : CommandEntries) : CommandEntries :=
  { ce with added := ce.added.map <| mapRecords fun
    | .realization f k cs s ms => .realization f k cs { s with entries := s.entries.push (`noSuchExtension, #[]) } ms
    | a => a }

/-- A record of a constant the command did not add, after the others: the keep throws after the rebuilds. -/
def failAfter (ce : CommandEntries) : CommandEntries :=
  { ce with added := ce.added.push (.plain `noSuchConstant) }

/-- `f.count`'s value in `env`, if it has one. -/
def countOf (env : Environment) : Option Nat :=
  match (env.find? `f.count).bind (·.value?) with
  | some (.lit (.natVal n)) => some n
  | _ => none

/-- How often `countExt`'s conversion ran in this process (`convRuns` of `X`, which `env` imports). -/
unsafe def conversionRuns (env : Environment) : IO Nat := do
  (← IO.ofExcept (env.evalConst (IO.Ref Nat) {} `convRuns)).get

/-- `flagExt`'s state in `env` (its sum of entries). -/
unsafe def flagSum (env : Environment) : IO Nat := do
  return (← IO.ofExcept (env.evalConst (ScopedEnvExtension Nat Nat Nat) {} `flagExt)).getState env

/-- Keeps command `o` with its payload passed through `tamper`, on its before-environment with fresh realization
caches, then elaborates the command on that environment, as the fallback does: whether the keep threw, and the value of
`f.count` the elaboration gives. -/
def keepThenElaborate (src : String) (permit : KeepPermit) (o : ModuleUsage.CommandObservation)
    (tamper : CommandEntries → CommandEntries) : IO String := do
  let permit := CommandEntries.Testing.substitutePayloads permit (·.map fun ce => if ce.idx == o.i then tamper ce else ce)
  let some ce := permit.payloads.find? (·.idx == o.i) | throw <| IO.userError s!"no payload {o.i}"
  let env ← CommandEntries.Testing.freshRealizationCaches o.before.env
  let threw ← try
      discard <| CommandEntries.Testing.keep permit env ce (newConsts o.before.env o.after.env) {}
      pure false
    catch _ => pure true
  let ctx : Command.Context := { fileName := "M.lean", fileMap := src.toFileMap, snap? := none, cancelTk? := none }
  let scopes := o.before.scopes.map fun sc => { sc with opts := Elab.async.set sc.opts false }
  let st : Command.State := { o.before with env, scopes, messages := .empty }
  let (_, after) ← ((elabCommandTopLevel o.stx).run ctx |>.run st).toIO fun _ => IO.userError "elab failed"
  return s!"keep threw {threw}, f.count {countOf after.env}"

/-- Keeps command `o` on its before-environment, with `admittedOnly` as given: kept, or the error. -/
def tryKeep (permit : KeepPermit) (o : ModuleUsage.CommandObservation) (admittedOnly : Bool) : IO String := do
  let some ce := permit.payloads.find? (·.idx == o.i) | throw <| IO.userError s!"no payload {o.i}"
  try
    discard <| CommandEntries.Testing.keep permit o.before.env ce (newConsts o.before.env o.after.env) {}
      (admittedOnly := admittedOnly)
    return "kept"
  catch e => return s!"threw: {e}"

unsafe def main : IO Unit := IO.FS.withTempDir fun dir => do
  IO.FS.writeFile (dir / "X.lean") xSource
  runLean dir #["-o", "X.olean", "--usage=X.usage", "X.lean"]
  initSearchPath (← getBuildDir) [dir]
  IO.FS.writeFile (dir / "M.lean") mSource
  enableInitializersExecution
  let some _ ← Elab.runFrontend mSource {} (dir / "M.lean").toString `M
      (oleanFileName? := some (dir / "M.olean")) (usageFileName? := some (dir / "M.usage")) |
    throw <| IO.userError "elaboration of M failed"
  let obs := (← ModuleUsage.commandObservations).qsort (·.i < ·.i)
  let some first := obs[0]? | throw <| IO.userError "no commands"
  let permit ← IO.ofExcept (← ModuleUsage.Testing.keepPermit first.before.env `M (dir / "M.olean") (dir / "M.usage"))
  for o in obs do
    let some ce := permit.payloads.find? (·.idx == o.i) | throw <| IO.userError s!"no payload {o.i}"
    IO.println s!"command {o.i}: refusals {ce.refusals.size}, first unadmitted conversion \
      {← ce.firstUnadmittedConversion}"
  for i in [0, 2, 3, 4] do
    let some o := obs.find? (·.i == i) | throw <| IO.userError s!"no command {i}"
    IO.println s!"command {i} kept with admittedOnly: {← tryKeep permit o true}"
  let some o := obs.find? (·.i == 1) | throw <| IO.userError "no command 1"
  IO.println s!"conversion runs of the full run: {← conversionRuns o.after.env}"
  IO.println s!"command 1 kept with admittedOnly: {← tryKeep permit o true}, conversion runs \
    {← conversionRuns o.after.env}"
  IO.println s!"command 1 kept without admittedOnly: {← tryKeep permit o false}, conversion runs \
    {← conversionRuns o.after.env}"
  let some o := obs.find? (·.i == 7) | throw <| IO.userError "no command 7"
  IO.println s!"full run: f.count {countOf o.after.env}"
  IO.println s!"rebuild fails: {← keepThenElaborate mSource permit o breakRebuild}"
  IO.println s!"fails after the rebuild: {← keepThenElaborate mSource permit o failAfter}"
  let some o := obs.find? (·.i == 8) | throw <| IO.userError "no command 8"
  let some ce := permit.payloads.find? (·.idx == o.i) | throw <| IO.userError "no payload 8"
  let runs ← conversionRuns o.after.env
  let kept ← CommandEntries.Testing.keep permit o.before.env ce (newConsts o.before.env o.after.env) {}
    (admittedOnly := true)
  IO.println s!"command 8 kept with admittedOnly: flagExt {← flagSum kept}, in the full run {← flagSum o.after.env}, \
    conversion runs {(← conversionRuns o.after.env) - runs}"

#eval main
