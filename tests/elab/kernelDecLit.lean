import Lean

/-!
Kernel reduction of the `Decidable` instances of `Nat` equality and order, `Fin` equality and `BitVec` equality
(`Nat.decEq`, `instDecidableEqNat`, `Nat.decLe`, `Nat.decLt`, `instDecidableEqFin`, `BitVec.decEq`,
`instDecidableEqBitVec`) when both arguments reduce to numerals (`type_checker::reduce_dec_lit`). The kernel returns
`isTrue`/`isFalse` at once instead of unfolding the instance's `match`/`dite` chain. The tests check that the
kernel's decision equals the one `Meta.whnf` reaches by unfolding the definitions, that the returned constructor is
well typed, and that terms whose arguments are not numerals still do not reduce.
-/
open Lean Meta Elab Term Command

/-- `decide p` for every `p` in the list: the kernel's `whnf` must be the Boolean `Meta.whnf` reaches by unfolding
(transparency `all`). Prints the number of agreeing cases, or every disagreement. -/
elab "#kdecide_agree " ps:term,* : command => liftTermElabM do
  let mut ok : Nat := 0
  for p in ps.getElems do
    let e ← elabTerm (← `(decide $p)) (some (mkConst ``Bool))
    synthesizeSyntheticMVarsNoPostponing
    let e ← instantiateMVars e
    let k ← ofExceptKernelException (Kernel.whnf (← getEnv) {} e)
    let m ← withTransparency .all <| whnf e
    if k == m && (k.isConstOf ``Bool.true || k.isConstOf ``Bool.false) then
      ok := ok + 1
    else
      logInfo m!"disagree on {p}: kernel {k}, Meta {m}"
  logInfo m!"agree {ok}"

/-- The kernel's `whnf` of an instance application `d : Decidable p`: its constructor, and whether the result is a
well-typed term of a type the kernel accepts as `Decidable p`. -/
elab "#kdec_ctor " d:term : command => liftTermElabM do
  let e ← elabTerm d none
  synthesizeSyntheticMVarsNoPostponing
  let e ← instantiateMVars e
  let env ← getEnv
  let r ← ofExceptKernelException (Kernel.whnf env {} e)
  let ty ← ofExceptKernelException (Kernel.check env {} r)
  let ety ← inferType e
  let same ← ofExceptKernelException (Kernel.isDefEq env {} ty ety)
  let ctor := match r.getAppFn with
    | .const n _ => if n == ``Decidable.isTrue || n == ``Decidable.isFalse then n.toString else "stuck"
    | _ => "stuck"
  logInfo m!"{ctor} welltyped={same}"

elab "#kdefeq " a:term " =?= " b:term : command => liftTermElabM do
  let ea ← elabTerm a none
  let eb ← elabTerm b none
  synthesizeSyntheticMVarsNoPostponing
  let ea ← instantiateMVars ea
  let eb ← instantiateMVars eb
  logInfo m!"{← ofExceptKernelException (Kernel.isDefEq (← getEnv) {} ea eb)}"

/-! `Nat` -/

/-- info: agree 22 -/
#guard_msgs in
#kdecide_agree (0 : Nat) = 0, (0 : Nat) = 1, (5 : Nat) = 5, (2^64 : Nat) = 2^64, (2^64 : Nat) = 2^64 + 1,
  (18446744073709551617 : Nat) = 2^64 + 1,
  (0 : Nat) ≤ 0, (1 : Nat) ≤ 0, (0 : Nat) ≤ 1, (2^64 : Nat) ≤ 2^64 - 1, (2^64 - 1 : Nat) ≤ 2^64, (7 : Nat) ≤ 7,
  (0 : Nat) < 0, (0 : Nat) < 1, (1 : Nat) < 0, (2^64 : Nat) < 2^64, (2^64 : Nat) < 2^64 + 1, (2^65 : Nat) < 3,
  (3 : Nat) ≠ 4, (2^64 : Nat) ≠ 2^64, (10 : Nat) - 20 = 0, (2^64 + 7 : Nat) % 2^64 < 8

/-- info: Decidable.isTrue welltyped=true -/
#guard_msgs in #kdec_ctor Nat.decEq (2^64) (2^64)
/-- info: Decidable.isFalse welltyped=true -/
#guard_msgs in #kdec_ctor Nat.decEq (2^64) (2^64 + 1)
/-- info: Decidable.isTrue welltyped=true -/
#guard_msgs in #kdec_ctor instDecidableEqNat 7 7
/-- info: Decidable.isFalse welltyped=true -/
#guard_msgs in #kdec_ctor instDecidableEqNat 0 7
/-- info: Decidable.isTrue welltyped=true -/
#guard_msgs in #kdec_ctor Nat.decLe 3 (2^64)
/-- info: Decidable.isFalse welltyped=true -/
#guard_msgs in #kdec_ctor Nat.decLe (2^64) 3
/-- info: Decidable.isTrue welltyped=true -/
#guard_msgs in #kdec_ctor Nat.decLt 3 4
/-- info: Decidable.isFalse welltyped=true -/
#guard_msgs in #kdec_ctor Nat.decLt 4 4

/-! `Fin` -/

/-- info: agree 10 -/
#guard_msgs in
#kdecide_agree (Fin.ofNat 5 3) = Fin.ofNat 5 3, (Fin.ofNat 5 3) = Fin.ofNat 5 8, (Fin.ofNat 5 3) = Fin.ofNat 5 4,
  (Fin.ofNat 1 0) = Fin.ofNat 1 9, (Fin.ofNat (2^64) (2^64 + 2)) = Fin.ofNat (2^64) 2,
  (Fin.ofNat (2^64) (2^64 - 1)) = Fin.ofNat (2^64) 0, (⟨2, by decide⟩ : Fin 3) = ⟨2, by decide⟩,
  (⟨2, by decide⟩ : Fin 3) = ⟨1, by decide⟩, (Fin.last 7) = Fin.ofNat 8 7, (0 : Fin 4) = 4

/-- info: Decidable.isTrue welltyped=true -/
#guard_msgs in #kdec_ctor instDecidableEqFin 5 (Fin.ofNat 5 3) (Fin.ofNat 5 8)
/-- info: Decidable.isFalse welltyped=true -/
#guard_msgs in #kdec_ctor instDecidableEqFin (2^64) (Fin.ofNat _ 1) (Fin.ofNat _ (2^64 - 1))

/-! `BitVec` -/

/-- info: agree 18 -/
#guard_msgs in
#kdecide_agree (0#0) = 0#0, (5#0) = 0#0, (1#1) = 3#1, (0#1) = 1#1, (255#8) = 511#8, (256#8) = 0#8, (3#8) = 4#8,
  (0xffffffffffffffff#64) = (-1 : BitVec 64), (0xf00000#64) = 0xf00000#64, (0xf00000#64) = 0x110000#64,
  (0x123456789abcdef0#64) + 0x10 = 0x123456789abcdf00#64, (1#65) <<< 64 = 0x10000000000000000#65,
  (1#65) <<< 65 = 0#65, BitVec.ofNat 64 (2^70 + 3) = 3#64, (7#64) - 8 = 0xffffffffffffffff#64,
  ((5#32).signExtend 64) = 5#64, ((0x80000000#32).signExtend 64) = 0xffffffff80000000#64, (5#64) ≠ 6#64

/-- info: Decidable.isTrue welltyped=true -/
#guard_msgs in #kdec_ctor BitVec.decEq (256#8) (0#8)
/-- info: Decidable.isFalse welltyped=true -/
#guard_msgs in #kdec_ctor BitVec.decEq (0xf00000#64) (0x110000#64)
/-- info: Decidable.isTrue welltyped=true -/
#guard_msgs in #kdec_ctor instDecidableEqBitVec (0xf00000#64) (0xf00000#64)

/-! Negative cases: no decision for arguments that are not numerals, and no wrong decision. -/

opaque k8 : BitVec 8
opaque kn : Nat
/-- info: stuck welltyped=true -/
#guard_msgs in #kdec_ctor instDecidableEqBitVec k8 (5#8)
/-- info: stuck welltyped=true -/
#guard_msgs in #kdec_ctor Nat.decEq kn 5
/-- info: stuck welltyped=true -/
#guard_msgs in #kdec_ctor Nat.decLe 5 kn
/-- info: false -/
#guard_msgs in #kdefeq decide ((5#64) = 6#64) =?= true
/-- info: false -/
#guard_msgs in #kdefeq decide ((256#8) = 0#8) =?= false
/-- info: false -/
#guard_msgs in #kdefeq decide ((2^64 : Nat) ≤ 2^64 - 1) =?= true
/-- info: false -/
#guard_msgs in #kdefeq (fun (x : BitVec 64) => decide (x = 5#64)) =?= (fun (_ : BitVec 64) => false)
/-- info: false -/
#guard_msgs in #kdefeq (fun (x : Fin 5) => decide (x = 3)) =?= (fun (_ : Fin 5) => true)

/-! Through the type checker: `decide +kernel` proofs and their failures. -/

theorem bv_ne : (0xf00000#64) ≠ 0x110000#64 := by decide +kernel
theorem bv_eq : BitVec.ofNat 64 (2^70 + 3) = 3#64 := by decide +kernel
theorem fin_eq : Fin.ofNat (2^64) (2^64 + 2) = Fin.ofNat (2^64) 2 := by decide +kernel
theorem nat_lt : (2^64 : Nat) < 2^64 + 1 := by decide +kernel

/--
error: Tactic `decide` proved that the proposition
  15728640#64 = 1114112#64
is false
-/
#guard_msgs (error, drop all) in
theorem bv_bad : (0xf00000#64) = 0x110000#64 := by decide +kernel

/-! The instance chain (`instDecidableEqBitVec`, `BitVec.decEq`, `instDecidableEqFin`, `Nat.decEq` and their
matchers, 36 kernel unfolds before) is not unfolded any more: the kernel counters below list only what leads to it. -/

set_option diagnostics true in
set_option diagnostics.threshold 0 in
/--
trace: [diag] Diagnostics
  [type_class] used instances (max: 3, num: 1):
    [type_class] instOfNatNat ↦ 3
  use `set_option diagnostics.threshold <num>` to control threshold for reporting counters
---
trace: [diag] Diagnostics
  [reduction] unfolded reducible declarations (max: 6, num: 2):
    [reduction] Ne ↦ 6
    [reduction] DecidableEq ↦ 2
  [type_class] used instances (max: 3, num: 3):
    [type_class] instOfNatNat ↦ 3
    [type_class] instDecidableEqBitVec ↦ 1
    [type_class] instDecidableNot ↦ 1
  [def_eq] heuristic for solving `f a =?= f b` (max: 1, num: 1):
    [def_eq] decide ↦ 1
  [kernel] unfolded declarations (max: 4, num: 11):
    [kernel] instOfNatNat ↦ 4
    [kernel] OfNat.ofNat ↦ 4
    [kernel] BitVec.ofNat ↦ 2
    [kernel] Decidable.casesOn ↦ 2
    [kernel] Decidable.rec ↦ 2
    [kernel] Fin.Internal.ofNat ↦ 2
    [kernel] DecidableEq ↦ 1
    [kernel] Ne ↦ 1
    [kernel] instDecidableNot ↦ 1
    [kernel] decide ↦ 1
    [kernel] instDecidableAnd.match_1 ↦ 1
  use `set_option diagnostics.threshold <num>` to control threshold for reporting counters
-/
#guard_msgs (drop info, trace) in
theorem bv_ne_diag : (0xf00000#64) ≠ 0x110000#64 := by decide +kernel
