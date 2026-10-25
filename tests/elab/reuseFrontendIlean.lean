import Lean
/-! The `.ilean` of a reuse run: a kept command's references come from its `.usage` command record
(`CommandRecord.refs?`), which only a build that wrote an `.ilean` (`-i`) records. Each case builds `a`, `b` and `t`,
then edits only `t`'s proof and runs again with `--reuse-olean`/`--reuse-usage`, printing the `reuse` field's `kept`
and `elabReasons`: (a) the previous build wrote an `.ilean` and so does the reuse run: `a` and `b` are kept; (b) the
previous build wrote none and the reuse run writes one: every command with references is elaborated (reason `refs`);
(c) neither writes an `.ilean`: `a` and `b` are kept. Where the reuse run writes an `.ilean`, its bytes are compared
with those of a build of the same source without reuse. -/
open Lean

def lean (dir : System.FilePath) (args : Array String) : IO (UInt32 × String) := do
  let out ← IO.Process.output { cmd := "lean", args, cwd := dir, env := #[("LEAN_PATH", some dir.toString)] }
  let norm (s : String) := (s.replace dir.toString "DIR").quote
  return (out.exitCode, s!"stdout {norm out.stdout}, stderr {norm out.stderr}")

def outputs (ilean : Bool) : Array String :=
  #["-o", "M.olean", "--usage=M.usage"] ++ (if ilean then #["-i", "M.ilean"] else #[])

/-- Compiles `M.lean` in `dir` with `src` as its source and `extra` arguments; fails on a nonzero exit. -/
def build (dir : System.FilePath) (src : String) (ilean : Bool) (extra : Array String := #[]) : IO Unit := do
  IO.FS.writeFile (dir / "M.lean") src
  let (rc, out) ← lean dir (outputs ilean ++ extra ++ #["M.lean"])
  unless rc == 0 do throw <| IO.userError s!"lean M failed ({rc}):\n{out}"

def reuseOf (dir : System.FilePath) : IO Json := do
  let mut j := Json.mkObj []
  for line in (← IO.FS.readFile (dir / "M.usage")).splitOn "\n" do
    unless line.isEmpty do j := j.mergeObj (← IO.ofExcept (Json.parse line))
  return j.getObjValD "reuse"

def source (proof : String) : String :=
  s!"def a : Nat := 1\ndef b : Nat := a + 1\ntheorem t : b = 2 := {proof}\n"

/-- Builds `source "rfl"` in a fresh directory (with an `.ilean` if `prevIlean`), keeps its outputs as `M.*.prev`,
then compiles `source "by rfl"` reusing them (with an `.ilean` if `ilean`) and, if `ilean`, also without reuse:
prints the reuse run's `kept` and `elabReasons` and whether its `.ilean` is the fresh build's. -/
def check (label : String) (prevIlean ilean : Bool) : IO Unit :=
  IO.FS.withTempDir fun r => IO.FS.withTempDir fun f => do
    build r (source "rfl") prevIlean
    for ext in ["olean", "usage"] do
      IO.FS.rename (r / s!"M.{ext}") (r / s!"M.{ext}.prev")
    if prevIlean then IO.FS.removeFile (r / "M.ilean")
    build r (source "by rfl") ilean #["--reuse-olean=M.olean.prev", "--reuse-usage=M.usage.prev"]
    let reuse ← reuseOf r
    let mut line := s!"{label}: kept {(reuse.getObjValD "kept").compress}; \
      elabReasons {(reuse.getObjValD "elabReasons").compress}"
    if ilean then
      build f (source "by rfl") true
      let same := (← IO.FS.readBinFile (r / "M.ilean")) == (← IO.FS.readBinFile (f / "M.ilean"))
      line := line ++ s!"; ilean equal to the fresh build's: {same}"
    IO.println line

#eval do
  check "(a) previous build with an .ilean, reuse run writes one" true true
  check "(b) previous build without an .ilean, reuse run writes one" false true
  check "(c) neither writes an .ilean" false false
