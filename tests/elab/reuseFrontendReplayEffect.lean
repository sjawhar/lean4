import Lean
/-! Review findings U1, U2, T3 and N5: keeping a command replays the extension entries of its payload, and an extension's
`ofOLeanEntry?` conversion is an `ImportM` action that may do any `IO`. A keep runs no conversion: it adds an
extension's recorded entries as they are only when core states that the extension's `.olean` entry is the entry
(`oleanEntryIsEntry?`, set where core itself writes the identity conversion, as `registerSimplePersistentEnvExtension`
does); a command with entries for any other extension is elaborated instead (`conversion` in `elabReasons`), decided
before anything runs.

`E` declares `flagRef`, an `IO.Ref Nat`, a persistent extension `flagExt` registered with a conversion given per case
(adding an entry does not convert), and a command `def_flag x` that adds an entry to `flagExt` and declares
`def x : Nat := <flagRef's value>`. Each case builds `M`, edits it and builds it with reuse, and compares that run with a
fresh build of the edited `M` in another directory. Both directories start with `config.txt` holding `A`.
* `throw`: the conversion increments `flagRef`, writes `B` to `config.txt` and throws. `M` is `def_flag x` and
  `def z : Nat := 1`; the edit changes only `z`. `def_flag x` is elaborated and `config.txt` still holds `A`.
* `async`: the conversion starts a task that sets `flagRef` to 7 after 100 ms, and returns its input. `M` is
  `def_flag x`, `def y : Nat := wait_flag_term + 0` and `def z : Nat := 1`, where `wait_flag_term` waits 600 ms and
  elaborates to `flagRef`'s value; the edit changes `y`. No conversion runs, so `y` is what the fresh build gives.
* `copy`: the conversion returns a new `Name` equal to its input, without any effect. `M` and the edit are `throw`'s;
  `def_flag x` is elaborated.
* `simple`: `M` is `def_simple x`, which adds an entry to an extension made with `registerSimplePersistentEnvExtension`,
  and `def z : Nat := 1`; the edit changes only `z`. `def_simple x` is kept.
* `ownIdentity`: the conversion is `pure n`, an identity the user wrote, not core. `M` and the edit are `throw`'s;
  `def_flag x` is elaborated.
Each case prints the reuse run's `.usage` `reuse` field. A comparison covers the exit codes, stdout and stderr, the
`.olean` and `.ilean` bytes, the `.usage` fields but `reuse` and `resolved` (`resolved` must hold the fresh build's,
`resolvedCovers`), `config.txt`, and the value of the case's constant that an importer sees. -/
open Lean

/-- Runs `lean` in `dir` (killed after 120 seconds, exit 124), with `dir` as `LEAN_PATH`: the exit code, stdout and
stderr, with `dir` replaced by `DIR`. -/
def lean (dir : System.FilePath) (args : Array String) : IO (UInt32 × String × String) := do
  let out ← IO.Process.output { cmd := "timeout", args := #["120", "lean"] ++ args, cwd := dir,
                                env := #[("LEAN_PATH", some dir.toString)] }
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

/-- Whether the reuse run's `resolved` entries `r` hold the fresh build's `f`. -/
def resolvedCovers (r f : Array String) : Bool :=
  f.all r.contains

/-- The number of entries of a `.usage`'s `commands` field. -/
def commandCount (u : Json) : Nat :=
  ((u.getObjValD "commands").getArr?.toOption.getD #[]).size

/-- `E`, with `flagExt`'s conversion `conv` (the body of `fun _ n => do`) and the declarations `extra`. -/
def eSource (conv extra : String) : String := s!"import Lean
open Lean Elab Command

initialize flagRef : IO.Ref Nat ← IO.mkRef 0

initialize flagExt : PersistentEnvExtension Name Name (List Name × Unit) ←
  registerPersistentEnvExtension \{
    mkInitial := pure ([], ())
    addImportedFn := fun _ => pure ([], ())
    addEntryFn := fun (ns, u) n => (n :: ns, u)
    ofOLeanEntry? := some fun _ n => do
{conv}
    stateDelta? := some StateDelta.ofLog
    exportEntriesFn := fun (ns, _) => ns.reverse.toArray
  }

syntax \"def_flag \" ident : command

elab_rules : command
  | `(def_flag $x:ident) => do
    let v ← flagRef.get
    modifyEnv (flagExt.addEntry · x.getId)
    elabCommand (← `(def $x : Nat := $(quote v)))
{extra}"

def throwConv : String := "      flagRef.modify (· + 1)
      IO.FS.writeFile \"config.txt\" \"B\"
      throw <| IO.userError s!\"flagExt cannot convert {n}\""

def asyncConv : String := "      let _ ← IO.asTask (prio := .dedicated) do
        IO.sleep 100
        flagRef.set 7
      pure n"

/-- A term that waits until `asyncConv`'s task has run and elaborates to `flagRef`'s value. -/
def waitFlagTerm : String := "
elab \"wait_flag_term\" : term => do
  IO.sleep 600
  return mkNatLit (← flagRef.get)
"

/-- A new object equal to `n` (a `Name.str`), made without any effect. -/
def copyConv : String := "      pure (Name.mkStr n.getPrefix n.getString!)"

def identityConv : String := "      pure n"

/-- An extension made with `registerSimplePersistentEnvExtension`, whose conversion is core's identity, and a command
`def_simple x` that adds an entry to it and declares `def x : Nat := 0`. -/
def simpleExtension : String := "
initialize simpleExt : SimplePersistentEnvExtension Name NameSet ←
  registerSimplePersistentEnvExtension {
    addEntryFn := fun s n => s.insert n
    addImportedFn := fun _ => {}
  }

syntax \"def_simple \" ident : command

elab_rules : command
  | `(def_simple $x:ident) => do
    modifyEnv (simpleExt.addEntry · x.getId)
    elabCommand (← `(def $x : Nat := 0))
