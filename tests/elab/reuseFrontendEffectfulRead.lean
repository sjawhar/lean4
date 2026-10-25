import Lean
/-! Review finding N1: a non-declaration command with effects that a reuse run elaborates again does not record every
input of its effect, so the reuse run must not keep a later command that reads the state the effect writes. `E`'s
initializer creates the `IO.Ref` `cfgRef` and its term elaborator `cfg_term` reads it; in `M` an `#eval` sets `cfgRef`,
then `d := cfg_term` reads it. (a) The `#eval` sets `cfgRef` to the contents of `config.txt`; only `config.txt`
changes, from `"A"` to `"B"`. (b) The `#eval` sets `cfgRef` to the length of the source text; only the last
declaration `z` grows. In each case the reuse run must write what a build without reuse writes: the test compares the
exit codes, the stdout and the stderr, the `.olean` and `.ilean` bytes, the `.usage` fields but `reuse` and
`resolved`, which must hold the fresh build's (`resolvedCovers`), and prints the `d` an importer of each build sees and
the reuse run's `kept` count. -/
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

def eSource : String := "import Lean
open Lean Elab Term
initialize cfgRef : IO.Ref String ← IO.mkRef \"\"
elab \"cfg_term\" : term => return mkStrLit (← cfgRef.get)
"

/-- The `d` that an importer of the `M` in `dir` sees. -/
def valueOf (dir : System.FilePath) : IO String := do
  IO.FS.writeFile (dir / "N.lean") "import M\n#eval d\n"
  let (rc, out, err) ← lean dir #["N.lean"]
  return s!"{(out ++ err).trimAscii.copy} (exit {rc})"

/-- In fresh directories `r` and `f` under `dir`, each with `E`: builds `src` in `r` with `config.txt` = `cfg`, then
compiles `src'` with `config.txt` = `cfg'` in `r` keeping commands from that build and in `f` without reuse; prints the
comparison, `d`'s values and the reuse run's `kept` count. -/
def case (dir : System.FilePath) (label src cfg src' cfg' : String) : IO Unit := do
  let (r, f) := (dir / s!"{label}-r", dir / s!"{label}-f")
  for d in [r, f] do
    IO.FS.createDirAll d
    for ext in ["olean", "usage"] do
      IO.FS.writeBinFile (d / s!"E.{ext}") (← IO.FS.readBinFile (dir / s!"E.{ext}"))
  IO.FS.writeFile (r / "config.txt") cfg
  IO.FS.writeFile (r / "M.lean") src
  let (rc, _, _) ← lean r (outputs "M" ++ #["M.lean"])
  IO.println s!"{label}: first build: exit {rc}, d {← valueOf r}"
  for ext in ["olean", "usage", "ilean"] do
    IO.FS.rename (r / s!"M.{ext}") (r / s!"M.{ext}.old")
  for d in [r, f] do
    IO.FS.writeFile (d / "config.txt") cfg'
    IO.FS.writeFile (d / "M.lean") src'
  let (rcR, outR, errR) ← lean r (outputs "M" ++ #["--reuse-olean=M.olean.old", "--reuse-usage=M.usage.old",
    "M.lean"])
  let (rcF, outF, errF) ← lean f (outputs "M" ++ #["M.lean"])
  IO.println s!"{label}: exit codes: reuse {rcR}, fresh {rcF}"
  IO.println s!"{label}: stdout equal to the fresh build's: {outR == outF}"
  IO.println s!"{label}: stderr equal to the fresh build's: {errR == errF}"
  for ext in ["olean", "ilean"] do
    let same := (← bytesOf (r / s!"M.{ext}")) == (← bytesOf (f / s!"M.{ext}"))
    IO.println s!"{label}: {ext} equal to the fresh build's: {same}"
  let (ur, reuse, rr) ← usageOf (r / "M.usage")
  let (uf, _, rf) ← usageOf (f / "M.usage")
  IO.println s!"{label}: usage equal to the fresh build's but `reuse` and `resolved`: {ur.compress == uf.compress}; \
    `resolved` holds the fresh build's: {resolvedCovers rr rf}"
  IO.println s!"{label}: d: reuse {← valueOf r}, fresh {← valueOf f}"
  IO.println s!"{label}: reuse run kept: {(reuse.getObjValD "kept").compress}"

#eval IO.FS.withTempDir fun dir => do
  IO.FS.writeFile (dir / "E.lean") eSource
  let (rc, out, err) ← lean dir #["-o", "E.olean", "--usage=E.usage", "E.lean"]
  unless rc == 0 do throw <| IO.userError s!"lean E failed ({rc}):\n{out}{err}"
  let a := "import E\n#eval do cfgRef.set (← IO.FS.readFile \"config.txt\")\ndef d : String := cfg_term\n\
    def z : Nat := 1\n"
  case dir "config file" a "A" a "B"
  let b (z : String) := s!"import E\n#eval show Lean.Elab.Command.CommandElabM Unit from do \
    cfgRef.set (toString (← Lean.getFileMap).source.length)\ndef d : String := cfg_term\ndef z : Nat := {z}\n"
  case dir "source length" (b "1") "" (b "12345") ""
