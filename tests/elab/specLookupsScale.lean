import Lean
open Lean

/-!
`recordSpecLookup` records a specialization-cache lookup in time that does not grow with the lookups already
recorded. The keys are kept in a `builtin_initialize` reference, whose value is never exclusive, so a structure that
copies itself on update (an `Array` push) made each lookup copy every key recorded before it. `lookedUpSpecKeys` still
returns every key, in the order recorded.
-/

/-- Records the keys `start`, ..., `start + n - 1`, in batches of 500, and returns the fewest nanoseconds per lookup
that a batch took (the least disturbed batch). -/
def recordKeys (start n : Nat) : IO Float := do
  let mut best := 0.0
  let mut first := true
  for b in [0:n / 500] do
    let t0 ← IO.monoNanosNow
    for i in [start + b * 500:start + (b + 1) * 500] do
      recordSpecLookup (mkRawNatLit i)
    let t1 ← IO.monoNanosNow
    let per := (t1 - t0).toFloat / 500.0
    if first || per < best then
      best := per
      first := false
  return best

#eval show IO Unit from do
  enableUsageRecording
  let before := (← lookedUpSpecKeys).size
  let early ← recordKeys 0 2000
  discard <| recordKeys 2000 60000
  let late ← recordKeys 62000 2000
  let keys ← lookedUpSpecKeys
  unless keys.size == before + 64000 do
    throw <| IO.userError s!"recorded {keys.size - before} keys, expected 64000"
  unless keys.extract before keys.size == (Array.range 64000).map mkRawNatLit do
    throw <| IO.userError "the keys are not returned in the order recorded"
  -- A copy per lookup makes a lookup after 62,000 about 30 times slower than one among the first 2,000.
  unless late < 5 * early do
    throw <| IO.userError s!"a lookup took {early} ns among the first 2,000 keys and {late} ns after 62,000"
