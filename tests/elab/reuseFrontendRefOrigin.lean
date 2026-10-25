import Lean
/-! Review finding N3: a reuse run takes a kept command's `.ilean` references from the previous `.ilean` by display
range, though another command may have produced them, and adds them to the elaborated commands' references without the
deduplication a build without reuse does (`Server.findModuleRefs`). `E` declares two commands that record a reference
to a constant at a place in another declaration (a term info leaf, no declaration): `touch_ref c` at the name of `c`'s
declaration, `touch_decl c` across the whole declaration. `M` declares `a` and `b`, then such a command, then `z`.
(1) The reuse run edits only `z`: `a` and `b` are kept and `touch_ref a` is elaborated again. (2) It also changes
`touch_ref a` to `touch_ref b`. (3) It changes `touch_decl a` to `touch_decl b`, so the previous `.ilean`'s reference to
`a` inside `a`'s declaration is no longer made by any command. In each case the reuse run must write what a build
without reuse writes: the test compares the exit codes, stdout and stderr, the `.olean` and `.ilean` bytes (printing the
references that differ), and the `.usage` fields but `reuse` and `resolvedDigest`, with the `.resolved` sidecar's
entries holding the fresh build's (a reuse run also carries the names its previous build resolved). -/
open Lean

/-- Runs `lean args` in `dir` under a timeout (exit 124 when it expires); stdout and stderr with `dir` as `DIR`. -/
def lean (dir : System.FilePath) (args : Array String) : IO (UInt32 × String × String) := do
  let env := #[("LEAN_PATH", some dir.toString)]
  let out ← IO.Process.output { cmd := "timeout", args := #["120", "lean"] ++ args, cwd := dir, env }
  let norm (s : String) := s.replace dir.toString "DIR"
  return (out.exitCode, norm out.stdout, norm out.stderr)

def outputs : Array String := #["-o", "M.olean", "--usage=M.usage", "-i", "M.ilean"]

/-- A file's bytes, empty if it is missing (a failed run may not write it). -/
def bytesOf (file : System.FilePath) : IO ByteArray := do
  if ← file.pathExists then IO.FS.readBinFile file else return .empty

/-- A `.usage`, one JSON object per line, as one object without `reuse` and `resolvedDigest`, and the entries of the
`.resolved` sidecar beside it (module, name digest and kind). -/
def usageOf (file : System.FilePath) : IO (Json × Array String) := do
  let mut j := Json.mkObj []
  unless ← file.pathExists do return (j, #[])
  for line in (← IO.FS.readFile file).splitOn "\n" do
    unless line.isEmpty do j := j.mergeObj (← IO.ofExcept (Json.parse line))
  let fields := ((j.getObj?.toOption.map (·.toList)).getD []).filter fun (k, _) => k != "reuse" && k != "resolvedDigest"
  let mut resolved := #[]
  if let .ok bytes ← (IO.FS.readBinFile (file.withExtension "resolved")).toBaseIO then
    if let .ok t := ModuleUsage.ResolvedTable.decode? bytes then
      for (d, g, k) in t.entries.toArray do
        resolved := resolved.push s!"{t.modules[g]!}:{d.hex}:{k}"
  return (Json.mkObj fields, resolved)

/-- The `references` entries of an `.ilean` (empty if it is missing or unreadable). -/
def refsOf (file : System.FilePath) : IO (List (String × Json)) := do
  unless ← file.pathExists do return []
  let some j := (Json.parse (← IO.FS.readFile file)).toOption | return []
  return ((j.getObjValD "references").getObj?.toOption.map (·.toList)).getD []

def eSource : String := "import Lean
open Lean Elab Command

/-- An identifier for `c` whose original source range is the range (`whole`) or the name of `c`'s declaration. -/
def refSyntax (c : Name) (whole : Bool) : CommandElabM Syntax := do
  let some r ← findDeclarationRanges? c | throwError \"no declaration ranges for {c}\"
  let r := if whole then r.range else r.selectionRange
  let fm ← getFileMap
  let info := SourceInfo.original \"\".toRawSubstring (fm.ofPosition r.pos) \"\".toRawSubstring (fm.ofPosition r.endPos)
  return Syntax.ident info c.toString.toRawSubstring c []

def touch (id : TSyntax `ident) (whole : Bool) : CommandElabM Unit := do
  let c ← liftCoreM <| resolveGlobalConstNoOverload id
  let stx ← refSyntax c whole
  pushInfoLeaf (.ofTermInfo { elaborator := .anonymous, lctx := {}, expectedType? := none, expr := mkConst c, stx })

elab \"touch_ref \" id:ident : command => touch id false
elab \"touch_decl \" id:ident : command => touch id true
"

def mSource (touch z : String) : String :=
  s!"import E\ndef a : Nat := 1\ndef b : Nat := 2\n{touch}\ndef z : Nat := {z}\n"

/-- In fresh directories `r` and `f` under `dir`, each with `E`: builds `src` in `r`, then compiles `src'` in `r`
keeping commands from that build and in `f` without reuse; prints the comparison. -/
def case (dir : System.FilePath) (label src src' : String) : IO Unit := do
  let (r, f) := (dir / s!"{label}-r", dir / s!"{label}-f")
  for d in [r, f] do
    IO.FS.createDirAll d
    for ext in ["olean", "usage", "resolved"] do
      IO.FS.writeBinFile (d / s!"E.{ext}") (← IO.FS.readBinFile (dir / s!"E.{ext}"))
  IO.FS.writeFile (r / "M.lean") src
  let (rc, out, err) ← lean r (outputs ++ #["M.lean"])
  IO.println s!"{label}: first build: exit {rc}, stdout {out.quote}, stderr {err.quote}"
  for ext in ["olean", "usage", "resolved", "ilean"] do
    IO.FS.rename (r / s!"M.{ext}") (r / s!"M.{ext}.old")
  IO.FS.writeFile (r / "M.lean") src'
  IO.FS.writeFile (f / "M.lean") src'
  let (rcR, outR, errR) ← lean r (outputs ++ #["--reuse-olean=M.olean.old", "--reuse-usage=M.usage.old",
    "M.lean"])
  let (rcF, outF, errF) ← lean f (outputs ++ #["M.lean"])
  IO.println s!"{label}: exit codes: reuse {rcR}, fresh {rcF}"
  IO.println s!"{label}: stdout equal to the fresh build's: {outR == outF}; stderr equal: {errR == errF}"
  for ext in ["olean", "ilean"] do
    let same := (← bytesOf (r / s!"M.{ext}")) == (← bytesOf (f / s!"M.{ext}"))
    IO.println s!"{label}: {ext} equal to the fresh build's: {same}"
  let refsR ← refsOf (r / "M.ilean")
  let refsF ← refsOf (f / "M.ilean")
  for k in (refsR.map (·.1) ++ refsF.map (·.1)).eraseDups do
    let refsAt (refs : List (String × Json)) := ((refs.lookup k).map (·.compress)).getD "none"
    if refsAt refsR != refsAt refsF then
      IO.println s!"{label}: references of {k}: reuse {refsAt refsR}, fresh {refsAt refsF}"
  let (ur, rr) ← usageOf (r / "M.usage")
  let (uf, rf) ← usageOf (f / "M.usage")
  IO.println s!"{label}: usage equal to the fresh build's but `reuse` and `resolved`: {ur.compress == uf.compress}; \
    `resolved` holds the fresh build's: {rf.all rr.contains}"

#eval IO.FS.withTempDir fun dir => do
  IO.FS.writeFile (dir / "E.lean") eSource
  let (rc, out, err) ← lean dir #["-o", "E.olean", "--usage=E.usage", "E.lean"]
  unless rc == 0 do throw <| IO.userError s!"lean E failed ({rc}):\n{out}{err}"
  case dir "(1) z edited" (mSource "touch_ref a" "1") (mSource "touch_ref a" "12345")
  case dir "(2) touch_ref b" (mSource "touch_ref a" "1") (mSource "touch_ref b" "3")
  case dir "(3) touch_decl b" (mSource "touch_decl a" "1") (mSource "touch_decl b" "3")
