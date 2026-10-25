import Lean
/-! Review finding N2: a kept command must not read a stateful linter's state that an earlier, re-elaborated command
produced differently. An imported module `L` registers a stateful linter (`registerStatefulLinter`) with a `Nat`
state: at the declaration `a` it sets the state to the length of the whole source (`getFileMap`), at the declaration
`b` it logs the state, and elsewhere it leaves the state unchanged. The reuse run lengthens only the last declaration
`z`, so `a` sets a new state and `b` must log the new length, as in a build without reuse. The test compares the exit
codes, stdout and stderr (separately), the `.olean` and `.ilean` bytes and the `.usage` fields but `reuse` with a fresh
build's, and prints the reuse run's `kept` and elaborated commands. -/
open Lean

/-- Runs `lean` under a timeout in `dir`: exit code, normalized stdout and stderr. -/
def lean (dir : System.FilePath) (args : Array String) : IO (UInt32 × String × String) := do
  let env := #[("LEAN_PATH", some dir.toString)]
  let out ← IO.Process.output { cmd := "timeout", args := #["120", "lean"] ++ args, cwd := dir, env }
  return (out.exitCode, out.stdout.replace dir.toString "DIR", out.stderr.replace dir.toString "DIR")

def outputs (m : String) : Array String := #["-o", s!"{m}.olean", s!"--usage={m}.usage", "-i", s!"{m}.ilean"]

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

def lSource : String := "import Lean
open Lean Elab Command

def declares (stx : Syntax) (n : Name) : Bool :=
  (stx.find? fun s => s.isIdent && s.getId == n).isSome

initialize lengthLinter : StatefulLinter Nat Unit ←
  registerStatefulLinter (0 : Nat)
    (post := fun stx n _ _ _ => do
      if declares stx `a then return (← getFileMap).source.length
      if declares stx `b then logInfo m!\"state {n}\"
      return n)
"

def mSource (z : String) : String := s!"import L\ndef a : Nat := 1\ndef b : Nat := 2\ndef z : Nat := {z}\n"

#eval IO.FS.withTempDir fun dir => do
  IO.FS.writeFile (dir / "L.lean") lSource
  let (rc, out, err) ← lean dir #["-o", "L.olean", "--usage=L.usage", "L.lean"]
  unless rc == 0 do throw <| IO.userError s!"L failed ({rc}): {out}{err}"
  IO.FS.writeFile (dir / "M.lean") (mSource "1")
  let (rc, out, _) ← lean dir (outputs "M" ++ #["M.lean"])
  IO.println s!"first build: exit {rc}, stdout {out.trimAscii.copy.quote}"
  for ext in ["olean", "usage", "ilean"] do
    IO.FS.rename (dir / s!"M.{ext}") (dir / s!"M.{ext}.old")
  IO.FS.writeFile (dir / "M.lean") (mSource "12345")
  let (rcR, outR, errR) ← lean dir (outputs "M" ++ #["--reuse-olean=M.olean.old", "--reuse-usage=M.usage.old",
    "M.lean"])
  IO.FS.createDirAll (dir / "f")
  for f in ["L.olean", "L.usage", "M.lean"] do
    IO.FS.writeBinFile (dir / "f" / f) (← IO.FS.readBinFile (dir / f))
  let (rcF, outF, errF) ← lean (dir / "f") (outputs "M" ++ #["M.lean"])
  IO.println s!"exit codes: reuse {rcR}, fresh {rcF}"
  IO.println s!"stdout equal to the fresh build's: {outR == outF}"
  unless outR == outF do
    IO.println s!"reuse stdout: {outR.trimAscii.copy.quote}"
    IO.println s!"fresh stdout: {outF.trimAscii.copy.quote}"
  IO.println s!"stderr equal to the fresh build's: {errR == errF}"
  unless errR == errF do
    IO.println s!"reuse stderr: {errR.trimAscii.copy.quote}"
    IO.println s!"fresh stderr: {errF.trimAscii.copy.quote}"
  for ext in ["olean", "ilean"] do
    let same := (← bytesOf (dir / s!"M.{ext}")) == (← bytesOf (dir / "f" / s!"M.{ext}"))
    IO.println s!"{ext} equal to the fresh build's: {same}"
  let (ur, reuse) ← usageOf (dir / "M.usage")
  let (uf, _) ← usageOf (dir / "f" / "M.usage")
  IO.println s!"usage equal to the fresh build's but `reuse`: {ur.compress == uf.compress}"
  IO.println s!"reuse run kept: {(reuse.getObjValD "kept").compress}, elaborated: \
    {(reuse.getObjValD "reElab").compress}"
