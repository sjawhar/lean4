import Lean
/-! A user extension may state that its `.olean` entry is the entry (`oleanEntryIsEntry?`); its conversions are then
never called, so that the import and a reuse run's replay of a kept command give the state the command's elaboration
gave, whatever the conversions compute. `E` registers a scoped extension `sumExt` (state: the sum of its entries) whose
`toOLeanEntry` adds 100 and whose `ofOLeanEntry` adds 1000, and a persistent extension `logExt` whose `ofOLeanEntry?`
adds 1000; both set the flag, and both conversions count their runs in `convRuns`. The command `def_sum x 5` adds the
entry 5 to each and defines `x`. `M` is `def_sum x 5`, then `y`, which reads both states and `convRuns`, then `z`; the
reuse run edits only `y`, so `def_sum x 5` is kept. The test compares the exit codes, stdout and stderr, the `.olean`
and `.ilean` bytes and the `.usage` fields but `reuse` and `resolved` (which must hold the fresh build's) with a fresh
build's, prints the reuse run's `reuse` field, the value of `y` an importer of each build sees, and what an importer of
each reads of the two states and of `convRuns`. -/
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

def eSource : String := "import Lean
open Lean Elab Command Term

initialize convRuns : IO.Ref Nat ← IO.mkRef 0

initialize sumExt : ScopedEnvExtension Nat Nat Nat ←
  registerScopedEnvExtension {
    mkInitial := pure 0
    addEntry := fun s n => s + n
    toOLeanEntry := fun n => n + 100
    ofOLeanEntry := fun _ n => do convRuns.modify (· + 1); pure (n + 1000)
    oleanEntryIsEntry? := some ⟨rfl⟩
  }

initialize logExt : PersistentEnvExtension Nat Nat (List Nat × Unit) ←
  registerPersistentEnvExtension {
    mkInitial := pure ([], ())
    addImportedFn := fun as => pure (as.foldl (fun l a => a.toList ++ l) [], ())
    addEntryFn := fun (l, u) n => (n :: l, u)
    ofOLeanEntry? := some fun _ n => do convRuns.modify (· + 1); pure (n + 1000)
    oleanEntryIsEntry? := some ⟨rfl⟩
    stateDelta? := some StateDelta.ofLog
    exportEntriesFn := fun (l, _) => l.reverse.toArray
  }

syntax \"def_sum \" ident num : command

elab_rules : command
  | `(def_sum $x:ident $k:num) => do
    modifyEnv (sumExt.addEntry · k.getNat)
    modifyEnv (logExt.addEntry · k.getNat)
    elabCommand (← `(def $x : Nat := $k))

elab \"sum_term\" : term => return mkNatLit (sumExt.getState (← getEnv))
elab \"log_term\" : term => return mkNatLit ((logExt.getState (← getEnv)).1.foldl (· + ·) 0)
elab \"conv_runs\" : term => return mkNatLit (← convRuns.get)
"

def src (k : String) : String :=
  s!"import E\ndef_sum x 5\ndef y : Nat := sum_term + log_term * 10 + conv_runs * 1000 + {k}\ndef z : Nat := 1\n"

/-- What an importer of the `M` in `dir` sees: `y`, and its own reading of the two states and of `convRuns`. -/
def importerView (dir : System.FilePath) : IO String := do
  IO.FS.writeFile (dir / "N.lean")
    "import M\n#eval y\n#eval (sum_term, log_term, conv_runs)\n"
  let (rc, out, err) ← lean dir #["N.lean"]
  return s!"{(out ++ err).trimAscii.copy.replace "\n" "; "} (exit {rc})"

#eval IO.FS.withTempDir fun dir => do
  IO.FS.writeFile (dir / "E.lean") eSource
  let (rc, out, err) ← lean dir #["-o", "E.olean", "--usage=E.usage", "E.lean"]
  unless rc == 0 do throw <| IO.userError s!"lean E failed ({rc}):\n{out}{err}"
  let (r, f) := (dir / "r", dir / "f")
  for d in [r, f] do
    IO.FS.createDirAll d
    for ext in ["olean", "usage"] do
      IO.FS.writeBinFile (d / s!"E.{ext}") (← IO.FS.readBinFile (dir / s!"E.{ext}"))
  IO.FS.writeFile (r / "M.lean") (src "0")
  let (rc, _, _) ← lean r (outputs "M" ++ #["M.lean"])
  IO.println s!"first build: exit {rc}"
  for ext in ["olean", "usage", "ilean"] do
    IO.FS.rename (r / s!"M.{ext}") (r / s!"M.{ext}.old")
  for d in [r, f] do
    IO.FS.writeFile (d / "M.lean") (src "1")
  let (rcR, outR, errR) ← lean r (outputs "M" ++ #["--reuse-olean=M.olean.old", "--reuse-usage=M.usage.old",
    "M.lean"])
  let (rcF, outF, errF) ← lean f (outputs "M" ++ #["M.lean"])
  IO.println s!"exit codes: reuse {rcR}, fresh {rcF}"
  IO.println s!"stdout equal to the fresh build's: {outR == outF}"
  IO.println s!"stderr equal to the fresh build's: {errR == errF}"
  for ext in ["olean", "ilean"] do
    let same := (← IO.FS.readBinFile (r / s!"M.{ext}")) == (← IO.FS.readBinFile (f / s!"M.{ext}"))
    IO.println s!"{ext} equal to the fresh build's: {same}"
  let (ur, reuse, rr) ← usageOf (r / "M.usage")
  let (uf, _, rf) ← usageOf (f / "M.usage")
  IO.println s!"usage equal to the fresh build's but `reuse` and `resolved`: {ur.compress == uf.compress}; \
    `resolved` holds the fresh build's: {rf.all rr.contains}"
  IO.println s!"reuse: {reuse.compress}"
  IO.println s!"importer of the reuse run's M: {← importerView r}"
  IO.println s!"importer of the fresh build's M: {← importerView f}"
