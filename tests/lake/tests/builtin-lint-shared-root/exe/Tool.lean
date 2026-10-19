import Linters

def toolDummyMarker : Nat := 1

def toolUnusedVar : Nat :=
  let unusedInTool := 5
  3

def main : IO Unit := pure ()
