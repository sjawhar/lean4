import Lake.Util.IO

/-- Prints two temporary-file suffixes, then one temporary path, one per line. -/
def main : IO Unit := do
  IO.println (← Lake.uniqueTmpSuffix)
  IO.println (← Lake.uniqueTmpSuffix)
  IO.println (← Lake.uniqueTmpPath "entry")
