import Lean
/-! Review finding R1: the reuse run must compare the order of the module's imports. `A` and `B` each declare an
instance of `C`'s class `Cls` at the same priority, so the one imported last is tried first. The module is built with
`import A` before `import B`, then with the two lines swapped (same length, so every command keeps its position): `x`,
which uses the instance, must not be kept, and the reuse run must write what a build without reuse writes. The test
compares the `.olean` and `.ilean` bytes, the `.usage` fields but `reuse`, the output and the exit code, and prints the
value of `x` that an importer of each build sees. -/
open Lean

def lean (dir : System.FilePath) (args : Array String) : IO (UInt32 × String) := do
  let out ← IO.Process.output { cmd := "lean", args, cwd := dir, env := #[("LEAN_PATH", some dir.toString)] }
  return (out.exitCode, (out.stdout ++ out.stderr).replace dir.toString "DIR")

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

def mSource (first second : String) : String :=
  s!"import {first}\nimport {second}\ndef x : Nat := Cls.v\ntheorem t : True := trivial\n"

/-- The value of `x` that an importer of the `M` in `dir` sees. -/
def xOf (dir : System.FilePath) : IO String := do
  IO.FS.writeFile (dir / "N.lean") "import M\n#eval x\n"
  let (_, out) ← lean dir #["N.lean"]
  return out.trimAscii.copy

#eval IO.FS.withTempDir fun dir => do
  IO.FS.createDirAll (dir / "f")
  for (m, src) in [("C", "class Cls where v : Nat\n"), ("A", "import C\ninstance a : Cls := ⟨1⟩\n"),
      ("B", "import C\ninstance b : Cls := ⟨2⟩\n")] do
    IO.FS.writeFile (dir / s!"{m}.lean") src
    let (rc, out) ← lean dir #["-o", s!"{m}.olean", s!"--usage={m}.usage", s!"{m}.lean"]
    unless rc == 0 do throw <| IO.userError s!"lean {m} failed ({rc}):\n{out}"
    for ext in ["olean", "usage"] do
      IO.FS.writeBinFile (dir / "f" / s!"{m}.{ext}") (← IO.FS.readBinFile (dir / s!"{m}.{ext}"))
  IO.FS.writeFile (dir / "M.lean") (mSource "A" "B")
  let (rc, _) ← lean dir (outputs "M" ++ #["M.lean"])
  IO.println s!"first build (import A, import B): exit {rc}, x {← xOf dir}"
  for ext in ["olean", "usage", "ilean"] do
    IO.FS.rename (dir / s!"M.{ext}") (dir / s!"M.{ext}.old")
  IO.FS.writeFile (dir / "M.lean") (mSource "B" "A")
  IO.FS.writeFile (dir / "f" / "M.lean") (mSource "B" "A")
  let (rcR, outR) ← lean dir (outputs "M" ++ #["--reuse-olean=M.olean.old", "--reuse-usage=M.usage.old",
    "--reuse-ilean=M.ilean.old", "M.lean"])
  let (rcF, outF) ← lean (dir / "f") (outputs "M" ++ #["M.lean"])
  IO.println s!"exit codes: reuse {rcR}, fresh {rcF}"
  IO.println s!"output equal to the fresh build's: {outR == outF}"
  for ext in ["olean", "ilean"] do
    let same := (← bytesOf (dir / s!"M.{ext}")) == (← bytesOf (dir / "f" / s!"M.{ext}"))
    IO.println s!"{ext} equal to the fresh build's: {same}"
  let (ur, _) ← usageOf (dir / "M.usage")
  let (uf, _) ← usageOf (dir / "f" / "M.usage")
  IO.println s!"usage equal to the fresh build's but `reuse`: {ur.compress == uf.compress}"
  IO.println s!"x after the swap: reuse {← xOf dir}, fresh {← xOf (dir / "f")}"
