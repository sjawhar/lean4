import Lean

/-!
`ModuleUsage.usedFromInfoTrees`, a native walk, finds the constants a walk written in Lean finds: those of every
`TermInfo` term with its metavariables instantiated by following the node's assignments, and every `FieldInfo`
projection, on the info trees of commands with term and tactic proofs, structures and delayed assignments, and on
synthetic forests: contexts before and after assignments, a chain of delayed assignments, one term under two contexts
in both orders, nested contexts, and terms large enough to grow the walk's sets.
-/

open Lean Elab Meta Command

-- proofs elaborated in parallel keep their info trees in snapshots instead of the command's state
set_option Elab.async false

namespace Ref

unsafe structure WalkState where
  closed : PtrSet Expr := mkPtrSet
  opened : PtrSet Expr := mkPtrSet
  mctx : MetavarContext := {}
  used : NameSet

unsafe def visit (s : WalkState) (e : Expr) : Bool × WalkState :=
  if e.hasMVar then
    let (seen, opened) := s.opened.containsThenInsert { value := e }
    (seen, { s with opened })
  else
    let (seen, closed) := s.closed.containsThenInsert { value := e }
    (seen, { s with closed })

unsafe def walkExpr (e : Expr) : StateM WalkState Unit := do
  if ← modifyGet (visit · e) then return
  match e with
  | .forallE _ d b _ | .lam _ d b _ => walkExpr d; walkExpr b
  | .letE _ t v b _ => walkExpr t; walkExpr v; walkExpr b
  | .app f a => walkExpr f; walkExpr a
  | .mdata _ b => walkExpr b
  | .proj n _ b => modify fun s => { s with used := s.used.insert n }; walkExpr b
  | .const c _ => modify fun s => { s with used := s.used.insert c }
  | .mvar m =>
    let mctx := (← get).mctx
    if let some v := mctx.getExprAssignmentCore? m then walkExpr v
    else if let some d := mctx.getDelayedMVarAssignmentCore? m then walkExpr (.mvar d.mvarIdPending)
  | _ => pure ()

unsafe def used (trees : Array InfoTree) (init : NameSet := {}) : NameSet :=
  let walk : StateM WalkState Unit := trees.forM fun t => t.foldInfoM (init := ()) fun ctx i _ => match i with
    | .ofTermInfo ti => do
      unless ptrEq (← get).mctx ctx.mctx do
        modify fun s => { s with mctx := ctx.mctx, opened := mkPtrSet }
      walkExpr ti.expr
    | .ofFieldInfo fi => modify fun s => { s with used := s.used.insert fi.projName }
    | _ => pure ()
  (walk.run { used := init }).2.used

end Ref

/-- Elaborates `cmd`, then checks that both walks find the same constants in its info trees, and that they find some. -/
elab "#check_used " cmd:command : command => do
  elabCommand cmd
  let trees := (← get).infoState.trees.toArray
  let native ← ModuleUsage.usedFromInfoTrees trees {}
  let ref := unsafe Ref.used trees
  unless native.toList == ref.toList do
    throwError "native walk: {native.toList}\nreference walk: {ref.toList}"
  if native.isEmpty then throwError "no constants found"

#check_used theorem t1 (a b : Nat) (h : a ≤ b) : a < b + 1 := by
  have h2 : b < b + 1 := Nat.lt_succ_self b
  exact Nat.lt_of_le_of_lt h h2

#check_used theorem t2 (xs : List Nat) : (xs ++ []).length = xs.length := by
  induction xs with
  | nil => rfl
  | cons x xs ih => simp

structure P where
  fst : Nat
  snd : Bool

#check_used def f (p : P) : Nat := p.fst + if p.snd then 1 else 0

#check_used theorem t3 : ∀ n : Nat, n + 0 = n := by
  intro n
  cases n <;> simp_all

#check_used example (p q : Prop) (hp : p) (hq : q) : p ∧ q ∧ p := ⟨hp, hq, hp⟩

#check_used def g (n : Nat) : Nat := Id.run do
  let mut s := 0
  for i in [0:n] do
    s := s + i
  return s

/-- Both walks agree on `trees` with `init`. -/
def check (what : String) (trees : Array InfoTree) (init : NameSet := {}) : MetaM Unit := do
  let native ← ModuleUsage.usedFromInfoTrees trees init
  let ref := unsafe Ref.used trees init
  unless native.toList == ref.toList do
    throwError "{what}: native walk {native.toList}\nreference walk {ref.toList}"

