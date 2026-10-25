import Lean
/-! Review finding N9: a command's keep check asks whether the commands it fully uses may have changed constants
before the run settles the previous elaborated command, which is where an unchanged re-elaborated command is found
to have the same constants. `a` uses a deprecated constant, so its warning holds an expression and `a` is always
elaborated again, with the same constant; `b` uses `a` and `c` uses `b`. The reuse run edits only the last
declaration `z`: `b` and `c` must be kept, and the run must write what a build without reuse writes (exit codes,
stdout and stderr, `.olean` and `.ilean` bytes, `.usage` fields but `reuse` and `resolvedDigest`, with the `.resolved`
sidecar's entries holding the fresh
build's). -/
open Lean

/-- Runs `timeout 120 lean args` in `dir`: exit code, stdout and stderr with `dir` replaced by `DIR`. -/
def lean (dir : System.FilePath) (args : Array String) : IO (UInt32 × String × String) := do
  let out ← IO.Process.output
    { cmd := "timeout", args := #["120", "lean"] ++ args, cwd := dir, env := #[("LEAN_PATH", some dir.toString)] }
  let norm (s : String) := s.replace dir.toString "DIR"
  return (out.exitCode, norm out.stdout, norm out.stderr)

def outputs (m : String) : Array String := #["-o", s!"{m}.olean", s!"--usage={m}.usage", "-i", s!"{m}.ilean"]

def bytesOf (file : System.FilePath) : IO ByteArray := do
  if ← file.pathExists then IO.FS.readBinFile file else return .empty

/-- A `.usage` as one object without `reuse` and `resolvedDigest`, its `reuse` field, and the entries of the `.resolved`
sidecar beside it. -/
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

def src (z : String) : String :=
  "@[deprecated \"use x\" (since := \"2025-01-01\")] def old : Nat := 1\n\
  def a : Nat := old\ndef b : Nat := a + 1\ndef c : Nat := b + 1\n" ++ s!"def z : Nat := {z}\n"

#eval IO.FS.withTempDir fun dir => do
  let (r, f) := (dir / "r", dir / "f")
  for d in [r, f] do IO.FS.createDirAll d
  IO.FS.writeFile (r / "M.lean") (src "1")
  let (rc, _, _) ← lean r (outputs "M" ++ #["M.lean"])
  IO.println s!"first build: exit {rc}"
  for ext in ["olean", "usage", "resolved", "ilean"] do
    IO.FS.rename (r / s!"M.{ext}") (r / s!"M.{ext}.old")
  IO.FS.writeFile (r / "M.lean") (src "2")
  IO.FS.writeFile (f / "M.lean") (src "2")
  let (rcR, outR, errR) ← lean r (outputs "M" ++ #["--reuse-olean=M.olean.old", "--reuse-usage=M.usage.old",
    "M.lean"])
  let (rcF, outF, errF) ← lean f (outputs "M" ++ #["M.lean"])
  IO.println s!"exit codes: reuse {rcR}, fresh {rcF}"
  IO.println s!"stdout equal to the fresh build's: {outR == outF}"
  IO.println s!"stderr equal to the fresh build's: {errR == errF}"
  for ext in ["olean", "ilean"] do
    IO.println s!"{ext} equal to the fresh build's: {(← bytesOf (r / s!"M.{ext}")) == (← bytesOf (f / s!"M.{ext}"))}"
  let (ur, reuse, rr) ← usageOf (r / "M.usage")
  let (uf, _, rf) ← usageOf (f / "M.usage")
  let len (u : Json) : Nat := ((u.getObjValD "commands").getArr?.toOption.map (fun (a : Array Json) => a.size)).getD 0
  IO.println s!"usage equal to the fresh build's but `reuse` and `resolved`: {ur.compress == uf.compress}; \
    commands: reuse {len ur}, fresh {len uf}; `resolved` holds the fresh build's: {rf.all rr.contains}"
  let reElab := ((reuse.getObjValD "reElab").getArr?.toOption.getD #[]).filterMap (fun (j : Json) => j.getNat?.toOption)
  -- commands: 0 `old`, 1 `a`, 2 `b`, 3 `c`, 4 `z`
  IO.println s!"b kept: {!reElab.contains 2}, c kept: {!reElab.contains 3}"
  IO.println s!"reuse run elabReasons: {(reuse.getObjValD "elabReasons").compress}"
