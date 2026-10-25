import Lean
/-! Review finding U3: an elaborated command whose payload has a refusal holds state no digest of the chain holds, so
it ends the keeps even when its payload is the previous build's. `E`'s command `choose_cfg` sets the non-persistent
extension `cfgExt` to a random byte (a write no payload records: refusal `unrecorded`) and its term `cfg_term` reads
it; `M` runs `choose_cfg`, then defines `a` and `b` as `cfg_term + 0`, and the reuse run edits `b` to `cfg_term + 1`.
An importer must then see `b = a + 1`: `a` kept from the previous build would hold the previous sample. Reuse runs are
retried until their sample differs from the previous build's; the test prints no sampled value. -/
open Lean

/-- `timeout 120 lean ARGS` in `dir`, with `dir` the search path: its exit code, stdout and stderr. -/
def lean (dir : System.FilePath) (args : Array String) : IO (UInt32 × String × String) := do
  let out ← IO.Process.output
    { cmd := "timeout", args := #["120", "lean"] ++ args, cwd := dir, env := #[("LEAN_PATH", some dir.toString)] }
  let norm (s : String) := s.replace dir.toString "DIR"
  return (out.exitCode, norm out.stdout, norm out.stderr)

def outputs (m : String) : Array String := #["-o", s!"{m}.olean", s!"--usage={m}.usage", "-i", s!"{m}.ilean"]

/-- The `reuse` field of a `.usage`, one JSON object per line. -/
def reuseOf (file : System.FilePath) : IO Json := do
  let mut j := Json.mkObj []
  for line in (← IO.FS.readFile file).splitOn "\n" do
    unless line.isEmpty do j := j.mergeObj (← IO.ofExcept (Json.parse line))
  return j.getObjValD "reuse"

def copy (src dst : System.FilePath) : IO Unit := do
  IO.FS.writeBinFile dst (← IO.FS.readBinFile src)

def eSource : String := "import Lean
open Lean Elab Command Term
initialize cfgExt : EnvExtension Nat ← registerEnvExtension (pure 257)
elab \"choose_cfg\" : command => do
  let bytes ← IO.getRandomBytes 1
  modifyEnv (cfgExt.setState · bytes[0]!.toNat)
elab \"cfg_term\" : term => return mkNatLit (cfgExt.getState (← getEnv))
"

def src (b : String) : String :=
  s!"import E\nchoose_cfg\ndef a : Nat := cfg_term + 0\ndef b : Nat := cfg_term + {b}\n"

/-- `a` and `b` of the `M` built in `dir`, as an importer reads them. -/
def valuesOf (dir : System.FilePath) : IO (Nat × Nat) := do
  IO.FS.writeFile (dir / "N.lean") "import M\n#eval IO.println s!\"{a} {b}\"\n"
  let (rc, out, err) ← lean dir #["N.lean"]
  let [some a, some b] := (out.trimAscii.copy.splitOn " ").map String.toNat?
    | throw <| IO.userError s!"the importer failed ({rc}):\n{out}{err}"
  return (a, b)

def attempts : Nat := 20

#eval IO.FS.withTempDir fun dir => do
  IO.FS.writeFile (dir / "E.lean") eSource
  let (rc, out, err) ← lean dir #["-o", "E.olean", "--usage=E.usage", "E.lean"]
  unless rc == 0 do throw <| IO.userError s!"lean E failed ({rc}):\n{out}{err}"
  let first := dir / "first"
  IO.FS.createDirAll first
  for n in ["E.olean", "E.usage"] do copy (dir / n) (first / n)
  IO.FS.writeFile (first / "M.lean") (src "0")
  let (rc, _, _) ← lean first (outputs "M" ++ #["M.lean"])
  IO.println s!"first build: exit {rc}"
  let (prevSample, _) ← valuesOf first
  let mut found := false
  for k in [0:attempts] do
    let r := dir / s!"reuse{k}"
    IO.FS.createDirAll r
    for n in ["E.olean", "E.usage"] do copy (dir / n) (r / n)
    for ext in ["olean", "usage", "resolved"] do copy (first / s!"M.{ext}") (r / s!"M.{ext}.old")
    IO.FS.writeFile (r / "M.lean") (src "1")
    let (rc, out, err) ← lean r (outputs "M" ++ #["--reuse-olean=M.olean.old", "--reuse-usage=M.usage.old",
      "M.lean"])
    let (a, b) ← valuesOf r
    -- `b` holds this run's sample plus one
    if b == prevSample + 1 then continue
    found := true
    IO.println s!"reuse run: exit {rc}, stdout and stderr empty: {out.isEmpty && err.isEmpty}"
    IO.println s!"b = a + 1 in the importer: {b == a + 1}"
    let reuse ← reuseOf (r / "M.usage")
    IO.println s!"reuse run reElab: {(reuse.getObjValD "reElab").compress}"
    IO.println s!"reuse run elabReasons: {(reuse.getObjValD "elabReasons").compress}"
    break
  IO.println s!"a reuse run sampled another value than the first build within {attempts} runs: {found}"
