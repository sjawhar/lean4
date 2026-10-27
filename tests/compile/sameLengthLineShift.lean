import Lean

open Lean Lean.Language Lean.Language.Lean

/-!
Tests the language processor after an edit that keeps the byte length but moves text after its first
changed byte to another line or column, such as `-- a\n  -- b` to `-- a --- bb` inside a proof. The
text after such an edit has the same bytes at the same byte positions, so syntax comparisons accept
the old elaboration results there, but the messages of those results hold the old lines and columns,
and the language server keeps the editor ranges that it computed for them with the old text. The
processor must not reuse them.

After each edit, the messages (with lines and code-point columns) and the editor ranges (UTF-16
columns), computed as the server does (kept per message log and computed with the text of the run
that made the log), must be those of a fresh processor on the new text. The cases:
- inside a proof, a comment line fewer above a tactic that warns;
- a line fewer above the tactic, a line more in a later command, and a typo fix after that: the end
  of the change keeps its line and column, but the tactic keeps its byte offset and moves one line up;
- a change on the tactic's line that keeps code points but not UTF-16 units (`𝔸a` to `€é`);
- between two commands (each command after the first changed one is elaborated again anyway);
- inside a proof without a change of lines or columns: there the warning tactic must still be reused
  (the same snapshot object, while both snapshot trees are alive).
-/

/-- A proof with comments between its first step and a `grind` step that warns, and after its end. -/
def proofComments : String :=
  "set_option grind.warning true\n\ntheorem t : True ∧ True := by\n  \
    refine ⟨?_, ?_⟩\n  \
    -- a\n  \
    -- b\n  \
    grind\n  \
    trivial\n  \
    -- c --- d\n  \
    -- ab\n"

/--
A proof whose steps start after a comment, so that text before `grind` on its line can change: `𝔸`
is one code point and two UTF-16 units.
-/
def proofUtf16 : String :=
  "set_option grind.warning true\n\ntheorem t : True ∧ True := by\n  \
    /- xx -/ refine ⟨?_, ?_⟩\n  \
    /- 𝔸a -/ grind\n  \
    /- yy -/ trivial\n"

/-- Two comment lines between two theorems, the second of which warns. -/
def betweenCmds : String :=
  "set_option grind.warning true\n\n\
  theorem s : True := by\n  \
    grind\n\
  -- a\n\
  -- b\n\
  theorem t : True ∧ True := by\n  \
    refine ⟨?_, ?_⟩\n  \
    grind\n  \
    trivial\n"

/--
A proof with two comment lines above a `grind` step that warns, and a later theorem with a comment
that can take a line more and a comment that can get a typo fix.
-/
def laterCmd : String :=
  "set_option grind.warning true\n\n\
  theorem t : True ∧ True := by\n  \
    refine ⟨?_, ?_⟩\n  \
    -- a\n  \
    -- b\n  \
    grind\n  \
    trivial\n\n\
  theorem u : True := by\n  \
    -- c --- dd\n  \
    trivial\n  \
    -- ab\n"

/-- Replaces the first occurrence of `a` in `text` by `b`. -/
def replaceFirst (text a b : String) : String :=
  match text.splitOn a with
  | pre :: rest => pre ++ b ++ a.intercalate rest
  | [] => text

/-- Editor ranges kept with a message log, as the server keeps its interactive diagnostics. -/
structure KeptRanges where
  ranges : Array Lsp.Range
deriving TypeName

/-- What a run left in the snapshot tree. -/
structure Run where
  /-- The messages, with their positions. -/
  msgs : Array String
  /-- The editor ranges of the messages, as the server reports them. -/
  ranges : Array Lsp.Range
  /-- Address of the message log object that holds the `grind` warning. -/
  grindLog? : Option USize
  /-- The snapshot of the run, kept so that the address above stays valid. -/
  snap : InitialSnapshot

/-- Waits for every task of a snapshot tree. -/
partial def waitAll (t : SnapshotTree) : IO Unit := do
  for c in t.children do
    waitAll (← IO.wait c.task)

