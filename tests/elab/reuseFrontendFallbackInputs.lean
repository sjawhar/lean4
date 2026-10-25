import Lean
/-! Review findings R7, R8 and R9: in a reuse run whose kept commands could turn out invalid (the late effect of
`reuseFrontendLateEffect.lean`: command 0's task notes an effect after command 1 is decided), the run never compiles the
module again in a child process (`fell back` is false): it keeps no command after one whose payload may still change.
Whatever else its command line and inputs hold, it looks like one fresh build from outside:
* R7a: the module appends a line to `log.txt` in an `#eval`; after the run, the file holds exactly the lines a fresh
  build adds;
* R7b: the source is read from `/dev/stdin`, a pipe;
* R8: `--stats` is given; the statistics are printed once;
* R9: the reuse options are spelled as unambiguous abbreviations (`--reuse-ole=`, `--reuse-usa=`).
Each case compares the exit code, the normalized output and the `.olean`, `.ilean` and `.usage` (but `reuse`) with a
fresh build's of the same sources and arguments. -/
open Lean

def feed (h : IO.FS.Handle) (input : String) : IO Unit := do
  h.putStr input
  h.flush

/-- `lean ARGS` in `dir` with `dir` the search path, `input` piped to its standard input if given. The `--stats` line
counting the memory-mapped modules is dropped: whether an `.olean` maps at its base address depends on the process's
address-space layout, in any two builds. -/
def lean (dir : System.FilePath) (args : Array String) (input? : Option String := none) : IO (UInt32 × String) := do
  let env := #[("LEAN_PATH", some dir.toString)]
  let out ← match input? with
    | none => IO.Process.output { cmd := "lean", args, cwd := dir, env }
    | some input => do
      let child ← IO.Process.spawn
        { cmd := "lean", args, cwd := dir, env, stdin := .piped, stdout := .piped, stderr := .piped }
      let (stdin, child) ← child.takeStdin
      let stdout ← IO.asTask child.stdout.readToEnd .dedicated
      let stderr ← IO.asTask child.stderr.readToEnd .dedicated
      -- the handle is freed after the write, closing the pipe
      feed stdin input
      let exitCode ← child.wait
      pure { exitCode, stdout := ← IO.ofExcept stdout.get, stderr := ← IO.ofExcept stderr.get : IO.Process.Output }
  let stdout := "\n".intercalate ((out.stdout.splitOn "\n").filter (!·.startsWith "number of memory-mapped modules:"))
  let norm (s : String) := (s.replace dir.toString "DIR").quote
  return (out.exitCode, s!"stdout {norm stdout}, stderr {norm out.stderr}")

def outputs (m : String) : Array String := #["-o", s!"{m}.olean", s!"--usage={m}.usage", "-i", s!"{m}.ilean"]

/-- A `.usage`, one JSON object per line, as one object without `reuse`, and its `reuse` field. -/
def usageOf (file : System.FilePath) : IO (Json × Json) := do
  let mut j := Json.mkObj []
  for line in (← IO.FS.readFile file).splitOn "\n" do
    unless line.isEmpty do j := j.mergeObj (← IO.ofExcept (Json.parse line))
  let fields := ((j.getObj?.toOption.map (·.toList)).getD []).filter (·.1 != "reuse")
  return (Json.mkObj fields, j.getObjValD "reuse")

def readOr (f : System.FilePath) : IO ByteArray := do
  try IO.FS.readBinFile f catch _ => pure .empty

def iSource : String := "initialize flag : IO.Ref Bool ← IO.mkRef false
initialize written : IO.Ref Nat ← IO.mkRef 0
"

/-- Command 0 starts the task; command 1 is a declaration; command 2 is `trigger`; then `extra`. -/
def mSource (trigger extra : String) : String := s!"import I
#eval show IO Unit from do
  let _ ← IO.asTask (prio := .dedicated) do
    while !(← flag.get) do IO.sleep 10
    written.set 1
def d : Nat := 1
{trigger}
{extra}"

/-- Command 2 of the edited module: sets the flag and waits for the task's write. -/
def trigger : String := "#eval show IO Unit from do
  flag.set true
  while (← written.get) == 0 do IO.sleep 10"

def logCmd : String := "#eval IO.FS.withFile \"log.txt\" .append (·.putStrLn \"elaborated\")\n"

structure Case where
  label : String
  /-- arguments of every run -/
  extra : Array String := #[]
  /-- the module appends to `log.txt` -/
  log : Bool := false
  /-- the source is piped to `/dev/stdin` -/
  stdin : Bool := false
  /-- the reuse options as abbreviations -/
  abbrevOpts : Bool := false

def lineCount (f : System.FilePath) : IO Nat := do
  return ((← IO.FS.readFile f).splitOn "\n").filter (!·.isEmpty) |>.length

/-- Compiles `M` in `dir`, reusing its previous outputs if `reuse`. -/
def compile (c : Case) (dir : System.FilePath) (reuse : Bool) : IO (UInt32 × String) := do
  let reuseOpts := if !reuse then #[] else if c.abbrevOpts then
      #["--reuse-ole=M.olean.old", "--reuse-usa=M.usage.old"]
    else #["--reuse-olean=M.olean.old", "--reuse-usage=M.usage.old"]
  let src := if c.stdin then #["--setup=setup.json", "/dev/stdin"] else #["M.lean"]
  let input? ← if c.stdin then some <$> IO.FS.readFile (dir / "M.lean") else pure none
  lean dir (outputs "M" ++ c.extra ++ reuseOpts ++ src) input?

def runCase (c : Case) : IO Unit := IO.FS.withTempDir fun dir => do
  let l := c.label
  let extra := if c.log then logCmd else ""
  let f := dir / "f"
  IO.FS.createDirAll f
  IO.FS.writeFile (dir / "I.lean") iSource
  discard <| lean dir #["-o", "I.olean", "--usage=I.usage", "I.lean"]
  for d in [dir, f] do
    IO.FS.writeFile (d / "setup.json") (toJson ({ name := `M } : ModuleSetup)).compress
  -- the first build: no trigger, so command 0's task never writes
  IO.FS.writeFile (dir / "M.lean") (mSource "#eval show IO Unit from pure ()" extra)
  let (rc, out) ← compile c dir false
  unless rc == 0 do throw <| IO.userError s!"{l}: first build failed: {out}"
  for ext in ["olean", "usage", "resolved", "ilean"] do
    IO.FS.writeBinFile (dir / s!"M.{ext}.old") (← IO.FS.readBinFile (dir / s!"M.{ext}"))
  IO.FS.writeFile (dir / "M.lean") (mSource trigger extra)
  for n in ["I.olean", "I.usage", "M.lean"] do
    IO.FS.writeBinFile (f / n) (← IO.FS.readBinFile (dir / n))
  for d in [dir, f] do IO.FS.writeFile (d / "log.txt") "start\n"
  let (rc, out) ← compile c dir true
  let (rcf, outf) ← compile c f false
  let outf := outf.replace "DIR/f" "DIR"
  let (ur, reuse) ← try usageOf (dir / "M.usage") catch _ => pure (Json.null, Json.null)
  IO.println s!"{l}: reuse run fell back: {(reuse.getObjVal? "declined").isOk}"
  IO.println s!"{l}: exit codes: reuse {rc}, fresh {rcf}"
  IO.println s!"{l}: output equal to the fresh build's: {out == outf}"
  -- the statistics depend on the toolchain: only counted below
  unless out == outf || c.extra.contains "--stats" do
    IO.println s!"{l}: reuse run output: {out.trimAscii.copy.quote}"
    IO.println s!"{l}: fresh build output: {outf.trimAscii.copy.quote}"
  if c.extra.contains "--stats" then
    let blocks (s : String) := (s.splitOn "direct imports:").length - 1
    IO.println s!"{l}: statistics printed: reuse {blocks out}, fresh {blocks outf}"
  if c.log then
    IO.println s!"{l}: log.txt lines: reuse {← lineCount (dir / "log.txt")}, fresh {← lineCount (f / "log.txt")}"
  for ext in ["olean", "ilean"] do
    let same := (← readOr (dir / s!"M.{ext}")) == (← readOr (f / s!"M.{ext}"))
    IO.println s!"{l}: {ext} equal to the fresh build's: {same}"
  let (uf, _) ← usageOf (f / "M.usage")
  IO.println s!"{l}: usage equal to the fresh build's but `reuse`: {ur.compress == uf.compress}"

/-- The abbreviated reuse options in a reuse run that does not fall back: the source unchanged. -/
def abbrevAccepted : IO Unit := IO.FS.withTempDir fun dir => do
  IO.FS.writeFile (dir / "M.lean") "def a : Nat := 1\ndef b : Nat := 2\n"
  discard <| lean dir (outputs "M" ++ #["M.lean"])
  for ext in ["olean", "usage", "resolved", "ilean"] do
    IO.FS.writeBinFile (dir / s!"M.{ext}.old") (← IO.FS.readBinFile (dir / s!"M.{ext}"))
  let (rc, out) ← lean dir (outputs "M" ++
    #["--reuse-ole=M.olean.old", "--reuse-usa=M.usage.old", "M.lean"])
  let (_, reuse) ← usageOf (dir / "M.usage")
  IO.println s!"R9 abbreviations without fallback: exit {rc}, output {out.trimAscii.copy.quote}, kept {reuse.getObjValD "kept"}"

#eval do
  runCase { label := "R7a log" , log := true }
  runCase { label := "R7b stdin", stdin := true }
  runCase { label := "R8 stats", extra := #["--stats"] }
  abbrevAccepted
  runCase { label := "R9 abbreviations", abbrevOpts := true }
