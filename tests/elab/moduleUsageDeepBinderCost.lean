import Lean
/-! Recording a module's usage costs in proportion to its terms as DAGs, whatever their binder depth. The module
has proofs nested `d` binders deep (a `let` chain whose values stand for a theorem, as `have` chains in proof-mode
proofs do, and a `fun` chain) around a body of `d` distinct nodes that refer to the middle binder, and two proofs
that refer to a `let`-bound theorem from a subterm shared 2^k times as a tree: under no binder, and under two
sibling binders of different types at each level (`⟨fun (x : True) => T, fun (y : Nat) => T⟩`). From
`(d, k) = (1000, 10)` to `(4000, 16)` the heartbeats of the recording (`ModuleUsage.localDigests`, `computeStmt`,
`commandRecords`) grow at most 6 times, and stay within 12 times what elaborating the declarations costs (building
the terms and `addDecl`). A walk doing work proportional to the binders in scope at each node grows 16 times; one
that revisits shared subterms under a `let`, or that keys them by a fresh scope per binder, grows 64 times. -/
open Lean

/-- A module adding, through `addDecl`, `letChain`, `funChain`, `sharedUnderLet` and `sharedUnderBinders`, and
`elabCost`, the heartbeats building and adding them took. -/
def moduleOf (d k : Nat) : String :=
  "import Lean\nopen Lean\ntheorem leaf : True := trivial\n" ++
  "run_cmd Elab.Command.liftCoreM do\n" ++
  "  let start ← IO.getNumHeartbeats\n" ++
  "  let t := mkConst ``True\n" ++
  -- the body: `⟨x, ⟨x, … ⟨x, x⟩⟩⟩` with `d` pairs, `x` the middle binder
  s!"  let mut body := mkBVar ({d} / 2)\n" ++
  "  let mut bodyTy := t\n" ++
  s!"  for _ in [:{d}] do\n" ++
  s!"    body := mkApp4 (mkConst ``And.intro) t bodyTy (mkBVar ({d} / 2)) body\n" ++
  "    bodyTy := mkApp2 (mkConst ``And) t bodyTy\n" ++
  -- `let h₀ := leaf; let h₁ := h₀; …; body`
  "  let mut v := body\n" ++
  s!"  for i in [:{d}] do\n" ++
  s!"    v := mkLet `h t (if i + 1 == {d} then mkConst ``leaf else mkBVar 0) v\n" ++
  "  addDecl (.thmDecl { name := `letChain, levelParams := [], type := bodyTy, value := v })\n" ++
  -- `fun (x₁ … x_d : True) => body`
  "  let mut f := body\n" ++
  "  let mut ty := bodyTy\n" ++
  s!"  for _ in [:{d}] do\n" ++
  "    f := mkLambda `x .default t f\n" ++
  "    ty := mkForall `x .default t ty\n" ++
  "  addDecl (.thmDecl { name := `funChain, levelParams := [], type := ty, value := f })\n" ++
  -- `let h := leaf; And.left (And.intro w w)` nested `k` times, the two `w` one object, innermost `w := h`
  "  let mut w := mkBVar 0\n" ++
  s!"  for _ in [:{k}] do\n" ++
  "    w := mkApp3 (mkConst ``And.left) t t (mkApp4 (mkConst ``And.intro) t t w w)\n" ++
  "  addDecl (.thmDecl { name := `sharedUnderLet, levelParams := [], type := t, " ++
  "value := mkLet `h t (mkConst ``leaf) w })\n" ++
  -- `let h := leaf; ⟨fun (x : True) => T, fun (y : Nat) => T⟩` nested `k` times, the two `T` one object,
  -- innermost `T := h`
  "  let n := mkConst ``Nat\n" ++
  s!"  let mut p := mkBVar {k}\n" ++
  "  let mut pTy := t\n" ++
  s!"  for _ in [:{k}] do\n" ++
  "    let l := mkForall `x .default t pTy\n" ++
  "    let r := mkForall `y .default n pTy\n" ++
  "    p := mkApp4 (mkConst ``And.intro) l r (mkLambda `x .default t p) (mkLambda `y .default n p)\n" ++
  "    pTy := mkApp2 (mkConst ``And) l r\n" ++
  "  addDecl (.thmDecl { name := `sharedUnderBinders, levelParams := [], type := pTy, " ++
  "value := mkLet `h t (mkConst ``leaf) p })\n" ++
  "  let cost := (← IO.getNumHeartbeats) - start\n" ++
  "  addDecl (.defnDecl { name := `elabCost, levelParams := [], type := mkConst ``Nat, " ++
  "value := mkRawNatLit cost, hints := .abbrev, safety := .safe })\n"

/-- Heartbeats elaborating the module's declarations and recording its usage took. -/
unsafe def costs (d k : Nat) : IO (Nat × Nat) := do
  enableInitializersExecution
  usageRecordingRef.set true
  usedByChecksRef.set {}
  extraModUsesByChecksRef.set {}
  extraModUsesByCmdRef.set {}
  resetCommandUsageRefs
  ModuleUsage.commandObservationsRef.set #[]
  let some env ← Elab.runFrontend (moduleOf d k) {} "M.lean" `M |
    throw <| IO.userError s!"elaboration for {d} failed"
  let some (.defnInfo c) := env.find? `elabCost | throw <| IO.userError "no elabCost"
  let .lit (.natVal elabCost) := c.value | throw <| IO.userError "elabCost is not a literal"
  let start ← IO.getNumHeartbeats
  let consts ← IO.lazyPure fun _ => ModuleUsage.ownConsts env
  let own ← IO.lazyPure fun _ => ModuleUsage.localDigests env consts
  let stmt ← IO.lazyPure fun _ => ModuleUsage.computeStmt env (ModuleUsage.stmtState env) own consts
  discard <| ModuleUsage.commandRecords env own stmt #[]
  return (elabCost, (← IO.getNumHeartbeats) - start)

unsafe def main : IO Unit := do
  initSearchPath (← getBuildDir)
  let (elabSmall, small) ← costs 1000 10
  let (elabLarge, large) ← costs 4000 16
  let linear := decide (large ≤ 6 * small)
  let bounded := decide (large ≤ 12 * elabLarge)
  IO.println s!"recording grows linearly: {linear}; within 12 times elaboration: {bounded}"
  unless linear && bounded do
    throw <| IO.userError s!"recording allocated {small} for (1000, 10) ({elabSmall} to elaborate), {large} for \
      (4000, 16) ({elabLarge} to elaborate)"

#eval main
