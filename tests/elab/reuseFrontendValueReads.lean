import Lean
/-! A reuse run's `.usage` lists the process values a fresh build's does: its kept commands do not run, so it takes
into the module's `values` the keys each kept command's record lists (`CommandRecord.values`), with the previous
build's digests, and keeps them in the commands' records, while the keep permit's own reads of the previous values
(`valuesChanged?`) are not the run's. Command `a` reads `FOO` and command `b` reads `BAR` as they are elaborated. When
only `z` changes, `a` and `b` are kept; when `b` no longer reads `BAR`, the reuse run, like a fresh build, lists only
`FOO`; and a later reuse run with another `FOO` keeps nothing. The names the previous build resolved are carried for
the whole module (`Carried.resolved`): when `b` no longer runs `bar_term`'s elaborator, the reuse run still lists the
names the interpreter resolved for it, which can only make Lake rebuild the module, or a later keep permit refuse it,
more often. -/
open Lean

/-- `lean ARGS` in `dir`, with `dir` the search path and the environment `env`: its exit code and output. -/
def lean (dir : System.FilePath) (args : Array String) (env : Array (String × Option String)) :
    IO (UInt32 × String) := do
  let out ← IO.Process.output { cmd := "lean", args, cwd := dir, env := env.push ("LEAN_PATH", some dir.toString) }
  let norm (s : String) := (s.replace dir.toString "DIR").quote
  return (out.exitCode, s!"stdout {norm out.stdout}, stderr {norm out.stderr}")

def outputs (m : String) : Array String := #["-o", s!"{m}.olean", s!"--usage={m}.usage", "-i", s!"{m}.ilean"]

def reuseArgs : Array String := outputs "M" ++
  #["--reuse-olean=M.olean.old", "--reuse-usage=M.usage.old", "M.lean"]

/-- A `.usage`, one JSON object per line, as one object without `reuse`, and its `reuse` field. -/
def usageOf (file : System.FilePath) : IO (Json × String) := do
  let mut j := Json.mkObj []
  for line in (← IO.FS.readFile file).splitOn "\n" do
    unless line.isEmpty do j := j.mergeObj (← IO.ofExcept (Json.parse line))
  let reuse := (j.getObjValD "reuse").compress
  let fields := ((j.getObj?.toOption.map (·.toList)).getD []).filter (·.1 != "reuse")
  return (Json.mkObj fields, reuse)

/-- The keys of a `.usage`'s `values`, and each command record's `values`. -/
def keysOf (j : Json) : List String × List (List String) :=
  let module := ((j.getObjValAs? (Array (String × Json)) "values").toOption.getD #[]).toList.map (·.1)
  let cmds := ((j.getObjValAs? (Array Json) "commands").toOption.getD #[]).toList.map fun c =>
    ((c.getObjValAs? (Array String) "values").toOption.getD #[]).toList
  (module, cmds)

def xSource : String := "import Lean
open Lean Elab Term

elab \"foo_term\" : term => return mkStrLit ((← IO.getEnv \"FOO\").getD \"unset\")
elab \"bar_term\" : term => return mkStrLit ((← IO.getEnv \"BAR\").getD \"unset\")
"

def mSource (b z : String) : String := s!"import X
def a : String := foo_term
def b : String := {b}
theorem t : True := trivial
def z : Nat := {z}
"

def env (foo : String) : Array (String × Option String) := #[("FOO", some foo), ("BAR", some "2")]

/-- Builds `M` from `mSource "bar_term" "1"` in `dir`, then reuse-builds it from `mSource b z` and builds the same
sources fresh in `dir/f`, printing the reuse run's `reuse` field and both builds' value keys. -/
def step (dir : System.FilePath) (label b z : String) : IO Unit := do
  IO.FS.createDirAll dir
  IO.FS.writeFile (dir / "X.lean") xSource
  discard <| lean dir #["-o", "X.olean", "--usage=X.usage", "X.lean"] #[]
  IO.FS.writeFile (dir / "M.lean") (mSource "bar_term" "1")
  let (rc, out) ← lean dir (outputs "M" ++ #["M.lean"]) (env "1")
  unless rc == 0 do throw <| IO.userError s!"the first build failed: {out}"
  for ext in ["olean", "usage", "resolved", "ilean"] do
    IO.FS.writeBinFile (dir / s!"M.{ext}.old") (← IO.FS.readBinFile (dir / s!"M.{ext}"))
  IO.FS.writeFile (dir / "M.lean") (mSource b z)
  let (rc, out) ← lean dir reuseArgs (env "1")
  let (ur, reuse) ← usageOf (dir / "M.usage")
  IO.println s!"{label}: reuse run exit {rc}, output {out.trimAscii.copy.quote}, reuse {reuse}"
  IO.FS.createDirAll (dir / "f")
  for f in ["X.olean", "X.usage", "M.lean"] do
    IO.FS.writeBinFile (dir / "f" / f) (← IO.FS.readBinFile (dir / f))
  let (rc, _) ← lean (dir / "f") (outputs "M" ++ #["M.lean"]) (env "1")
  let (uf, _) ← usageOf (dir / "f" / "M.usage")
  let ((rm, rc'), (fm, fc)) := (keysOf ur, keysOf uf)
  IO.println s!"{label}: fresh build exit {rc}; values: reuse run {rm}, fresh {fm}"
  IO.println s!"{label}: command values: reuse run {rc'}, fresh {fc}"
  let fields (j : Json) : List (String × Json) := (j.getObj?.toOption.map (·.toList)).getD []
  let differing := (fields ur).filterMap fun (k, v) =>
    if ((fields uf).lookup k).map Json.compress == some (Json.compress v) then none else some k
  IO.println s!"{label}: usage fields differing from the fresh build's but `reuse`: {differing}"

#eval IO.FS.withTempDir fun dir => do
  step (dir / "z") "z edited" "bar_term" "2"
  step (dir / "b") "b reads nothing" "\"x\"" "1"
  -- the next build of the `z edited` reuse run's outputs, with another `FOO`
  let d := dir / "z"
  for ext in ["olean", "usage", "resolved", "ilean"] do
    IO.FS.writeBinFile (d / s!"M.{ext}.old") (← IO.FS.readBinFile (d / s!"M.{ext}"))
  let (rc, _) ← lean d reuseArgs (env "3")
  IO.println s!"FOO changed after the z edit: exit {rc}, reuse {(← usageOf (d / "M.usage")).2}"
