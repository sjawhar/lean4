import Lean

/-!
`type_checker::reduce_dec_lit` decides `Decidable.decide` of the `Nat`, `Fin` and `BitVec` comparisons below on numerals
(`Nat.decEq`, `instDecidableEqNat`, `Nat.decLe`, `Nat.decLt`, `instDecidableEqFin`, `BitVec.decEq`,
`instDecidableEqBitVec`), and `reduce_nat_inst` computes `+`, `-`, `*`, `/`, `%`, `^` on them. Each result must be the
one the kernel reaches by unfolding the instance, on every literal the kernel can hold. That includes a literal not in
normal form: `unsafeCast` of an `Int` gives a negative big object (`badNeg`) or a big object holding a value below 2^63
(`badBig`), and `addDecl` puts it into a definition, as `tests/lake/tests/challenge-olean-issue` does. The same cast of
the `Int` -5 gives a well-formed scalar, 4294967291 (`badSmall`). The expected output is that of a kernel without the
two rules (sjawhar/lean4 `release/2026-10-24.1` 9f6188296e), so this file checks that the rules decide as the
unfolding does.

Each decision is the kernel's `whnf` of `decide`. `#knat`, `#kfin` and `#kbv` also check that the kernel finds `decide`
definitionally equal to that Boolean and not to the other one, with `decide` on either side (`lazy_delta_reduction`
applies the rule when the other side is a Boolean literal, and `decide +kernel` takes that path), and print
`INCONSISTENT` otherwise. They never print a literal's value.
-/
open Lean Meta Elab Term Command

unsafe def castNatUnsafe (i : Int) : Nat := unsafeCast i
@[implemented_by castNatUnsafe] opaque castNat (i : Int) : Nat

run_elab do
  for (n, v) in [(`badNeg, castNat (-4294967296)), (`badBig, castNat 1099511627776), (`badSmall, castNat (-5))] do
    addDecl <| .defnDecl {
      name := n, levelParams := [], type := .const ``Nat [], value := .lit (.natVal v), hints := .opaque,
      safety := .safe }

axiom badNeg_lt : badNeg < 2^64
axiom badBig_lt : badBig < 2^64
axiom badSmall_lt : badSmall < 2^64

abbrev F := Fin (2^64)
local notation "fNeg" => (Fin.mk badNeg badNeg_lt : F)
local notation "fBig" => (Fin.mk badBig badBig_lt : F)
local notation "fSmall" => (Fin.mk badSmall badSmall_lt : F)
local notation "bvNeg" => (BitVec.ofFin fNeg : BitVec 64)
local notation "bvBig" => (BitVec.ofFin fBig : BitVec 64)
local notation "bvSmall" => (BitVec.ofFin fSmall : BitVec 64)

/-- The kernel's decision on the closed Boolean `t`: its `whnf`, checked against `=?= true` and `=?= false` with `t`
on either side. -/
def kdecide (t : Term) : TermElabM String := do
  let e ← elabTerm t (some (mkConst ``Bool))
  synthesizeSyntheticMVarsNoPostponing
  let e ← instantiateMVars e
  let env ← getEnv
  let k ← ofExceptKernelException (Kernel.whnf env {} e)
  let defeq (a b : Expr) : TermElabM Bool := ofExceptKernelException (Kernel.isDefEq env {} a b)
  let t ← defeq e (mkConst ``Bool.true)
  let f ← defeq e (mkConst ``Bool.false)
  let t' ← defeq (mkConst ``Bool.true) e
  let f' ← defeq (mkConst ``Bool.false) e
  if k.isConstOf ``Bool.true && t && t' && !f && !f' then return "true"
  if k.isConstOf ``Bool.false && f && f' && !t && !t' then return "false"
  return s!"INCONSISTENT (whnf {if k.isConstOf ``Bool.true then "true" else if k.isConstOf ``Bool.false then
    "false" else "other"}, =true {t} {t'}, =false {f} {f'})"

/-- For each pair `a b` of `Nat`s: `Nat.decEq`, `instDecidableEqNat`, `Nat.decLe` and `Nat.decLt`. -/
elab "#knat " ps:(term:max term:max),* : command => liftTermElabM do
  for p in ps.getElems do
    let a : Term := ⟨p.raw[0]⟩
    let b : Term := ⟨p.raw[1]⟩
    let eq ← kdecide (← `(@decide ($a = $b) (Nat.decEq $a $b)))
    let ieq ← kdecide (← `(@decide ($a = $b) (instDecidableEqNat $a $b)))
    let le ← kdecide (← `(@decide ($a ≤ $b) (Nat.decLe $a $b)))
    let lt ← kdecide (← `(@decide ($a < $b) (Nat.decLt $a $b)))
    logInfo m!"{a} {b}: eq {eq}, inst {ieq}, le {le}, lt {lt}"

/-- For each pair `i j` of `Fin (2^64)`s: `instDecidableEqFin`. -/
elab "#kfin " ps:(term:max term:max),* : command => liftTermElabM do
  for p in ps.getElems do
    let i : Term := ⟨p.raw[0]⟩
    let j : Term := ⟨p.raw[1]⟩
    logInfo m!"{i} {j}: {← kdecide (← `(@decide ($i = $j) (instDecidableEqFin (2^64) $i $j)))}"

