import Lean
/-! Meaning digests are linear in a term's distinct subterms, not in its size as a tree: hashing a definition whose
value is a maximally shared DAG of `2^40` tree nodes (41 distinct ones) finishes. -/
open Lean Elab Command

/-- `n + 1` distinct subterms; `2^n` leaves when unfolded as a tree. -/
def sharedSum (n : Nat) : Expr := Id.run do
  let mut e := mkNatLit 1
  for _ in [0:n] do
    e := mkApp2 (mkConst ``Nat.add) e e
  return e

run_cmd liftCoreM <| addDecl <| .defnDecl {
  name := `big, levelParams := [], type := mkConst ``Nat, value := sharedSum 40
  hints := .opaque, safety := .safe }

#eval show CommandElabM Unit from do
  let env ← getEnv
  let h := ModuleUsage.localHash (env.find? `big).get!
  let ds := ModuleUsage.localDigests env
  logInfo m!"{h != default} {(ds.find? (·.1 == `big)).isSome}"
