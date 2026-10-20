import Lean
/-! Differential test: the `ctx` digest `commandRecords` computes with its incrementally maintained quotation-context
digest equals `ctxDigest` given the digest of the whole `usedQuotCtxts` set computed from scratch, for every
command; once over the real observations of a module, and once with each observation's `usedQuotCtxts` replaced by a
pseudo-random subset of a name pool, rebuilt without sharing (so sets shrink, grow and share nothing). -/
open Lean Lean.ModuleUsage

def moduleOf (n : Nat) : String := Id.run do
  let mut s := "import Lean\nopen Lean\n"
  for i in [:n] do
    s := s ++ s!"def f{i} (n : Nat) : Nat := match n with | 0 => {i} | k + 1 => k\n\
      theorem t{i} : f{i} 0 = {i} := by simp [f{i}]\n\
      macro \"m{i}\" : term => `({i})\n"
  return s

def scratch (s : NameSet) : NameSetDigest := s.foldl (·.insert ·) {}

def check (env : Environment) (observations : Array CommandObservation) (label : String) : IO Unit := do
  let consts := ModuleUsage.ownConsts env
  let own := ModuleUsage.localDigests env (ModuleUsage.ownNodes env consts)
  let stmt := ModuleUsage.computeStmt env (ModuleUsage.stmtState env) own consts
  let obs := observations.qsort (·.i < ·.i)
  let recs ← IO.ofExcept (← ModuleUsage.commandRecords env obs own stmt #[])
  let mut bad := #[]
  let mut sizes := #[]
  for o in obs, r in recs do
    let want := ctxDigest o.before (scratch o.before.usedQuotCtxts) ({} : Enc).finish
    sizes := sizes.push o.before.usedQuotCtxts.size
    unless r.i == o.i && r.ctx == want do bad := bad.push o.i
  IO.println s!"{label}: {obs.size} commands, {recs.size} records, set sizes {sizes.toList.take 8}…{sizes.back?}, \
    ctx mismatches {bad}"

unsafe def main : IO Unit := do
  initSearchPath (← getBuildDir)
  enableInitializersExecution
  discard <| startFrontendRun (record := true)
  let some env ← Elab.runFrontend (moduleOf 40) {} "M.lean" `M | throw <| IO.userError "elaboration failed"
  let real ← ModuleUsage.commandObservations
  check env real "real observations"
  -- same observations, `usedQuotCtxts` replaced by unshared pseudo-random subsets of a 64-name pool
  let pool : Array Name := (List.range 64).toArray.map fun k => Name.mkSimple s!"q{k}" |>.num k
  let mut seed := 12345
  let mut mutated := #[]
  for o in real do
    let mut s : NameSet := {}
    for p in pool do
      seed := (seed * 1103515245 + 12345) % 2147483648
      if seed % 3 == 0 then s := s.insert p
    mutated := mutated.push { o with before := { o.before with usedQuotCtxts := s } }
  check env mutated "random unshared sets"

#eval main
