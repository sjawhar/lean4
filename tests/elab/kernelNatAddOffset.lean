import Lean

/-!
Kernel definitional equality of a numeral against `a + k` with a literal offset `k` and a symbolic `a`
(`type_checker::is_def_eq_offset`). `a + k` is `Nat.succ^k a`, so `n =?= a + k` reduces to `n - k =?= a` (false when
`n < k`) and `Nat.succ e =?= a + k` to `e =?= a + (k - 1)`, without unfolding `Nat.add` `k` times. The offsets below
are large enough that the one-`Nat.succ`-per-step reduction does not finish in reasonable time.
-/
open Lean Meta Elab Term Command

elab "#kdefeq " a:term " =?= " b:term : command => liftTermElabM do
  let ea ← elabTerm a none
  let eb ← elabTerm b none
  synthesizeSyntheticMVarsNoPostponing
  let ea ← instantiateMVars ea
  let eb ← instantiateMVars eb
  logInfo m!"{← ofExceptKernelException (Kernel.isDefEq (← getEnv) {} ea eb)}"

/-- info: false -/
#guard_msgs in #kdefeq (fun (_ : Nat) => (15728640000 : Nat)) =?= (fun (x : Nat) => x + 1114112000)
/-- info: false -/
#guard_msgs in #kdefeq (fun (x : Nat) => x + 1114112000) =?= (fun (_ : Nat) => (15728640000 : Nat))
/-- info: false -/
#guard_msgs in #kdefeq (fun (_ : Nat) => (5 : Nat)) =?= (fun (x : Nat) => x + 1114112000)
/-- info: false -/
#guard_msgs in #kdefeq (fun (_ : Nat) => (0 : Nat)) =?= (fun (x : Nat) => x + 1114112000)
/-- info: false -/
#guard_msgs in #kdefeq (fun (x : Nat) => Nat.succ x) =?= (fun (x : Nat) => x + 1114112000)

-- the remainder matches
/-- info: true -/
#guard_msgs in #kdefeq (fun (_ : Nat) => (1114112007 : Nat)) =?= (fun (_ : Nat) => (7 : Nat) + 1114112000)
/-- info: true -/
#guard_msgs in #kdefeq (fun (_ : Nat) => (1114112000 : Nat)) =?= (fun (_ : Nat) => (0 : Nat) + 1114112000)
/-- info: true -/
#guard_msgs in #kdefeq (fun (x : Nat) => x + 1114112000) =?= (fun (x : Nat) => Nat.succ (x + 1114111999))
/-- info: true -/
#guard_msgs in #kdefeq (fun (x : Nat) => Nat.succ (Nat.succ x)) =?= (fun (x : Nat) => x + 2)
/-- info: true -/
#guard_msgs in #kdefeq (fun (x : Nat) => (x + 2) + 1114112000) =?= (fun (x : Nat) => Nat.succ (Nat.succ x) + 1114112000)
/-- info: false -/
#guard_msgs in #kdefeq (fun (_ : Nat) => (3 : Nat)) =?= (fun (x : Nat) => x + (2 * 1000000000))

-- `Nat.ble`/`Nat.beq` (and so `Nat.decLe`/`Nat.decEq`, `Nat.mod`'s `ite`) against an offset
/-- info: true -/
#guard_msgs in #kdefeq (fun (_ : Nat) => true) =?= (fun (x : Nat) => Nat.ble 1114112000 (x + 1114112000))
/-- info: true -/
#guard_msgs in #kdefeq (fun (_ : Nat) => true) =?= (fun (x : Nat) => Nat.ble 5 (x + 1114112000))
/-- info: false -/
#guard_msgs in #kdefeq (fun (_ : Nat) => false) =?= (fun (x : Nat) => Nat.ble 5 (x + 1114112000))
/-- info: true -/
#guard_msgs in #kdefeq (fun (x : Nat) => Nat.ble 0 x) =?= (fun (x : Nat) => Nat.ble (2^64) (x + (2^64)))
/-- info: true -/
#guard_msgs in #kdefeq (fun (_ : Nat) => false) =?= (fun (x : Nat) => Nat.ble (x + 1114112000) 5)
/-- info: true -/
#guard_msgs in #kdefeq (fun (x : Nat) => Nat.ble x 3) =?= (fun (x : Nat) => Nat.ble (x + 1114112000) 1114112003)
/-- info: true -/
#guard_msgs in #kdefeq (fun (_ : Nat) => false) =?= (fun (x : Nat) => Nat.beq 5 (x + 1114112000))
/-- info: true -/
#guard_msgs in #kdefeq (fun (x : Nat) => Nat.beq 3 x) =?= (fun (x : Nat) => Nat.beq 1114112003 (Nat.succ (x + 1114111999)))
/-- info: true -/
#guard_msgs in #kdefeq (fun (x : Nat) => Nat.beq x 3) =?= (fun (x : Nat) => Nat.beq (x + 1114112000) 1114112003)
/-- info: false -/
#guard_msgs in #kdefeq (fun (_ : Nat) => (15728640000 : Nat) % 2^64) =?= (fun (x : Nat) => (x + 1114112000) % 2^64)
/-- info: true -/
#guard_msgs in #kdefeq (fun (x : Nat) => (x + 1114112000) % 2^64) =?= (fun (x : Nat) => (x + 1114112000) % 2^64)

-- the module-sized shape behind the change: a 64-bit register value against a sign-extended 32-bit count plus an offset
/-- info: false -/
#guard_msgs in #kdefeq (fun (_ : BitVec 32) => (0xf00000#64)) =?= (fun (c : BitVec 32) => c.signExtend 64 + 0x110000#64)
/-- info: false -/
#guard_msgs in #kdefeq (fun (_ : BitVec 32) => (0xf00000000#64)) =?= (fun (c : BitVec 32) => c.signExtend 64 + 0x110000000#64)
