import Lean
/-! Review finding R13: a keep that fails must fall back to elaborating the command, not report an error. The module is
built, then the previous `.usage` is tampered with: command 0's record gets `post.ngenBefore.idx` one higher than the
build had (the `.olean` is untouched), so keeping command 0 cannot restore the state it records. The reuse run of the
unchanged source must still succeed and write what a build without reuse writes: the test compares the `.olean` and
`.ilean` bytes, the `.usage` fields but `reuse`, the output and the exit code. -/
open Lean

def lean (dir : System.FilePath) (args : Array String) : IO (UInt32 × String) := do
  let out ← IO.Process.output { cmd := "lean", args, cwd := dir, env := #[("LEAN_PATH", some dir.toString)] }
  let norm (s : String) := (s.replace dir.toString "DIR").quote
  return (out.exitCode, s!"stdout {norm out.stdout}, stderr {norm out.stderr}")

def outputs (m : String) : Array String := #["-o", s!"{m}.olean", s!"--usage={m}.usage", "-i", s!"{m}.ilean"]

/-- A file's bytes, empty if it is missing (a failed run may not write it). -/
def bytesOf (file : System.FilePath) : IO ByteArray := do
  if ← file.pathExists then IO.FS.readBinFile file else return .empty

/-- A `.usage`, one JSON object per line, as one object without `reuse`, and its `reuse` field. -/
def usageOf (file : System.FilePath) : IO (Json × Json) := do
  let mut j := Json.mkObj []
  unless ← file.pathExists do return (j, j)
  for line in (← IO.FS.readFile file).splitOn "\n" do
    unless line.isEmpty do j := j.mergeObj (← IO.ofExcept (Json.parse line))
  let fields := ((j.getObj?.toOption.map (·.toList)).getD []).filter (·.1 != "reuse")
  return (Json.mkObj fields, j.getObjValD "reuse")

/-- The `.usage` line with `commands`, command 0's `post.ngenBefore.idx` one higher. -/
def tamper (line : String) : Except String String := do
  let j ← Json.parse line
  let cmds ← j.getObjValAs? (Array Json) "commands"
  let some c := cmds[0]? | throw "no command records"
  let post ← c.getObjVal? "post"
  let nb ← post.getObjVal? "ngenBefore"
  let idx ← nb.getObjValAs? Nat "idx"
  let c := c.setObjVal! "post" (post.setObjVal! "ngenBefore" (nb.setObjValAs! "idx" (idx + 1)))
  return (j.setObjVal! "commands" (toJson (cmds.set! 0 c))).compress

#eval IO.FS.withTempDir fun dir => do
  let src := "def a : Nat := 1\ndef b : Nat := 2\n"
  IO.FS.writeFile (dir / "M.lean") src
  let (rc, _) ← lean dir (outputs "M" ++ #["M.lean"])
  IO.println s!"first build: exit {rc}"
  for ext in ["olean", "ilean"] do
    IO.FS.rename (dir / s!"M.{ext}") (dir / s!"M.{ext}.old")
  let lines := (← IO.FS.readFile (dir / "M.usage")).splitOn "\n"
  let mut tampered := 0
  let mut out := #[]
  for line in lines do
    if (line.splitOn "\"commands\"").length > 1 then
      out := out.push (← IO.ofExcept (tamper line))
      tampered := tampered + 1
    else
      out := out.push line
  IO.println s!"usage lines tampered: {tampered}"
  IO.FS.writeFile (dir / "M.usage.old") ("\n".intercalate out.toList)
  IO.FS.removeFile (dir / "M.usage")
  IO.FS.rename (dir / "M.resolved") (dir / "M.resolved.old")
  IO.FS.createDirAll (dir / "f")
  IO.FS.writeFile (dir / "f" / "M.lean") src
  let (rcR, outR) ← lean dir (outputs "M" ++ #["--reuse-olean=M.olean.old", "--reuse-usage=M.usage.old",
    "M.lean"])
  let (rcF, outF) ← lean (dir / "f") (outputs "M" ++ #["M.lean"])
  IO.println s!"exit codes: reuse {rcR}, fresh {rcF}"
  IO.println s!"reuse run output: {outR.trimAscii.copy.quote}"
  IO.println s!"output equal to the fresh build's: {outR == outF}"
  for ext in ["olean", "ilean"] do
    let same := (← bytesOf (dir / s!"M.{ext}")) == (← bytesOf (dir / "f" / s!"M.{ext}"))
    IO.println s!"{ext} equal to the fresh build's: {same}"
  let (ur, _) ← usageOf (dir / "M.usage")
  let (uf, _) ← usageOf (dir / "f" / "M.usage")
  IO.println s!"usage equal to the fresh build's but `reuse`: {ur.compress == uf.compress}"
