import Lean
/-! Review finding R6: a reuse run with a module linter (`addModuleLinter`) registered by an imported module's
initializer. The linter runs at the terminal command and logs a lint (`Linter.logLint`) at the first command's syntax.
The persistent lint log (`Linter.lintLogExt`) of the reuse run must be the fresh build's: the lint belongs to the
terminal command, which is elaborated, not to the kept command 0 at whose position it is. Two reuse runs: the source
unchanged, and only the second declaration edited. Each compares the normalized messages, the exit code, the `.olean`
bytes and the lint log's size with a fresh build's. -/
open Lean

def lean (dir : System.FilePath) (args : Array String) : IO (UInt32 × String) := do
  let out ← IO.Process.output { cmd := "lean", args, cwd := dir, env := #[("LEAN_PATH", some dir.toString)] }
  let norm (s : String) := (s.replace dir.toString "DIR").quote
  return (out.exitCode, s!"stdout {norm out.stdout}, stderr {norm out.stderr}")

def outputs (m : String) : Array String := #["-o", s!"{m}.olean", s!"--usage={m}.usage", "-i", s!"{m}.ilean"]

def reuseField (file : System.FilePath) : IO Json := do
  let mut j := Json.mkObj []
  for line in (← IO.FS.readFile file).splitOn "\n" do
    unless line.isEmpty do j := j.mergeObj (← IO.ofExcept (Json.parse line))
  return j.getObjValD "reuse"

def nSource : String := "import Lean
open Lean Elab Command

register_option linter.firstCmd : Bool := { defValue := true, descr := \"test module linter\" }

initialize addModuleLinter {
  name := `firstCmd
  run := fun cmds => do
    if let some c := cmds[0]? then Linter.logLint linter.firstCmd c m!\"first command\" }
"

/-- `lean --run Lints.lean M.olean`: the number of the `.olean`'s persistent lint log entries. -/
def lintsSource : String := "import Lean
open Lean

unsafe def main (args : List String) : IO Unit := do
  let [f] := args | throw <| IO.userError \"usage: Lints M.olean\"
  let (d, _) ← readModuleData f
  IO.println <| match d.entries.find? (·.1 == ``Linter.lintLogExt) with
    | some (_, es) => es.size
    | none => 0
"

def mSource (b : Nat) : String := s!"import N\ndef a : Nat := 1\ndef b : Nat := {b}\n"

def readOr (f : System.FilePath) : IO ByteArray := do
  try IO.FS.readBinFile f catch _ => pure .empty

def lints (dir : System.FilePath) (olean : System.FilePath) : IO String := do
  return (← lean dir #["--run", "Lints.lean", olean.toString]).2.trimAscii.copy

def step (dir : System.FilePath) (label : String) (b : Nat) : IO Unit := do
  for ext in ["olean", "usage", "resolved", "ilean"] do
    IO.FS.writeBinFile (dir / s!"M.{ext}.old") (← IO.FS.readBinFile (dir / s!"M.{ext}"))
  IO.FS.writeFile (dir / "M.lean") (mSource b)
  let (rc, out) ← lean dir (outputs "M" ++ #["--reuse-olean=M.olean.old", "--reuse-usage=M.usage.old",
    "M.lean"])
  let f := dir / "f"
  IO.FS.createDirAll f
  for n in ["N.olean", "N.usage", "M.lean"] do
    IO.FS.writeBinFile (f / n) (← IO.FS.readBinFile (dir / n))
  let (rcf, outf) ← lean f (outputs "M" ++ #["M.lean"])
  let outf := outf.replace "DIR/f" "DIR"
  IO.println s!"{label}: exit codes: reuse {rc}, fresh {rcf}"
  IO.println s!"{label}: kept: {(← try reuseField (dir / "M.usage") catch _ => pure Json.null).getObjValD "kept"}"
  IO.println s!"{label}: output equal to the fresh build's: {out == outf}"
  unless out == outf do
    IO.println s!"{label}: reuse run output: {out.trimAscii.copy.quote}"
    IO.println s!"{label}: fresh build output: {outf.trimAscii.copy.quote}"
  IO.println s!"{label}: lint log entries: reuse {← lints dir "M.olean"}, fresh {← lints dir (f / "M.olean")}"
  for ext in ["olean", "ilean"] do
    let same := (← readOr (dir / s!"M.{ext}")) == (← readOr (f / s!"M.{ext}"))
    IO.println s!"{label}: {ext} equal to the fresh build's: {same}"

#eval IO.FS.withTempDir fun dir => do
  IO.FS.writeFile (dir / "Lints.lean") lintsSource
  IO.FS.writeFile (dir / "N.lean") nSource
  let (rc, out) ← lean dir #["-o", "N.olean", "--usage=N.usage", "N.lean"]
  unless rc == 0 do throw <| IO.userError s!"N failed: {out}"
  IO.FS.writeFile (dir / "M.lean") (mSource 2)
  let (rc, out) ← lean dir (outputs "M" ++ #["M.lean"])
  IO.println s!"first build: exit {rc}, output {out.trimAscii.copy.quote}"
  IO.println s!"first build: lint log entries: {← lints dir "M.olean"}"
  step dir "unchanged" 2
  step dir "b edited" 3
