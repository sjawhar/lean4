import Lean
/-! Review finding R10: a reuse run that keeps a command carries the process values the command read in the previous
build, and the commands it elaborates read the values live; when the two differ, the run must record what a fresh
build records. `M`'s `a` and `c` read `FOO`, and the `#eval` between them sets it. With `FOO=A`, the first build sets
it to `A`; the edit sets it to `B` (same length, later spans unchanged). The reuse run keeps `a`, which carries `A`, and
`c` reads `B`; a fresh build reads `A` then `B` and is `noreuse`, as the reuse run must be. A later reuse run of those
outputs with `FOO=B` must not keep `a`, whose value `"A"` came from another `FOO`. The `.usage` fields but `reuse` are
compared with a fresh build's; a reuse run's `resolved` must hold the fresh build's (it also carries the names its
previous build resolved). -/
open Lean

/-- `lean ARGS` in `dir`, with `dir` the search path and `FOO=foo`: its exit code and output. -/
def lean (dir : System.FilePath) (args : Array String) (foo : String) : IO (UInt32 × String) := do
  let out ← IO.Process.output {
    cmd := "lean", args, cwd := dir, env := #[("LEAN_PATH", some dir.toString), ("FOO", some foo)] }
  let norm (s : String) := (s.replace dir.toString "DIR").quote
  return (out.exitCode, s!"stdout {norm out.stdout}, stderr {norm out.stderr}")

def outputs (m : String) : Array String := #["-o", s!"{m}.olean", s!"--usage={m}.usage", "-i", s!"{m}.ilean"]

def reuseArgs : Array String := outputs "M" ++
  #["--reuse-olean=M.olean.old", "--reuse-usage=M.usage.old", "M.lean"]

/-- A `.usage`, one JSON object per line, as one object without `reuse`, and its `reuse` field. -/
def usageOf (file : System.FilePath) : IO (Json × Json) := do
  let mut j := Json.mkObj []
  for line in (← IO.FS.readFile file).splitOn "\n" do
    unless line.isEmpty do j := j.mergeObj (← IO.ofExcept (Json.parse line))
  let fields := ((j.getObj?.toOption.map (·.toList)).getD []).filter (·.1 != "reuse")
  return (Json.mkObj fields, j.getObjValD "reuse")

/-- The entries (module, name and kind) of a `.usage`'s `resolved` field. -/
def resolvedOf (j : Json) : Array String := Id.run do
  let mut out := #[]
  for g in ((j.getObjValD "resolved").getArr?.toOption.getD #[]) do
    for n in ((g.getArrVal? 1 >>= Json.getArr?).toOption.getD #[]) do
      out := out.push (Json.arr #[(g.getArrVal? 0).toOption.getD .null, n]).compress
  return out

def eSource : String := "import Lean
open Lean Elab Term
elab \"foo_term\" : term => return mkStrLit ((← IO.getEnv \"FOO\").getD \"unset\")
"

def mSource (v : String) : String := s!"import E
import Std.Internal.UV.System
def a : String := foo_term
#eval Std.Internal.UV.System.osSetenv \"FOO\" \"{v}\"
def c : String := foo_term
"

def keepOld (dir : System.FilePath) : IO Unit := do
  for ext in ["olean", "usage", "ilean"] do
    IO.FS.writeBinFile (dir / s!"M.{ext}.old") (← IO.FS.readBinFile (dir / s!"M.{ext}"))

/-- Builds `mSource "B"` fresh in `f` with `FOO=foo`, and prints how `dir`'s reuse run, which exited with `rr` and
printed `ro`, compares to it. -/
def compare (dir f : System.FilePath) (label foo : String) (rr : UInt32) (ro : String) : IO Unit := do
  IO.FS.createDirAll f
  for n in ["E.olean", "E.usage"] do
    IO.FS.writeBinFile (f / n) (← IO.FS.readBinFile (dir / n))
  IO.FS.writeFile (f / "M.lean") (mSource "B")
  let (fr, fo) ← lean f (outputs "M" ++ #["M.lean"]) foo
  let (ur, reuse) ← usageOf (dir / "M.usage")
  let (uf, _) ← usageOf (f / "M.usage")
  let fields (j : Json) : List (String × Json) := (j.getObj?.toOption.map (·.toList)).getD []
  let differing := (fields ur).filterMap fun (k, v) =>
    if k == "resolved" && (resolvedOf uf).all (resolvedOf ur).contains then none
    else if ((fields uf).lookup k).map Json.compress == some (Json.compress v) then none else some k
  let same (n : String) : IO Bool := return (← IO.FS.readBinFile (dir / n)) == (← IO.FS.readBinFile (f / n))
  let noreuse (j : Json) := ((j.getObjValAs? Bool "noreuse").toOption, (j.getObjValAs? String "noreuseReason").toOption)
  IO.println s!"{label}: exit codes: reuse {rr}, fresh {fr}; output equal: {ro == fo}"
  IO.println s!"{label}: olean equal to the fresh build's: {← same "M.olean"}; ilean equal: {← same "M.ilean"}"
  IO.println s!"{label}: noreuse: reuse run {noreuse ur}, fresh {noreuse uf}"
  IO.println s!"{label}: usage fields differing from the fresh build's but `reuse`: {differing}"
  if foo == "B" then
    -- `FOO` is not the value the kept `a` read
    IO.println s!"{label}: reuse run kept {(reuse.getObjValAs? Nat "kept").toOption}"

#eval IO.FS.withTempDir fun dir => do
  IO.FS.writeFile (dir / "E.lean") eSource
  discard <| lean dir (outputs "E" ++ #["E.lean"]) "A"
  IO.FS.writeFile (dir / "M.lean") (mSource "A")
  let (rc, out) ← lean dir (outputs "M" ++ #["M.lean"]) "A"
  unless rc == 0 do throw <| IO.userError s!"the first build failed: {out}"
  keepOld dir
  IO.FS.writeFile (dir / "M.lean") (mSource "B")
  let (rr, ro) ← lean dir reuseArgs "A"
  compare dir (dir / "f2") "setter edited, FOO=A" "A" rr ro
  keepOld dir
  let (rr, ro) ← lean dir reuseArgs "B"
  compare dir (dir / "f3") "next run, FOO=B" "B" rr ro
