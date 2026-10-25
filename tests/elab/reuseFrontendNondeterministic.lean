import Lean
/-! Review finding T4: a command that read a value tied to the run (the process id, a clock) must not be kept: its
result holds a value no fresh build of this run can produce. `E`'s term elaborators `pid_term` and `now_term` return the
process id and `IO.monoNanosNow`; `M` defines `k := 3`, `p := pid_term`, `t := now_term` and `z := 1`, and the reuse run
edits only `z`. Their values vary run to run, so the test compares the exit codes, the stdout and the stderr with a fresh
build's and prints the reuse run's `reElab` and `elabReasons`: `k` is kept, `p` and `t` are elaborated
(`nondeterministic`), and so is the edited `z` (`text`). -/
open Lean

/-- `timeout 120 lean ARGS` in `dir`, with `dir` the search path: its exit code, stdout and stderr. -/
def lean (dir : System.FilePath) (args : Array String) : IO (UInt32 × String × String) := do
  let out ← IO.Process.output
    { cmd := "timeout", args := #["120", "lean"] ++ args, cwd := dir, env := #[("LEAN_PATH", some dir.toString)] }
  let norm (s : String) := s.replace dir.toString "DIR"
  return (out.exitCode, norm out.stdout, norm out.stderr)

def outputs (m : String) : Array String := #["-o", s!"{m}.olean", s!"--usage={m}.usage", "-i", s!"{m}.ilean"]

/-- The `reuse` field of a `.usage`, one JSON object per line. -/
def reuseOf (file : System.FilePath) : IO Json := do
  let mut j := Json.mkObj []
  for line in (← IO.FS.readFile file).splitOn "\n" do
    unless line.isEmpty do j := j.mergeObj (← IO.ofExcept (Json.parse line))
  return j.getObjValD "reuse"

def eSource : String := "import Lean
open Lean Elab Term
elab \"pid_term\" : term => return mkNatLit (← IO.Process.getPID).toNat
elab \"now_term\" : term => return mkNatLit (← IO.monoNanosNow)
"

def src (z : String) : String :=
  s!"import E\ndef k : Nat := 3\ndef p : Nat := pid_term\ndef t : Nat := now_term\ndef z : Nat := {z}\n"

#eval IO.FS.withTempDir fun dir => do
  IO.FS.writeFile (dir / "E.lean") eSource
  let (rc, out, err) ← lean dir #["-o", "E.olean", "--usage=E.usage", "E.lean"]
  unless rc == 0 do throw <| IO.userError s!"lean E failed ({rc}):\n{out}{err}"
  let (r, f) := (dir / "r", dir / "f")
  for d in [r, f] do
    IO.FS.createDirAll d
    for ext in ["olean", "usage"] do
      IO.FS.writeBinFile (d / s!"E.{ext}") (← IO.FS.readBinFile (dir / s!"E.{ext}"))
  IO.FS.writeFile (r / "M.lean") (src "1")
  let (rc, _, _) ← lean r (outputs "M" ++ #["M.lean"])
  IO.println s!"first build: exit {rc}"
  for ext in ["olean", "usage", "ilean"] do
    IO.FS.rename (r / s!"M.{ext}") (r / s!"M.{ext}.old")
  for d in [r, f] do
    IO.FS.writeFile (d / "M.lean") (src "2")
  let (rcR, outR, errR) ← lean r (outputs "M" ++ #["--reuse-olean=M.olean.old", "--reuse-usage=M.usage.old",
    "M.lean"])
  let (rcF, outF, errF) ← lean f (outputs "M" ++ #["M.lean"])
  IO.println s!"exit codes: reuse {rcR}, fresh {rcF}"
  IO.println s!"stdout equal to the fresh build's: {outR == outF}"
  IO.println s!"stderr equal to the fresh build's: {errR == errF}"
  let reuse ← reuseOf (r / "M.usage")
  IO.println s!"reuse run reElab: {(reuse.getObjValD "reElab").compress}"
  IO.println s!"reuse run elabReasons: {(reuse.getObjValD "elabReasons").compress}"
