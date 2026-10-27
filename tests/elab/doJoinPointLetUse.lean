import Lean

/-!
Elaborating a join point must not change which `let`s of the enclosing `do` block are kept.

The tuple a `while` loop returns is unpacked into `let` bindings of its mutable variables (`have`s in the final
term), made with `mkLetFVars (usedLetOnly := true)`: a binding is kept when the rest of the block mentions it, and a
synthetic opaque metavariable (such as a delayed-assigned one) whose local context holds the variable counts as a
mention. When the right-hand side of a join point with one exit was instantiated before it was substituted into the
body, the dead `have changed := __s.snd` after the outer loop below was dropped (6 bindings named `changed` instead
of 7): an equivalent term, but not the one the elaborator produces otherwise.
-/

open Lean Meta Elab Tactic

def mergeGoals : TacticM Unit := do
  let gs ← getGoals
  match gs with
  | [] => throwError "no goals"
  | g1 :: rest =>
    let mut g1 := g1
    let mut kept : Array MVarId := #[]
    let mut merged := 0
    for g in rest do
      let t1 ← instantiateMVars (← g1.getType)
      let t ← instantiateMVars (← g.getType)
      let d1 ← g1.getDecl
      let d ← g.getDecl
      let mut lctx := d1.lctx
      let mut changed := true
      while changed do
        changed := false
        for ld in lctx do
          let keep := match d.lctx.find? ld.fvarId with
            | some ld2 => ld2.type == ld.type && ld2.isLet == ld.isLet && (!ld.isLet || ld2.value == ld.value)
            | none => false
          let depOk := !(ld.type.hasAnyFVar fun fv => !(lctx.contains fv))
          if !keep || !depOk then
            lctx := lctx.erase ld.fvarId
            changed := true
      let lc := lctx
      if t1.hasAnyFVar (fun fv => !(lc.contains fv)) || t.hasAnyFVar (fun fv => !(lc.contains fv)) then
        kept := kept.push g
        continue
      let insts := d1.localInstances.filter fun li => lc.contains li.fvar.fvarId!
      let same ← if t1 == t then pure true else
        withLCtx lc insts <| withReducible <| withNewMCtxDepth <| isDefEq t1 t
      if !same then kept := kept.push g; continue
      let e ← mkFreshExprMVarAt lc insts t1 d1.kind d1.userName
      g1.assign e
      g.assign e
      g1 := e.mvarId!
      merged := merged + 1
    if merged == 0 then throwError "no two goals have the same target"
    setGoals (g1 :: kept.toList)

/-- The number of `let`/`have` binders named `changed` in the value of the definition `n`. -/
def countChanged (n : Name) : MetaM Nat := do
  let some (.defnInfo d) := (← getEnv).find? n | throwError "no definition {n}"
  let rec go : Expr → Nat
    | .letE m t v b _ => (if m == `changed then 1 else 0) + go t + go v + go b
    | .app f a => go f + go a
    | .lam _ t b _ | .forallE _ t b _ => go t + go b
    | .mdata _ b | .proj _ _ b => go b
    | _ => 0
  return go d.value

/-- info: 7 -/
#guard_msgs in
#eval countChanged ``mergeGoals
