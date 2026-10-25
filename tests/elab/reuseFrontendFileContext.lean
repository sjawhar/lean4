import Lean
/-! Review finding R12: a command can read the file name and the whole source text through its context
(`getFileName`, `getFileMap`), so these are inputs of the commands that read them. `E` declares two term elaborators:
`file_term`, the file name, and `len_term`, the length of the source. (a) The module is built as `M.lean`, then
compiled again as `./M.lean`: `f`, which reads the file name, must not be kept. (b) Only the last declaration `z` grows:
`n`, which reads the source length, must not be kept, and `t`, which reads neither, still is. In each case the reuse
run must write what a build without reuse writes: the test compares the `.olean` and `.ilean` bytes, the `.usage`
fields but `reuse` and `resolvedDigest`, and the `.resolved` sidecar's entries, which must hold the fresh build's (a
reuse run also carries the names its previous build resolved, `resolvedCovers`), the output and the exit code, and
prints the value an importer of each build sees; in (b) also the reuse run's `kept` count and elaborated commands. -/
open Lean

def lean (dir : System.FilePath) (args : Array String) : IO (UInt32 × String) := do
  let out ← IO.Process.output { cmd := "lean", args, cwd := dir, env := #[("LEAN_PATH", some dir.toString)] }
  let norm (s : String) := (s.replace dir.toString "DIR").quote
  return (out.exitCode, s!"stdout {norm out.stdout}, stderr {norm out.stderr}")

def outputs (m : String) : Array String := #["-o", s!"{m}.olean", s!"--usage={m}.usage", "-i", s!"{m}.ilean"]

/-- A file's bytes, empty if it is missing (a failed run may not write it). -/
def bytesOf (file : System.FilePath) : IO ByteArray := do
  if ← file.pathExists then IO.FS.readBinFile file else return .empty

/-- A `.usage`, one JSON object per line, as one object without `reuse` and `resolvedDigest`, its `reuse` field, and the
entries of the `.resolved` sidecar beside it (module, name digest and kind). -/
def usageOf (file : System.FilePath) : IO (Json × Json × Array String) := do
  let mut j := Json.mkObj []
  unless ← file.pathExists do return (j, j, #[])
  for line in (← IO.FS.readFile file).splitOn "\n" do
    unless line.isEmpty do j := j.mergeObj (← IO.ofExcept (Json.parse line))
  let fields := ((j.getObj?.toOption.map (·.toList)).getD []).filter fun (k, _) => k != "reuse" && k != "resolvedDigest"
  let mut resolved := #[]
  if let .ok bytes ← (IO.FS.readBinFile (file.withExtension "resolved")).toBaseIO then
    if let .ok t := ModuleUsage.ResolvedTable.decode? bytes then
      for (d, g, k) in t.entries.toArray do
        resolved := resolved.push s!"{t.modules[g]!}:{d.hex}:{k}"
  return (Json.mkObj fields, j.getObjValD "reuse", resolved)

/-- Whether the reuse run's `resolved` entries `r` hold the fresh build's `f`. -/
def resolvedCovers (r f : Array String) : Bool :=
  f.all r.contains

def eSource : String := "import Lean
open Lean Elab Term
elab \"file_term\" : term => return mkStrLit (← getFileName)
elab \"len_term\" : term => return mkNatLit (← getFileMap).source.length
"

/-- The value of `c` that an importer of the `M` in `dir` sees. -/
def valueOf (dir : System.FilePath) (c : String) : IO String := do
  IO.FS.writeFile (dir / "N.lean") s!"import M\n#eval {c}\n"
  let (_, out) ← lean dir #["N.lean"]
  return out.trimAscii.copy

/-- In fresh directories `r` and `f` under `dir`, each with `E`: builds `src` as `path` in `r`, then compiles `src'` as
`path'` in `r` keeping commands from that build and in `f` without reuse; prints the comparison and `c`'s values. -/
def case (dir : System.FilePath) (label src path src' path' c : String) (showKept := false) : IO Unit := do
  let (r, f) := (dir / s!"{label}-r", dir / s!"{label}-f")
  for d in [r, f] do
    IO.FS.createDirAll d
    for ext in ["olean", "usage", "resolved"] do
      IO.FS.writeBinFile (d / s!"E.{ext}") (← IO.FS.readBinFile (dir / s!"E.{ext}"))
  IO.FS.writeFile (r / "M.lean") src
  let (rc, _) ← lean r (outputs "M" ++ #[path])
  IO.println s!"{label}: first build: exit {rc}, {c} {← valueOf r c}"
  for ext in ["olean", "usage", "resolved", "ilean"] do
    IO.FS.rename (r / s!"M.{ext}") (r / s!"M.{ext}.old")
  IO.FS.writeFile (r / "M.lean") src'
  IO.FS.writeFile (f / "M.lean") src'
  let (rcR, outR) ← lean r (outputs "M" ++ #["--reuse-olean=M.olean.old", "--reuse-usage=M.usage.old",
    path'])
  let (rcF, outF) ← lean f (outputs "M" ++ #[path'])
  IO.println s!"{label}: exit codes: reuse {rcR}, fresh {rcF}"
  IO.println s!"{label}: output equal to the fresh build's: {outR == outF}"
  for ext in ["olean", "ilean"] do
    let same := (← bytesOf (r / s!"M.{ext}")) == (← bytesOf (f / s!"M.{ext}"))
    IO.println s!"{label}: {ext} equal to the fresh build's: {same}"
  let (ur, reuse, rr) ← usageOf (r / "M.usage")
  let (uf, _, rf) ← usageOf (f / "M.usage")
  IO.println s!"{label}: usage equal to the fresh build's but `reuse` and `resolved`: {ur.compress == uf.compress}; \
    `resolved` holds the fresh build's: {resolvedCovers rr rf}"
  if showKept then
    IO.println s!"{label}: reuse run kept: {(reuse.getObjValD "kept").compress}, elaborated: \
      {(reuse.getObjValD "reElab").compress}"
  IO.println s!"{label}: {c}: reuse {← valueOf r c}, fresh {← valueOf f c}"

#eval IO.FS.withTempDir fun dir => do
  IO.FS.writeFile (dir / "E.lean") eSource
  let (rc, out) ← lean dir #["-o", "E.olean", "--usage=E.usage", "E.lean"]
  unless rc == 0 do throw <| IO.userError s!"lean E failed ({rc}):\n{out}"
  let a := "import E\ndef f : String := file_term\ndef g : Nat := 1\n"
  case dir "file name" a "M.lean" a "./M.lean" "f"
  let b (z : String) := s!"import E\ntheorem t : True := trivial\ndef n : Nat := len_term\ndef z : Nat := {z}\n"
  case dir "source length" (b "1") "M.lean" (b "12345") "M.lean" "n" (showKept := true)
