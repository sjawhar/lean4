import Lean
/-! Review findings U4, V1 and W2: what imported modules' initializers did in a reuse run's import context is in every
command's result and no record holds it, so the run keeps nothing when its import context read a value that may differ
in another run (`import-nondeterministic`: a value tied to the run, or one with the same range in every run, such as
random bytes, the random generator's next number, or the outcome of a task's scheduling), had an effect
(`import-effect`) or still runs a task it started (`import-unsettled`). `E`'s initializer sets `seed`, which its term
`seed_term` returns; `M` defines `a` and `b` as `seed_term + 0`, and the reuse run edits `b` to `seed_term + 1`, so that
a kept `a` holds the previous run's seed while `b` holds this run's: an importer must see `b = a + 1`. `seed` is the
process id modulo 7 (`nondeterministic`), a random bit (`random` from `IO.getRandomBytes`, `rand` from `IO.rand`, each
retried until the reuse run's bit differs from the first build's), or the length of a file the reuse run changes
(`effect`). Such a first build's `.usage` has `noreuse` already; it is rewritten to say otherwise, as a previous build
whose import read nothing of the kind would, so that only the run's check of its own import context stands between the
seeds. In the `unsettled` case the initializer starts a task that sleeps for 3 s and drops it (a task an initializer
returns is waited for when the header makes its value persistent), so the task still runs when the header is processed
(starting a task that runs IO code is itself such a read, so its first build's `.usage` is rewritten too); in the `task`
case it runs a task that runs IO code and waits for it, whose scheduling may differ in another run. -/
open Lean

/-- `timeout 120 lean ARGS` in `dir`, with `dir` the search path: its exit code, stdout and stderr. -/
def lean (dir : System.FilePath) (args : Array String) : IO (UInt32 × String × String) := do
  let out ← IO.Process.output
    { cmd := "timeout", args := #["120", "lean"] ++ args, cwd := dir, env := #[("LEAN_PATH", some dir.toString)] }
  let norm (s : String) := s.replace dir.toString "DIR"
  return (out.exitCode, norm out.stdout, norm out.stderr)

def outputs (m : String) : Array String := #["-o", s!"{m}.olean", s!"--usage={m}.usage", "-i", s!"{m}.ilean"]

/-- A `.usage`, one JSON object per line, as one object. -/
def usageOf (file : System.FilePath) : IO Json := do
  let mut j := Json.mkObj []
  for line in (← IO.FS.readFile file).splitOn "\n" do
    unless line.isEmpty do j := j.mergeObj (← IO.ofExcept (Json.parse line))
  return j

def noreuse (dir : System.FilePath) : IO Bool := do
  return ((← usageOf (dir / "M.usage")).getObjValAs? Bool "noreuse").toOption == some true

/-- Rewrites the `.usage` `file` to let its commands be kept: `noreuse` false, no `noreuseReason`. -/
def clearNoreuse (file : System.FilePath) : IO Unit := do
  let mut out := #[]
  for line in (← IO.FS.readFile file).splitOn "\n" do
    if line.isEmpty then out := out.push line; continue
    let j ← IO.ofExcept (Json.parse line)
    let fields := ((j.getObj?.toOption.map (·.toList)).getD []).filterMap fun (k, v) =>
      if k == "noreuseReason" then none else if k == "noreuse" then some (k, toJson false) else some (k, v)
    out := out.push (Json.mkObj fields).compress
  IO.FS.writeFile file ("\n".intercalate out.toList)

def copy (src dst : System.FilePath) : IO Unit := do
  IO.FS.writeBinFile dst (← IO.FS.readBinFile src)

def eSource (init : String) : String := s!"import Lean
open Lean Elab Term
{init}
elab \"seed_term\" : term => return mkNatLit seed
"

def nondeterministicInit : String := "initialize seed : Nat ← return (← IO.Process.getPID).toNat % 7"

def randomInit : String := "initialize seed : Nat ← return (← IO.getRandomBytes 1)[0]!.toNat % 2"

def effectInit : String := "initialize seed : Nat ← return (← IO.FS.readFile \"seed.txt\").length"

def unsettledInit : String :=
  "initialize sleeperStarted : Unit ← discard <| IO.asTask (IO.sleep 3000) .dedicated
def seed : Nat := 0"

def randInit : String := "initialize seed : Nat ← IO.rand 0 1"

def taskInit : String :=
  "initialize seed : Nat ← do
  let t ← IO.asTask (pure 1)
  return (← IO.wait t).toOption.getD 0"

def src (b : String) : String := s!"import E\ndef a : Nat := seed_term + 0\ndef b : Nat := seed_term + {b}\n"

def attempts : Nat := 20

/-- A directory with `E`'s outputs from `base`, `seed.txt` holding `seedText` and `M.lean` with `b := seed_term + b`. -/
def setup (base dir : System.FilePath) (b seedText : String) : IO Unit := do
  IO.FS.createDirAll dir
  for n in ["E.olean", "E.usage"] do copy (base / n) (dir / n)
  IO.FS.writeFile (dir / "seed.txt") seedText
  IO.FS.writeFile (dir / "M.lean") (src b)

def buildE (base : System.FilePath) (init : String) : IO Unit := do
  IO.FS.createDirAll base
  IO.FS.writeFile (base / "E.lean") (eSource init)
  let (rc, out, err) ← lean base #["-o", "E.olean", "--usage=E.usage", "E.lean"]
  unless rc == 0 do throw <| IO.userError s!"lean E failed ({rc}):\n{out}{err}"

def reuseRun (r first : System.FilePath) : IO (UInt32 × String × String) := do
  for ext in ["olean", "usage", "resolved"] do copy (first / s!"M.{ext}") (r / s!"M.{ext}.old")
  lean r (outputs "M" ++ #["--reuse-olean=M.olean.old", "--reuse-usage=M.usage.old", "M.lean"])

/-- `a` and `b` of the `M` built in `dir`, as an importer reads them. -/
def valuesOf (dir : System.FilePath) : IO (Nat × Nat) := do
  IO.FS.writeFile (dir / "N.lean") "import M\n#eval IO.println s!\"{a} {b}\"\n"
  let (rc, out, err) ← lean dir #["N.lean"]
  unless rc == 0 do throw <| IO.userError s!"the importer failed ({rc}):\n{out}{err}"
  let [a, b] := (out.trimAscii.copy.splitOn " ").map String.toNat! | throw <| IO.userError s!"importer printed {out}"
  return (a, b)

/-- The first build of `M` (its `.usage` made to let commands be kept), then reuse runs until one's seed (`b - 1`)
differs from the first build's (`a`), at most `attempts`. -/
def seedCase (dir : System.FilePath) (label init : String) (retry : Bool) : IO Unit := do
  let base := dir / label
  buildE base init
  let first := base / "first"
  setup base first "0" "s"
  let (rc, _, _) ← lean first (outputs "M" ++ #["M.lean"])
  IO.println s!"{label}: first build: exit {rc}"
  clearNoreuse (first / "M.usage")
  let (seed, _) ← valuesOf first
  let mut found := false
  for k in [0:(if retry then attempts else 1)] do
    let r := base / s!"reuse{k}"
    setup base r "1" "ss"
    let (rc, out, err) ← reuseRun r first
    let (a, b) ← valuesOf r
    unless b - 1 != seed do continue
    found := true
    IO.println s!"{label}: reuse run: exit {rc}, stdout and stderr empty: {out.isEmpty && err.isEmpty}"
    IO.println s!"{label}: reuse field: {((← usageOf (r / "M.usage")).getObjValD "reuse").compress}"
    IO.println s!"{label}: b = a + 1 in the importer: {b == a + 1}"
    break
  IO.println s!"{label}: a reuse run with another seed than the first build found: {found}"

def unsettledCase (dir : System.FilePath) : IO Unit := do
  let base := dir / "unsettled"
  buildE base unsettledInit
  let first := base / "first"
  setup base first "0" "s"
  let (rc, _, _) ← lean first (outputs "M" ++ #["M.lean"])
  IO.println s!"unsettled: first build: exit {rc}, noreuse: {← noreuse first}"
  clearNoreuse (first / "M.usage")
  let r := base / "reuse"
  setup base r "1" "s"
  let (rc, out, err) ← reuseRun r first
  IO.println s!"unsettled: reuse run: exit {rc}, stdout and stderr empty: {out.isEmpty && err.isEmpty}"
  IO.println s!"unsettled: reuse field: {((← usageOf (r / "M.usage")).getObjValD "reuse").compress}"

/-- The first build of `M` with `E`'s `taskInit` (its `.usage` made to let commands be kept), then a reuse run. -/
def taskCase (dir : System.FilePath) : IO Unit := do
  let base := dir / "task"
  buildE base taskInit
  let first := base / "first"
  setup base first "0" "s"
  let (rc, _, _) ← lean first (outputs "M" ++ #["M.lean"])
  IO.println s!"task: first build: exit {rc}"
  clearNoreuse (first / "M.usage")
  let r := base / "reuse"
  setup base r "1" "s"
  let (rc, out, err) ← reuseRun r first
  IO.println s!"task: reuse run: exit {rc}, stdout and stderr empty: {out.isEmpty && err.isEmpty}"
  IO.println s!"task: reuse field: {((← usageOf (r / "M.usage")).getObjValD "reuse").compress}"

#eval IO.FS.withTempDir fun dir => do
  seedCase dir "nondeterministic" nondeterministicInit (retry := true)
  seedCase dir "random" randomInit (retry := true)
  seedCase dir "rand" randInit (retry := true)
  seedCase dir "effect" effectInit (retry := false)
  unsettledCase dir
  taskCase dir
