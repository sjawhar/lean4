import Lean
/-! Review finding N7: a kept command's messages must be replayed with the file name the recorded message carries,
`Generated.lean` (at the fixed position 2:15, inside `d`; reading the file map would make `d` depend on the source
text and not be kept) and returns a literal. `M` declares `d := foreign_term`
and `z := 1`; only `z` is edited, so `d` is kept. The reuse run must write what a build without reuse writes, in text
mode and with `--json`: the same exit code, the same stdout and the same stderr (compared separately), the same
`.olean` and `.ilean` bytes, and the same `.usage` fields but `reuse` and `resolved` (whose entries must hold the fresh
build's, `resolvedCovers`). -/
open Lean

/-- Runs `timeout 120 lean args` in `dir`: exit code (124 = timed out), stdout and stderr with `dir` as `DIR`. -/
def lean (dir : System.FilePath) (args : Array String) : IO (UInt32 × String × String) := do
  let env := #[("LEAN_PATH", some dir.toString)]
  let out ← IO.Process.output { cmd := "timeout", args := #["120", "lean"] ++ args, cwd := dir, env }
  return (out.exitCode, out.stdout.replace dir.toString "DIR", out.stderr.replace dir.toString "DIR")

def outputs (m : String) : Array String := #["-o", s!"{m}.olean", s!"--usage={m}.usage", "-i", s!"{m}.ilean"]

/-- A file's bytes, empty if it is missing (a failed run may not write it). -/
def bytesOf (file : System.FilePath) : IO ByteArray := do
  if ← file.pathExists then IO.FS.readBinFile file else return .empty

/-- A `.usage`, one JSON object per line, as one object without `reuse` and `resolved`, and the entries of its
`resolved` field (module, name and kind). -/
def usageOf (file : System.FilePath) : IO (Json × Array String) := do
  let mut j := Json.mkObj []
  unless ← file.pathExists do return (j, #[])
  for line in (← IO.FS.readFile file).splitOn "\n" do
    unless line.isEmpty do j := j.mergeObj (← IO.ofExcept (Json.parse line))
  let fields := ((j.getObj?.toOption.map (·.toList)).getD []).filter fun (k, _) => k != "reuse" && k != "resolved"
  let mut resolved := #[]
  for g in ((j.getObjValD "resolved").getArr?.toOption.getD #[]) do
    for n in ((g.getArrVal? 1 >>= Json.getArr?).toOption.getD #[]) do
      resolved := resolved.push (Json.arr #[(g.getArrVal? 0).toOption.getD .null, n]).compress
  return (Json.mkObj fields, resolved)

/-- Whether the reuse run's `resolved` entries `r` hold the fresh build's `f`. -/
def resolvedCovers (r f : Array String) : Bool :=
  f.all r.contains

def eSource : String := "import Lean
open Lean Elab Term
elab \"foreign_term\" : term => do
  logMessage { fileName := \"Generated.lean\", pos := ⟨2, 15⟩, severity := .warning, data := \"from a generated file\" }
  return mkNatLit 7
"

def mSource (z : String) : String := s!"import E\ndef d : Nat := foreign_term\ndef z : Nat := {z}\n"

/-- In fresh directories under `dir`, each with `E`: builds `M` once, then compiles the edited `M` keeping commands
from that build and without reuse, with the extra flags `flags`; prints the comparison. -/
def case (dir : System.FilePath) (label : String) (flags : Array String) : IO Unit := do
  let (r, f) := (dir / s!"{label}-r", dir / s!"{label}-f")
  for d in [r, f] do
    IO.FS.createDirAll d
    for ext in ["olean", "usage"] do
      IO.FS.writeBinFile (d / s!"E.{ext}") (← IO.FS.readBinFile (dir / s!"E.{ext}"))
  IO.FS.writeFile (r / "M.lean") (mSource "1")
  let (rc, _, _) ← lean r (flags ++ outputs "M" ++ #["M.lean"])
  IO.println s!"{label}: first build: exit {rc}"
  for ext in ["olean", "usage", "ilean"] do
    IO.FS.rename (r / s!"M.{ext}") (r / s!"M.{ext}.old")
  IO.FS.writeFile (r / "M.lean") (mSource "2")
  IO.FS.writeFile (f / "M.lean") (mSource "2")
  let (rcR, outR, errR) ← lean r (flags ++ outputs "M" ++ #["--reuse-olean=M.olean.old", "--reuse-usage=M.usage.old",
    "M.lean"])
  let (rcF, outF, errF) ← lean f (flags ++ outputs "M" ++ #["M.lean"])
  IO.println s!"{label}: exit codes: reuse {rcR}, fresh {rcF}"
  IO.println s!"{label}: stdout equal to the fresh build's: {outR == outF}"
  unless outR == outF do IO.println s!"{label}: reuse stdout:\n{outR}{label}: fresh stdout:\n{outF}"
  IO.println s!"{label}: stderr equal to the fresh build's: {errR == errF}"
  unless errR == errF do IO.println s!"{label}: reuse stderr:\n{errR}{label}: fresh stderr:\n{errF}"
  for ext in ["olean", "ilean"] do
    let same := (← bytesOf (r / s!"M.{ext}")) == (← bytesOf (f / s!"M.{ext}"))
    IO.println s!"{label}: {ext} equal to the fresh build's: {same}"
  let (ur, rr) ← usageOf (r / "M.usage")
  let (uf, rf) ← usageOf (f / "M.usage")
  IO.println s!"{label}: usage equal to the fresh build's but `reuse` and `resolved`: {ur.compress == uf.compress}; \
    `resolved` holds the fresh build's: {resolvedCovers rr rf}"

#eval IO.FS.withTempDir fun dir => do
  IO.FS.writeFile (dir / "E.lean") eSource
  let (rc, out, err) ← lean dir #["-o", "E.olean", "--usage=E.usage", "E.lean"]
  unless rc == 0 do throw <| IO.userError s!"lean E failed ({rc}):\n{out}{err}"
  case dir "text" #[]
  case dir "json" #["--json"]
