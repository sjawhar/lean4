import Lean
/-! Review finding T5: a malformed reference record in the previous `.usage` must make the reuse run elaborate the
command, not fail when it writes the `.ilean`. `M` is built with `-i`, then command 1's (`b`'s) `refs.refs` in the
previous `.usage` is tampered with (the `.olean` is untouched): (i) set to `[0]`, not in fours; (ii) its first
identifier index set past `idents`; (iii) its first length set to `-1`. The reuse run edits only `z`. It must write
what a build without reuse writes: the test compares the exit codes, the stdout and the stderr, the `.olean` and
`.ilean` bytes, the `.usage` fields but `reuse` and `resolvedDigest`, and the `.resolved` sidecar's entries, which must
hold the fresh build's, and prints the reuse run's `reElab`. -/
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

/-- The `.usage` line with `commands`, command 1's `refs.refs` replaced by `f idents.size refs`. -/
def tamper (f : Nat → Array Int → Array Int) (line : String) : Except String String := do
  let j ← Json.parse line
  let cmds ← j.getObjValAs? (Array Json) "commands"
  let some c := cmds[1]? | throw "no record of command 1"
  let r ← c.getObjVal? "refs"
  let idents ← r.getObjValAs? (Array Json) "idents"
  let refs ← r.getObjValAs? (Array Int) "refs"
  unless refs.size ≥ 4 do throw "command 1 has no references"
  let c := c.setObjVal! "refs" (r.setObjValAs! "refs" (f idents.size refs))
  return (j.setObjVal! "commands" (toJson (cmds.set! 1 c))).compress

def src (z : String) : String := s!"def a : Nat := 1\ndef b : Nat := a + 1\ndef z : Nat := {z}\n"

def case (dir : System.FilePath) (label : String) (f : Nat → Array Int → Array Int) : IO Unit := do
  let (r, fr) := (dir / s!"{label}-r", dir / s!"{label}-f")
  IO.FS.createDirAll r
  IO.FS.createDirAll fr
  IO.FS.writeFile (r / "M.lean") (src "1")
  let (rc, _, _) ← lean r (outputs "M" ++ #["M.lean"])
  IO.println s!"{label}: first build: exit {rc}"
  IO.FS.rename (r / "M.olean") (r / "M.olean.old")
  IO.FS.removeFile (r / "M.ilean")
  let mut tampered := 0
  let mut out := #[]
  for line in (← IO.FS.readFile (r / "M.usage")).splitOn "\n" do
    if (line.splitOn "\"commands\"").length > 1 then
      out := out.push (← IO.ofExcept (tamper f line))
      tampered := tampered + 1
    else
      out := out.push line
  IO.println s!"{label}: usage lines tampered: {tampered}"
  IO.FS.writeFile (r / "M.usage.old") ("\n".intercalate out.toList)
  IO.FS.removeFile (r / "M.usage")
  IO.FS.rename (r / "M.resolved") (r / "M.resolved.old")
  for d in [r, fr] do
    IO.FS.writeFile (d / "M.lean") (src "2")
  let (rcR, outR, errR) ← lean r (outputs "M" ++ #["--reuse-olean=M.olean.old", "--reuse-usage=M.usage.old",
    "M.lean"])
  let (rcF, outF, errF) ← lean fr (outputs "M" ++ #["M.lean"])
  IO.println s!"{label}: exit codes: reuse {rcR}, fresh {rcF}"
  IO.println s!"{label}: stdout equal to the fresh build's: {outR == outF}"
  IO.println s!"{label}: stderr equal to the fresh build's: {errR == errF}"
  for ext in ["olean", "ilean"] do
    let same := (← bytesOf (r / s!"M.{ext}")) == (← bytesOf (fr / s!"M.{ext}"))
    IO.println s!"{label}: {ext} equal to the fresh build's: {same}"
  let (ur, reuse, rr) ← usageOf (r / "M.usage")
  let (uf, _, rf) ← usageOf (fr / "M.usage")
  IO.println s!"{label}: usage equal to the fresh build's but `reuse` and `resolved`: {ur.compress == uf.compress}; \
    `resolved` holds the fresh build's: {rf.all rr.contains}"
  IO.println s!"{label}: reuse run reElab: {(reuse.getObjValD "reElab").compress}"

#eval IO.FS.withTempDir fun dir => do
  case dir "not in fours" fun _ _ => #[0]
  case dir "identifier out of range" fun n refs => refs.set! 0 n
  case dir "negative length" fun _ refs => refs.set! 2 (-1)
