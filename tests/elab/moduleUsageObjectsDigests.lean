import Lean
/-! `ModuleUsage.objectsDigests` digests payload contents: equal contents get equal digests however their objects are
shared, other contents another digest. It gives no digest for a value it cannot see by contents: a closure; a
reference, since which references of a value are the same object is not in their contents (`ST.Ref.ptrEq` observes
it), so `(r, r)` and `(r, r')` must not get one digest; and a promise not yet resolved, whose value it would wait for.
A resolved promise is digested by its value. -/
open Lean ModuleUsage

/--
info: shared and copied equal: true, other contents differ: true, closure: none, references: [none, none], pending promise: none, resolved promise digested: true
-/
#guard_msgs in
#eval show IO Unit from do
  let n ← (← IO.mkRef 3).get
  let x := Array.range n
  let y := Array.range n
  let ds := objectsDigests #[#[x, x], #[x, y], #[x, Array.range (n + 1)]]
  let f : Nat → Nat := fun k => k + n
  let r ← IO.mkRef (0 : Nat)
  let r' ← IO.mkRef (0 : Nat)
  let refs := objectsDigests #[(r, r), (r, r')]
  let pending ← IO.Promise.new (α := Nat)
  let resolved ← IO.Promise.new (α := Nat)
  resolved.resolve n
  IO.println s!"shared and copied equal: {ds[0]!.isSome && ds[0]! == ds[1]!}, \
    other contents differ: {ds[1]!.isSome && ds[2]!.isSome && ds[1]! != ds[2]!}, \
    closure: {(objectsDigests #[f])[0]!.map (·.hex)}, references: {refs.toList.map (·.map (·.hex))}, \
    pending promise: {(objectsDigests #[pending])[0]!.map (·.hex)}, \
    resolved promise digested: {(objectsDigests #[resolved])[0]!.isSome}"
  pending.resolve 0
