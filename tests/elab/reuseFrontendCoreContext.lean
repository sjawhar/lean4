import Lean
/-! Review finding N4: elaborators that read the file name straight from `Core.Context` (`include_str`'s
`elabIncludeStr`, `bv_check`'s `BVCheck.getSrcDir`) bypass `getFileName`, so a run that records usage does not note
the read, and a reuse run may keep the command although its result depends on the file name. For a file name with no
directory part (`M.lean`) both elaborators fail with "cannot compute parent directory of `M.lean`" without reading a
file, so no effect blocks the keep; under `./M.lean` they resolve the path next to the source. The module catches the
failure into a value: `s` falls back to `"no file"` (`first`), `b` is the text of `bv_check`'s error (`error_of`). Each
case builds `M` as `M.lean`, then compiles the same source as `./M.lean` keeping commands from that build, and once
without reuse. The reuse run must write what a build without reuse writes: the test compares the exit codes, the stdout
and the stderr, the `.olean` and `.ilean` bytes, the `.usage` fields but `reuse` and `resolved`, which must hold the
fresh build's (`resolvedCovers`), and prints the value an importer of each build sees. -/
open Lean

/-- `timeout 120 lean ARGS` in `dir`, with `dir` the search path: its exit code, stdout and stderr. -/
def lean (dir : System.FilePath) (args : Array String) : IO (UInt32 × String × String) := do
  let out ← IO.Process.output
    { cmd := "timeout", args := #["120", "lean"] ++ args, cwd := dir, env := #[("LEAN_PATH", some dir.toString)] }
  let norm (s : String) := s.replace dir.toString "DIR"
  return (out.exitCode, norm out.stdout, norm out.stderr)

def outputs (m : String) : Array String := #["-o", s!"{m}.olean", s!"--usage={m}.usage", "-i", s!"{m}.ilean"]

/-- A file's bytes, empty if it is missing (a failed run may not write it). -/
def bytesOf (file : System.FilePath) : IO ByteArray := do
  if ← file.pathExists then IO.FS.readBinFile file else return .empty

/-- A `.usage`, one JSON object per line, as one object without `reuse` and `resolved`, its `reuse` field, and the
entries of its `resolved` field (module, name and kind). -/
def usageOf (file : System.FilePath) : IO (Json × Json × Array String) := do
  let mut j := Json.mkObj []
  unless ← file.pathExists do return (j, j, #[])
  for line in (← IO.FS.readFile file).splitOn "\n" do
    unless line.isEmpty do j := j.mergeObj (← IO.ofExcept (Json.parse line))
  let fields := ((j.getObj?.toOption.map (·.toList)).getD []).filter fun (k, _) => k != "reuse" && k != "resolved"
  let mut resolved := #[]
  for g in ((j.getObjValD "resolved").getArr?.toOption.getD #[]) do
    for n in ((g.getArrVal? 1 >>= Json.getArr?).toOption.getD #[]) do
      resolved := resolved.push (Json.arr #[(g.getArrVal? 0).toOption.getD .null, n]).compress
  return (Json.mkObj fields, j.getObjValD "reuse", resolved)

/-- Whether the reuse run's `resolved` entries `r` hold the fresh build's `f`. -/
def resolvedCovers (r f : Array String) : Bool :=
  f.all r.contains

/-- The value of `c` that an importer of the `M` in `dir` sees. -/
def valueOf (dir : System.FilePath) (c : String) : IO String := do
  IO.FS.writeFile (dir / "N.lean") s!"import M\n#eval {c}\n"
  let (rc, out, err) ← lean dir #["N.lean"]
  return s!"{(out ++ err).trimAscii.copy} (exit {rc})"

/-- In fresh directories `r` and `f` under `dir`, each with `data.txt`: builds `src` as `M.lean` in `r`, then compiles
it as `./M.lean` in `r` keeping commands from that build and in `f` without reuse; prints the comparison and, if given,
the value of `c?` an importer of each build sees. -/
def case (dir : System.FilePath) (label src : String) (c? : Option String) : IO Unit := do
  let (r, f) := (dir / s!"{label}-r", dir / s!"{label}-f")
  for d in [r, f] do
    IO.FS.createDirAll d
    IO.FS.writeFile (d / "data.txt") "hello"
    IO.FS.writeFile (d / "M.lean") src
  let (rc, _, _) ← lean r (outputs "M" ++ #["M.lean"])
  IO.println s!"{label}: first build: exit {rc}"
  for ext in ["olean", "usage", "ilean"] do
    if ← (r / s!"M.{ext}").pathExists then
      IO.FS.rename (r / s!"M.{ext}") (r / s!"M.{ext}.old")
  let (rcR, outR, errR) ← lean r (outputs "M" ++ #["--reuse-olean=M.olean.old", "--reuse-usage=M.usage.old",
    "./M.lean"])
  let (rcF, outF, errF) ← lean f (outputs "M" ++ #["./M.lean"])
  IO.println s!"{label}: exit codes: reuse {rcR}, fresh {rcF}"
  IO.println s!"{label}: stdout equal to the fresh build's: {outR == outF}"
  IO.println s!"{label}: stderr equal to the fresh build's: {errR == errF}"
  for ext in ["olean", "ilean"] do
    let same := (← bytesOf (r / s!"M.{ext}")) == (← bytesOf (f / s!"M.{ext}"))
    IO.println s!"{label}: {ext} equal to the fresh build's: {same}"
  let (ur, _, rr) ← usageOf (r / "M.usage")
  let (uf, _, rf) ← usageOf (f / "M.usage")
  IO.println s!"{label}: usage equal to the fresh build's but `reuse` and `resolved`: {ur.compress == uf.compress}; \
    `resolved` holds the fresh build's: {resolvedCovers rr rf}"
  if let some c := c? then
    IO.println s!"{label}: {c}: reuse {← valueOf r c}, fresh {← valueOf f c}"

#eval IO.FS.withTempDir fun dir => do
  case dir "include_str" "def s : String := by\n  first | exact include_str \"data.txt\" | exact \"no file\"\n\
    def g : Nat := 1\n" (some "s")
  case dir "bv_check" "import Lean\nimport Std.Tactic.BVDecide\nopen Lean Elab Term in\n\
    elab \"error_of \" t:term : term => do\n  \
      try discard <| withoutErrToSorry <| elabTermAndSynthesize t none; return mkStrLit \"no error\"\n  \
      catch e => return mkStrLit (← e.toMessageData.toString)\n\
    def b : String := error_of (by bv_check \"b.lrat\" : ∀ x : BitVec 4, x * x ≠ 2)\ndef g : Nat := 1\n" (some "b")
