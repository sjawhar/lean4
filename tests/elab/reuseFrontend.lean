import Lean
/-! The reuse run (`lean --reuse-olean=F --reuse-usage=F`): a module is compiled, then compiled again after an edit,
keeping commands from its previous `.olean` and `.usage`, in a directory of its own (`r`), step after step, each on the
previous step's outputs; every step also compiles the same sources without reuse (`f`), and the two `.olean` files
(`cmpSource`), `.usage` files (`usageDiff`) and `.ilean` files are compared, as are the two runs' outputs (messages
included; child processes run with the default options, linters on) and exit codes. Each step prints the `reuse` field
of the reuse run's `.usage` (which commands were elaborated, and the first reason each was not kept) and whether its
output mentions reuse. A command's context digests the quotation contexts used before it, one per earlier command and a
digest of its syntax, and the payloads before it, which hold their declaration ranges: so a command is kept only after
commands with the previous build's text and positions, and every command after an edited or moved one is elaborated. -/
open Lean

/-- `lean ARGS` in `dir`, with `dir` the search path: its exit code and output. -/
def lean (dir : System.FilePath) (args : Array String) : IO (UInt32 × String) := do
  let out ← IO.Process.output { cmd := "lean", args, cwd := dir, env := #[("LEAN_PATH", some dir.toString)] }
  return (out.exitCode, out.stdout ++ out.stderr)

/-- Compiles `m` in `dir` with its `.olean`, `.usage` and `.ilean`, with the extra arguments `extra`: its output. -/
def build (dir : System.FilePath) (m : String) (extra : Array String := #[]) : IO String := do
  let (rc, out) ← lean dir (#["-o", s!"{m}.olean", s!"--usage={m}.usage", "-i", s!"{m}.ilean"] ++ extra ++
    #[s!"{m}.lean"])
  unless rc == 0 do throw <| IO.userError s!"lean {m} failed ({rc}):\n{out}"
  return out

/-- A `.usage`, one JSON object per line, as one object. -/
def usageOf (file : System.FilePath) : IO Json := do
  let mut j := Json.mkObj []
  for line in (← IO.FS.readFile file).splitOn "\n" do
    unless line.isEmpty do j := j.mergeObj (← IO.ofExcept (Json.parse line))
  return j

/-- The top-level fields of two `.usage` files that differ, `reuse` left out; for `commands`, each record's fields that
differ, as `commands.I.FIELD`; for `values`, each process value that differs, as `values.KEY`. -/
def usageDiff (a b : System.FilePath) : IO (List String) := do
  let fields (j : Json) : List (String × Json) := (j.getObj?.toOption.map (·.toList)).getD []
  let diff (la lb : List (String × Json)) : List String :=
    let keys := (la ++ lb).map (·.1) |>.toArray.qsort (· < ·) |>.toList.eraseDups
    keys.filter fun k => (la.lookup k).map (·.compress) != (lb.lookup k).map (·.compress)
  let (ja, jb) := (← usageOf a, ← usageOf b)
  let top := (diff (fields ja) (fields jb)).filter (· != "reuse")
  let recs (j : Json) := ((j.getObjValAs? (Array Json) "commands").toOption.getD #[]).toList
  let cmds := ((recs ja).zip (recs jb)).zipIdx.flatMap fun ((ra, rb), i) =>
    (diff (fields ra) (fields rb)).map (s!"commands.{i}.{·}")
  let values (j : Json) : List (String × Json) := ((j.getObjValAs? (Array (String × Json)) "values").toOption.getD #[]).toList
  let vals := (diff (values ja) (values jb)).map (s!"values.{·}")
  return top.flatMap fun k => if k == "commands" then cmds else if k == "values" then vals else [k]

/-- `lean --run Cmp.lean A.olean B.olean`: whether two `.olean` files hold the same constants (as a set, each with its
kind, level parameters, type and value, binder names included) and, per extension (the packed command payloads
included), the same entries in the same order, each compared by the hash of its compacted bytes. -/
def cmpSource : String := "import Lean
open Lean

unsafe def entryHash (e : α) : IO UInt64 := do
  let path : System.FilePath := \"cmp-entry.bin\"
  let _ ← CompactedRegion.save path `cmpEntry e #[] none (allowClosures := true)
  return (← IO.FS.readBinFile path).hash

def kindOf : ConstantInfo → Nat
  | .axiomInfo _ => 0 | .defnInfo _ => 1 | .thmInfo _ => 2 | .opaqueInfo _ => 3 | .quotInfo _ => 4
  | .inductInfo _ => 5 | .ctorInfo _ => 6 | .recInfo _ => 7

def strictEq (c c' : ConstantInfo) : Bool :=
  kindOf c == kindOf c' && c.levelParams == c'.levelParams &&
    c.type.equal c'.type &&
    match c.value? (allowOpaque := true), c'.value? (allowOpaque := true) with
    | some v, some w => v.equal w
    | none, none => true
    | _, _ => false

unsafe def main (args : List String) : IO Unit := do
  let [a, b] := args | throw <| IO.userError \"usage: Cmp A.olean B.olean\"
  let (da, _) ← readModuleData a
  let (db, _) ← readModuleData b
  let consts (d : ModuleData) : NameMap ConstantInfo := (d.constNames.zip d.constants).foldl (fun m (n, c) => m.insert n c) {}
  let (ca, cb) := (consts da, consts db)
  let mut diffs := #[]
  for (n, c) in ca do
    match cb.find? n with
    | some c' => unless strictEq c c' do diffs := diffs.push s!\"constant {n} differs\"
    | none => diffs := diffs.push s!\"constant {n} only in the first\"
  for (n, _) in cb do
    unless ca.contains n do diffs := diffs.push s!\"constant {n} only in the second\"
  let entries (d : ModuleData) : NameMap (Array EnvExtensionEntry) := d.entries.foldl (fun m (n, es) => m.insert n es) {}
  let (ea, eb) := (entries da, entries db)
  for n in (ea.foldl (fun s n _ => s.insert n) (eb.foldl (fun s n _ => s.insert n) ({} : NameSet))).toList do
    let ha ← (ea.getD n #[]).mapM entryHash
    let hb ← (eb.getD n #[]).mapM entryHash
    unless ha == hb do
      diffs := diffs.push s!\"{n}: {ha.size} and {hb.size} entries{if ha.qsort (· < ·) == hb.qsort (· < ·) then \" (order)\" else \"\"}\"
  IO.println (if diffs.isEmpty then \"equal\" else s!\"differ: {diffs}\")
"

def xSource (proof : String) (v : Nat) : String :=
  s!"theorem L : 1 = 1 := {proof}\ntheorem K : 1 = 1 := rfl\ndef v := {v}\n"

/-- The module the steps edit; `k`, `blank` and `a` vary it. -/
def mSource (aProof := "L") (kDoc := "") (blank := "") : String :=
  s!"import X
theorem a : 1 = 1 := {aProof}
theorem c : v = v := rfl
theorem w (x : Nat) : True := trivial
def h (x : Option Nat) : Nat := match x with | some n => n | none => 0
{kDoc}def k (y : Option Nat) : Nat := match y with | some n => n | none => 0
{blank}def b := v + 1
@[simp] theorem s : b = v + 1 := rfl
instance : Inhabited Nat := ⟨b⟩
#print axioms a
"

/-- Writes `x` and `m` to both directories and compiles them: `X` without reuse, `M` in `r` keeping commands from its
previous outputs (copied aside first, as Lake does) and in `f` without reuse; prints what the step shows. -/
def step (r f : System.FilePath) (label x m : String) : IO Unit := do
  for d in [r, f] do
    IO.FS.writeFile (d / "X.lean") x
    discard <| build d "X"
    IO.FS.writeFile (d / "M.lean") m
  for ext in ["olean", "usage", "ilean"] do
    IO.FS.writeBinFile (r / s!"M.{ext}.old") (← IO.FS.readBinFile (r / s!"M.{ext}"))
  let args := #["-o", "M.olean", "--usage=M.usage", "-i", "M.ilean"]
  let (rcR, out) ← lean r (args ++ #["--reuse-olean=M.olean.old", "--reuse-usage=M.usage.old",
    "--reuse-ilean=M.ilean.old", "M.lean"])
  let (rcF, outF) ← lean f (args ++ #["M.lean"])
  let same := out.replace r.toString "DIR" == outF.replace f.toString "DIR"
  let reuse := ((← usageOf (r / "M.usage")).getObjValD "reuse").compress
  let (_, olean) ← lean r #["--run", "Cmp.lean", "M.olean", (f / "M.olean").toString]
  let ilean := (← IO.FS.readFile (r / "M.ilean")) == (← IO.FS.readFile (f / "M.ilean"))
  IO.println s!"{label}: reuse {reuse}; output mentions reuse: {decide ((out.splitOn "reuse").length > 1)}; \
    output equal to the fresh build's: {same}; exit codes: reuse {rcR}, fresh {rcF}; \
    olean {olean.trimAscii}; usage fields differing: {← usageDiff (r / "M.usage") (f / "M.usage")}; ilean equal: {ilean}"

#eval IO.FS.withTempDir fun r => IO.FS.withTempDir fun f => do
  IO.FS.writeFile (r / "Cmp.lean") cmpSource
  for d in [r, f] do
    IO.FS.writeFile (d / "X.lean") (xSource "rfl" 5)
    discard <| build d "X"
    IO.FS.writeFile (d / "M.lean") (mSource)
    discard <| build d "M"
  -- `L`'s proof changes and its statement does not: only `#print axioms` (8), no declaration, is elaborated
  step r f "L's proof" (xSource "by rfl" 5) mSource
  -- the kept `.olean` serves an importer: `s` as a simp lemma, `b`'s compiled code
  IO.FS.writeFile (r / "N.lean") "import M\nexample : b = v + 1 := by simp\n#eval b\n"
  let (rc, out) ← lean r #["N.lean"]
  IO.println s!"importer of the kept module: exit {rc}, output {out.trimAscii}"
  -- `v` changes: `c` (1) uses it and is elaborated; its payload is the one it had, so `w`, `h` and `k` are kept after
  -- it; `b` (5) uses `v`, `s` (6) and the instance (7) use `b`
  step r f "v's value" (xSource "by rfl" 6) mSource
  -- `k`'s text changes (a doc comment line): `k` (4) is elaborated, and `b`, `s` and the instance moved a line
  step r f "k's text" (xSource "by rfl" 6) (mSource (kDoc := "/-- k -/\n"))
  -- a line before `b`: `b`, `s` and the instance moved; `k` is kept, its elaborated matcher the kept `h`'s, as before
  step r f "a line before b" (xSource "by rfl" 6) (mSource (kDoc := "/-- k -/\n") (blank := "\n"))
  -- `a`'s proof changes and keeps its length: `a` (0) is elaborated, and `c`, `w`, `h` and `b` fail on their context,
  -- which digests the quotation contexts used so far and so `a`'s, a digest of its syntax (`withInitQuotContext`); `k`
  -- uses `h`'s matcher, and `s` and the instance use `b`, all elaborated, and fail on that first
  step r f "a's proof, same length" (xSource "by rfl" 6) (mSource (aProof := "K") (kDoc := "/-- k -/\n") (blank := "\n"))
  -- `a`'s text grows: `a` is elaborated, and every command after it moved
  step r f "a's text" (xSource "by rfl" 6) (mSource (aProof := "(L)") (kDoc := "/-- k -/\n") (blank := "\n"))
  -- nothing changes: every declaration is kept
  step r f "no change" (xSource "by rfl" 6) (mSource (aProof := "(L)") (kDoc := "/-- k -/\n") (blank := "\n"))
