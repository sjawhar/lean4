import Lean
/-! Differential test: `ValueSensitive.unsafelyUsedValues` (one pass per constant, for all its statement-only
references at once) agrees with a per-reference walk (`Old.constUnsafelyUsesValue env {r} c`, the implementation
it replaced, with a step budget) on handcrafted constants that put theorems in value-inspecting positions through
let-bound variables, binders and eliminators, and on every (constant, statement-only reference) pair of the
constants of `Init.Prelude`; and asking for one reference alone gives the same answer as asking for all. A pair
whose per-reference walk exceeds the budget (exponential on shared terms) is counted, not compared. -/
open Lean Lean.ModuleUsage

namespace Old

abbrev W := ExceptT Unit (StateM Nat)

def tick : W Unit := do
  let n ← get
  if n == 0 then throw () else set (n - 1)

def taintedHead (names : NameSet) (tainted : List Bool) (e : Expr) : Bool :=
  match e.consumeMData.getAppFn with
  | .const n _ => names.contains n
  | .bvar i => tainted.getD i false
  | _ => false

def eliminatorRisk (env : Environment) (f : Name) : Option Bool :=
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

def riskyEliminatorUse (env : Environment) (names : NameSet) (tainted : List Bool)
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

partial def unsafeInAux (env : Environment) (names : NameSet) (tainted : List Bool) (e : Expr) : W Bool := do
  tick
  match e with
  | .proj _ _ b => if taintedHead names tainted b then return true else unsafeInAux env names tainted b
  | .letE _ t v b _ =>
    let vTainted ← if taintedHead names tainted v then pure true else unsafeInAux env names tainted v
    if ← unsafeInAux env names tainted t then return true
    if ← unsafeInAux env names tainted v then return true
    unsafeInAux env names (vTainted :: tainted) b
  | .app .. =>
    let fn := e.getAppFn
    let args := e.getAppArgs
    for a in args do
      if ← unsafeInAux env names tainted a then return true
    if ← unsafeInAux env names tainted fn then return true
    return riskyEliminatorUse env names tainted fn args
  | .lam _ t b _ | .forallE _ t b _ =>
    if ← unsafeInAux env names tainted t then return true
    unsafeInAux env names (false :: tainted) b
  | .mdata _ b => unsafeInAux env names tainted b
  | _ => return false

def constUnsafelyUsesValue (env : Environment) (names : NameSet) (c : ConstantInfo) : W Bool := do
  if ← unsafeInAux env names [] c.type then return true
  match c.value? (allowOpaque := true) with
  | some v => unsafeInAux env names [] v
  | none => return false

end Old

/-- Statement-only references of `c`, as `commandRecords` computes them. -/
def stmtOnlyRefs (env : Environment) (c : ConstantInfo) : NameSet :=
  (refs env c).foldl (init := {}) fun s r =>
    match env.find? r with
    | some ri => if isStmtOnly ri && !env.contains (Compiler.mkUnsafeRecName r) then s.insert r else s
    | none => s

theorem thA : True ∧ True := ⟨trivial, trivial⟩
def useProj : True := thA.1
def useLet : True := let x := thA; x.2
def useLetShadow : True := let x := thA; (fun (x : True ∧ True) => x.1) ⟨trivial, trivial⟩
def useNested : True := let x := thA; let y := x; (fun (_ : Nat) => y.1) 0
def useMatch (h : True ∧ True := thA) : True := match h with | ⟨a, _⟩ => a
def useCases : True := And.casesOn (motive := fun _ => True) thA (fun a _ => a)
def useRec : Nat := @Acc.rec Nat (· < ·) (fun _ _ => Nat) (fun _ _ _ => 0) 0 (Nat.lt_wfRel.wf.apply 0)
def useNone : True ∧ True := thA
def useLetUnused : True := let x := thA; trivial

def budget : Nat := 200000

def oldResult (env : Environment) (r : Name) (c : ConstantInfo) : Option Bool :=
  match (Old.constUnsafelyUsesValue env (({} : NameSet).insert r) c).run.run budget with
  | (.ok b, _) => some b
  | (.error _, _) => none

#eval show Elab.Command.CommandElabM Unit from do
  let env ← getEnv
  for n in [``useProj, ``useLet, ``useLetShadow, ``useNested, ``useMatch, ``useCases, ``useRec, ``useNone,
      ``useLetUnused] do
    let some c := env.find? n | throwError "missing {n}"
    let s := stmtOnlyRefs env c
    let new := ValueSensitive.unsafelyUsedValues env s c
    IO.println s!"{n}: one pass {new.toList}, per reference {s.toList.map fun r => (r, oldResult env r c)}"
  let some prelude := env.getModuleIdx? `Init.Prelude | throwError "no Init.Prelude"
  let mut pairs := 0
  let mut positives := 0
  let mut skipped := 0
  let mut mismatches : Array (Name × Name) := #[]
  for (n, c) in env.constants.map₁.toList do
    unless env.getModuleIdxFor? n == some prelude do continue
    let s := stmtOnlyRefs env c
    if s.isEmpty then continue
    let new := ValueSensitive.unsafelyUsedValues env s c
    for r in s do
      let one := ValueSensitive.unsafelyUsedValues env (({} : NameSet).insert r) c
      if one.contains r != new.contains r then mismatches := mismatches.push (n, r)
      match oldResult env r c with
      | some old =>
        pairs := pairs + 1
        if old then positives := positives + 1
        if old != new.contains r then mismatches := mismatches.push (n, r)
      | none => skipped := skipped + 1
  IO.println s!"Init.Prelude: pairs compared {pairs} ({positives} value-sensitive), over budget {skipped}, \
    mismatches {mismatches}"
