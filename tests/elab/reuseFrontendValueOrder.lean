import Lean
/-! Review finding N8: a reuse run merges the process values a kept command read in the previous build with this run's
live reads in command order, and it must record the first value a fresh build records. A read made outside any command
(here: while the frontend renders a lazy message) has no command index, yet it happens after the commands before it.
`M`'s `a` reads `FOO`, the `#eval` after it sets `FOO`, and `log_foo` logs a message whose rendering reads `FOO`. With
`FOO=A`, the first build sets it to `A`; the edit sets it to `B` (same length, later spans unchanged). The reuse run
keeps `a`, which carries `A`, and only the message rendering reads `B`; a fresh build first reads `A` (in `a`), so the
reuse run's first value of `env:FOO` must be `A` too. The `.usage` `values` and `noreuse` fields, the whole `.usage`
but `reuse`, the `.olean`/`.ilean` bytes, the exit codes and stdout/stderr are compared with a fresh build's; a reuse
run's `resolved` must hold the fresh build's (it also carries the names its previous build resolved). -/
open Lean

/-- `timeout 120 lean ARGS` in `dir`, with `dir` the search path and `FOO=foo`: its exit code, stdout and stderr. -/
def lean (dir : System.FilePath) (args : Array String) (foo : String) : IO (UInt32 × String × String) := do
  let out ← IO.Process.output {
    cmd := "timeout", args := #["120", "lean"] ++ args, cwd := dir
    env := #[("LEAN_PATH", some dir.toString), ("FOO", some foo)] }
  let norm (s : String) := s.replace dir.toString "DIR"
  return (out.exitCode, norm out.stdout, norm out.stderr)

def outputs (m : String) : Array String := #["-o", s!"{m}.olean", s!"--usage={m}.usage", "-i", s!"{m}.ilean"]

def reuseArgs : Array String := outputs "M" ++
  #["--reuse-olean=M.olean.old", "--reuse-usage=M.usage.old", "M.lean"]

def fieldsOf (j : Json) : List (String × Json) := (j.getObj?.toOption.map (·.toList)).getD []

/-- A `.usage`, one JSON object per line, as one object without `reuse`. -/
def usageOf (file : System.FilePath) : IO Json := do
  let mut j := Json.mkObj []
  for line in (← IO.FS.readFile file).splitOn "\n" do
    unless line.isEmpty do j := j.mergeObj (← IO.ofExcept (Json.parse line))
  return Json.mkObj <| ((j.getObj?.toOption.map (·.toList)).getD []).filter (·.1 != "reuse")

/-- The entries (module, name and kind) of a `.usage`'s `resolved` field. -/
def resolvedOf (j : Json) : Array String := Id.run do
  let mut out := #[]
  for g in ((j.getObjValD "resolved").getArr?.toOption.getD #[]) do
    for n in ((g.getArrVal? 1 >>= Json.getArr?).toOption.getD #[]) do
      out := out.push (Json.arr #[(g.getArrVal? 0).toOption.getD .null, n]).compress
  return out

def eSource : String := "import Lean
open Lean Elab Term Command
elab \"foo_term\" : term => return mkStrLit ((← IO.getEnv \"FOO\").getD \"unset\")
elab \"log_foo\" : command =>
  logInfo (.lazy fun _ => return m!\"FOO when rendered: {(← IO.getEnv \"FOO\").getD \"unset\"}\")
"

def mSource (v : String) : String := s!"import E
import Std.Internal.UV.System
def a : String := foo_term
#eval Std.Internal.UV.System.osSetenv \"FOO\" \"{v}\"
log_foo
def z : Nat := 1
"

#eval IO.FS.withTempDir fun dir => do
  IO.FS.writeFile (dir / "E.lean") eSource
  let (rc, so, se) ← lean dir (outputs "E" ++ #["E.lean"]) "A"
  unless rc == 0 do throw <| IO.userError s!"building E failed: {so}{se}"
  IO.FS.writeFile (dir / "M.lean") (mSource "A")
  let (rc, so, se) ← lean dir (outputs "M" ++ #["M.lean"]) "A"
  unless rc == 0 do throw <| IO.userError s!"the first build failed: {so}{se}"
  for ext in ["olean", "usage", "ilean"] do
    IO.FS.writeBinFile (dir / s!"M.{ext}.old") (← IO.FS.readBinFile (dir / s!"M.{ext}"))
  IO.FS.writeFile (dir / "M.lean") (mSource "B")
  let (rr, rso, rse) ← lean dir reuseArgs "A"
  let f := dir / "fresh"
  IO.FS.createDirAll f
  for n in ["E.olean", "E.usage"] do
    IO.FS.writeBinFile (f / n) (← IO.FS.readBinFile (dir / n))
  IO.FS.writeFile (f / "M.lean") (mSource "B")
  let (fr, fso, fse) ← lean f (outputs "M" ++ #["M.lean"]) "A"
  IO.println s!"exit codes: reuse {rr}, fresh {fr}"
  IO.println s!"stdout equal: {rso == fso}; stderr equal: {rse == fse}"
  let same (n : String) : IO Bool := return (← IO.FS.readBinFile (dir / n)) == (← IO.FS.readBinFile (f / n))
  IO.println s!"olean equal: {← same "M.olean"}; ilean equal: {← same "M.ilean"}"
  let ur ← usageOf (dir / "M.usage")
  let uf ← usageOf (f / "M.usage")
  let field (j : Json) (k : String) := (j.getObjValD k).compress
  IO.println s!"values equal: {field ur "values" == field uf "values"}"
  IO.println s!"noreuse equal: {field ur "noreuse" == field uf "noreuse"}; noreuseReason equal: {field ur "noreuseReason" == field uf "noreuseReason"}"
  let cmdLen (j : Json) : Option Nat := ((j.getObjValD "commands").getArr?.toOption.map Array.size)
  IO.println s!"commands lengths equal: {cmdLen ur == cmdLen uf}"
  let keys (j : Json) : List String := (fieldsOf j).map Prod.fst
  let differing := ((keys ur ++ keys uf).eraseDups).filter fun k =>
    if k == "resolved" then !(resolvedOf uf).all (resolvedOf ur).contains
    else field ur k != field uf k
  IO.println s!"usage fields differing from the fresh build's but `reuse`: {differing}"
