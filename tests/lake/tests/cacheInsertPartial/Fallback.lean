import Lake.Util.IO

/-- Writes the bytes of the file `contents` to `path` with `Lake.writeBinFileIfNew`, and prints its result. -/
def main (args : List String) : IO UInt32 := do
  let [path, contents] := args
    | throw <| IO.userError "usage: Fallback <path> <contents>"
  IO.println (← Lake.writeBinFileIfNew path (← IO.FS.readBinFile contents))
  return 0