unsafe def mkProcessor : BaseIO (Parser.InputContext → BaseIO InitialSnapshot) := do
  let opts := Elab.async.set ({} : Options) true
  let opts := Elab.inServer.set opts true
  mkIncrementalProcessor <| process fun stx => do
    enableInitializersExecution
    return .ok { mainModuleName := `Test, isModule := stx.isModule, imports := stx.imports, opts }

/--
Runs `step` on `text`. The editor ranges are computed as `Server/FileWorker.lean` does: from the kept
ranges of a message log if it has some, else with the text of this run, which are then kept.
-/
unsafe def run (step : Parser.InputContext → BaseIO InitialSnapshot) (text : String) : IO Run := do
  let snap ← step (Parser.mkInputContext text "Test.lean")
  let tree := toSnapshotTree snap
  waitAll tree
  let fileMap := text.toFileMap
  let mut msgs := #[]
  let mut ranges := #[]
  let mut grindLog? := none
  for s in tree.getAll do
    let ms := s.diagnostics.msgLog.toArray.filter fun m => !m.isSilent && !m.data.hasTag (· == `trace)
    if ms.isEmpty then
      continue
    for m in ms do
      let str := (← m.toString).trimAsciiEnd
      if str.contains "grind" then
        grindLog? := some (ptrAddrUnsafe s.diagnostics.msgLog)
      msgs := msgs.push s!"{m.pos}-{m.endPos}: {str}"
    let kept ← s.diagnostics.interactiveDiagsRef?.bindM fun ref => do
      return (← ref.get).bind (·.get? KeptRanges)
    let rs ← match kept with
      | some k => pure k.ranges
      | none =>
        let rs := ms.map fun m =>
          { start := fileMap.leanPosToLspPos m.pos, «end» := fileMap.leanPosToLspPos (m.endPos.getD m.pos) }
        if let some ref := s.diagnostics.interactiveDiagsRef? then
          ref.set (some (.mk { ranges := rs : KeptRanges }))
        pure rs
    ranges := ranges ++ rs
  return { msgs, ranges, grindLog?, snap }

/--
Feeds `texts` to one processor and compares each result with a fresh processor, which must give `n`
messages. With `reuse? := some b`, the `grind` warning of the last text must come from the same
message log object as in the text before (`b = true`) or from a new one (`b = false`).
-/
unsafe def checkSeq (name : String) (n : Nat) (texts : List String) (reuse? : Option Bool := none) :
    IO (Array String) := do
  let step ← mkProcessor
  let mut errs := #[]
  let mut k := 0
  let mut prev? : Option Run := none
  -- the runs are kept alive, so that equal addresses mean the same object
  let mut runs := #[]
  for text in texts do
    let inc ← run step text
    let fresh ← run (← mkProcessor) text
    if inc.msgs != fresh.msgs then
      errs := errs.push s!"{name}, text {k}: messages differ from a fresh elaboration\n  \
        incremental: {inc.msgs}\n  fresh:       {fresh.msgs}"
    if inc.ranges != fresh.ranges then
      errs := errs.push s!"{name}, text {k}: editor ranges differ from a fresh elaboration\n  \
        incremental: {toJson inc.ranges}\n  fresh:       {toJson fresh.ranges}"
    if fresh.msgs.size != n then
      errs := errs.push s!"{name}, text {k}: expected {n} messages, got {fresh.msgs}"
    if k + 1 == texts.length then
      if let (some expected, some prev) := (reuse?, prev?) then
        let reused := prev.grindLog?.isSome && inc.grindLog? == prev.grindLog?
        if reused != expected then
          errs := errs.push s!"{name}, text {k}: the `grind` step was {if reused then "" else "not "}reused"
    prev? := some inc
    runs := runs.push (inc, fresh)
    k := k + 1
  return errs

unsafe def main : IO UInt32 := do
  let base := proofComments
  let lineFewer := replaceFirst base "-- a\n  -- b" "-- a --- bb"
  -- one line fewer above `grind`, one more in the later theorem, then a typo fix in its last comment,
  -- each of the same length: the end of the change keeps its line and column, and `grind` keeps its
  -- byte offset but moves one line up
  let inner := replaceFirst (replaceFirst (replaceFirst laterCmd "-- a\n  -- b" "-- a --- bb")
    "-- c --- dd" "-- c\n  -- d") "-- ab" "-- ba"
  let utf16 := proofUtf16
  let between1 := replaceFirst betweenCmds "-- a\n-- b" "-- a -- b"
  let sameLines := replaceFirst base "-- a" "-- e"
  let errs := (← checkSeq "a line fewer inside a proof" 1 [base, lineFewer] (reuse? := some false)) ++
    (← checkSeq "a line fewer inside a proof, then a proof edit" 1
      [base, lineFewer, replaceFirst lineFewer "  trivial" "  exact trivial"]) ++
    (← checkSeq "a line fewer, and a line more in a later command" 1 [laterCmd, inner]
      (reuse? := some false)) ++
    -- a reused step keeps its message log object from the second reuse on, and with it the editor
    -- ranges that the server computed with the text of the run before
    (← checkSeq "fewer UTF-16 units before a tactic" 1
      [utf16, replaceFirst utf16 "xx" "xy", replaceFirst (replaceFirst utf16 "xx" "xy") "𝔸a" "€é"]
      (reuse? := some false)) ++
    (← checkSeq "between commands" 2
      [betweenCmds, between1, replaceFirst between1 "  trivial" "  exact trivial"]) ++
    (← checkSeq "inside a proof, no line change" 1 [base, sameLines] (reuse? := some true))
  for e in errs do
    IO.println e
  return if errs.isEmpty then 0 else 1
