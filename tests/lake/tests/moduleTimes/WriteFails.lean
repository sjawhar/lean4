import Lake.Build.ModuleTimes

/-! Writes a record onto a non-empty directory, so the rename fails, then lists what is left. -/

def main : IO Unit := do
  let dir : System.FilePath := "writeFails"
  IO.FS.createDirAll (dir / "module-times.json" / "sub")
  try
    Lake.writeModuleTimes (dir / "module-times.json") {}
    IO.println "unexpected success"
  catch e =>
    IO.println s!"write failed: {e}"
  for ent in ← dir.readDir do
    IO.println s!"left: {ent.fileName}"
