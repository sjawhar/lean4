import Lean
/-! The `.ilean` of a reuse run (review finding R3): the kept commands' references come from the previous `.ilean`
(`--reuse-ilean`), so a run that writes an `.ilean` (`-i`) must either have the previous build's own `.ilean` or not keep
commands. Each case edits only the proof of the last theorem, so `a` and `b` are kept, and compares the reuse run's
`.ilean` bytes with a build of the same source without reuse: (a) `-i` without `--reuse-ilean`; (b) `--reuse-ilean` naming
a parseable `.ilean` of the same module built from another source (other names); (c) `--reuse-ilean` naming the `.ilean`
of the build before the previous one, in which `a` and `b` sat a line lower. -/
open Lean

def lean (dir : System.FilePath) (args : Array String) : IO (UInt32 × String) := do
  let out ← IO.Process.output { cmd := "lean", args, cwd := dir, env := #[("LEAN_PATH", some dir.toString)] }
  return (out.exitCode, (out.stdout ++ out.stderr).replace dir.toString "DIR")

def outputs : Array String := #["-o", "M.olean", "--usage=M.usage", "-i", "M.ilean"]

/-- Compiles `M.lean` in `dir` with `src` as its source and `extra` arguments; fails on a nonzero exit. -/
def build (dir : System.FilePath) (src : String) (extra : Array String := #[]) : IO Unit := do
  IO.FS.writeFile (dir / "M.lean") src
  let (rc, out) ← lean dir (outputs ++ extra ++ #["M.lean"])
  unless rc == 0 do throw <| IO.userError s!"lean M failed ({rc}):\n{out}"

def keep (dir : System.FilePath) (tag : String) : IO Unit := do
  for ext in ["olean", "usage", "ilean"] do
    IO.FS.writeBinFile (dir / s!"M.{ext}.{tag}") (← IO.FS.readBinFile (dir / s!"M.{ext}"))

def kept (dir : System.FilePath) : IO String := do
  let mut j := Json.mkObj []
  for line in (← IO.FS.readFile (dir / "M.usage")).splitOn "\n" do
    unless line.isEmpty do j := j.mergeObj (← IO.ofExcept (Json.parse line))
  return ((j.getObjValD "reuse").getObjValD "kept").compress

def source (proof : String) (top := "") : String :=
  s!"{top}def a : Nat := 1\ndef b : Nat := a + 1\ntheorem t : b = 2 := {proof}\n"

/-- Compiles `edited` in `r` keeping commands from `M.*.prev` (the `.ilean` argument `ilean`), and in `f` without reuse:
prints the reuse run's exit code, whether its `.ilean` is the fresh build's and, with `showKept`, its kept count (a fix
may keep or decline in the other cases). -/
def check (r f : System.FilePath) (label edited : String) (ilean : Array String) (showKept := false) : IO Unit := do
  IO.FS.writeFile (r / "M.lean") edited
  let (rc, out) ← lean r (outputs ++ #["--reuse-olean=M.olean.prev", "--reuse-usage=M.usage.prev"] ++ ilean ++
    #["M.lean"])
  if rc != 0 then
    IO.println s!"{label}: reuse run exit {rc}, output {out.trimAscii.copy.quote}"
    return
  build f edited
  let same := (← IO.FS.readBinFile (r / "M.ilean")) == (← IO.FS.readBinFile (f / "M.ilean"))
  let k ← kept r
  IO.println s!"{label}: {if showKept then s!"kept {k}; " else ""}ilean equal to the fresh build's: {same}"

#eval IO.FS.withTempDir fun r => IO.FS.withTempDir fun f => do
  -- an `.ilean` of module `M` from another source
  build r "def p : Nat := 1\ndef q : Nat := p + 1\ntheorem t' : q = 2 := rfl\n"
  keep r "other"
  -- two builds ago: `a` and `b` a line lower
  build r (source "rfl" (top := "\n"))
  keep r "stale"
  build r (source "rfl")
  keep r "prev"
  check r f "(a) without --reuse-ilean" (source "by rfl") #[]
  check r f "(b) --reuse-ilean of another source" (source "by rfl") #["--reuse-ilean=M.ilean.other"]
  check r f "(c) --reuse-ilean of an older build" (source "by rfl") #["--reuse-ilean=M.ilean.stale"]
  check r f "control: --reuse-ilean of the previous build" (source "by rfl") #["--reuse-ilean=M.ilean.prev"] true
