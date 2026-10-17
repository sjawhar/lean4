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

/-- The names of `names` that `e`'s head stands for: the constant itself, or what a let-bound variable's value
stood for (`tainted`, indexed by de Bruijn index). -/
private def headNames (names : NameSet) (tainted : List NameSet) (e : Expr) : NameSet :=
  match e.consumeMData.getAppFn with
  | .const n _ => if names.contains n then ({} : NameSet).insert n else {}
  | .bvar i => tainted.getD i {}
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

private def argsHeadNames (names : NameSet) (tainted : List NameSet) (args : Array Expr) : NameSet :=
  args.foldl (fun s a => s ∪ headNames names tainted a) {}

/-- The names of `names` that an application of `fn` to `args` can inspect the value of: arguments of a
projection, the major premise of a recursor without K, any argument of a matcher or other eliminator. -/
private def riskyEliminatorUses (env : Environment) (names : NameSet) (tainted : List NameSet)
    (fn : Expr) (args : Array Expr) : NameSet :=
  match fn with
  | .const f _ =>
    if env.isProjectionFn f then
      argsHeadNames names tainted args
    else
      match eliminatorRisk env f with
      | none | some false => {}
      | some true =>
        if f matches .str _ "rec" then
          match env.find? f with
          | some (.recInfo r) =>
            if h : r.getMajorIdx < args.size then headNames names tainted args[r.getMajorIdx] else {}
          | _ => argsHeadNames names tainted args
        else
          argsHeadNames names tainted args
  | _ => {}

/-- The names of `names` that `e` uses in a position that can inspect their value. The result for a subterm whose
loose bound variables all stand for no name does not depend on the context, so it is cached: the walk visits each
such subterm of the term's DAG once. -/
private partial def unsafeUses (env : Environment) (names : NameSet) (tainted : List NameSet) (e : Expr) :
    StateM (Std.HashMap Expr NameSet) NameSet := do
  let cacheable := (tainted.take e.looseBVarRange).all (·.isEmpty)
  if cacheable then
    if let some r := (← get)[e]? then return r
  let r ← match e with
    | .proj _ _ b => do pure (headNames names tainted b ∪ (← unsafeUses env names tainted b))
    | .letE _ t v b _ => do
      let vUses ← unsafeUses env names tainted v
      let vTainted := headNames names tainted v ∪ vUses
      pure ((← unsafeUses env names tainted t) ∪ vUses ∪ (← unsafeUses env names (vTainted :: tainted) b))
    | .app .. => do
      let fn := e.getAppFn
      let args := e.getAppArgs
      let mut s := riskyEliminatorUses env names tainted fn args ∪ (← unsafeUses env names tainted fn)
      for a in args do
        s := s ∪ (← unsafeUses env names tainted a)
      pure s
    | .lam _ t b _ | .forallE _ t b _ => do
      pure ((← unsafeUses env names tainted t) ∪ (← unsafeUses env names ({} :: tainted) b))
    | .mdata _ b => unsafeUses env names tainted b
    | _ => pure {}
  if cacheable then modify (·.insert e r)
  return r

/-- The names of `names` that a constant uses in a position that can inspect their value. -/
def unsafelyUsedValues (env : Environment) (names : NameSet) (c : ConstantInfo) : NameSet :=
  if names.isEmpty then {} else
  Id.run <| StateT.run' (s := {}) do
    let ty ← unsafeUses env names [] c.type
    match c.value? (allowOpaque := true) with
    | some v => return ty ∪ (← unsafeUses env names [] v)
    | none => return ty

end Lean.ModuleUsage.ValueSensitive
