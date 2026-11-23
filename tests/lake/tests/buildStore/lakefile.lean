import Lake
open Lake DSL

package store

require bar from "deps" / "bar"

/-- Builds `bar`'s executable, then writes the build store's keys in the order a `for` loop visits them. -/
@[default_target]
target storeKeys pkg : Unit := do
  let some exe ← findLeanExe? `bar
    | error "executable `bar` not found"
  let _ ← (← exe.fetch).await
  let keys ← FetchM.ofFn fun _ _ _ store _ log => do
    let mut keys := ""
    for ⟨k, _⟩ in ← store.get do
      keys := keys ++ s!"{k}\n"
    return .ok keys log
  IO.FS.writeFile (pkg.dir / "keys.produced.out") keys
  return .nil
