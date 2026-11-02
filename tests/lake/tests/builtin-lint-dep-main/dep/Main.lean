-- The dependency's own `Main`: `lake lint` of the root's `Main` must neither
-- name nor edit this file, nor load its `.olean` once it is built.
def main : IO Unit := pure ()

-- A warning at a line where the root's `Main` has none, so that a report of
-- it is told apart from the root's.

def depUnusedVar : Nat :=
  let unusedInDep := 5
  3
