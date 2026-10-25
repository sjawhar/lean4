import Lean
/-! Review finding V3: a kept command's realization must leave in the realization cache the value its `realize`
returned in the full run, which a later request reports, not a placeholder. `E` has two tactics that request a
realization for `f`: `realize_w` through `Meta.realizeConst`, whose `realize` warns `realized w` (a fixed text), and
`realize_y` through `Environment.realizeConst`, whose `realize` returns a value of its own type, which the tactic shows
in a warning. In `M`, theorems `a` and `b` both request the realization, and the reuse run edits only `b`. With
`realize_w`, `a` is kept and its rebuilt result must make `b` warn as in a fresh build. With `realize_y`, the value is
not one a payload can rebuild: `a` must be elaborated (`realization-result`). The test compares the exit codes, the
stdout (with its count of `realized w` and `value 7` warnings) and the stderr, the `.olean` and `.ilean` bytes, the
`.usage` fields but `reuse` and `resolvedDigest`, and the `.resolved` sidecar's entries, which must hold the fresh
build's, with a fresh build's, and prints the reuse run's `kept`, `reElab` and `elabReasons`. -/
open Lean

/-- `timeout 120 lean ARGS` in `dir`, with `dir` the search path: its exit code, stdout and stderr. -/
def lean (dir : System.FilePath) (args : Array String) : IO (UInt32 × String × String) := do
  let out ← IO.Process.output
    { cmd := "timeout", args := #["120", "lean"] ++ args, cwd := dir, env := #[("LEAN_PATH", some dir.toString)] }
  let norm (s : String) := s.replace dir.toString "DIR"
  return (out.exitCode, norm out.stdout, norm out.stderr)

def outputs (m : String) : Array String := #["-o", s!"{m}.olean", s!"--usage={m}.usage", "-i", s!"{m}.ilean"]

/-- A file's bytes, empty if it is missing (a failed run may not write it). -/
def bytesOf (file : System.FilePath) : IO ByteArray := do
  if ← file.pathExists then IO.FS.readBinFile file else return .empty

/-- A `.usage`, one JSON object per line, as one object without `reuse` and `resolvedDigest`, its `reuse` field, and the
entries of the `.resolved` sidecar beside it (module, name digest and kind). -/
def usageOf (file : System.FilePath) : IO (Json × Json × Array String) := do
  let mut j := Json.mkObj []
  unless ← file.pathExists do return (j, j, #[])
  for line in (← IO.FS.readFile file).splitOn "\n" do
    unless line.isEmpty do j := j.mergeObj (← IO.ofExcept (Json.parse line))
  let fields := ((j.getObj?.toOption.map (·.toList)).getD []).filter fun (k, _) => k != "reuse" && k != "resolvedDigest"
  let mut resolved := #[]
  if let .ok bytes ← (IO.FS.readBinFile (file.withExtension "resolved")).toBaseIO then
    if let .ok t := ModuleUsage.ResolvedTable.decode? bytes then
      for (d, g, k) in t.entries.toArray do
        resolved := resolved.push s!"{t.modules[g]!}:{d.hex}:{k}"
  return (Json.mkObj fields, j.getObjValD "reuse", resolved)

def eSource : String := "import Lean
open Lean Meta Elab Tactic

def mkNat (n : Name) : MetaM Unit :=
  addDecl (.defnDecl (mkDefinitionValEx n [] (mkConst ``Nat) (mkNatLit 0) .abbrev .safe [n]))

/-- `f.w := 0`; its `realize` warns with a fixed text -/
def realizeW (f : Name) : MetaM Unit := realizeConst f (f ++ `w) do
  logWarning \"realized w\"
  mkNat (f ++ `w)

elab \"realize_w \" f:ident : tactic => do realizeW (← realizeGlobalConstNoOverload f)

structure YValue where
  n : Nat
deriving TypeName

/-- `f.y := 0` through `Environment.realizeConst`, whose `realize` returns `⟨7⟩`; the value the request gets -/
def realizeY (f : Name) : MetaM Nat := do
  let n := f ++ `y
  let decl := Declaration.defnDecl (mkDefinitionValEx n [] (mkConst ``Nat) (mkNatLit 0) .abbrev .safe [n])
  let (env, _, dyn) ← (← getEnv).realizeConst f n fun env _ =>
    return match env.addDeclCore 0 0 decl none with
      | .ok env => (env, .mk (YValue.mk 7))
      | .error _ => (env, .mk (YValue.mk 0))
  setEnv env
  return ((dyn.get? YValue).map (·.n)).getD 0

elab \"realize_y \" f:ident : tactic => do
  let v ← realizeY (← realizeGlobalConstNoOverload f)
  logWarning s!\"value {v}\"
"

def src (tac b : String) : String :=
  s!"import E\ndef f : Nat := 0\ntheorem a : True := by {tac} f; trivial\ntheorem b : True := by {tac} f; {b}\n"

/-- How many lines of `s` contain `pat`. -/
def countLines (s pat : String) : Nat :=
  (s.splitOn "\n").filter (fun l => (l.splitOn pat).length > 1) |>.length

def case (dir : System.FilePath) (label tac pat : String) : IO Unit := do
  let (r, fr) := (dir / s!"{label}-r", dir / s!"{label}-f")
  for d in [r, fr] do
    IO.FS.createDirAll d
    for ext in ["olean", "usage", "resolved"] do
      IO.FS.writeBinFile (d / s!"E.{ext}") (← IO.FS.readBinFile (dir / s!"E.{ext}"))
  IO.FS.writeFile (r / "M.lean") (src tac "trivial")
  let (rc, _, _) ← lean r (outputs "M" ++ #["M.lean"])
  IO.println s!"{label}: first build: exit {rc}"
  for ext in ["olean", "usage", "resolved", "ilean"] do
    IO.FS.rename (r / s!"M.{ext}") (r / s!"M.{ext}.old")
  for d in [r, fr] do
    IO.FS.writeFile (d / "M.lean") (src tac "exact trivial")
  let (rcR, outR, errR) ← lean r (outputs "M" ++ #["--reuse-olean=M.olean.old", "--reuse-usage=M.usage.old",
    "M.lean"])
  let (rcF, outF, errF) ← lean fr (outputs "M" ++ #["M.lean"])
  IO.println s!"{label}: exit codes: reuse {rcR}, fresh {rcF}"
  IO.println s!"{label}: stdout equal to the fresh build's: {outR == outF}; `{pat}` warnings: reuse \
    {countLines outR pat}, fresh {countLines outF pat}"
  IO.println s!"{label}: stderr equal to the fresh build's: {errR == errF}"
  for ext in ["olean", "ilean"] do
    let same := (← bytesOf (r / s!"M.{ext}")) == (← bytesOf (fr / s!"M.{ext}"))
    IO.println s!"{label}: {ext} equal to the fresh build's: {same}"
  let (ur, reuse, rr) ← usageOf (r / "M.usage")
  let (uf, _, rf) ← usageOf (fr / "M.usage")
  IO.println s!"{label}: usage equal to the fresh build's but `reuse` and `resolved`: {ur.compress == uf.compress}; \
    `resolved` holds the fresh build's: {rf.all rr.contains}"
  IO.println s!"{label}: reuse run kept {(reuse.getObjValD "kept").compress}, reElab \
    {(reuse.getObjValD "reElab").compress}, elabReasons {(reuse.getObjValD "elabReasons").compress}"

#eval IO.FS.withTempDir fun dir => do
  IO.FS.writeFile (dir / "E.lean") eSource
  let (rc, out, err) ← lean dir #["-o", "E.olean", "--usage=E.usage", "E.lean"]
  unless rc == 0 do throw <| IO.userError s!"lean E failed ({rc}):\n{out}{err}"
  case dir "rebuilt" "realize_w" "realized w"
  case dir "declined" "realize_y" "value 7"
