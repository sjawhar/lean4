import Lean

/-!
The time to elaborate a `do` block must grow about linearly with how deeply its elements nest.

The block below has the shape of the instruction decoders that Sail generates (a cascade of
`match (← do ...) with | .some r => pure r | none => (do <next level>)`, with an `if` in each level, so
each level makes a join point). The test elaborates such a block of `n` and of `4 * n` levels, three times
each and interleaved, and compares the fastest times. Linear elaboration gives a ratio of about 4, and
quadratic elaboration one of about 16. Elaboration that traverses the rest of the block at each level (in
`MetavarContext.MkBinding` and `Expr.abstract` on subterms whose only metavariables are universe metavariables,
and in the full check of each join point's right-hand side) gave about 8 for these sizes, above the bound of 6.3.

A ratio, not a time, so that the speed of the machine does not matter.
-/

open Lean Elab Command

def step (x : Nat) : StateM Nat (Option Nat) := pure (if x == 3 then some x else none)

/-- The source of `noncomputable def name` whose body nests `n` levels of the decoder cascade. -/
def chainSrc (name : String) (n : Nat) : String := Id.run do
  let mut s := s!"noncomputable def {name} (arg : Nat) : StateM Nat Nat := do\n  let head := arg\n"
  for d in [0:n] do
    let p := "".pushn ' ' (2 + 4 * d)
    if d > 0 then
      s := s ++ "".pushn ' ' (4 * d) ++ "(do\n"
    s := s ++ p ++ "match (← do\n"
    s := s ++ p ++ s!"  let v := head\n"
    s := s ++ p ++ s!"  if ((v % 7 == {d % 7}) && (v % 1024 == {d})) then\n"
    s := s ++ p ++ "    (do\n"
    s := s ++ p ++ "      let a := v % 7\n"
    s := s ++ p ++ "      let b := v / 3\n"
    s := s ++ p ++ "      match ((← step a), (← step b)) with\n"
    s := s ++ p ++ s!"      | (x, y) => pure (some ((x.getD a) + (y.getD {d}))))\n"
    s := s ++ p ++ "  else (pure none)) with\n"
    s := s ++ p ++ "| .some result => (pure result)\n"
    s := s ++ p ++ "| none =>\n"
  s := s ++ "".pushn ' ' (4 * n) ++ "(pure 0)" ++ "".pushn ')' (n - 1) ++ "\n"
  return s

/-- Elaborate `src` as one command; return the nanoseconds the elaboration took (parsing excluded). -/
def timeElab (src : String) : CommandElabM Nat := do
  let stx ← match Parser.runParserCategory (← getEnv) `command src with
    | .ok stx => pure stx
    | .error e => throwError "chainSrc does not parse: {e}"
  let t0 ← IO.monoNanosNow
  elabCommand stx
  let t1 ← IO.monoNanosNow
  if (← MonadLog.hasErrors) then
    throwError "the generated chain does not elaborate"
  return t1 - t0

set_option maxRecDepth 100000 in
set_option maxHeartbeats 0 in
set_option Elab.async false in
run_cmd do
  let n := 50
  let mut small := 0
  let mut large := 0
  for i in [0:3] do
    let ts ← timeElab (chainSrc s!"chainSmall{i}" n)
    let tl ← timeElab (chainSrc s!"chainLarge{i}" (4 * n))
    small := if i == 0 then ts else min small ts
    large := if i == 0 then tl else min large tl
  let ratio := large.toFloat / small.toFloat
  unless ratio < 6.3 do
    throwError "elaborating {4 * n} nested levels took {ratio} times as long as {n} levels \
      ({large / 1000000} ms against {small / 1000000} ms); about 4 is linear"