/-- For each pair `x y` of `BitVec 64`s: `BitVec.decEq` and `instDecidableEqBitVec`. -/
elab "#kbv " ps:(term:max term:max),* : command => liftTermElabM do
  for p in ps.getElems do
    let x : Term := ⟨p.raw[0]⟩
    let y : Term := ⟨p.raw[1]⟩
    let r ← kdecide (← `(@decide ($x = $y) (@BitVec.decEq 64 $x $y)))
    let s ← kdecide (← `(@decide ($x = $y) (@instDecidableEqBitVec 64 $x $y)))
    logInfo m!"{x} {y}: decEq {r}, inst {s}"

/-! Each malformed literal against itself, the others, and numerals around 0, 2^40, 2^63 and 2^64. -/

/--
info: badNeg badNeg: eq true, inst true, le true, lt false
---
info: badNeg badBig: eq false, inst false, le true, lt true
---
info: badNeg badSmall: eq false, inst false, le false, lt false
---
info: badNeg 0: eq false, inst false, le false, lt false
---
info: badNeg 5: eq false, inst false, le false, lt false
---
info: badNeg 1099511627776: eq false, inst false, le false, lt false
---
info: badNeg 9223372036854775807: eq false, inst false, le false, lt false
---
info: badNeg 9223372036854775808: eq false, inst false, le true, lt true
---
info: badNeg 18446744073709551616: eq false, inst false, le true, lt true
-/
#guard_msgs in
#knat badNeg badNeg, badNeg badBig, badNeg badSmall, badNeg 0, badNeg 5, badNeg 1099511627776,
  badNeg 9223372036854775807, badNeg 9223372036854775808, badNeg 18446744073709551616

/--
info: badBig badNeg: eq false, inst false, le false, lt false
---
info: badBig badBig: eq true, inst true, le true, lt false
---
info: badBig badSmall: eq false, inst false, le false, lt false
---
info: badBig 0: eq false, inst false, le false, lt false
---
info: badBig 1099511627775: eq false, inst false, le false, lt false
---
info: badBig 1099511627776: eq false, inst false, le false, lt false
---
info: badBig 1099511627777: eq false, inst false, le false, lt false
---
info: badBig 9223372036854775807: eq false, inst false, le false, lt false
---
info: badBig 9223372036854775808: eq false, inst false, le true, lt true
---
info: badBig 18446744073709551616: eq false, inst false, le true, lt true
-/
#guard_msgs in
#knat badBig badNeg, badBig badBig, badBig badSmall, badBig 0, badBig 1099511627775, badBig 1099511627776,
  badBig 1099511627777, badBig 9223372036854775807, badBig 9223372036854775808, badBig 18446744073709551616

