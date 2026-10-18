import Lean
/-! Constants nested in an asynchronous theorem's branch (`where` helpers, matchers) re-enter inside that branch when
a kept command's constants are re-added (`decl2f-delta3-review.md` finding 3). In the full run a per-declaration read
of such a constant resolves to the theorem's branch states; re-adding it on the main branch loses them. Each case
keeps the theorem's command and compares reads on the kept environment with the full run's: the reducibility of a
`@[irreducible]` helper and the matcher info of a matcher nested in the theorem's body, the automatic `@[irreducible]`
of a helper defined by well-founded recursion, and the docstring of a `where` helper. The first case also elaborates
the next command (`first | (have : t.go 0 = 0 := rfl; exact 1) | exact 2`, whose outcome depends on `t.go` being
irreducible) on the kept environment and on the full run's. -/
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

/-- Keeps command `i` (plan steps 1, 3 and 7) onto its before-environment. -/
def keepIdx (run : Run) (i : Nat) : IO Environment := do
  let o ← getObs run i
  let some ce := run.payloads.find? (·.idx == i) | throw <| IO.userError s!"no payload {i}"
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

def p3src : String := "theorem t (n : Nat) : True := by\n  have := go n\n  exact match n with | 0 => trivial | _ + 1 => trivial\n\
where\n  @[irreducible] go (n : Nat) : Nat := n\n\
def k : Nat := by\n  first\n  | (have : t.go 0 = 0 := rfl; exact 1)\n  | exact 2\n"

def wfSrc : String := "theorem t (n : Nat) : True := by\n  have := go n\n  trivial\n\
where\n  go (n : Nat) : Nat := if h : n = 0 then 0 else go (n - 1)\n  termination_by n\n"

def docSrc : String := "theorem t (n : Nat) : True := by\n  have := go n\n  trivial\n\
where\n  /-- doc of go -/\n  go (n : Nat) : Nat := n\n"

unsafe def main : IO Unit := IO.FS.withTempDir fun dir => do
  initSearchPath (← getBuildDir)
  enableInitializersExecution
  -- a. reducibility, matcher info and the next command
  let run ← elabModule dir "P3" p3src
  compareReads "a reads" run 0 fun env => pure
    s!"reducibility of t.go {repr (getReducibilityStatusCore env `t.go)}, matcher info of t.match_1_1 \
      {(Meta.Match.Extension.getMatcherInfo? env `t.match_1_1).isSome}"

  let o1 ← getObs run 1
  let value (env : Environment) := (env.find? `k).bind (·.value?) |>.map toString
  let (full, fullErrs) ← elabOn run.src o1.before o1.before.env o1.stx
  let kept ← try
      let env ← keepIdx run 0
      let (st, errs) ← elabOn run.src o1.before env o1.stx
      pure s!"errors {errs}, value {value st.env}"
    catch _ => pure "keep threw"
  IO.println s!"a next command: full errors {fullErrs}, value {value full.env}; after the keep: {kept}"

  -- b. a helper defined by well-founded recursion is automatically irreducible
  let run ← elabModule dir "Wf" wfSrc
  compareReads "b reads" run 0 fun env => pure
    s!"reducibility of t.go {repr (getReducibilityStatusCore env `t.go)}"
  -- c. the docstring of a `where` helper
  let run ← elabModule dir "Doc" docSrc
  compareReads "c reads" run 0 fun env => do
    return s!"doc of t.go {← findDocString? env `t.go}"

#eval main
