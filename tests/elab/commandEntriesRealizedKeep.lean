import Lean
/-! Constants that a kept command realized (`realizeConst`: `f.eq_1`, a matcher's splitter and match equations,
`congr_simp`, `f.induct`) keep the extension states their realization wrote (`decl2f-delta3-review.md` finding 1).
Keeping command `i` re-adds its constants and replays its payload; a realized constant used to re-enter
synchronously, so what its own closure wrote to a per-declaration extension was lost. One case per extension that
realizations write:
1. `defeqAttr`/`backwardDefeqAttr` (`f.eq_1` is tagged), then a later `dsimp only [f.eq_1]`;
2. `matchEqnsExt` (`Match.isMatchEqnTheorem` of the match equations), then a later `split`;
3. `congrKindsExt` (the argument kinds of `g.congr_simp`), then a later `simp` through the same congruence theorem;
4. `funIndInfoExt` (the `FunIndInfo` of `f.induct`), then a later `fun_induction`;
5. `inlineAttrs` (the splitter's `@[inline]`).
Each line compares the per-declaration reads of the full run's environment with those of the kept one, over every
constant the command added, and elaborates the next command on both. -/
open Lean Elab Command

unsafe def runLeanFile (dir : System.FilePath) (src : String) :
    IO (Array ModuleUsage.CommandObservation × Array CommandEntries) := do
  IO.FS.writeFile (dir / "M.lean") src
  enableInitializersExecution
  ModuleUsage.commandObservationsRef.set #[]
  let some _ ← Elab.runFrontend src {} "M.lean" `M (oleanFileName? := some (dir / "M.olean")) |
    throw <| IO.userError "elaboration of M failed"
  let obs := (← ModuleUsage.commandObservationsRef.get).qsort (·.i < ·.i)
  let (md, _) ← readModuleData (dir / "M.olean")
  return (obs, CommandEntries.ofModuleData md)

/-- The constants `after` holds that `before` does not. -/
def addedBy (before after : Environment) : NameMap ConstantInfo :=
  after.constants.foldStage2 (fun m n c => if before.constants.contains n then m else m.insert n c) {}

/-- Elaborates `stx` synchronously on `st` with `env`; returns its error messages (first lines). -/
def elabNext (src : String) (st : Command.State) (env : Environment) (stx : Syntax) : IO (List String) := do
  let ctx : Command.Context := { fileName := "M.lean", fileMap := src.toFileMap, snap? := none, cancelTk? := none }
  let st := { st with env, scopes := st.scopes.map fun sc => { sc with opts := Elab.async.set sc.opts false } }
  let (_, after) ← ((elabCommandTopLevel stx).run ctx |>.run st).toIO fun _ => IO.userError "elab failed"
  (after.messages.toList.filter (·.severity == .error)).mapM fun m => do
    return ((← m.toString).splitOn "\n").headD ""

/-- One case: `src` is elaborated, the command that adds `target` is kept (plan steps 1, 3 and 7), and `reader` is
read on every constant that command added, on the full run's environment and on the kept one. -/
unsafe def runCase (row src : String) (target : Name) (reader : Environment → Name → Option String)
    (later : Bool) : IO Unit := IO.FS.withTempDir fun dir => do
  let (obs, entries) ← runLeanFile dir src
  let some o := obs.find? fun o => !o.before.env.contains target && o.after.env.contains target |
    throw <| IO.userError s!"{row}: no command adds {target}"
  let some ce := entries.find? (·.idx == o.i) | throw <| IO.userError s!"{row}: no payload {o.i}"
  let infos := addedBy o.before.env o.after.env
  let names := infos.toList.map (·.1)
  let reads (env : Environment) : List String :=
    names.filterMap fun n => (reader env n).map fun s => s!"{n}{s}"
  let kept? ← try
      let env ← readdCommandConstants o.before.env ce infos {}
      let env ← replayCommandEntries env ce (scopeDepth o.before.env) {}
      pure (some (← finishRealizationContexts env ce {}))
    catch _ => pure none
  let keptReads := match kept? with | some env => toString (reads env) | none => "keep threw"
  let mut line := s!"{row}: full {reads o.after.env}, kept {keptReads}"
  if later then
    let some next := obs.find? (·.i == o.i + 1) | throw <| IO.userError s!"{row}: no command after {o.i}"
    let errsFull ← elabNext src o.after o.after.env next.stx
    let errsKept ← match kept? with
      | some env => pure (toString (← elabNext src o.after env next.stx))
      | none => pure "keep threw"
    line := line ++ s!"; later command full errors {errsFull}, kept errors {errsKept}"
  IO.println line

def defeqSrc : String := "\n".intercalate [
  "def f : Nat → Nat",
  "  | 0 => 1",
  "  | n+1 => n",
  "theorem c1 : f 0 = 1 := by simp [f]",
  "set_option backward.defeqAttrib.useBackward true in",
  "theorem d1 : f 0 = 1 := by dsimp only [f.eq_1]",
  ""]

def matchSrc : String := "\n".intercalate [
  "def h (x : Option Nat) : Nat := match x with | some n => n | none => 0",
  "theorem t1 (x : Option Nat) : h x ≤ h x := by unfold h; split <;> exact Nat.le_refl _",
  "theorem t2 (x : Option Nat) : h x = h x := by unfold h; split <;> rfl",
  ""]

def congrSrc : String := "\n".intercalate [
  "def g {α : Type} [DecidableEq α] (x : Nat) : Nat := x + 1",
  "theorem c1 (a b : Nat) (h : a = b) : g (α := Nat) a = g (α := Nat) b := by simp [h]",
  "theorem c2 (a b : Nat) (h : a = b) : g (α := Nat) (a + 1) = g (α := Nat) (b + 1) := by simp [h]",
  ""]

def funIndSrc : String := "\n".intercalate [
  "def cnt : Nat → Nat",
  "  | 0 => 0",
  "  | n+1 => cnt n",
  "theorem c1 (n : Nat) : cnt n = 0 := by",
  "  fun_induction cnt n <;> simp_all",
  "theorem c2 (n : Nat) : cnt n = 0 := by",
  "  fun_induction cnt n <;> simp_all",
  ""]

unsafe def main : IO Unit := do
  initSearchPath (← getBuildDir)
  enableInitializersExecution
  runCase "1 defeqAttr" defeqSrc `c1 (later := true) fun env n =>
    let tags := (if defeqAttr.hasTag env n then ["defeq"] else []) ++
      (if backwardDefeqAttr.hasTag env n then ["backward_defeq"] else [])
    if tags.isEmpty then none else some s!":{tags}"
  runCase "2 matchEqnsExt" matchSrc `t1 (later := true) fun env n =>
    if Meta.Match.isMatchEqnTheorem env n then some "" else none
  runCase "3 congrKindsExt" congrSrc `c1 (later := true) fun env n =>
    (Meta.congrKindsExt.find? env n).map fun ks => s!":{ks.size}"
  runCase "4 funIndInfoExt" funIndSrc `c1 (later := true) fun env n =>
    (Meta.funIndInfoExt.find? env n).map fun i => s!":{i.funName}"
  runCase "5 inlineAttrs" matchSrc `t1 (later := false) fun env n =>
    (Compiler.getInlineAttribute? env n).map fun k => if k == .inline then ":inline" else ":other"

#eval main