/--
info: badSmall badNeg: eq false, inst false, le true, lt true
---
info: badSmall badBig: eq false, inst false, le true, lt true
---
info: badSmall badSmall: eq true, inst true, le true, lt false
---
info: badSmall 0: eq false, inst false, le false, lt false
---
info: badSmall 5: eq false, inst false, le false, lt false
---
info: badSmall 9223372036854775807: eq false, inst false, le true, lt true
---
info: badSmall 9223372036854775808: eq false, inst false, le true, lt true
-/
#guard_msgs in
#knat badSmall badNeg, badSmall badBig, badSmall badSmall, badSmall 0, badSmall 5, badSmall 9223372036854775807,
  badSmall 9223372036854775808

/-! `9223372036854775807 < badNeg` and `9223372036854775807 < badBig` are false: `Nat.decLt n m` unfolds to
`Nat.ble (Nat.succ n) m`, and 2^63 is a big object compared with the big object `m`, where `n < m` alone would compare
a scalar with a big object and say `true`. -/

/--
info: 0 badNeg: eq false, inst false, le true, lt true
---
info: 5 badNeg: eq false, inst false, le true, lt true
---
info: 1099511627776 badNeg: eq false, inst false, le true, lt true
---
info: 9223372036854775807 badNeg: eq false, inst false, le true, lt false
---
info: 9223372036854775808 badNeg: eq false, inst false, le false, lt false
---
info: 18446744073709551616 badNeg: eq false, inst false, le false, lt false
-/
#guard_msgs in
#knat 0 badNeg, 5 badNeg, 1099511627776 badNeg, 9223372036854775807 badNeg, 9223372036854775808 badNeg,
  18446744073709551616 badNeg

/--
info: 0 badBig: eq false, inst false, le true, lt true
---
info: 1099511627775 badBig: eq false, inst false, le true, lt true
---
info: 1099511627776 badBig: eq false, inst false, le true, lt true
---
info: 1099511627777 badBig: eq false, inst false, le true, lt true
---
info: 9223372036854775807 badBig: eq false, inst false, le true, lt false
---
info: 9223372036854775808 badBig: eq false, inst false, le false, lt false
---
info: 18446744073709551616 badBig: eq false, inst false, le false, lt false
-/
#guard_msgs in
#knat 0 badBig, 1099511627775 badBig, 1099511627776 badBig, 1099511627777 badBig, 9223372036854775807 badBig,
  9223372036854775808 badBig, 18446744073709551616 badBig

/--
info: 0 badSmall: eq false, inst false, le true, lt true
---
info: 5 badSmall: eq false, inst false, le true, lt true
---
info: 9223372036854775807 badSmall: eq false, inst false, le false, lt false
---
info: 9223372036854775808 badSmall: eq false, inst false, le false, lt false
-/
#guard_msgs in
#knat 0 badSmall, 5 badSmall, 9223372036854775807 badSmall, 9223372036854775808 badSmall

/-! Arithmetic on the malformed literals (`reduce_nat_inst`), seen through a decision. -/

/--
info: (badNeg + 1) (badNeg + 1): eq true, inst true, le true, lt false
---
info: (badNeg + 1) 0: eq false, inst false, le false, lt false
---
info: (badNeg - 1) 0: eq false, inst false, le false, lt false
---
info: (badNeg * 2) badNeg: eq false, inst false, le true, lt true
---
info: (badBig + 1) 1099511627777: eq false, inst false, le false, lt false
---
info: (badBig - 1) 1099511627775: eq true, inst true, le true, lt false
---
info: (badBig * 2) 2199023255552: eq true, inst true, le true, lt false
---
info: (badBig + 0) badBig: eq true, inst true, le true, lt false
---
info: (badBig + 0) 1099511627776: eq false, inst false, le false, lt false
---
info: (badSmall + 1) badSmall: eq false, inst false, le false, lt false
---
info: (badSmall * 2) badSmall: eq false, inst false, le false, lt false
-/
#guard_msgs in
#knat (badNeg + 1) (badNeg + 1), (badNeg + 1) 0, (badNeg - 1) 0, (badNeg * 2) badNeg, (badBig + 1) 1099511627777,
  (badBig - 1) 1099511627775, (badBig * 2) 2199023255552, (badBig + 0) badBig, (badBig + 0) 1099511627776,
  (badSmall + 1) badSmall, (badSmall * 2) badSmall

