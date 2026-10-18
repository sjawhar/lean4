import Lean
/-! The contract of re-adding a kept command's constants (`decl2f-delta3-review.md` finding 4): a nested inductive's
auxiliary recursors (`Tree.rec_1`, registered with `addConstAsync` by `addAuxRecs`, not definitions or theorems) are
re-added and later commands can use them; a theorem whose statement uses a matcher created by the same command is
re-added after that matcher; and a kernel rejection reaches the error with the kernel's own message (`(kernel)`). -/
open Lean Elab Command

structure Run where
  src : String
  obs : Array ModuleUsage.CommandObservation
  payloads : Array CommandEntries

unsafe def elabModule (dir : System.FilePath) (name : String) (src : String) : IO Run := do
  IO.FS.writeFile (dir / s!"{name}.lean") src
  enableInitializersExecution
  ModuleUsage.commandObservationsRef.set #[]
  let some _ ← Elab.runFrontend src {} s!"{name}.lean" (Name.mkSimple name)
      (oleanFileName? := some (dir / s!"{name}.olean")) |
    throw <| IO.userError s!"elaboration of {name} failed"
  let obs := (← ModuleUsage.commandObservationsRef.get).qsort (·.i < ·.i)
  let (md, _) ← readModuleData (dir / s!"{name}.olean")
  return { src, obs, payloads := CommandEntries.ofModuleData md }

def addedBy (before after : Environment) : NameMap ConstantInfo :=
  after.constants.foldStage2 (fun m n c => if before.constants.contains n then m else m.insert n c) {}

def getObs (run : Run) (i : Nat) : IO ModuleUsage.CommandObservation := do
  let some o := run.obs.find? (·.i == i) | throw <| IO.userError s!"no observation {i}"
  return o

def getPayload (run : Run) (i : Nat) : IO CommandEntries := do
  let some ce := run.payloads.find? (·.idx == i) | throw <| IO.userError s!"no payload {i}"
  return ce

/-- Keeps command `i` (plan steps 1, 3 and 7) onto its before-environment. -/
def keepIdx (run : Run) (i : Nat) : IO Environment := do
  let o ← getObs run i
  let ce ← getPayload run i
  let env ← readdCommandConstants o.before.env ce (addedBy o.before.env o.after.env) {}
  let env ← replayCommandEntries env ce (scopeDepth o.before.env) {}
  finishRealizationContexts env ce {}

/-- Elaborates `stx` synchronously on `st` with `env`; returns the state and its error messages. -/
def elabOn (src : String) (st : Command.State) (env : Environment) (stx : Syntax) :
    IO (Command.State × List String) := do
  let ctx : Command.Context := { fileName := "M.lean", fileMap := src.toFileMap, snap? := none, cancelTk? := none }
  let st := { st with env, scopes := st.scopes.map fun sc => { sc with opts := Elab.async.set sc.opts false } }
  let (_, after) ← ((elabCommandTopLevel stx).run ctx |>.run st).toIO fun _ => IO.userError "elab failed"
  let errs ← (after.messages.toList.filter (·.severity == .error)).mapM (·.toString)
  return (after, errs)

/-- Reads `report` on command `i`'s after-environment and on the kept environment. -/
def compareReads (label : String) (run : Run) (i : Nat) (report : Environment → IO String) : IO Unit := do
  let o ← getObs run i
  let full ← report o.after.env
  let kept ← try report (← keepIdx run i) catch _ => pure "keep threw"
  IO.println s!"{label}: full [{full}]; kept [{kept}]; {if full == kept then "same" else "DIFFERENT"}"

/-- Elaborates command `j` after keeping command `i = j - 1`, and on the full run's environment. -/
def nextCommand (label : String) (run : Run) (i : Nat) : IO Unit := do
  let oj ← getObs run (i + 1)
  let (_, fullErrs) ← elabOn run.src oj.before oj.before.env oj.stx
  let kept ← try
      let env ← keepIdx run i
      let (_, errs) ← elabOn run.src oj.before env oj.stx
      pure s!"errors {errs}"
    catch _ => pure "keep threw"
  IO.println s!"{label}: next command full errors {fullErrs}; after the keep: {kept}"

def declRangeLine (env : Environment) (n : Name) : Option Nat :=
  (declRangeExt.find? (level := .exported) env n).map (·.range.pos.line)

def auxReads (n : Name) (env : Environment) : IO String := do
  return s!"{n}: contains {env.contains n}, auxRec {isAuxRecursor env n}, range line {declRangeLine env n}, \
    doc {← findDocString? env n}"

def treeSrc : String := "/-- doc of Tree -/\ninductive Tree where\n  | node : List Tree → Tree\n\
theorem useTree : @Tree.rec_1 = @Tree.rec_1 := rfl\n"

def roseSrc : String := "structure Rose where\n  kids : List Rose\n\
theorem useRose : @Rose.rec_1 = @Rose.rec_1 := rfl\n"

def matcherSrc : String := "/-- doc of tm -/\n\
theorem tm : (match (0 : Nat) with | 0 => True | _ => False) := trivial\n\
theorem after : True := trivial\n"

def kernelSrc : String := "theorem a : 1 = 1 := rfl\ndef b : Nat := 1\n"

/-- Re-adds command `i`'s constants with `n`'s value replaced by `True.intro`; whether the error has the kernel's
text. -/
def corruptKeep (label : String) (run : Run) (i : Nat) (n : Name) : IO Unit := do
  let o ← getObs run i
  let ce ← getPayload run i
  let infos := addedBy o.before.env o.after.env
  let some info := infos.find? n | throw <| IO.userError s!"no {n}"
  let bad : ConstantInfo := match info with
    | .thmInfo v => .thmInfo { v with value := mkConst ``True.intro }
    | .defnInfo v => .defnInfo { v with value := mkConst ``True.intro }
    | info => info
  let r ← try
      discard <| readdCommandConstants o.before.env ce (infos.insert n bad) {}
      pure "no error"
    catch e => pure s!"error has the kernel's text: {decide ((e.toString.splitOn "(kernel)").length > 1)}"
  IO.println s!"{label}: {r}"

unsafe def main : IO Unit := IO.FS.withTempDir fun dir => do
  initSearchPath (← getBuildDir)
  enableInitializersExecution
  -- a. nested inductives: auxiliary recursors registered with `addConstAsync`
  let run ← elabModule dir "Tr" treeSrc
  compareReads "Tree reads" run 0 fun env => do
    return s!"{← auxReads `Tree.rec_1 env}; {← auxReads `Tree.rec env}"
  nextCommand "Tree" run 0
  let run ← elabModule dir "Ro" roseSrc
  compareReads "Rose reads" run 0 fun env => do
    return s!"{← auxReads `Rose.rec_1 env}; {← auxReads `Rose.rec env}"
  nextCommand "Rose" run 0
  -- b. a theorem whose statement uses a matcher created by the same command
  let run ← elabModule dir "Mt" matcherSrc
  compareReads "tm reads" run 0 fun env => do
    return s!"matcher info {(Meta.Match.Extension.getMatcherInfo? env `tm.match_1).isSome}, \
      {← auxReads `tm env}"
  nextCommand "tm" run 0
  -- c. the kernel's message reaches the error
  let run ← elabModule dir "Kn" kernelSrc
  corruptKeep "corrupted theorem" run 0 `a
  corruptKeep "corrupted definition" run 1 `b

#eval main
