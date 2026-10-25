import Lean
/-! The messages of a reuse run (review finding R4): a kept command must report what it reported when it was elaborated,
so a reuse run prints what a build without reuse prints and exits as it does. The module's commands report an
unused-variable linter warning, a `trace` info message, a `sorry` warning and a deprecation warning; only its last
command is edited. The unused-variable warning and the trace message are text made when they were logged, so the first
three commands are kept; the `sorry` and deprecation warnings print expressions, whose text is made when printed, so
their commands are elaborated (`kept 3`). The child processes run with the default options, linters on. The first
case compares the reuse run's output and exit code with a build without reuse; the second passes
`--error=linter.unusedVariables` to both runs (the previous build ran without it and succeeded), so the unused
variable is an error. -/
open Lean

def lean (dir : System.FilePath) (args : Array String) : IO (UInt32 × String) := do
  let out ← IO.Process.output { cmd := "lean", args, cwd := dir, env := #[("LEAN_PATH", some dir.toString)] }
  let norm (s : String) := (s.replace dir.toString "DIR").quote
  return (out.exitCode, s!"stdout {norm out.stdout}, stderr {norm out.stderr}")

def outputs : Array String := #["-o", "M.olean", "--usage=M.usage", "-i", "M.ilean"]

def mSource (z : Nat) : String := s!"@[deprecated \"use g\" (since := \"2025-01-01\")] def old : Nat := 1
def f (x : Nat) : Nat := 1
theorem s : True := by trace \"hi\"; trivial
theorem w : 1 = 2 := sorry
def u : Nat := old
def z : Nat := {z}
"

def kept (dir : System.FilePath) : IO String := do
  let mut j := Json.mkObj []
  for line in (← IO.FS.readFile (dir / "M.usage")).splitOn "\n" do
    unless line.isEmpty do j := j.mergeObj (← IO.ofExcept (Json.parse line))
  return ((j.getObjValD "reuse").getObjValD "kept").compress

/-- Builds `mSource 1` in `r`, then `mSource 2` in `r` keeping commands from it and in `f` without reuse, both with
`extra`: prints the reuse run's kept count, whether the outputs are equal (both, if not) and the exit codes. -/
def case (r f : System.FilePath) (label : String) (extra : Array String) : IO Unit := do
  IO.FS.writeFile (r / "M.lean") (mSource 1)
  let (rc, out) ← lean r (outputs ++ #["M.lean"])
  unless rc == 0 do throw <| IO.userError s!"first build failed ({rc}):\n{out}"
  for ext in ["olean", "usage", "ilean"] do
    IO.FS.writeBinFile (r / s!"M.{ext}.old") (← IO.FS.readBinFile (r / s!"M.{ext}"))
  IO.FS.writeFile (r / "M.lean") (mSource 2)
  let (rcR, outR) ← lean r (outputs ++ extra ++ #["--reuse-olean=M.olean.old", "--reuse-usage=M.usage.old",
    "M.lean"])
  IO.FS.writeFile (f / "M.lean") (mSource 2)
  let (rcF, outF) ← lean f (outputs ++ extra ++ #["M.lean"])
  if extra.isEmpty then IO.println s!"{label}: kept {← kept r}"
  IO.println s!"{label}: output equal to the fresh build's: {outR == outF}"
  unless outR == outF do
    IO.println s!"{label}: reuse output:\n{outR}"
    IO.println s!"{label}: fresh output:\n{outF}"
  IO.println s!"{label}: exit codes: reuse {rcR}, fresh {rcF}"

#eval IO.FS.withTempDir fun r => IO.FS.withTempDir fun f => do
  case r f "messages" #[]
  case r f "unused variable as an error" #["--error=linter.unusedVariables"]
