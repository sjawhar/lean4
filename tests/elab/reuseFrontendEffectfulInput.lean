import Lean
/-! Review finding R2: a command that writes process state a later command reads (an imported module's `IO.Ref`, an
environment variable) is re-elaborated when its input changes, and its payload, empty, stays the same; the later
command that reads the state must not be kept from the previous build, whose result came from the old state. `M`'s
`#eval` stores `X.cfg` in the state and `d`'s elaborator reads it; `X.cfg` changes from `"A"` to `"B"` and `M`'s source
does not. A reuse run of `M` must give the fresh build's outputs, `d = "B"`. -/
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
def usageOf (file : System.FilePath) : IO (Json × Json) := do
  let mut j := Json.mkObj []
  for line in (← IO.FS.readFile file).splitOn "\n" do
    unless line.isEmpty do j := j.mergeObj (← IO.ofExcept (Json.parse line))
  let fields := ((j.getObj?.toOption.map (·.toList)).getD []).filter (·.1 != "reuse")
  return (Json.mkObj fields, j.getObjValD "reuse")

def xSource (cfg : String) : String := s!"def cfg : String := \"{cfg}\"\n"

/-- The state is an `IO.Ref` an initializer of `E` creates. -/
def refE : String := "import Lean
open Lean Elab Term
initialize cfgRef : IO.Ref String ← IO.mkRef \"\"
elab \"cfg_term\" : term => return mkStrLit (← cfgRef.get)
"

def refM : String := "import X
import E
#eval cfgRef.set cfg
def d : String := cfg_term
theorem t : True := trivial
"

/-- The state is the environment variable `FOO`. -/
def envE : String := "import Lean
open Lean Elab Term
elab \"cfg_term\" : term => return mkStrLit ((← IO.getEnv \"FOO\").getD \"unset\")
"

def envM : String := "import X
import E
import Std.Internal.UV.System
#eval Std.Internal.UV.System.osSetenv \"FOO\" cfg
def d : String := cfg_term
theorem t : True := trivial
"

/-- Builds `E`, `X` with `cfg = "A"` and `M` in `dir`; rebuilds `X` with `cfg = "B"`; reuse-builds `M` and builds it
fresh in `dir/f`; prints how the two builds compare. -/
def variant (dir : System.FilePath) (label e m : String) (env : Array (String × Option String)) : IO Unit := do
  IO.FS.createDirAll dir
  let build (d : System.FilePath) (n : String) : IO Unit := do
    let (rc, out) ← lean d (outputs n ++ #[s!"{n}.lean"]) env
    unless rc == 0 do throw <| IO.userError s!"building {n} failed: {out}"
  IO.FS.writeFile (dir / "E.lean") e
  build dir "E"
  IO.FS.writeFile (dir / "X.lean") (xSource "A")
  build dir "X"
  IO.FS.writeFile (dir / "M.lean") m
  build dir "M"
  for ext in ["olean", "usage", "resolved", "ilean"] do
    IO.FS.writeBinFile (dir / s!"M.{ext}.old") (← IO.FS.readBinFile (dir / s!"M.{ext}"))
  IO.FS.writeFile (dir / "X.lean") (xSource "B")
  build dir "X"
  let (rr, ro) ← lean dir reuseArgs env
  let f := dir / "f"
  IO.FS.createDirAll f
  for n in ["E.olean", "E.usage", "X.olean", "X.usage", "M.lean"] do
    IO.FS.writeBinFile (f / n) (← IO.FS.readBinFile (dir / n))
  let (fr, fo) ← lean f (outputs "M" ++ #["M.lean"]) env
  let (ur, reuse) ← usageOf (dir / "M.usage")
  let (uf, _) ← usageOf (f / "M.usage")
  let fields (j : Json) : List (String × Json) := (j.getObj?.toOption.map (·.toList)).getD []
  let differing := (fields ur).filterMap fun (k, v) =>
    if ((fields uf).lookup k).map Json.compress == some (Json.compress v) then none else some k
  let same (n : String) : IO Bool := return (← IO.FS.readBinFile (dir / n)) == (← IO.FS.readBinFile (f / n))
  IO.println s!"{label}: exit codes: reuse {rr}, fresh {fr}; output equal: {ro == fo}"
  IO.println s!"{label}: olean equal to the fresh build's: {← same "M.olean"}; ilean equal: {← same "M.ilean"}"
  IO.println s!"{label}: usage fields differing from the fresh build's but `reuse`: {differing}"
  -- `d` is command 1; a run that declines keeps nothing
  let reElab := (reuse.getObjValAs? (Array Nat) "reElab").toOption
  IO.println s!"{label}: reuse run keeps d: {reElab.any (!·.contains 1)}"
  let value (d : System.FilePath) : IO String := do
    IO.FS.writeFile (d / "N.lean") "import M\n#eval IO.println d\n"
    return (← lean d #["N.lean"] env).2.trimAscii.copy
  IO.println s!"{label}: d: reuse run {(← value dir).quote}, fresh {(← value f).quote}"

#eval IO.FS.withTempDir fun dir => do
  variant (dir / "ref") "IO.Ref" refE refM #[]
  variant (dir / "env") "env var" envE envM #[("FOO", some "A")]
