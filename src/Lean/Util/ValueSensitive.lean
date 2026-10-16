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

private def taintedHead (names : NameSet) (tainted : List Bool) (e : Expr) : Bool :=
  match e.consumeMData.getAppFn with
  | .const n _ => names.contains n
  | .bvar i => tainted.getD i false
  | _ => false

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

private def riskyEliminatorUse (env : Environment) (names : NameSet) (tainted : List Bool)
    (fn : Expr) (args : Array Expr) : Bool :=
  match fn with
  | .const f _ =>
    if env.isProjectionFn f then
      args.any (taintedHead names tainted ·)
    else
      match eliminatorRisk env f with
      | none | some false => false
      | some true =>
        if f matches .str _ "rec" then
          match env.find? f with
          | some (.recInfo r) =>
            if h : r.getMajorIdx < args.size then taintedHead names tainted args[r.getMajorIdx]
            else false
          | _ => args.any (taintedHead names tainted ·)
        else
          args.any (taintedHead names tainted ·)
  | _ => false

partial def unsafeInAux (env : Environment) (names : NameSet) (tainted : List Bool) (e : Expr) : Bool :=
  match e with
  | .proj _ _ b => taintedHead names tainted b || unsafeInAux env names tainted b
  | .letE _ t v b _ =>
    let vTainted := taintedHead names tainted v || unsafeInAux env names tainted v
    unsafeInAux env names tainted t || unsafeInAux env names tainted v ||
      unsafeInAux env names (vTainted :: tainted) b
  | .app .. =>
    let fn := e.getAppFn
    let args := e.getAppArgs
    args.any (unsafeInAux env names tainted ·) || unsafeInAux env names tainted fn ||
      riskyEliminatorUse env names tainted fn args
  | .lam _ t b _ | .forallE _ t b _ =>
    unsafeInAux env names tainted t || unsafeInAux env names (false :: tainted) b
  | .mdata _ b => unsafeInAux env names tainted b
  | _ => false

/-- Whether a constant uses one of `names` in a position that can inspect its value. -/
def constUnsafelyUsesValue (env : Environment) (names : NameSet) (c : ConstantInfo) : Bool :=
  unsafeInAux env names [] c.type ||
    (c.value? (allowOpaque := true)).any (unsafeInAux env names [] ·)

end Lean.ModuleUsage.ValueSensitive
