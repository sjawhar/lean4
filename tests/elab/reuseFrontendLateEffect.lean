import Lean
/-! A reuse run in which an elaborated command's payload would change after a later command was kept on the strength of
it: command 0 (`#eval`) starts a task that, once command 2 sets a flag, writes a reference an imported initializer
created, an effect the runtime notes against command 0. In the first build command 2 sets no flag, so command 0's
payload has no such effect. In the reuse run command 0's task is still running when command 1 is decided, so command
0's payload is not final and no later command is kept (`unsettled`): the run never relies on a payload that may change,
and writes what a build without reuse writes. The test compares the `.olean` and `.ilean` bytes and the `.usage` fields
but `reuse`. -/
open Lean

def lean (dir : System.FilePath) (args : Array String) : IO (UInt32 × String) := do
  let out ← IO.Process.output { cmd := "lean", args, cwd := dir, env := #[("LEAN_PATH", some dir.toString)] }
  let norm (s : String) := (s.replace dir.toString "DIR").quote
  return (out.exitCode, s!"stdout {norm out.stdout}, stderr {norm out.stderr}")

def outputs (m : String) : Array String := #["-o", s!"{m}.olean", s!"--usage={m}.usage", "-i", s!"{m}.ilean"]

/-- A `.usage`, one JSON object per line, as one object without `reuse`, and its `reuse` field. -/
def usageOf (file : System.FilePath) : IO (Json × String) := do
  let mut j := Json.mkObj []
  for line in (← IO.FS.readFile file).splitOn "\n" do
    unless line.isEmpty do j := j.mergeObj (← IO.ofExcept (Json.parse line))
  let reuse := (j.getObjValD "reuse").compress
  let fields := ((j.getObj?.toOption.map (·.toList)).getD []).filter (·.1 != "reuse")
  return (Json.mkObj fields, reuse)

def iSource : String := "initialize flag : IO.Ref Bool ← IO.mkRef false
initialize written : IO.Ref Nat ← IO.mkRef 0
"

/-- Command 0 starts the task; command 1 is a declaration; command 2 is `trigger`. -/
def mSource (trigger : String) : String := s!"import I
#eval show IO Unit from do
  let _ ← IO.asTask (prio := .dedicated) do
    while !(← flag.get) do IO.sleep 10
    written.set 1
def d : Nat := 1
{trigger}
"

/-- Command 2 of the edited module: sets the flag and waits for the task's write. -/
def trigger : String := "#eval show IO Unit from do
  flag.set true
  while (← written.get) == 0 do IO.sleep 10"

#eval IO.FS.withTempDir fun dir => do
  IO.FS.writeFile (dir / "I.lean") iSource
  discard <| lean dir #["-o", "I.olean", "--usage=I.usage", "I.lean"]
  -- the first build: no trigger, so command 0's task never writes
  IO.FS.writeFile (dir / "M.lean") (mSource "#eval show IO Unit from pure ()")
  let (rc, out) ← lean dir (outputs "M" ++ #["M.lean"])
  IO.println s!"first build: exit {rc}, output {out.trimAscii.copy.quote}"
  for ext in ["olean", "usage", "resolved", "ilean"] do
    IO.FS.writeBinFile (dir / s!"M.{ext}.old") (← IO.FS.readBinFile (dir / s!"M.{ext}"))
  IO.FS.writeFile (dir / "M.lean") (mSource trigger)
  let (rc, out) ← lean dir (outputs "M" ++ #["--reuse-olean=M.olean.old", "--reuse-usage=M.usage.old",
    "M.lean"])
  IO.println s!"reuse run: exit {rc}, output {out.trimAscii.copy.quote}"
  if rc != 0 then return
  let (_, reuse) ← usageOf (dir / "M.usage")
  IO.println s!"reuse field: {reuse}"
  -- the same sources without reuse
  IO.FS.createDirAll (dir / "f")
  for f in ["I.olean", "I.usage", "M.lean"] do
    IO.FS.writeBinFile (dir / "f" / f) (← IO.FS.readBinFile (dir / f))
  let (rc, _) ← lean (dir / "f") (outputs "M" ++ #["M.lean"])
  IO.println s!"fresh build: exit {rc}"
  for ext in ["olean", "ilean"] do
    let same := (← IO.FS.readBinFile (dir / s!"M.{ext}")) == (← IO.FS.readBinFile (dir / "f" / s!"M.{ext}"))
    IO.println s!"{ext} equal to the fresh build's: {same}"
  let (ur, _) ← usageOf (dir / "M.usage")
  let (uf, _) ← usageOf (dir / "f" / "M.usage")
  IO.println s!"usage equal to the fresh build's but `reuse`: {ur.compress == uf.compress}"
