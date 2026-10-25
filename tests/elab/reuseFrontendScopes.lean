import Lean
/-! Commands that change the scopes (`namespace`, `end`, `open`, `section`, `variable`) are elaborated in a reuse run,
and their payloads do not express that change (`Refusal.commandState`): the chain goes on after one because the next
command's context holds the scopes (`ctxDigest`, `Reuse.refusalsEndKeeps?`). In (a) the reuse run edits only the last
declaration `z`, and every declaration before it is kept; in (b) it edits only `open A` to `open B`, so `w := v` names
`B.v`, and every declaration after the `open` is elaborated (the `open`'s payload differs); in (c) it edits only
`variable (n : Nat)` to `variable (n : Int)`, whose payload is the previous one, and every declaration after it is
elaborated (its context holds the other scopes). Each case compares the exit codes, the stdout and the stderr, the
`.olean` and `.ilean` bytes and the `.usage` fields but `reuse` and `resolved`, which must hold the fresh build's (a
reuse run also carries what its previous build resolved), with a fresh build's, and prints the reuse run's `kept`,
`reElab` and `elabReasons`. -/
open Lean

/-- `timeout 120 lean ARGS` in `dir`, with `dir` the search path: its exit code, stdout and stderr. -/
def lean (dir : System.FilePath) (args : Array String) : IO (UInt32 × String × String) := do
  let out ← IO.Process.output
    { cmd := "timeout", args := #["120", "lean"] ++ args, cwd := dir, env := #[("LEAN_PATH", some dir.toString)] }
  let norm (s : String) := s.replace dir.toString "DIR"
  return (out.exitCode, norm out.stdout, norm out.stderr)

def outputs (m : String) : Array String := #["-o", s!"{m}.olean", s!"--usage={m}.usage", "-i", s!"{m}.ilean"]

/-- A `.usage`, one JSON object per line, as one object without `reuse` and `resolved`, its `reuse` field, and the
entries of its `resolved` field (module, name and kind). -/
def usageOf (file : System.FilePath) : IO (Json × Json × Array String) := do
  let mut j := Json.mkObj []
  for line in (← IO.FS.readFile file).splitOn "\n" do
    unless line.isEmpty do j := j.mergeObj (← IO.ofExcept (Json.parse line))
  let fields := ((j.getObj?.toOption.map (·.toList)).getD []).filter fun (k, _) => k != "reuse" && k != "resolved"
  let mut resolved := #[]
  for g in ((j.getObjValD "resolved").getArr?.toOption.getD #[]) do
    for n in ((g.getArrVal? 1 >>= Json.getArr?).toOption.getD #[]) do
      resolved := resolved.push (Json.arr #[(g.getArrVal? 0).toOption.getD .null, n]).compress
  return (Json.mkObj fields, j.getObjValD "reuse", resolved)

def src (opened ty z : String) : String := s!"namespace A
def v : Nat := 1
end A
namespace B
def v : Nat := 2
end B
open {opened}
section
variable (n : {ty})
def w : Nat := v
def u (m : Nat) := n + m
end
def z : Nat := {z}
"

def case (dir : System.FilePath) (label : String) (before after : String × String × String) : IO Unit := do
  let (r, f) := (dir / s!"{label}-r", dir / s!"{label}-f")
  IO.FS.createDirAll r
  IO.FS.createDirAll f
  IO.FS.writeFile (r / "M.lean") (src before.1 before.2.1 before.2.2)
  let (rc, _, _) ← lean r (outputs "M" ++ #["M.lean"])
  IO.println s!"{label}: first build: exit {rc}"
  for ext in ["olean", "usage", "ilean"] do
    IO.FS.rename (r / s!"M.{ext}") (r / s!"M.{ext}.old")
  for d in [r, f] do
    IO.FS.writeFile (d / "M.lean") (src after.1 after.2.1 after.2.2)
  let (rcR, outR, errR) ← lean r (outputs "M" ++ #["--reuse-olean=M.olean.old", "--reuse-usage=M.usage.old",
    "M.lean"])
  let (rcF, outF, errF) ← lean f (outputs "M" ++ #["M.lean"])
  IO.println s!"{label}: exit codes: reuse {rcR}, fresh {rcF}"
  IO.println s!"{label}: stdout equal to the fresh build's: {outR == outF}"
  IO.println s!"{label}: stderr equal to the fresh build's: {errR == errF}"
  for ext in ["olean", "ilean"] do
    let same := (← IO.FS.readBinFile (r / s!"M.{ext}")) == (← IO.FS.readBinFile (f / s!"M.{ext}"))
    IO.println s!"{label}: {ext} equal to the fresh build's: {same}"
  let (ur, reuse, rr) ← usageOf (r / "M.usage")
  let (uf, _, rf) ← usageOf (f / "M.usage")
  IO.println s!"{label}: usage equal to the fresh build's but `reuse` and `resolved`: {ur.compress == uf.compress}; \
    `resolved` holds the fresh build's: {rf.all rr.contains}"
  IO.println s!"{label}: reuse run kept: {(reuse.getObjValD "kept").compress}, \
    reElab: {(reuse.getObjValD "reElab").compress}, elabReasons: {(reuse.getObjValD "elabReasons").compress}"

#eval IO.FS.withTempDir fun dir => do
  case dir "last edited" ("A", "Nat", "1") ("A", "Nat", "2")
  case dir "open edited" ("A", "Nat", "1") ("B", "Nat", "1")
  case dir "variable edited" ("A", "Nat", "1") ("A", "Int", "1")
