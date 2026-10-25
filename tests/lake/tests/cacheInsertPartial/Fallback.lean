import Lake.Util.IO

open System

/-- After its caller releases `start`, write `contents` to `path` with Lake's write-if-new helper. -/
def main (args : List String) : IO UInt32 := do
  let [path, contents, ready, start] := args
    | throw <| IO.userError "usage: Fallback <path> <contents> <ready> <start>"
  let contents ← IO.FS.readBinFile contents
  IO.FS.writeFile ready ""
  while !(← (FilePath.mk start).pathExists) do
    IO.sleep 1
  Lake.writeBinFileIfNew path contents
  return 0
