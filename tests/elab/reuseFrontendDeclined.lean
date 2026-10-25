import Lean
/-! The reuse run's declines and flag errors: `--reuse-declined=REASON` (Lake's reason) and a previous `.usage` or
`.olean` that cannot be read record why no command was kept in the `.usage` `reuse` field, elaborate every command and
print nothing about it; `--reuse-declined` with `--reuse-olean`/`--reuse-usage`, or one of these without the other, is
an error. -/
open Lean

def lean (dir : System.FilePath) (args : Array String) : IO (UInt32 × String) := do
  let out ← IO.Process.output { cmd := "lean", args, cwd := dir, env := #[("LEAN_PATH", some dir.toString)] }
  let norm (s : String) := (s.replace dir.toString "DIR").quote
  return (out.exitCode, s!"stdout {norm out.stdout}, stderr {norm out.stderr}")

def outputs : Array String := #["-o", "M.olean", "--usage=M.usage", "-i", "M.ilean"]

/-- The `reuse` field of the `.usage` in `dir`, its lines merged. -/
def reuseOf (dir : System.FilePath) : IO String := do
  let mut j := Json.mkObj []
  for line in (← IO.FS.readFile (dir / "M.usage")).splitOn "\n" do
    unless line.isEmpty do j := j.mergeObj (← IO.ofExcept (Json.parse line))
  return (j.getObjValD "reuse").compress.replace dir.toString "DIR"

def run (dir : System.FilePath) (label : String) (args : Array String) : IO Unit := do
  let (rc, out) ← lean dir (outputs ++ args ++ #["M.lean"])
  let reuse ← if rc == 0 then reuseOf dir else pure "-"
  IO.println s!"{label}: exit {rc}, reuse {reuse}, output {out.trimAscii.copy.quote}"

#eval IO.FS.withTempDir fun dir => do
  IO.FS.writeFile (dir / "X.lean") "def v := 5\n"
  discard <| lean dir #["-o", "X.olean", "--usage=X.usage", "X.lean"]
  IO.FS.writeFile (dir / "M.lean") "import X\ndef b := v + 1\ntheorem t : b = 6 := rfl\n"
  run dir "first build" #[]
  for ext in ["olean", "usage", "ilean"] do
    IO.FS.writeBinFile (dir / s!"M.{ext}.old") (← IO.FS.readBinFile (dir / s!"M.{ext}"))
  run dir "Lake's reason" #["--reuse-declined=no-saved-trace"]
  run dir "previous outputs" #["--reuse-olean=M.olean.old", "--reuse-usage=M.usage.old"]
  let usage ← IO.FS.readFile (dir / "M.usage.old")
  IO.FS.writeFile (dir / "M.usage.old") (usage.take 40).copy
  run dir "truncated .usage" #["--reuse-olean=M.olean.old", "--reuse-usage=M.usage.old"]
  IO.FS.writeFile (dir / "M.usage.old") usage
  run dir "missing .olean" #["--reuse-olean=M.missing.olean", "--reuse-usage=M.usage.old"]
  run dir "declined with the reuse flags" #["--reuse-declined=noskip", "--reuse-olean=M.olean.old",
    "--reuse-usage=M.usage.old"]
  run dir "one reuse flag" #["--reuse-olean=M.olean.old"]
  let (rc, out) ← lean dir #["--reuse-declined=noskip", "M.lean"]
  IO.println s!"without --usage: exit {rc}, output {out.trimAscii.copy.quote}"
