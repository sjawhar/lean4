import Lean

/-!
`Lean.exprConsts`, a native walk, finds the constants `Expr.foldConsts` finds: the names of `const` nodes and the
structure names of `proj` nodes, not following metavariables, in the types and values of library constants and in
terms with projections, metavariables and shared subterms.
-/

open Lean

def agrees (e : Expr) : Bool :=
  let s : NameSet := (exprConsts e).foldl (fun s n => s.insert n) {}
  s.toList == e.getUsedConstantsAsSet.toList

def shared : Expr :=
  let x := mkApp2 (.const ``Nat.add []) (.const ``Nat.zero []) (.lit (.natVal 1))
  mkApp2 (.const ``Nat.mul []) x x

#guard agrees shared
#guard agrees (.proj ``Prod 0 (.mvar ⟨`m⟩))
#guard agrees (.lam `x (.const ``Nat []) (.mdata {} (.proj ``Prod 1 (.bvar 0))) .default)
#guard agrees (.letE `y (.sort .zero) (.const ``True []) (.app (.mvar ⟨`n⟩) (.const ``False [])) false)
#guard (exprConsts (.mvar ⟨`m⟩)).isEmpty

#eval show CoreM Unit from do
  let env ← getEnv
  for n in [``Nat.add_comm, ``List.map, ``Array.foldl, ``Lean.Name.quickLt, ``Lean.Expr.instantiate1,
      ``Lean.Meta.isDefEq, ``List.length_append, ``Prod.mk, ``Nat.rec, ``Std.HashMap.insert] do
    let some c := env.find? n | throwError "missing {n}"
    unless agrees c.type && (c.value? (allowOpaque := true)).all agrees do
      throwError "exprConsts and foldConsts differ on {n}"
