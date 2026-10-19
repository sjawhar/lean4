import Lake.Build.UsageCutoff
/-!
`Lake.ContentHashes` binds each path to the first hash that any task of a usage-cutoff check records for it: 64 tasks
record their own hash for each of 2,000 paths at once, in different orders, and every task must get one hash per path,
the one `ContentHashes.find?` then returns.
-/
open Lake System

def paths : Array FilePath := (Array.range 2000).map fun i => s!"lib/M{i}.olean"

/-- Task `t`'s own hash for path `i`. -/
def own (t i : Nat) : Lean.ModuleUsage.Digest := .ofBytes s!"{t}:{i}".toUTF8

#eval show IO Unit from do
  let hashes ← ContentHashes.new
  let tasks ← (Array.range 64).mapM fun t => IO.asTask do
    let order := if t % 2 == 0 then Array.range paths.size else (Array.range paths.size).reverse
    order.mapM fun i => return (i, ← hashes.record paths[i]! (own t i))
  let mut first : Std.HashMap Nat Lean.ModuleUsage.Digest := {}
  for task in tasks do
    for (i, got) in ← IO.ofExcept task.get do
      if let some d := first[i]? then
        unless d == got do throw <| IO.userError s!"{paths[i]!}: two hashes in one check"
      else
        first := first.insert i got
  for i in [:paths.size] do
    unless (← hashes.find? paths[i]!) == first[i]? do
      throw <| IO.userError s!"{paths[i]!}: find? returns another hash than the tasks got"
  IO.println "ok"
