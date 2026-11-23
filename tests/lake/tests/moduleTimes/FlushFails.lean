import Lake.Build.ModuleTimes

/-!
Writes a record of about 2 KB over an existing one. `test.sh` runs this under a 1 KiB file size limit
with `SIGXFSZ` ignored, so the buffered bytes fail only when they are flushed. Prints the outcome, the
old record as it is afterwards, and what is left in its directory.
-/

def main : IO Unit := do
  let dir : System.FilePath := "flushFails"
  let contents := (List.range 100).foldl (init := "lake-module-times 3\n") fun s i =>
    s ++ s!"1\t1\tTest.New{i}\t\n"
  try
    Lake.writeModuleTimesFile (dir / "module-times.tsv") contents
    IO.println "unexpected success"
  catch e =>
    IO.println s!"write failed: {e}"
  IO.println s!"record: {(← IO.FS.readFile (dir / "module-times.tsv")).replace "\n" "|"}"
  for ent in ← dir.readDir do
    IO.println s!"left: {ent.fileName}"
