import Lean
/-! Review finding N6: before it keeps a command, a reuse run must not wait without bound for what an earlier elaborated
command left running (its kernel check, snapshot tasks, code-quality tasks, info tree). `E` declares `start_waiter`, a
command that registers a snapshot task which waits until `set_flag`, a later command, sets a flag (it gives up after
30 s and then says so on stderr, so a broken run still ends), and `set_flag`. `M` is `start_waiter`, `def a`,
`set_flag`, `def z`; a build without reuse finishes at once, as `set_flag` runs while the task waits. The edit changes
`z`. The reuse run must not stall on `start_waiter`'s task when it decides `a`: it must end at once and write what a
build without reuse writes. The test compares the exit codes (every child `lean` runs under `timeout 60`, 124 = timed
out), stdout and stderr, the `.olean` and `.ilean` bytes, the `.usage` fields but `reuse` and `resolvedDigest` (the
`.resolved` sidecar's entries must hold the fresh build's), the value an importer sees, and prints the reuse run's
`kept` count and elaborated commands. -/
open Lean

/-- Runs `lean args` in `dir` under `timeout 60`: exit code, stdout and stderr with `dir` replaced by `DIR`. -/
def lean (dir : System.FilePath) (args : Array String) : IO (UInt32 × String × String) := do
  let out ← IO.Process.output
    { cmd := "timeout", args := #["60", "lean"] ++ args, cwd := dir, env := #[("LEAN_PATH", some dir.toString)] }
  let norm (s : String) := s.replace dir.toString "DIR"
  return (out.exitCode, norm out.stdout, norm out.stderr)

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
open Lean Elab Command
initialize flag : IO.Ref Bool ← IO.mkRef false
elab \"start_waiter\" : command => do
  let t ← BaseIO.asTask (prio := .dedicated) do
    let mut n := 0
    while !(← flag.get) && n < 3000 do
      IO.sleep 10
      n := n + 1
    unless ← flag.get do discard <| (IO.eprintln \"start_waiter: gave up waiting for set_flag\").toBaseIO
    return (default : Language.SnapshotTree)
  logSnapshotTask { stx? := none, task := t, cancelTk? := none }
elab \"set_flag\" : command => flag.set true
"

def mSource (z : String) : String := s!"import E
start_waiter
def a : Nat := 1
set_flag
def z : Nat := {z}
"

/-- The value of `c` that an importer of the `M` in `dir` sees. -/
def valueOf (dir : System.FilePath) (c : String) : IO String := do
  IO.FS.writeFile (dir / "N.lean") s!"import M\n#eval {c}\n"
  let (rc, out, err) ← lean dir #["N.lean"]
  return s!"{(out ++ err).trimAscii.copy} (exit {rc})"

#eval IO.FS.withTempDir fun dir => do
  IO.FS.writeFile (dir / "E.lean") eSource
  let (rc, out, err) ← lean dir #["-o", "E.olean", "--usage=E.usage", "E.lean"]
  unless rc == 0 do throw <| IO.userError s!"lean E failed ({rc}):\n{out}{err}"
  let (r, f) := (dir / "r", dir / "f")
  for d in [r, f] do
    IO.FS.createDirAll d
    for ext in ["olean", "usage", "resolved"] do
      IO.FS.writeBinFile (d / s!"E.{ext}") (← IO.FS.readBinFile (dir / s!"E.{ext}"))
  IO.FS.writeFile (r / "M.lean") (mSource "1")
  let (rc, out, err) ← lean r (outputs "M" ++ #["M.lean"])
  IO.println s!"first build: exit {rc}, stdout {out.quote}, stderr {err.quote}"
  for ext in ["olean", "usage", "resolved", "ilean"] do
    IO.FS.rename (r / s!"M.{ext}") (r / s!"M.{ext}.old")
  IO.FS.writeFile (r / "M.lean") (mSource "2")
  IO.FS.writeFile (f / "M.lean") (mSource "2")
  let (rcR, outR, errR) ← lean r (outputs "M" ++ #["--reuse-olean=M.olean.old", "--reuse-usage=M.usage.old",
    "M.lean"])
  let (rcF, outF, errF) ← lean f (outputs "M" ++ #["M.lean"])
  IO.println s!"exit codes: reuse {rcR}, fresh {rcF}"
  IO.println s!"stdout equal to the fresh build's: {outR == outF}"
  IO.println s!"stderr equal to the fresh build's: {errR == errF}"
  unless errR == errF do IO.println s!"reuse run stderr: {errR.quote}"
  for ext in ["olean", "ilean"] do
    let same := (← bytesOf (r / s!"M.{ext}")) == (← bytesOf (f / s!"M.{ext}"))
    IO.println s!"{ext} equal to the fresh build's: {same}"
  let (ur, reuse, rr) ← usageOf (r / "M.usage")
  let (uf, _, rf) ← usageOf (f / "M.usage")
  let cmds (u : Json) := ((u.getObjValD "commands").getArr?.toOption.getD #[]).size
  IO.println s!"usage equal to the fresh build's but `reuse` and `resolved`: {ur.compress == uf.compress}; \
    `commands` lengths: reuse {cmds ur}, fresh {cmds uf}; `resolved` holds the fresh build's: {resolvedCovers rr rf}"
  IO.println s!"reuse run kept: {(reuse.getObjValD "kept").compress}, elaborated: \
    {(reuse.getObjValD "reElab").compress}"
  IO.println s!"z: reuse {← valueOf r "z"}, fresh {← valueOf f "z"}"
