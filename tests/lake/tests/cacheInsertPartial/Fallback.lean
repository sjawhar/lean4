import Lake.Util.IO

/--
`bin <path> <contents>`: writes the bytes of the file `contents` to `path` with
`Lake.writeBinFileIfNew`, and prints `ok` or `link failed: <error>`.
`text <path> <contents>`: writes the text of the file `contents` to `path` with `Lake.writeFileIfNew`.
-/
def main (args : List String) : IO UInt32 := do
  match args with
  | ["bin", path, contents] =>
    match (← Lake.writeBinFileIfNew path (← IO.FS.readBinFile contents)) with
    | .ok _ => IO.println "ok"
    | .error e => IO.println s!"link failed: {e}"
  | ["text", path, contents] =>
    Lake.writeFileIfNew path (← IO.FS.readFile contents)
  | _ => throw <| IO.userError "usage: Fallback (bin | text) <path> <contents>"
  return 0
