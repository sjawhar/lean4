import Lean
/-! Review findings T1 and T2: an elaborated non-declaration predecessor stops the keeps after it unless its effects
are only ones whose content its record holds (setting or unsetting an environment variable, changing the working
directory, setting a runtime setting, writing to stdout or stderr). `E`'s initializer creates the `IO.Ref` `cfgRef`,
`cfg_term` reads it and `foo_term` reads `FOO`. (a) T1: the `#eval` sets `cfgRef` to the free memory; only `z` changes.
A reuse run must not keep `d`: its `d` must differ from the first build's. (b) T2: the `#eval` changes the working
directory to 8 distinct directories and back, then sets `cfgRef` to `config.txt`; only `config.txt` changes. (c) The
`#eval` only sets `FOO`; only `z`
changes; `d` is kept. (d) As (c), but the edit changes the value set from `A` to `B` and `d` reads `FOO`. Each case
compares the reuse run with a fresh build (exit codes, stdout, stderr, `.olean`, `.ilean`, `.usage` but `reuse`, with
`resolved` holding the fresh build's) and prints the `d` an importer sees and the reuse field's `kept` and
`elabReasons`. In (a) the outputs depend on the free memory and are not compared with the fresh build's. -/
open Lean

/-- `timeout 120 lean ARGS` in `dir`, with `dir` the search path and `FOO` unset: its exit code, stdout and stderr. -/
def lean (dir : System.FilePath) (args : Array String) : IO (UInt32 × String × String) := do
  let out ← IO.Process.output
    { cmd := "timeout", args := #["120", "lean"] ++ args, cwd := dir,
      env := #[("LEAN_PATH", some dir.toString), ("FOO", none)] }
  let norm (s : String) := s.replace dir.toString "DIR"
  return (out.exitCode, norm out.stdout, norm out.stderr)

def outputs (m : String) : Array String := #["-o", s!"{m}.olean", s!"--usage={m}.usage", "-i", s!"{m}.ilean"]

/-- A file's bytes, empty if it is missing (a failed run may not write it). -/
def bytesOf (file : System.FilePath) : IO ByteArray := do
  if ← file.pathExists then IO.FS.readBinFile file else return .empty

/-- A `.usage`, one JSON object per line, as one object without `reuse` and `resolved`, its `reuse` field, and the
entries of its `resolved` field (module, name and kind). -/
def usageOf (file : System.FilePath) : IO (Json × Json × Array String) := do
  let mut j := Json.mkObj []
  unless ← file.pathExists do return (j, j, #[])
  for line in (← IO.FS.readFile file).splitOn "\n" do
    unless line.isEmpty do j := j.mergeObj (← IO.ofExcept (Json.parse line))
  let fields := ((j.getObj?.toOption.map (·.toList)).getD []).filter fun (k, _) => k != "reuse" && k != "resolved"
  let mut resolved := #[]
  for g in ((j.getObjValD "resolved").getArr?.toOption.getD #[]) do
    for n in ((g.getArrVal? 1 >>= Json.getArr?).toOption.getD #[]) do
      resolved := resolved.push (Json.arr #[(g.getArrVal? 0).toOption.getD .null, n]).compress
  return (Json.mkObj fields, j.getObjValD "reuse", resolved)

def eSource : String := "import Lean
open Lean Elab Term
initialize cfgRef : IO.Ref String ← IO.mkRef \"\"
elab \"cfg_term\" : term => return mkStrLit (← cfgRef.get)
elab \"foo_term\" : term => return mkStrLit ((← IO.getEnv \"FOO\").getD \"unset\")
"

/-- The `d` that an importer of the `M` in `dir` sees. -/
def valueOf (dir : System.FilePath) : IO String := do
  IO.FS.writeFile (dir / "N.lean") "import M\n#eval d\n"
  let (rc, out, err) ← lean dir #["N.lean"]
  return s!"{(out ++ err).trimAscii.copy} (exit {rc})"

/-- In a fresh directory `b` under `dir` with `E`: builds `src` with `config.txt` = `cfg`, then compiles `src'` with
`config.txt` = `cfg'` keeping commands from that build, moves those outputs to the directory `k`, and compiles `src'`
again in `b` without reuse, so both runs have the same working directory. With `volatile`, the outputs depend on the
run, so only whether the reuse run's `d` differs from the first build's is printed. -/
def case (dir : System.FilePath) (label src cfg src' cfg' : String) (volatile := false) : IO Unit := do
  let (b, k) := (dir / s!"{label}-b", dir / s!"{label}-k")
  for d in [b, k] do
    IO.FS.createDirAll d
    for ext in ["olean", "usage"] do
      IO.FS.writeBinFile (d / s!"E.{ext}") (← IO.FS.readBinFile (dir / s!"E.{ext}"))
  IO.FS.writeFile (b / "config.txt") cfg
  IO.FS.writeFile (b / "M.lean") src
  let (rc, _, _) ← lean b (outputs "M" ++ #["M.lean"])
  let first ← valueOf b
  IO.println s!"{label}: first build: exit {rc}{if volatile then "" else s!", d {first}"}"
  for ext in ["olean", "usage", "ilean"] do
    IO.FS.rename (b / s!"M.{ext}") (b / s!"M.{ext}.old")
  IO.FS.writeFile (b / "config.txt") cfg'
  IO.FS.writeFile (b / "M.lean") src'
  let (rcR, outR, errR) ← lean b (outputs "M" ++ #["--reuse-olean=M.olean.old", "--reuse-usage=M.usage.old",
    "M.lean"])
  for ext in ["olean", "usage", "ilean"] do
    if ← (b / s!"M.{ext}").pathExists then IO.FS.rename (b / s!"M.{ext}") (k / s!"M.{ext}")
  let (rcF, outF, errF) ← lean b (outputs "M" ++ #["M.lean"])
  IO.println s!"{label}: exit codes: reuse {rcR}, fresh {rcF}"
  IO.println s!"{label}: stdout equal to the fresh build's: {outR == outF}"
  IO.println s!"{label}: stderr equal to the fresh build's: {errR == errF}"
  let (ur, reuse, rr) ← usageOf (k / "M.usage")
  if volatile then
    IO.println s!"{label}: reuse run's d differs from the first build's: {(← valueOf k) != first}"
  else
    for ext in ["olean", "ilean"] do
      let same := (← bytesOf (k / s!"M.{ext}")) == (← bytesOf (b / s!"M.{ext}"))
      IO.println s!"{label}: {ext} equal to the fresh build's: {same}"
    let (uf, _, rf) ← usageOf (b / "M.usage")
    IO.println s!"{label}: usage equal to the fresh build's but `reuse` and `resolved`: {ur.compress == uf.compress}; \
      `resolved` holds the fresh build's: {rf.all rr.contains}"
    IO.println s!"{label}: d: reuse {← valueOf k}, fresh {← valueOf b}"
  IO.println s!"{label}: reuse run kept: {(reuse.getObjValD "kept").compress}, \
    elabReasons: {(reuse.getObjValD "elabReasons").compress}, declined: {(reuse.getObjValD "declined").compress}"

#eval IO.FS.withTempDir fun dir => do
  IO.FS.writeFile (dir / "E.lean") eSource
  let (rc, out, err) ← lean dir #["-o", "E.olean", "--usage=E.usage", "E.lean"]
  unless rc == 0 do throw <| IO.userError s!"lean E failed ({rc}):\n{out}{err}"
  let a (z : String) := s!"import E\nimport Std.Internal.UV.System\n\
    #eval do cfgRef.set (toString (← Std.Internal.UV.System.freeMemory))\n\
    def d : String := cfg_term\ndef z : Nat := {z}\n"
  case dir "free memory" (a "1") "" (a "12345") "" (volatile := true)
  let dirs := ["/", "/tmp", "/usr", "/etc", "/var", "/proc", "/sys", "/dev"]
  let cds := String.join <| dirs.map fun p => s!"IO.Process.setCurrentDir \"{p}\"; "
  let b := s!"import E\n\
    #eval do let cwd ← IO.currentDir; {cds}IO.Process.setCurrentDir cwd; \
    cfgRef.set (← IO.FS.readFile \"config.txt\")\n\
    def d : String := cfg_term\ndef z : Nat := 1\n"
  case dir "chdir then config" b "A" b "B"
  let c (z : String) := s!"import E\nimport Std.Internal.UV.System\n\
    #eval Std.Internal.UV.System.osSetenv \"FOO\" \"A\"\ndef d : Nat := 1\ndef z : Nat := {z}\n"
  case dir "setenv only" (c "1") "" (c "12345") ""
  let d (v : String) := s!"import E\nimport Std.Internal.UV.System\n\
    #eval Std.Internal.UV.System.osSetenv \"FOO\" \"{v}\"\ndef d : String := foo_term\ndef z : Nat := 1\n"
  case dir "setenv value" (d "A") "" (d "B") ""
