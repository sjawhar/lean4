import Lean
/-! Every command whose declarations come out different when it is elaborated from a different name generator has a
different context digest (`ModuleUsage.ctxDigest`) under that generator, so it is not kept from a run that started
it elsewhere. The module is a set of `Std.Do` proof-mode theorems, whose values carry generated names, and plain
declarations, whose values do not. Each command is elaborated again from its own before-state with the generator
advanced by 10⁶; the test counts the commands whose constants differ (`Expr.equal`) and, among them, those whose
context digest stays the same. -/
open Lean Elab Command

def mSource : String := "import Std.Tactic.Do\nopen Std.Do\n\
  theorem pm1 (σs : List Type) (P Q : SPred σs) : P ∧ Q ⊢ₛ Q ∧ P := by\n  mintro ⟨HP, HQ⟩\n  mconstructor\n  · mexact HQ\n  · mexact HP\n\
  def plain (n : Nat) : Nat := n + 1\n\
  theorem pm2 (σs : List Type) (Q : SPred σs) : Q ⊢ₛ Q := by\n  mstart\n  mintro HQ\n  mexact HQ\n\
  theorem plainThm (n : Nat) : n + 0 = n := rfl\n\
  theorem pm3 (σs : List Type) (P Q : SPred σs) : P ⊢ₛ Q → P := by\n  mintro HP HQ\n  mexact HP\n"

def ownConstants (before after : Environment) : Array Name :=
  (after.constants.foldStage2 (fun ns n _ => if before.contains n then ns else ns.push n) #[]).qsort Name.quickLt

def sameConstants (names : Array Name) (a b : Environment) : Bool :=
  names.all fun n => match a.find? n, b.find? n with
    | some c, some d => c.type.equal d.type && match c.value? (allowOpaque := true), d.value? (allowOpaque := true) with
      | some v, some w => v.equal w
      | none, none => true
      | _, _ => false
    | _, _ => false

unsafe def main : IO Unit := do
  initSearchPath (← getBuildDir)
  enableInitializersExecution
  discard <| startFrontendRun (record := true)
  let some _ ← Elab.runFrontend mSource (Options.empty.setBool `linter.deprecated.syntax false) "M.lean" `M | throw <| IO.userError "elaboration failed"
  let obs := (← ModuleUsage.commandObservations).qsort (·.i < ·.i)
  let ctx : Command.Context := { fileName := "M.lean", fileMap := mSource.toFileMap, snap? := none, cancelTk? := none }
  let mut differing := #[]
  let mut sameCtx := #[]
  for o in obs do
    let names := ownConstants o.before.env o.after.env
    if names.isEmpty then continue
    let moved := { o.before with ngen := { o.before.ngen with idx := o.before.ngen.idx + 1000000 } }
    let (_, again) ← ((elabCommandTopLevel o.stx).run ctx |>.run moved).toIO fun _ => IO.userError "failed"
    unless sameConstants names again.env o.after.env do
      differing := differing.push names
      if ModuleUsage.ctxDigest o.before {} default == ModuleUsage.ctxDigest moved {} default then
        sameCtx := sameCtx.push names
  IO.println s!"declarations that change with the generator: {differing.toList}"
  IO.println s!"of those, with the same context digest: {sameCtx.toList}"

#eval main
