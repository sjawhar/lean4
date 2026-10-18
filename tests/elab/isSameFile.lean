/-!
`System.FilePath.isSameFile` compares file identity, not contents: hard links to one file are the
same file, and a separate file with the same contents is not.
-/

def dir : System.FilePath := "isSameFile.lean.dir"

/-- info: (true, true, false, false) -/
#guard_msgs in
#eval show IO (Bool × Bool × Bool × Bool) from do
  if ← dir.pathExists then IO.FS.removeDirAll dir
  IO.FS.createDirAll dir
  let a := dir / "a"
  let b := dir / "b"
  let c := dir / "c"
  IO.FS.writeFile a "contents"
  IO.FS.hardLink a b
  IO.FS.writeFile c "contents"
  let r := (← a.isSameFile a, ← a.isSameFile b, ← a.isSameFile c, ← b.isSameFile c)
  IO.FS.removeDirAll dir
  return r

/-- info: true -/
#guard_msgs in
#eval show IO Bool from do
  try
    discard <| System.FilePath.isSameFile (dir / "missing") (dir / "missing")
    return false
  catch
    | .noFileOrDirectory .. => return true
    | _ => return false