"

/-- The value of `c` that an importer of the `M` in `dir` sees. -/
def valueOf (dir : System.FilePath) (c : String) : IO String := do
  IO.FS.writeFile (dir / "N.lean") s!"import M\n#eval {c}\n"
  let (rc, out, err) ← lean dir #["N.lean"]
  return s!"{(out ++ err).trimAscii.copy} (exit {rc})"

/-- `config.txt` in `dir`. -/
def configOf (dir : System.FilePath) : IO String := do
  if ← (dir / "config.txt").pathExists then IO.FS.readFile (dir / "config.txt") else return "(missing)"

/-- Prints how the run in `r` compares to the fresh run in `f`, and the value of `c` an importer sees in each. -/
def compare (r f : System.FilePath) (c : String) (resR resF : UInt32 × String × String) : IO Unit := do
  let (rcR, outR, errR) := resR
  let (rcF, outF, errF) := resF
  IO.println s!"exit codes: {rcR}, fresh {rcF}"
  IO.println s!"stdout equal to the fresh build's: {outR == outF}"
  IO.println s!"stderr equal to the fresh build's: {errR == errF}"
  for ext in ["olean", "ilean"] do
    let same := (← bytesOf (r / s!"M.{ext}")) == (← bytesOf (f / s!"M.{ext}"))
    IO.println s!"{ext} equal to the fresh build's: {same}"
  let (ur, _, rr) ← usageOf (r / "M.usage")
  let (uf, _, rf) ← usageOf (f / "M.usage")
  IO.println s!"usage equal to the fresh build's but `reuse` and `resolved`: {ur.compress == uf.compress}; \
    `commands` lengths equal: {commandCount ur == commandCount uf}; \
    `resolved` holds the fresh build's: {resolvedCovers rr rf}"
  IO.println s!"config.txt: {← configOf r}, fresh {← configOf f}"
  IO.println s!"{c}: {← valueOf r c}, fresh {← valueOf f c}"

structure Case where
  name : String
  /-- `flagExt`'s conversion. -/
  conv : String
  /-- More declarations of `E`. -/
  extra : String := ""
  /-- `M`'s commands after `import E`, before and after the edit. -/
  first : String
  edited : String
  /-- The constant whose value an importer of `M` is shown. -/
  shown : String := "x"

def runCase (c : Case) : IO Unit := IO.FS.withTempDir fun dir => do
  IO.println s!"case {c.name}"
  IO.FS.writeFile (dir / "E.lean") (eSource c.conv c.extra)
  let (rc, out, err) ← lean dir #["-o", "E.olean", "--usage=E.usage", "E.lean"]
  unless rc == 0 do throw <| IO.userError s!"lean E failed ({rc}):\n{out}{err}"
  let (r, f) := (dir / "r", dir / "f")
  for d in [r, f] do
    IO.FS.createDirAll d
    IO.FS.writeFile (d / "config.txt") "A"
    for ext in ["olean", "usage"] do
      IO.FS.writeBinFile (d / s!"E.{ext}") (← IO.FS.readBinFile (dir / s!"E.{ext}"))
  IO.FS.writeFile (r / "M.lean") s!"import E\n{c.first}"
  let (rc, _, _) ← lean r (outputs "M" ++ #["M.lean"])
  IO.println s!"first build: exit {rc}, {c.shown} {← valueOf r c.shown}"
  for ext in ["olean", "usage"] do
    IO.FS.rename (r / s!"M.{ext}") (r / s!"M.{ext}.old")
  IO.FS.removeFile (r / "M.ilean")
  for d in [r, f] do
    IO.FS.writeFile (d / "M.lean") s!"import E\n{c.edited}"
  let resR ← lean r (outputs "M" ++ #["--reuse-olean=M.olean.old", "--reuse-usage=M.usage.old", "M.lean"])
  let resF ← lean f (outputs "M" ++ #["M.lean"])
  let (_, reuse, _) ← usageOf (r / "M.usage")
  IO.println s!"reuse: {reuse.compress}"
  compare r f c.shown resR resF

#eval runCase { name := "throw", conv := throwConv
                first := "def_flag x\ndef z : Nat := 1\n", edited := "def_flag x\ndef z : Nat := 2\n" }
#eval runCase { name := "async", conv := asyncConv, extra := waitFlagTerm, shown := "y"
                first := "def_flag x\ndef y : Nat := wait_flag_term + 0\ndef z : Nat := 1\n"
                edited := "def_flag x\ndef y : Nat := wait_flag_term + 1\ndef z : Nat := 1\n" }
#eval runCase { name := "copy", conv := copyConv
                first := "def_flag x\ndef z : Nat := 1\n", edited := "def_flag x\ndef z : Nat := 2\n" }
#eval runCase { name := "simple", conv := identityConv, extra := simpleExtension
                first := "def_simple x\ndef z : Nat := 1\n", edited := "def_simple x\ndef z : Nat := 2\n" }
#eval runCase { name := "ownIdentity", conv := identityConv
                first := "def_flag x\ndef z : Nat := 1\n", edited := "def_flag x\ndef z : Nat := 2\n" }
