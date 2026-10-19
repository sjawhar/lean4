import Lake
open Lake System

/-- Prints Lake's content hash of a file, as a cache artifact is named. -/
def main (args : List String) : IO Unit := do
  IO.println (← computeFileHash (FilePath.mk args.head!))
