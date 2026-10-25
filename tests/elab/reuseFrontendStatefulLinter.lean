import Lean
/-! Review finding R5: a reuse run with a stateful linter (`registerStatefulLinter`) registered by an imported module's
initializer. The linter counts the commands it has seen and logs the count at each declaration. The first build has
`a` and `b`; the reuse run edits only `b`'s value. `b`'s linter must start from the state `a` left, as in a build
without reuse; a kept command runs no linter, and `a` changed the linter's state, so `a` is not kept (`kept: 0`). The
test compares the normalized messages, the exit code and the `.olean`, `.ilean` and `.usage` (but `reuse`) with a
fresh build's. -/
open Lean

def lean (dir : System.FilePath) (args : Array String) : IO (UInt32 × String) := do
  let out ← IO.Process.output { cmd := "lean", args, cwd := dir, env := #[("LEAN_PATH", some dir.toString)] }
  let norm (s : String) := (s.replace dir.toString "DIR").quote
  return (out.exitCode, s!"stdout {norm out.stdout}, stderr {norm out.stderr}")

def outputs (m : String) : Array String := #["-o", s!"{m}.olean", s!"--usage={m}.usage", "-i", s!"{m}.ilean"]

/-- A `.usage`, one JSON object per line, as one object without `reuse`, and its `reuse` field. -/
def usageOf (file : System.FilePath) : IO (Json × Json) := do
  let mut j := Json.mkObj []
  for line in (← IO.FS.readFile file).splitOn "\n" do
    unless line.isEmpty do j := j.mergeObj (← IO.ofExcept (Json.parse line))
  let fields := ((j.getObj?.toOption.map (·.toList)).getD []).filter (·.1 != "reuse")
  return (Json.mkObj fields, j.getObjValD "reuse")

def lSource : String := "import Lean
open Lean Elab Command

initialize counter : StatefulLinter Nat Unit ←
  registerStatefulLinter (0 : Nat)
    (post := fun stx n _ _ _ => do
      if Parser.isTerminalCommand stx then return n
      logInfo m!\"count {n + 1}\"
      return n + 1)
"

def mSource (b : Nat) : String := s!"import L\ndef a : Nat := 1\ndef b : Nat := {b}\n"

def readOr (f : System.FilePath) : IO ByteArray := do
  try IO.FS.readBinFile f catch _ => pure .empty

#eval IO.FS.withTempDir fun dir => do
  IO.FS.writeFile (dir / "L.lean") lSource
  let (rc, out) ← lean dir #["-o", "L.olean", "--usage=L.usage", "L.lean"]
  unless rc == 0 do throw <| IO.userError s!"L failed: {out}"
  IO.FS.writeFile (dir / "M.lean") (mSource 2)
  let (rc, out) ← lean dir (outputs "M" ++ #["M.lean"])
  IO.println s!"first build: exit {rc}, output {out.trimAscii.copy.quote}"
  for ext in ["olean", "usage", "resolved", "ilean"] do
    IO.FS.writeBinFile (dir / s!"M.{ext}.old") (← IO.FS.readBinFile (dir / s!"M.{ext}"))
  -- only `b`'s value changes, keeping its length: `a` can be kept
  IO.FS.writeFile (dir / "M.lean") (mSource 3)
  let (rc, out) ← lean dir (outputs "M" ++ #["--reuse-olean=M.olean.old", "--reuse-usage=M.usage.old",
    "M.lean"])
  IO.FS.createDirAll (dir / "f")
  for f in ["L.olean", "L.usage", "M.lean"] do
    IO.FS.writeBinFile (dir / "f" / f) (← IO.FS.readBinFile (dir / f))
  let (rcf, outf) ← lean (dir / "f") (outputs "M" ++ #["M.lean"])
  let outf := outf.replace "DIR/f" "DIR"
  IO.println s!"fresh build output: {outf.trimAscii.copy.quote}"
  IO.println s!"exit codes: reuse {rc}, fresh {rcf}"
  IO.println s!"output equal to the fresh build's: {out == outf}"
  unless out == outf do IO.println s!"reuse run output: {out.trimAscii.copy.quote}"
  let (ur, reuse) ← try usageOf (dir / "M.usage") catch _ => pure (Json.null, Json.null)
  IO.println s!"kept: {reuse.getObjValD "kept"}"
  for ext in ["olean", "ilean"] do
    let same := (← readOr (dir / s!"M.{ext}")) == (← readOr (dir / "f" / s!"M.{ext}"))
    IO.println s!"{ext} equal to the fresh build's: {same}"
  let (uf, _) ← usageOf (dir / "f" / "M.usage")
  IO.println s!"usage equal to the fresh build's but `reuse`: {ur.compress == uf.compress}"
