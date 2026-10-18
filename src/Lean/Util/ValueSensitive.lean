/-
Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Sami Jawhar
-/
module

prelude
public import Lean.AuxRecursor
public import Lean.Meta.Match.MatcherInfo
import Lean.ProjFns

public section
namespace Lean.ModuleUsage.ValueSensitive

/-- The binders in scope during the walk: how many (`depth`), and the `let`-bound ones whose value stood for names of
`names` (`tainted`, by binder level counted from the outside; `top?`, the innermost one's level). `id` identifies
the scope for the cache of subterms whose result depends on it. -/
private structure Scope where
  depth : Nat := 0
  tainted : Std.TreeMap Nat NameSet := {}
  top? : Option Nat := none
  id : Nat := 0

/-- What the loose bound variable `i` stands for. -/
private def Scope.bvar (sc : Scope) (i : Nat) : NameSet :=
  if sc.top?.isNone || sc.depth ≤ i then {} else sc.tainted.getD (sc.depth - 1 - i) {}

/-- Whether no loose bound variable of `e` stands for a name, so that its result does not depend on the scope. -/
private def Scope.independent (sc : Scope) (e : Expr) : Bool :=
  match sc.top? with
  | none => true
  | some level => e.looseBVarRange ≤ sc.depth - 1 - level

private structure State where
  /-- Results of subterms independent of the scope. -/
  independent : Std.HashMap Expr NameSet := {}
  /-- Results of the other subterms, by scope. -/
  dependent : Std.HashMap (Nat × Expr) NameSet := {}
  nextId : Nat := 1

/-- The scope inside one more binder, whose variable stands for `s`. -/
private def Scope.enter (sc : Scope) (s : NameSet) : StateM State Scope := do
  let id ← modifyGet fun st => (st.nextId, { st with nextId := st.nextId + 1 })
  if s.isEmpty then return { sc with depth := sc.depth + 1, id }
  return { depth := sc.depth + 1, tainted := sc.tainted.insert sc.depth s, top? := some sc.depth, id }

/-- `a ∪ b`, inserting the smaller set into the larger: a binder chain passes its body's result up unchanged in
time independent of the result's size. -/
private def union (a b : NameSet) : NameSet :=
  if b.size ≤ a.size then a ∪ b else b ∪ a

/-- The names of `names` that `e`'s head stands for: the constant itself, or what a let-bound variable's value
stood for. -/
private def headNames (names : NameSet) (sc : Scope) (e : Expr) : NameSet :=
  match e.consumeMData.getAppFn with
  | .const n _ => if names.contains n then ({} : NameSet).insert n else {}
  | .bvar i => sc.bvar i
  | _ => {}

private def eliminatorRisk (env : Environment) (f : Name) : Option Bool :=
  if f matches .str _ "rec" then
    match env.find? f with
    | some (.recInfo r) => some !r.k
    | _ => some true
  else if isCasesOnRecursor env f || isRecOnRecursor env f || isBRecOnRecursor env f then
    match env.find? (f.getPrefix ++ `rec) with
    | some (.recInfo r) => some !r.k
    | _ => some true
  else if Lean.Meta.isMatcherCore env f then
    some true
  else
    none

private def argsHeadNames (names : NameSet) (sc : Scope) (args : Array Expr) : NameSet :=
  args.foldl (fun s a => union s (headNames names sc a)) {}

/-- The names of `names` that an application of `fn` to `args` can inspect the value of: arguments of a
projection, the major premise of a recursor without K, any argument of a matcher or other eliminator. -/
private def riskyEliminatorUses (env : Environment) (names : NameSet) (sc : Scope)
    (fn : Expr) (args : Array Expr) : NameSet :=
  match fn with
  | .const f _ =>
    if env.isProjectionFn f then
      argsHeadNames names sc args
    else
      match eliminatorRisk env f with
      | none | some false => {}
      | some true =>
        if f matches .str _ "rec" then
          match env.find? f with
          | some (.recInfo r) =>
            if h : r.getMajorIdx < args.size then headNames names sc args[r.getMajorIdx] else {}
          | _ => argsHeadNames names sc args
        else
          argsHeadNames names sc args
  | _ => {}

/-- The names of `names` that `e` uses in a position that can inspect their value. Each subterm of the term's DAG
is walked once per scope it is reached in whose names it depends on, and once overall when it depends on none
(`Scope.independent`); each node costs time independent of the binder depth. -/
private partial def unsafeUses (env : Environment) (names : NameSet) (sc : Scope) (e : Expr) :
    StateM State NameSet := do
  let independent := sc.independent e
  if independent then
    if let some r := (← get).independent[e]? then return r
  else if let some r := (← get).dependent[(sc.id, e)]? then return r
  let r ← match e with
    | .proj _ _ b => do pure (union (headNames names sc b) (← unsafeUses env names sc b))
    | .letE _ t v b _ => do
      let vUses ← unsafeUses env names sc v
      let vTainted := union (headNames names sc v) vUses
      let tUses ← unsafeUses env names sc t
      pure (union (union tUses vUses) (← unsafeUses env names (← sc.enter vTainted) b))
    | .app .. => do
      let fn := e.getAppFn
      let args := e.getAppArgs
      let mut s := union (riskyEliminatorUses env names sc fn args) (← unsafeUses env names sc fn)
      for a in args do
        s := union s (← unsafeUses env names sc a)
      pure s
    | .lam _ t b _ | .forallE _ t b _ => do
      let tUses ← unsafeUses env names sc t
      pure (union tUses (← unsafeUses env names (← sc.enter {}) b))
    | .mdata _ b => unsafeUses env names sc b
    | _ => pure {}
  if independent then modify fun st => { st with independent := st.independent.insert e r }
  else modify fun st => { st with dependent := st.dependent.insert (sc.id, e) r }
  return r

/-- The names of `names` that a constant uses in a position that can inspect their value. -/
def unsafelyUsedValues (env : Environment) (names : NameSet) (c : ConstantInfo) : NameSet :=
  if names.isEmpty then {} else
  Id.run <| StateT.run' (s := ({} : State)) do
    let ty ← unsafeUses env names {} c.type
    match c.value? (allowOpaque := true) with
    | some v => return ty ∪ (← unsafeUses env names {} v)
    | none => return ty

end Lean.ModuleUsage.ValueSensitive