def leaf (e : Expr) : InfoTree :=
  .node (.ofTermInfo { elaborator := .anonymous, stx := .missing, lctx := {}, expectedType? := none, expr := e }) {}

def node (cs : List InfoTree) (e : Expr) : InfoTree :=
  .node (.ofTermInfo { elaborator := .anonymous, stx := .missing, lctx := {}, expectedType? := none, expr := e })
    cs.toPArray'

def inCtx (env : Environment) (mctx : MetavarContext) (t : InfoTree) : InfoTree :=
  .context (.commandCtx { env, fileMap := default, mctx, ngen := {} }) t

#eval show MetaM Unit from do
  let env ← getEnv
  let nat := mkConst ``Nat
  let m1 ← mkFreshExprMVar nat
  let m2 ← mkFreshExprMVar nat
  let u ← mkFreshLevelMVar
  let shared := mkApp2 (mkConst ``Nat.add) m1 (.mdata {} (.proj ``Prod 0 m2))
  let e1 := mkApp2 (mkConst ``Nat.mul) shared shared
  let e2 := .letE `x (mkConst ``List [u]) (.lam `y nat (mkApp m1 (.bvar 0)) .default)
    (.forallE `z m2 (.bvar 0) .default) false
  -- nothing assigned
  let mA ← getMCtx
  m1.mvarId!.assign (mkConst ``Nat.zero)
  -- `m1` assigned
  let mB ← getMCtx
  -- a chain of delayed assignments, `d2` to `d` to `p`, with `p` assigned
  let p ← mkFreshExprMVar nat
  let d ← mkFreshExprMVar nat
  let d2 ← mkFreshExprMVar nat
  assignDelayedMVar d.mvarId! #[] p.mvarId!
  assignDelayedMVar d2.mvarId! #[] d.mvarId!
  p.mvarId!.assign (mkApp (mkConst ``Nat.succ) (mkConst ``Nat.zero))
  m2.mvarId!.assign (mkApp2 (mkConst ``And.intro) d2 m1)
  let mC ← getMCtx
  -- an assignment to a term with a delayed-assigned metavariable whose pending one is unassigned
  let q ← mkFreshExprMVar nat
  let d3 ← mkFreshExprMVar nat
  assignDelayedMVar d3.mvarId! #[] q.mvarId!
  let m3 ← mkFreshExprMVar nat
  m3.mvarId!.assign (mkApp (mkConst ``Option.some) d3)
  let mD ← getMCtx
  let e3 := mkApp3 (mkConst ``Prod.mk) m3 e1 e2
  let ctxs := #[mA, mB, mC, mD]
  let exprs := #[e1, e2, e3, shared, m1, m2, d2, p]
  for i in [0:ctxs.size] do
    for j in [0:ctxs.size] do
      for a in [0:exprs.size] do
        for b in [0:exprs.size] do
          -- one term under two contexts, in both orders
          check s!"pair {i} {j} {a} {b}" #[inCtx env ctxs[i]! (leaf exprs[a]!), inCtx env ctxs[j]! (leaf exprs[b]!),
            inCtx env ctxs[i]! (leaf exprs[b]!)]
          -- an inner context overriding the outer one, then the outer one again
          check s!"nested {i} {j} {a} {b}"
            #[inCtx env ctxs[i]! (node [inCtx env ctxs[j]! (leaf exprs[a]!), leaf exprs[b]!] exprs[a]!)]
  -- thousands of distinct subterms with and without metavariables and of distinct constants, across context switches
  let big := (List.range 3000).foldl (fun acc i => mkApp2 (mkConst (Name.mkNum `c i)) acc (mkNatLit i)) m2
  let bigClosed := (List.range 3000).foldl (fun acc i => mkApp2 (mkConst (Name.mkNum `k i)) acc (mkNatLit i)) nat
  let trees := (List.range 60).toArray.map fun i =>
    inCtx env ctxs[i % 4]! (leaf (if i % 3 == 0 then big else if i % 3 == 1 then bigClosed else e3))
  check "growth" trees
  check "growth with init" trees (({} : NameSet).insert `zzz |>.insert ``Nat.zero)
