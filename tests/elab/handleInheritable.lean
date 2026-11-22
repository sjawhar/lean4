/-!
`IO.FS.Handle.setInheritable` makes processes spawned afterwards inherit a handle's descriptor (by
default they do not). The spawned shell lists the files its own descriptors refer to, after its
`exec` has closed every descriptor marked close-on-exec, and the test checks whether the handle's
file is among them.
-/

def testFile : System.FilePath := "handleInheritable.lean.tmp"

/--
Whether a shell spawned while a handle of `testFile` is open, after setting the handle's
inheritability to each of `settings` in turn, has a descriptor of that file.
-/
def inheritedBy (settings : List Bool) : IO Bool := do
  let h ← IO.FS.Handle.mk testFile .write
  for inheritable in settings do
    h.setInheritable inheritable
  let out ← IO.Process.output
    {cmd := "sh", args := #["-c", "for f in /proc/$$/fd/*; do readlink \"$f\"; done"]}
  -- a use after the spawn, so that the handle is still open while the shell runs
  h.flush
  let path := (← IO.FS.realPath testFile).toString
  return (out.stdout.splitOn "\n").contains path

/-- info: (true, false, false, true) -/
#guard_msgs in
#eval show IO (Bool × Bool × Bool × Bool) from do
  -- the child lists its descriptors through Linux's `/proc`
  unless System.Platform.isLinux do return (true, false, false, true)
  unless ← System.FilePath.pathExists "/proc/self/fd" do
    throw <| IO.userError "/proc/self/fd is not available"
  let r := (← inheritedBy [true], ← inheritedBy [false], ← inheritedBy [true, false],
    ← inheritedBy [false, true])
  IO.FS.removeFile testFile
  return r