/--
info: (badBig / 2) 549755813888: eq true, inst true, le true, lt false
---
info: (badBig / 2) (badBig / 2): eq true, inst true, le true, lt false
---
info: (badBig / 1) badBig: eq false, inst false, le true, lt true
---
info: (badNeg / 2) badNeg: eq false, inst false, le false, lt false
---
info: (badNeg / 1) 0: eq false, inst false, le false, lt false
---
info: (badBig % 7) 2: eq true, inst true, le true, lt false
---
info: (badBig % 7) (badBig % 7): eq true, inst true, le true, lt false
---
info: (badNeg % 7) 0: eq false, inst false, le false, lt false
---
info: (badNeg % 4294967297) badNeg: eq true, inst true, le true, lt false
---
info: (badBig ^ 1) badBig: eq false, inst false, le true, lt true
---
info: (badBig ^ 1) 1099511627776: eq true, inst true, le true, lt false
---
info: (badBig ^ 2) 1208925819614629174706176: eq true, inst true, le true, lt false
---
info: (badNeg ^ 1) badNeg: eq true, inst true, le true, lt false
---
info: (badNeg ^ 2) 0: eq false, inst false, le false, lt false
---
info: (2 ^ 40) badBig: eq false, inst false, le true, lt true
---
info: (badSmall / 2) 2147483645: eq true, inst true, le true, lt false
---
info: (badSmall % 7) 6: eq true, inst true, le true, lt false
---
info: (badSmall ^ 2) 18446744030759878681: eq true, inst true, le true, lt false
-/
#guard_msgs in
#knat (badBig / 2) 549755813888, (badBig / 2) (badBig / 2), (badBig / 1) badBig, (badNeg / 2) badNeg, (badNeg / 1) 0,
  (badBig % 7) 2, (badBig % 7) (badBig % 7), (badNeg % 7) 0, (badNeg % 4294967297) badNeg, (badBig ^ 1) badBig,
  (badBig ^ 1) 1099511627776, (badBig ^ 2) 1208925819614629174706176, (badNeg ^ 1) badNeg, (badNeg ^ 2) 0,
  (2 ^ 40) badBig, (badSmall / 2) 2147483645, (badSmall % 7) 6, (badSmall ^ 2) 18446744030759878681

/-! `Fin` and `BitVec` equality on the malformed values. -/

/--
info: fNeg fNeg: true
---
info: fNeg (Fin.ofNat (2 ^ 64) 0 : F): false
---
info: fBig (Fin.ofNat (2 ^ 64) 1099511627776 : F): false
---
info: (Fin.ofNat (2 ^ 64) 1099511627776 : F) fBig: false
---
info: fBig fBig: true
---
info: fBig fNeg: false
---
info: fSmall fSmall: true
---
info: fSmall fNeg: false
-/
#guard_msgs in
#kfin fNeg fNeg, fNeg (Fin.ofNat (2^64) 0 : F), fBig (Fin.ofNat (2^64) 1099511627776 : F),
  (Fin.ofNat (2^64) 1099511627776 : F) fBig, fBig fBig, fBig fNeg, fSmall fSmall, fSmall fNeg

/--
info: bvNeg bvNeg: decEq true, inst true
---
info: bvNeg 0#64: decEq false, inst false
---
info: bvBig 0x10000000000#64: decEq false, inst false
---
info: (0x10000000000#64) bvBig: decEq false, inst false
---
info: bvBig bvBig: decEq true, inst true
---
info: bvBig bvNeg: decEq false, inst false
---
info: bvSmall bvSmall: decEq true, inst true
---
info: bvSmall bvBig: decEq false, inst false
-/
#guard_msgs in
#kbv bvNeg bvNeg, bvNeg 0#64, bvBig 0x10000000000#64, (0x10000000000#64) bvBig, bvBig bvBig, bvBig bvNeg,
  bvSmall bvSmall, bvSmall bvBig

/-! The solution of `tests/lake/tests/challenge-olean-issue` elaborates and passes the kernel, as without the rules:
the kernel accepts both facts about `badNeg`, and it is the comparator that must reject the solution. -/

theorem truly_marvelous_0 : ¬badNeg ≤ 9223372036854775807 := by decide
theorem truly_marvelous_1 : ¬9223372036854775807 < badNeg := by decide
