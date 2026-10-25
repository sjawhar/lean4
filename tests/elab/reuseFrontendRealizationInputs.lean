import Lean
/-! A realization's observations count for every command that requests it, whether the command ran `realize` or got
the cached result: the process values `realize` read, the file context, the constants it used without a reference,
its extra module uses, whether it read a value tied to the run, and its effects. `E`'s tactics request a realization for
`f`: `val_env` through `Meta.realizeValue`, whose `realize` reads `RV_FOO`; `const_all` through `Meta.realizeConst`,
whose `realize` reads `RV_BAR` and the file name, uses `marker` without a reference and makes `Z` and `E` extra uses;
`val_fx` and `const_fx` do as `const_all` and also read the clock and the file `data.txt`; `val_src` and the term
`src_len% f` take the length of the module's source, through `Meta.realizeValue`; `const_eval` through
`Meta.realizeConst`, whose `realize` evaluates `C.val`, imported from `C`, which adds a transient declaration that uses
it, and leaves the value in nothing a payload holds.

In the reuse runs, theorems `a` and `b` of `M` request the realization and the run edits only `b` (`value`, `const`,
`eval`; in `const` and `eval` a kept `a` re-adds the realization from its payload, whose realization record carries
what `realize` observed, the transient declarations among it, and the elaborated `b` gets it from the cache), or theorem
`a` and definition `b` request `val_src`'s realization and the run edits only a later definition, which changes the
source (`source`, without asynchronous elaboration, so that `a` runs `realize`): `a` and `b` both read the source, so
both are elaborated, and `b`'s value, read through an importer, is the fresh build's. Each compares the exit codes,
stdout, stderr, the `.olean` and `.ilean` bytes and the `.usage` fields but `reuse` and `resolved` (which must hold the
fresh build's) with a fresh build's, and prints what the records of `a` and `b` say they observed and the reuse run's
`kept`, `reElab` and `elabReasons`. In `eval`, the records of `a` and `b` use `C.val`; then `C.val` changes and `M` is
built again from the reuse run's outputs (`stale`): `a`'s payload is the same, so the commands after it may still be
kept, but no command that used `C.val` is, and the `.usage` is a fresh build's.

In the fresh builds, `a` and `b` both request a realization with every kind of observation and `b` alone requests it:
`b`'s record and payload refusals must be the same either way, and `a`'s as well. -/
open Lean

/-- `timeout 120 lean ARGS` in `dir`, with `dir` the search path and the variables `realize` reads set: its exit code,
stdout and stderr. -/
def lean (dir : System.FilePath) (args : Array String) : IO (UInt32 × String × String) := do
  let out ← IO.Process.output
    { cmd := "timeout", args := #["120", "lean"] ++ args, cwd := dir
      env := #[("LEAN_PATH", some dir.toString), ("RV_FOO", some "abc"), ("RV_BAR", some "de")] }
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

/-- What command `i`'s record in the `.usage` `file` says it observed: the process values it read, what it read of its
file, whether it used `marker`, its extra module uses (sorted by name) and whether it read a value tied to the run. -/
def observed (file : System.FilePath) (i : Nat) : IO String := do
  let j ← IO.ofExcept <| ModuleUsage.parseUsage (← IO.FS.readFile file)
  let cmds ← IO.ofExcept <| j.getObjValAs? (Array ModuleUsage.CommandRecord) "commands"
  let some r := cmds.find? (fun (r : ModuleUsage.CommandRecord) => r.i == i) | return s!"{i}: no record"
  let marker := r.usesFull.any fun (e : Name × ModuleUsage.Digest × ModuleUsage.Digest) => e.1 == `marker
  let extra := (r.extra.map (·.1.toString)).qsort (· < ·)
  return s!"{i}: values {r.values} fileContext {r.fileContext.map (·.1)} marker {marker} extra {extra} \
    nondeterministic {r.nondeterministic}"

/-- The refusals of command `i`'s payload in the `.olean` `file`. -/
def refusalsOf (file : System.FilePath) (i : Nat) : IO String := do
  let (md, _) ← readModuleData file
  let some ce := (CommandEntries.ofModuleData md).find? (·.idx == i) | return "no payload"
  return toString (ce.refusals.map toString)

def eSource : String := "import Lean
import C
open Lean Meta Elab Tactic Term

def marker : Nat := 5

structure RKey where
  f : Name
  tag : Name
deriving BEq, Hashable, TypeName

structure RVal where
  n : Nat
deriving TypeName

/-- reads `RV_FOO` -/
def readEnv : MetaM Nat := return ((← IO.getEnv \"RV_FOO\").getD \"\").length

/-- reads `RV_BAR` and the file name, uses `marker` without a reference and makes `Z` and `E` extra uses -/
def observeAll : MetaM Nat := do
  let n := ((← IO.getEnv \"RV_BAR\").getD \"\").length
  let name ← getFileName
  recordUsedByCommand ``marker
  recordExtraModUse `Z false
  recordExtraModUse `E false
  return n + name.length

/-- `observeAll`, then reads the clock and the file `data.txt` -/
def observeEffects : MetaM Nat := do
  let n ← observeAll
  discard IO.monoMsNow
  discard <| IO.FS.readFile \"data.txt\"
  return n

/-- the length of the module's source -/
def sourceLength : MetaM Nat := return (← getFileMap).source.length

/-- evaluates the imported `C.val` (`evalExpr`, which adds and compiles a transient declaration) -/
unsafe def evalImportedImpl : MetaM Nat := evalExpr Nat (mkConst ``Nat) (mkConst ``C.val)
@[implemented_by evalImportedImpl] opaque evalImported : MetaM Nat

/-- `k`'s value through `Meta.realizeValue` for `f` -/
def realizeVal (f tag : Name) (k : MetaM Nat) : MetaM Nat :=
  return (← realizeValue f ({ f, tag } : RKey) (RVal.mk <$> k)).n

/-- `f.tag := 0` through `Meta.realizeConst`, whose `realize` runs `k` first -/
def realizeWith (f tag : Name) (k : MetaM Nat) : MetaM Unit :=
  realizeConst f (f ++ tag) do
    discard k
    addDecl (.defnDecl (mkDefinitionValEx (f ++ tag) [] (mkConst ``Nat) (mkNatLit 0) .abbrev .safe [f ++ tag]))

elab \"val_env \" f:ident : tactic => do discard <| realizeVal (← realizeGlobalConstNoOverload f) `env readEnv
elab \"const_all \" f:ident : tactic => do realizeWith (← realizeGlobalConstNoOverload f) `all observeAll
elab \"val_fx \" f:ident : tactic => do discard <| realizeVal (← realizeGlobalConstNoOverload f) `fx observeEffects
elab \"const_fx \" f:ident : tactic => do realizeWith (← realizeGlobalConstNoOverload f) `fx observeEffects
elab \"val_src \" f:ident : tactic => do discard <| realizeVal (← realizeGlobalConstNoOverload f) `src sourceLength
elab \"src_len% \" f:ident : term => do
  return mkNatLit (← realizeVal (← realizeGlobalConstNoOverload f) `src sourceLength)
elab \"const_eval \" f:ident : tactic => do realizeWith (← realizeGlobalConstNoOverload f) `ev evalImported
"

/-- `M` with theorems `a` and `b` that run the tactic `tac`, `b`'s proof ending in `b`. -/
def theorems (tac b : String) : String :=
  s!"import E\nimport Z\ndef f : Nat := 0\ntheorem a : True := by {tac} f; trivial\n\
    theorem b : True := by {tac} f; {b}\n"

/-- `M` with theorem `a` and definition `b` taking the source's length, then `c := v`. -/
def sourceReaders (v : String) : String :=
  s!"import E\nimport Z\ndef f : Nat := 0\ntheorem a : True := by val_src f; trivial\ndef b : Nat := src_len% f\n\
    def c : Nat := {v}\n"

/-- Copies `C`'s, `E`'s and `Z`'s outputs from `dir` into `d`. -/
def copyImports (dir d : System.FilePath) : IO Unit := do
  IO.FS.createDirAll d
  for m in ["C", "E", "Z"] do
    for ext in ["olean", "usage"] do
      IO.FS.writeBinFile (d / s!"{m}.{ext}") (← IO.FS.readBinFile (dir / s!"{m}.{ext}"))

/-- Builds `M` from `first` in `label-r`, then from `second` there with the first build's outputs to reuse and in
`label-f` without, every build with the options `opts`, and compares the two builds. -/
def case (dir : System.FilePath) (label first second : String) (opts : Array String := #[]) : IO Unit := do
  let (r, fr) := (dir / s!"{label}-r", dir / s!"{label}-f")
  for d in [r, fr] do copyImports dir d
  IO.FS.writeFile (r / "M.lean") first
  let (rc, _, _) ← lean r (opts ++ outputs "M" ++ #["M.lean"])
  IO.println s!"{label}: first build: exit {rc}"
  for ext in ["olean", "usage", "ilean"] do
    IO.FS.rename (r / s!"M.{ext}") (r / s!"M.{ext}.old")
  for d in [r, fr] do
    IO.FS.writeFile (d / "M.lean") second
  let (rcR, outR, errR) ← lean r (opts ++ outputs "M" ++ #["--reuse-olean=M.olean.old", "--reuse-usage=M.usage.old",
    "M.lean"])
  let (rcF, outF, errF) ← lean fr (opts ++ outputs "M" ++ #["M.lean"])
  IO.println s!"{label}: exit codes: reuse {rcR}, fresh {rcF}"
  IO.println s!"{label}: stdout equal to the fresh build's: {outR == outF}"
  IO.println s!"{label}: stderr equal to the fresh build's: {errR == errF}"
  for ext in ["olean", "ilean"] do
    let same := (← bytesOf (r / s!"M.{ext}")) == (← bytesOf (fr / s!"M.{ext}"))
    IO.println s!"{label}: {ext} equal to the fresh build's: {same}"
  let (ur, reuse, rr) ← usageOf (r / "M.usage")
  let (uf, _, rf) ← usageOf (fr / "M.usage")
  IO.println s!"{label}: usage equal to the fresh build's but `reuse` and `resolved`: {ur.compress == uf.compress}; \
    `resolved` holds the fresh build's: {rf.all rr.contains}"
  for i in [1, 2] do
    IO.println s!"{label}: reuse run {← observed (r / "M.usage") i}"
    IO.println s!"{label}: fresh build {← observed (fr / "M.usage") i}"
  IO.println s!"{label}: reuse run kept {(reuse.getObjValD "kept").compress}, reElab \
    {(reuse.getObjValD "reElab").compress}, elabReasons {(reuse.getObjValD "elabReasons").compress}"

/-- Whether command `i`'s record in the `.usage` `file` lists `C.val` among its uses. -/
def usesCVal (file : System.FilePath) (i : Nat) : IO Bool := do
  let j ← IO.ofExcept <| ModuleUsage.parseUsage (← IO.FS.readFile file)
  let cmds ← IO.ofExcept <| j.getObjValAs? (Array ModuleUsage.CommandRecord) "commands"
  let some r := cmds.find? (fun (r : ModuleUsage.CommandRecord) => r.i == i) | return false
  return r.usesFull.any (·.1 == `C.val) || r.usesStmt.any (·.1 == `C.val)

/-- After the `eval` case: `C.val` is 8, and `M` is built again from the same sources, in `eval-r` with the reuse run's
outputs to reuse and in `eval-f` without; compares the two builds. -/
def staleCase (dir : System.FilePath) : IO Unit := do
  let (r, fr) := (dir / "eval-r", dir / "eval-f")
  for d in [r, fr] do
    IO.FS.writeFile (d / "C.lean") "def C.val : Nat := 8\n"
    let (rc, out, err) ← lean d #["-o", "C.olean", "--usage=C.usage", "C.lean"]
    unless rc == 0 do throw <| IO.userError s!"lean C failed ({rc}):\n{out}{err}"
  for ext in ["olean", "usage", "ilean"] do
    IO.FS.rename (r / s!"M.{ext}") (r / s!"M.{ext}.old")
  let (rcR, outR, errR) ← lean r (outputs "M" ++ #["--reuse-olean=M.olean.old", "--reuse-usage=M.usage.old",
    "M.lean"])
  let (rcF, outF, errF) ← lean fr (outputs "M" ++ #["M.lean"])
  IO.println s!"stale: exit codes: reuse {rcR}, fresh {rcF}"
  IO.println s!"stale: stdout equal to the fresh build's: {outR == outF}"
  IO.println s!"stale: stderr equal to the fresh build's: {errR == errF}"
  for ext in ["olean", "ilean"] do
    let same := (← bytesOf (r / s!"M.{ext}")) == (← bytesOf (fr / s!"M.{ext}"))
    IO.println s!"stale: {ext} equal to the fresh build's: {same}"
  let (ur, reuse, _) ← usageOf (r / "M.usage")
  let (uf, _, _) ← usageOf (fr / "M.usage")
  IO.println s!"stale: usage equal to the fresh build's but `reuse` and `resolved`: {ur.compress == uf.compress}"
  IO.println s!"stale: reuse run kept {(reuse.getObjValD "kept").compress}, reElab \
    {(reuse.getObjValD "reElab").compress}"

/-- Fresh builds of `M` in which `a` and `b` both run `tac` (`both`) and in which `b` alone does (`alone`): what the
records and payloads of `a` and `b` say. -/
def freshCase (dir : System.FilePath) (tac : String) : IO Unit := do
  for (label, src) in [("both", theorems tac "trivial"), ("alone", s!"import E\nimport Z\ndef f : Nat := 0\n\
      theorem a : True := trivial\ntheorem b : True := by {tac} f; trivial\n")] do
    let d := dir / s!"{tac}-{label}"
    copyImports dir d
    IO.FS.writeFile (d / "data.txt") "data"
    IO.FS.writeFile (d / "M.lean") src
    let (rc, _, _) ← lean d (outputs "M" ++ #["M.lean"])
    IO.println s!"{tac} {label}: exit {rc}"
    for i in (if label == "both" then [1, 2] else [2]) do
      IO.println s!"{tac} {label}: {← observed (d / "M.usage") i}"
      IO.println s!"{tac} {label}: {i}: refusals {← refusalsOf (d / "M.olean") i}"

#eval IO.FS.withTempDir fun dir => do
  IO.FS.writeFile (dir / "C.lean") "def C.val : Nat := 7\n"
  IO.FS.writeFile (dir / "E.lean") eSource
  IO.FS.writeFile (dir / "Z.lean") "def z : Nat := 0\n"
  for m in ["C", "E", "Z"] do
    let (rc, out, err) ← lean dir #["-o", s!"{m}.olean", s!"--usage={m}.usage", s!"{m}.lean"]
    unless rc == 0 do throw <| IO.userError s!"lean {m} failed ({rc}):\n{out}{err}"
  case dir "value" (theorems "val_env" "trivial") (theorems "val_env" "exact trivial")
  case dir "const" (theorems "const_all" "trivial") (theorems "const_all" "exact trivial")
  case dir "eval" (theorems "const_eval" "trivial") (theorems "const_eval" "exact trivial")
  for i in [1, 2] do
    IO.println s!"eval: {i} uses C.val: reuse run {← usesCVal (dir / "eval-r" / "M.usage") i}, \
      fresh build {← usesCVal (dir / "eval-f" / "M.usage") i}"
  staleCase dir
  case dir "source" (sourceReaders "1") (sourceReaders "10") (opts := #["-DElab.async=false"])
  for d in ["source-r", "source-f"] do
    IO.FS.writeFile (dir / d / "I.lean") "import M\n#eval b\n"
  let (_, outR, _) ← lean (dir / "source-r") #["I.lean"]
  let (_, outF, _) ← lean (dir / "source-f") #["I.lean"]
  IO.println s!"source: `b` through an importer: reuse {outR.trimAscii}, fresh {outF.trimAscii}"
  freshCase dir "val_fx"
  freshCase dir "const_fx"
