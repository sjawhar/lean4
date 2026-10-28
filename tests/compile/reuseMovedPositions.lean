import Lean

open Lean Lean.Language Lean.Language.Lean

/-!
Tests `server.reuseMovedPositions` through the language processor API, as the file worker drives it
on `textDocument/didChange`. With the option on, inserting a comment line between two commands, or
inside a tactic proof, reuses the old elaboration of every later command, and inserting a comment
line at byte 0 of a file that starts with `import` reuses the header (no new import) and every
command. An insertion before an `#eval` is not reused there: the `#eval` is elaborated again, and so
is a command with a message exactly at an insertion point between two tokens (`<;>done` to
`<;> done`). Deleting a comment line reuses every later command. With the option off, no command
after the insertion is reused.

The reused command states are moved too: a real edit after a comment edit reuses every command
before it and elaborates again from the changed command, and after one or two comment edits the
declaration ranges that go to definition finds (`findDeclarationRanges?`) in the reused state are
those of a fresh run. A moved section with an attribute and `variable`s gives later commands the new
binder positions. A command with an error or a labeled `sorry` (with a `sorry` warning, or with
`warn.sorry` off) holds old positions, so it and every later command are marked, a later edit after
it elaborates again from that command, and a revert to the old text removes the marks. After an edit
above a command that keeps its byte offset but changes its line, or a same-length edit inside a proof
that changes the line count, a real edit in the command gives the messages of a fresh run
(incremental elaboration does not reuse its old parts; the case inside a proof also with the option
off). A moved delta-derived instance, which no info tree binder names, gets the declaration ranges
of a fresh run.

After every edit, with the option on or off, the snapshot tree must hold the same messages, at the
same positions, the same number of `import` info nodes, and info nodes with the same source ranges
as a fresh processor on the new text.
This includes the header's messages after an edit below the header (which reuses the header), a
`-- deprecated_module: ignore` directive that is added after the last import or removed again, and
messages after non-ASCII text on a line whose comment changes (columns count code points, not UTF-16
units).

A moved later command with "Try this" suggestions (`simp?` and the hint of a deprecated name) is
reused, and its "Try this" edit ranges in the info tree and the editor ranges in its message widgets
are those of a fresh run.

Gates: an error in the changed command (also when the change is in its trailing whitespace),
`set_option pp.sorrySource true in`, a message whose text holds `⟨LINE, COL⟩`, `LINE:COL` or
`line := ` text (also a tactic's message, which later snapshots of the proof hold as reported
copies), a comment edit inside a command whose message is not fixed text, a suggestion on the line
whose columns change, a term with a panic position (`panicWithPos`, no `panic!` syntax), a panel
widget (`#widget`), and a trailing comment that becomes unterminated (the same tokens, other parse
errors) are elaborated again. An edit while the old run is still elaborating (a proof that
sleeps) gives the same result as a fresh run and does not hang. With the option off, a comment edit
above the imports imports again.

Reuse is checked by object identity of the info state in the commands' `cmdState`, which moving
keeps, while the old and the new snapshot trees are both alive.
-/

def base : String :=
  "def f (n : Nat) : Nat := n + 1\n\
  \n\
  theorem t1 : f 1 = 2 := by\n  \
    simp [f]\n\
  \n\
  #check f\n\
  \n\
  example : f 2 = 4 := rfl\n\
  \n\
  theorem t2 (p q : Prop) (hp : p) (hq : q) : p ∧ q := by\n  \
    constructor\n  \
    · exact hp\n  \
    · exact hq\n\
  \n\
  #check t2\n"

/-- `base` with a header whose import gives a deprecation warning. -/
def withHeader : String :=
  "import Lean.Data.RBMap\n\n" ++ base

/-- `withHeader` with the directive that turns off the deprecation warning of the last import. -/
def withHeaderIgnore : String :=
  "import Lean.Data.RBMap -- deprecated_module: ignore\n\n" ++ base

/-- A warning at the start of `done`, which follows `<;>` with no whitespace (line 4, column 13). -/
def noSpace : String :=
  "set_option linter.extra.unreachableTactic true\n\n\
  theorem u1 : True := by\n  \
    trivial <;>done\n\n\
  #check u1\n"

/--
`base` and a line with non-ASCII text (`𝔸` is one code point, two UTF-16 units) before and after a
comment, and then a fixed-text message (`#print` of a string) on that line, whose column changes when
the comment changes.
-/
def unicode : String :=
  base ++ "\ndef k := \"𝔸é\" /- c -/ /- 𝔸 é -/ #print \"𝔸 k\"\n#check k\n"

/-- `withHeader` with a misspelled directive, which does not turn off the warning. -/
def withHeaderIgnor : String :=
  "import Lean.Data.RBMap -- deprecated_module: ignor\n\n" ++ base

/-- `base` and a command that prints the source position of a `sorry`. -/
def sorrySource : String :=
  base ++ "\nset_option pp.sorrySource true in\n#check (sorry : Nat)\n"

/-- `base` and a message whose text is `s`, which looks like a printed position. -/
def posText (s : String) : String :=
  base ++ s!"\n#check \"{s}\"\n"

/--
`base` and a message of a tactic whose text looks like a printed position (a deprecation warning):
the tactic's snapshot shows it, and the later snapshots of the proof hold reported copies of it.
-/
def posTactic : String :=
  base ++ "\n@[deprecated \"see 12:3\" (since := \"2024-01-01\")] theorem dep : True := trivial\n\
  theorem tr : True := by\n  exact dep\n"

/-- `base` and a proof that sleeps for 2 s. -/
def slow : String :=
  base ++ "\ntheorem slow : True := by\n  sleep 2000\n  trivial\n\n#check slow\n"

def gated : String :=
  base ++ "\n#eval f 1\n\ntheorem t3 : f 0 = 1 := rfl\n"

/-- A deprecated theorem, two comment lines, and a proof whose first tactic uses it. -/
def staleLines : String :=
  "@[deprecated \"d\" (since := \"2024-01-01\")] theorem dep : True := trivial\n\
  -- a\n\
  -- b\n\
  theorem t : True := by\n  \
    have := dep\n  \
    trivial\n"

/-- `staleLines` with one comment line that has a typo. -/
def staleTypo : String :=
  "@[deprecated \"d\" (since := \"2024-01-01\")] theorem dep : True := trivial\n\
  -- a typoo\n\
  theorem t : True := by\n  \
    have := dep\n  \
    trivial\n"

/--
A section with an attribute and `variable`s. `k`'s type is ambiguous after `open A`, so each later
use elaborates it to a `sorry` labeled with the position of the binder.
-/
def sectionVars : String :=
  "namespace A\ndef T := Nat\nend A\n\ndef T := Nat\n\n\
  @[expose] section\n\
  variable (k : T) (n : Nat)\n\n\
  open A\n\n\
  theorem u : n = n := rfl\n"

/-- Commands after `sectionVars` that print the binder's position and give an error. -/
def sectionVarsUses : String :=
  "\nset_option pp.sorrySource true in\nexample : k = k := by done\n\n\
  theorem bad : n = n + 1 := rfl\nend\n"

/-- A definition with a labeled `sorry`, with `opt` before it. -/
def sorryDef (opt : String) : String :=
  s!"def other := 1\n\n{opt}def sv : Nat := sorry\n\ndef after := 2\n"

/-- A command that prints the position of `sv`'s `sorry`. -/
def sorryUse : String :=
  "\nset_option pp.sorrySource true in\nexample : sv = 0 := by unfold sv; done\n"

/--
A proof with two comment lines between a `grind` step, which gives a fixed-text warning, and the
steps before it.
-/
def proofComment : String :=
  "set_option grind.warning true\n\n\
  theorem t : True ∧ True := by\n  \
    refine ⟨?_, ?_⟩\n  \
    -- a\n  \
    -- b\n  \
    grind\n  \
    trivial\n"

/-- A delta-derived instance, whose declaration range no info tree binder names. -/
def derived : String :=
  "def other := 1\n\ndef D := Nat\nderiving Inhabited\n\ntheorem u : True := trivial\n"

/--
Two "Try this" suggestions after a command: `simp?`'s, and the hint of a deprecated name, whose
messages hold widgets with editor ranges.
-/
def tryThis : String :=
  "def other := 1\n\n\
  example : 1 + 1 = 2 := by simp?\n\n\
  theorem new : True := trivial\n\
  @[deprecated new (since := \"2024-01-01\")] theorem old : True := trivial\n\
  example : True := old\n"

/-- A `#check` whose message (a term) is not fixed text, before another command. -/
def termMsg : String :=
  "def other := 1\n\n#check (other + 1)\n#check other\n"

/-- A `simp?` suggestion on the line of a comment before it. -/
def sameLineHint : String :=
  "def other := 1\n\n/- c -/ example : 1 + 1 = 2 := by simp?\n#check other\n"

/-- A term with a panic position, without `panic!` syntax. -/
def panicPos : String :=
  "def other := 1\n\ndef g : Nat := panicWithPos \"M\" 1 2 \"x\"\n#check other\n"

/-- A panel widget. -/
def panelWidget : String :=
  "import Lean\nopen Lean Widget\n\n\
  @[widget_module] def W : Widget.Module where javascript := \"\"\n\n\
  #widget W\n#check 1\n"

/-- A last command whose trailing line comment can become an unterminated comment. -/
def lastComment : String :=
  "def other := 1\n\n#check other -- x"

/-- Replaces the first occurrence of `a` in `text` by `b`, and returns the new text and the byte
position of the change. -/
def replaceFirst (text a b : String) : String × String.Pos.Raw :=
  match text.splitOn a with
  | pre :: rest => (pre ++ b ++ a.intercalate rest, ⟨pre.utf8ByteSize⟩)
  | [] => (text, 0)

/-- Inserts `s` before the first occurrence of `before` in `text`, and returns the new text and the
byte position of the insertion. -/
def insertBefore (text before s : String) : String × String.Pos.Raw :=
  match text.splitOn before with
  | pre :: rest => (pre ++ s ++ before ++ before.intercalate rest, ⟨pre.utf8ByteSize⟩)
  | [] => (text, 0)

/-- The messages of a snapshot tree, with their start and end positions. -/
def treeMsgs (t : SnapshotTree) : BaseIO (Array String) := do
  let msgs := t.getAll.foldl (fun acc s => acc ++ s.diagnostics.msgLog.toArray) #[]
  let msgs := msgs.filter fun m => !m.isSilent && !m.data.hasTag (· == `trace)
  msgs.mapM fun m => return s!"{m.pos}-{m.endPos}: {(← m.toString).trimAsciiEnd}"

/-- Waits for every task of a snapshot tree. -/
partial def waitAll (t : SnapshotTree) : IO Unit := do
  for c in t.children do
    waitAll (← IO.wait c.task)

partial def countImportNodes : Elab.InfoTree → Nat
  | .context _ t => countImportNodes t
  | .node i cs =>
    let here := match i with
      | .ofCommandInfo ci => if ci.elaborator == `import then 1 else 0
      | _ => 0
    cs.foldl (fun n c => n + countImportNodes c) here
  | .hole _ => 0

def treeImportNodes (t : SnapshotTree) : Nat :=
  t.getAll.foldl (fun n s => n + (s.infoTree?.map countImportNodes).getD 0) 0

/--
The source range of each info node (and of a macro expansion's output) in a snapshot tree, sorted:
what hover and references read. A tactic snapshot's info tree is also part of the command's info
tree, so shared nodes are listed once per tree that holds them.
-/
partial def treeInfo (t : SnapshotTree) : Array String :=
  (t.getAll.foldl (fun acc s => (s.infoTree?.map (go acc)).getD acc) #[]).qsort (· < ·)
where
  range (stx : Syntax) : String :=
    match stx.getRange? with
    | some r => s!"{r.start.byteIdx}-{r.stop.byteIdx}"
    | none => "none"
  go (acc : Array String) : Elab.InfoTree → Array String
    | .context _ t => go acc t
    | .node i cs =>
      let here := match i with
        | .ofMacroExpansionInfo m => s!"{i.stx.getKind} {range m.stx} => {range m.output}"
        | _ => s!"{i.stx.getKind} {range i.stx}"
      cs.foldl go (acc.push here)
    | .hole _ => acc

structure Cmd where
  /-- Address of the info state of the command's resulting elaboration state. -/
  state : USize
  pos : String.Pos.Raw
  tailPos : String.Pos.Raw

unsafe def cmdsOf (snap : InitialSnapshot) : Array Cmd :=
  (foldCmdSnaps? snap #[] fun acc c =>
    acc.push { state := ptrAddrUnsafe c.elabSnap.resultSnap.get.cmdState.infoState
               pos := c.stx.getPos?.getD 0, tailPos := c.stx.getTailPos?.getD 0 }).getD #[]

/-- The declaration ranges of `n` after the last command, as go to definition finds them. -/
def declRanges (snap : InitialSnapshot) (n : Name) : IO String := do
  let some st := waitForFinalCmdState? snap | throw <| .userError "no final command state"
  let ctx : Core.Context := { fileName := "Test.lean", fileMap := default }
  let (r, _) ← (findDeclarationRanges? n : CoreM _).toIO ctx { env := st.env }
  return toString (repr r)

/-- The `range` values that a JSON value holds. -/
partial def jsonRanges : Json → Array String
  | .obj kvs => kvs.foldl (init := #[]) fun acc k v =>
    if k == "range" then acc.push v.compress else acc ++ jsonRanges v
  | .arr vs => vs.foldl (· ++ jsonRanges ·) #[]
  | _ => #[]

/-- The `range` values in the props of the widgets of a message. -/
partial def widgetRanges : MessageData → Array String
  | .ofWidget wi alt => jsonRanges (wi.props.run' {}) ++ widgetRanges alt
  | .withContext _ m | .withNamingContext _ m | .nest _ m | .group m | .tagged _ m
  | .ofOriginatingSyntax _ m => widgetRanges m
  | .compose a b => widgetRanges a ++ widgetRanges b
  | .trace _ m cs => cs.foldl (· ++ widgetRanges ·) (widgetRanges m)
  | _ => #[]

/-- The edit ranges of the "Try this" code actions of an info tree. -/
partial def tryThisRanges : Elab.InfoTree → Array String
  | .context _ t => tryThisRanges t
  | .node i cs =>
    let here := match i with
      | .ofCustomInfo ci => match ci.value.get? Meta.Tactic.TryThis.TryThisInfo with
        | some t => #[(toJson t.edit.range).compress]
        | none => #[]
      | _ => #[]
    cs.foldl (· ++ tryThisRanges ·) here
  | .hole _ => #[]

/-- The "Try this" edit ranges in the info trees and the editor ranges in the message widgets of a
snapshot tree. -/
def suggestionRanges (snap : InitialSnapshot) : Array String × Array String :=
  let snaps := (toSnapshotTree snap).getAll
  (snaps.foldl (fun acc s => acc ++ (s.infoTree?.map tryThisRanges).getD #[]) #[],
    snaps.foldl (init := #[]) fun acc s =>
      s.diagnostics.msgLog.toArray.foldl (· ++ widgetRanges ·.data) acc)

structure Processor where
  step : Parser.InputContext → BaseIO InitialSnapshot
  /-- Number of header processings (imports) so far. -/
  imports : IO.Ref Nat
  reuse : Bool

unsafe def mkProcessor (reuse : Bool) : BaseIO Processor := do
  -- `weak.`: the option is set like `-Dweak.server.reuseMovedPositions=true`, which a toolchain
  -- without the option ignores
  let opts : Options := if reuse then
      ({} : Options).set `weak.server.reuseMovedPositions "true"
    else {}
  let opts := Elab.async.set opts true
  let opts := Elab.inServer.set opts true
  let imports ← IO.mkRef 0
  let step ← mkIncrementalProcessor <| process fun stx => do
    imports.modify (· + 1)
    -- each import resets the flag (`withImporting`)
    enableInitializersExecution
    return .ok { mainModuleName := `Test, isModule := stx.isModule, imports := stx.imports, opts }
  return { step, imports, reuse }

/-- What one run of a processor on a text left in the snapshot tree. The snapshot is kept so that
the addresses of its elaboration states stay valid. -/
structure Tree where
  snap : InitialSnapshot
  msgs : Array String
  importNodes : Nat
  info : Array String

unsafe def runTree (p : Processor) (text : String) : IO Tree := do
  let snap ← p.step (Parser.mkInputContext text "Test.lean")
  let tree := toSnapshotTree snap
  waitAll tree
  let msgs ← treeMsgs tree
  if (cmdsOf snap).isEmpty then
    throw <| .userError s!"header failed: {msgs}"
  return { snap, msgs, importNodes := treeImportNodes tree, info := treeInfo tree }

/-- One incremental run of `p` on `text`, a fresh run on `text`, and the imports of `p` so far. -/
structure Run where
  inc : Tree
  fresh : Tree
  imports : Nat

unsafe def runText (p : Processor) (text : String) : IO Run := do
  let inc ← runTree p text
  let fresh ← runTree (← mkProcessor p.reuse) text
  return { inc, fresh, imports := ← p.imports.get }

/-- The addresses of the elaboration states that `snap` has finished so far, without waiting. -/
unsafe def finishedStates (snap : InitialSnapshot) : BaseIO (Array USize) := do
  let some parsed := snap.result? | return #[]
  let some processed ← parsed.processedSnap.get? | return #[]
  let some hps := processed.result? | return #[]
  go hps.firstCmdSnap #[]
where
  go (t : SnapshotTask CommandParsedSnapshot) (acc : Array USize) : BaseIO (Array USize) := do
    let some c ← t.get? | return acc
    let acc := match ← c.elabSnap.resultSnap.get? with
      | some r => acc.push (ptrAddrUnsafe r.cmdState.infoState)
      | none => acc
    match c.nextCmdSnap? with
    | some n => go n acc
    | none => return acc

/-- Whether the snapshot tree of `new` holds the same messages and info as a fresh run. -/
def checkFresh (name : String) (new : Run) : Array String := Id.run do
  let mut errs := #[]
  if new.inc.msgs != new.fresh.msgs then
    errs := errs.push s!"{name}: messages differ from a fresh elaboration\n  \
      incremental: {new.inc.msgs}\n  fresh:       {new.fresh.msgs}"
  if new.inc.importNodes != new.fresh.importNodes then
    errs := errs.push s!"{name}: {new.inc.importNodes} import info nodes, fresh has \
      {new.fresh.importNodes}"
  if new.inc.info != new.fresh.info then
    let missing := new.fresh.info.filter (!new.inc.info.contains ·)
    let extra := new.inc.info.filter (!new.fresh.info.contains ·)
    errs := errs.push s!"{name}: info trees differ from a fresh elaboration ({new.inc.info.size} \
      against {new.fresh.info.size} nodes)\n  only fresh: {missing.toList.take 10}\n  \
      only incremental: {extra.toList.take 10}"
  errs

/--
The failures found in one edit: from `old` to the new text whose change is at `edit`, which adds
`added` commands.
-/
unsafe def check (name : String) (old new : Run) (edit : String.Pos.Raw)
    (expectReuse : Cmd → Option Bool) (added := 0) : Array String := Id.run do
  let mut errs := checkFresh name new
  -- both snapshot trees are alive here, so equal addresses mean the same object
  let oldCmds := cmdsOf old.inc.snap
  let newCmds := cmdsOf new.inc.snap
  if oldCmds.size + added != newCmds.size then
    errs := errs.push s!"{name}: {oldCmds.size} commands before the edit, {newCmds.size} after"
  let oldStates := oldCmds.map (·.state)
  if !newCmds.any (expectReuse · |>.isSome) then
    errs := errs.push s!"{name}: no command to check"
  for c in newCmds do
    if let some expected := expectReuse c then
      let reused := oldStates.contains c.state
      if reused != expected then
        errs := errs.push s!"{name}: command at byte {c.pos} (edit at byte {edit}) was \
          {if reused then "" else "not "}reused"
  errs

/-- A failure unless `run` has exactly `n` messages, so that comparing messages is not vacuous. -/
def expectMsgs (name : String) (run : Run) (n : Nat) : Array String :=
  if run.inc.msgs.size == n then #[] else #[s!"{name}: expected {n} messages, got {run.inc.msgs}"]

unsafe def main : IO UInt32 := do
  let mut errs := #[]
  -- Option on. Each edit is made against the base text, and the base text is then restored.
  let processor ← mkProcessor true
  let r0 ← runText processor base
  -- two `#check` outputs and the `rfl` error
  errs := errs ++ expectMsgs "base" r0 3
  -- between commands: every command after the insertion is reused
  let (between, p) := insertBefore base "theorem t1" "-- a comment between commands\n"
  let r1 ← runText processor between
  errs := errs ++ check "between" r0 r1 p fun c => if p ≤ c.pos then some true else none
  -- go to definition: the moved declaration ranges are those of a fresh run
  for n in [`t1, `t2] do
    let inc ← declRanges r1.inc.snap n
    let fresh ← declRanges r1.fresh.snap n
    if inc != fresh then
      errs := errs.push s!"declaration ranges of {n} after a comment edit: {inc}, fresh: {fresh}"
    if inc == (← declRanges r0.inc.snap n) then
      errs := errs.push s!"declaration ranges of {n} did not move: {inc}"
  -- a real edit after a comment edit: every command before it is reused, and the edited command
  -- and every later one are elaborated again
  let (real, pr) := replaceFirst between "f 2 = 4 := rfl" "f 2 = 5 := rfl"
  let r2 ← runText processor real
  errs := errs ++ check "real edit after comment edit" r1 r2 pr fun c => some (c.tailPos ≤ pr)
  -- a real edit after a comment edit and after a command with an error (the `rfl` example, which
  -- may hold a labeled `sorry`): elaborated again from that command
  let _ ← runText processor base
  let r1 ← runText processor between
  let exBetween := (between.splitOn "example : f 2").head!.utf8ByteSize
  let (realAfter, pa) := replaceFirst between "· exact hq" "· assumption"
  let r2 ← runText processor realAfter
  errs := errs ++ check "real edit after an error" r1 r2 pa fun c => some (c.pos.byteIdx < exBetween)
  let r0 ← runText processor base
  -- inside a proof: the changed command and every later command are reused
  let (inside, p) := insertBefore base "  · exact hp" "  -- a comment inside a proof\n"
  let r2 ← runText processor inside
  errs := errs ++ check "inside proof" r0 r2 p fun c => if p < c.tailPos then some true else none
  -- two comment edits in a row: the declaration ranges are those of a fresh run, and a real edit
  -- after them gives the messages of a fresh run
  let processor ← mkProcessor true
  let _ ← runText processor base
  let m1 ← runText processor between
  -- (not in the trailing whitespace of the `rfl` error, which is a gate of its own)
  let (two, p) := insertBefore between "#check t2" "-- another comment\n"
  let m2 ← runText processor two
  errs := errs ++ check "second comment edit" m1 m2 p fun c => if p ≤ c.pos then some true else none
  for n in [`t1, `t2] do
    let inc ← declRanges m2.inc.snap n
    let fresh ← declRanges m2.fresh.snap n
    if inc != fresh then
      errs := errs.push s!"declaration ranges of {n} after two comment edits: {inc}, fresh: {fresh}"
  let exTwo := (two.splitOn "example : f 2").head!.utf8ByteSize
  let (twoReal, p) := replaceFirst two "· exact hq" "· assumption"
  let m3 ← runText processor twoReal
  errs := errs ++ check "real edit after two comment edits" m2 m3 p fun c =>
    some (c.pos.byteIdx < exTwo)
  -- a revert to the text before a comment edit removes the marks of the moved commands: a real
  -- edit after the `rfl` error then reuses every command before it
  let processor ← mkProcessor true
  let _ ← runText processor base
  let v1 ← runText processor between
  let (_, p) := insertBefore base "theorem t1" ""
  let v2 ← runText processor base
  errs := errs ++ check "revert" v1 v2 p fun _ => some true
  let (revReal, p) := replaceFirst base "· exact hq" "· assumption"
  let v3 ← runText processor revReal
  errs := errs ++ check "real edit after a revert" v2 v3 p fun c => some (c.tailPos ≤ p)
  -- an edit above a command keeps its byte offset but changes its line, then a real edit in it: the
  -- warning of its first tactic, which incremental elaboration could reuse, is on the new line
  let typo1 := (insertBefore staleTypo "-- a typoo" "\n").1
  for (name, texts) in [("same-length edit that removes a line",
        [staleLines, (replaceFirst staleLines "-- a\n-- b" "-- a -- b").1]),
      ("blank line, then a shorter comment", [staleTypo, typo1, (replaceFirst typo1 "typoo" "typo").1])] do
    let processor ← mkProcessor true
    for text in texts do
      errs := errs ++ checkFresh name (← runText processor text)
    let r ← runText processor (replaceFirst texts.getLast! "  trivial" "  exact trivial").1
    errs := errs ++ checkFresh s!"{name}, then a proof edit" r ++
      expectMsgs s!"{name}, then a proof edit" r 1
  -- a same-length comment edit inside a proof that removes a line, then a real edit later in the
  -- proof: the `grind` warning, which incremental elaboration could reuse, is on the new line
  let inProof := (replaceFirst proofComment "-- a\n  -- b" "-- a --- bb").1
  for reuse in [true, false] do
    let name := s!"same-length edit inside a proof, option {if reuse then "on" else "off"}"
    let processor ← mkProcessor reuse
    let _ ← runText processor proofComment
    errs := errs ++ checkFresh name (← runText processor inProof)
    let r ← runText processor (replaceFirst inProof "  trivial" "  exact trivial").1
    errs := errs ++ checkFresh s!"{name}, then a proof edit" r ++
      expectMsgs s!"{name}, then a proof edit" r 1
  -- a moved delta-derived instance: its declaration ranges are those of a fresh run
  let processor ← mkProcessor true
  let d0 ← runText processor derived
  let (der, p) := insertBefore derived "def other" "-- a comment above\n"
  let d1 ← runText processor der
  errs := errs ++ check "moved derived instance" d0 d1 p fun _ => some true
  let inc ← declRanges d1.inc.snap `instInhabitedD
  let fresh ← declRanges d1.fresh.snap `instInhabitedD
  if inc != fresh || fresh == "none" || inc == (← declRanges d0.inc.snap `instInhabitedD) then
    errs := errs.push s!"declaration ranges of instInhabitedD after a comment edit: {inc}, fresh: {fresh}"
  -- a moved section with an attribute and `variable`s: a later command prints the binder's new
  -- position, and a later error has the position of a fresh run
  let processor ← mkProcessor true
  let s0 ← runText processor sectionVars
  let (sec, p) := insertBefore sectionVars "@[expose]" "-- a comment above the section\n"
  let s1 ← runText processor sec
  errs := errs ++ check "moved section" s0 s1 p fun c => if p ≤ c.pos then some true else none
  let s2 ← runText processor (sec ++ sectionVarsUses)
  errs := errs ++ checkFresh "moved section, then uses" s2
  unless s2.inc.msgs.any (·.contains "Test:9:14") do
    errs := errs.push s!"moved section, then uses: expected the binder at Test:9:14, got {s2.inc.msgs}"
  -- a labeled `sorry` marks the moved command and every later one, with a `sorry` warning and with
  -- `warn.sorry` off: a later command that prints its position elaborates again from that command
  for (name, opt) in [("sorry warning", ""), ("warn.sorry false in", "set_option warn.sorry false in\n"),
      ("warn.sorry false in the scope", "set_option warn.sorry false\n")] do
    let processor ← mkProcessor true
    let text := sorryDef opt
    let w0 ← runText processor text
    let (moved, p) := insertBefore text "def other" "-- a comment above\n"
    let w1 ← runText processor moved
    errs := errs ++ check s!"{name}, comment edit" w0 w1 p fun _ => some true
    -- (the marks are checked by the reuse of the next edit)
    let svPos := (moved.splitOn (opt ++ "def sv")).head!.utf8ByteSize
    let w2 ← runText processor (moved ++ sorryUse)
    errs := errs ++ check s!"{name}, then a use" w1 w2 ⟨moved.utf8ByteSize⟩ (added := 1) fun c =>
      if c.pos.byteIdx < svPos then some true else if c.pos.byteIdx == svPos then some false else none
  -- a deleted comment line: every later command is reused
  let processor ← mkProcessor true
  let d0 ← runText processor between
  let (_, p) := insertBefore base "theorem t1" ""
  let d1 ← runText processor base
  errs := errs ++ check "deleted comment line" d0 d1 p fun c => if p ≤ c.pos then some true else none
  -- gated: an insertion before an `#eval` does not reuse the `#eval` (the insertion is not in the
  -- trailing whitespace of the `rfl` error, which is a gate of its own)
  let g0 ← runText processor gated
  let (gatedIns, p) := insertBefore gated "#check f" "-- a comment before an #eval\n"
  let g1 ← runText processor gatedIns
  let evalPos := (gatedIns.splitOn "\n#eval f 1").head!.utf8ByteSize + 1
  errs := errs ++ check "gated" g0 g1 p fun c =>
    if c.pos.byteIdx == evalPos then some false else none
  -- a warning exactly at an insertion point between two tokens is not moved: the command is
  -- elaborated again, and the warning gets the new column (13 before, 14 after)
  let n0 ← runText processor noSpace
  unless n0.inc.msgs.any (·.startsWith "⟨4, 13⟩-") do
    errs := errs.push s!"<;>done: expected a warning at ⟨4, 13⟩, got {n0.inc.msgs}"
  let (spaced, p) := replaceFirst noSpace "<;>done" "<;> done"
  let n1 ← runText processor spaced
  errs := errs ++ check "<;> done" n0 n1 p fun c =>
    if c.pos < p && p < c.tailPos then some false else none
  unless n1.inc.msgs.any (·.startsWith "⟨4, 14⟩-") do
    errs := errs.push s!"<;> done: expected the warning at ⟨4, 14⟩, got {n1.inc.msgs}"
  -- comment edits on a line with non-ASCII text before a message: the `#print` and every later
  -- command are reused, and the message columns count code points
  let u0 ← runText processor unicode
  errs := errs ++ expectMsgs "unicode" u0 5
  let (u, p) := replaceFirst unicode "/- c -/" "/- c𝔸é -/"
  let u1 ← runText processor u
  errs := errs ++ check "non-ASCII comment edit" u0 u1 p fun c =>
    if p < c.pos then some true else none
  let (u', p) := replaceFirst unicode "/- c -/" "/- cc -/"
  let u2 ← runText processor u'
  errs := errs ++ check "ASCII comment edit before non-ASCII" u1 u2 p fun c =>
    if p < c.pos then some true else none
  -- header: a comment line at byte 0 of a file that starts with `import` reuses the header and
  -- every command
  let processor ← mkProcessor true
  let h0 ← runText processor withHeader
  unless h0.inc.msgs.any (·.contains "deprecated") && h0.inc.importNodes == 1 do
    errs := errs.push s!"header: expected a deprecation warning and 1 import info node, got \
      {h0.inc.msgs}, {h0.inc.importNodes}"
  let h1 ← runText processor ("-- a comment above the imports\n" ++ withHeader)
  errs := errs ++ check "header at byte 0" h0 h1 0 fun _ => some true
  if h1.imports != h0.imports then
    errs := errs.push s!"header at byte 0: imported again"
  -- an edit below the header keeps the header's messages and info tree
  let h2 ← runText processor withHeader
  let (below, pb) := insertBefore withHeader "theorem t1" "-- a comment below the header\n"
  let h3 ← runText processor below
  errs := errs ++ check "below header, option on" h2 h3 pb fun c =>
    if pb ≤ c.pos then some true else none
  -- Option off: no command after the insertion is reused.
  let processor ← mkProcessor false
  let r0 ← runText processor base
  let (between, p) := insertBefore base "theorem t1" "-- a comment between commands\n"
  let r1 ← runText processor between
  errs := errs ++ check "option off" r0 r1 p fun c => if p ≤ c.pos then some false else none
  -- an edit below the header keeps the header's messages and info tree, also with the option off
  let processor ← mkProcessor false
  let h0 ← runText processor withHeader
  let h1 ← runText processor below
  errs := errs ++ check "below header, option off" h0 h1 pb fun c =>
    if pb ≤ c.pos then some false else none
  -- a `deprecated_module: ignore` directive after the last import, added and removed again
  for reuse in [false, true] do
    let processor ← mkProcessor reuse
    let name := s!"deprecated_module directive, option {if reuse then "on" else "off"}"
    let i0 ← runText processor withHeader
    errs := errs ++ checkFresh s!"{name}, start" i0
    let i1 ← runText processor withHeaderIgnore
    errs := errs ++ checkFresh s!"{name}, added" i1
    if i1.fresh.msgs.any (·.contains "deprecated") then
      errs := errs.push s!"{name}: the directive does not turn off the warning"
    let i2 ← runText processor withHeader
    errs := errs ++ checkFresh s!"{name}, removed" i2
    unless i2.fresh.msgs.any (·.contains "deprecated") do
      errs := errs.push s!"{name}: no deprecation warning without the directive"
  -- a misspelled directive corrected to `deprecated_module: ignore`, option off and on
  for reuse in [false, true] do
    let processor ← mkProcessor reuse
    let name := s!"deprecated_module: ignor -> ignore, option {if reuse then "on" else "off"}"
    let i0 ← runText processor withHeaderIgnor
    errs := errs ++ checkFresh s!"{name}, start" i0
    unless i0.fresh.msgs.any (·.contains "deprecated") do
      errs := errs.push s!"{name}: the misspelled directive turns off the warning"
    let i1 ← runText processor withHeaderIgnore
    errs := errs ++ checkFresh s!"{name}, corrected" i1
  -- gates, option on: each command named below is elaborated again
  let processor ← mkProcessor true
  let exPos : String.Pos.Raw := ⟨(base.splitOn "example : f 2").head!.utf8ByteSize⟩
  -- an error in the changed command: an edit inside it, and an edit in its trailing whitespace
  let e0 ← runText processor base
  let (errIn, p) := replaceFirst base "f 2 = 4 := rfl" "f 2 = 4 := /- c -/ rfl"
  let e1 ← runText processor errIn
  errs := errs ++ check "error in the changed command" e0 e1 p fun c =>
    if exPos ≤ c.pos then some false else none
  let e0 ← runText processor base
  let (errTrail, p) := insertBefore base "theorem t2" "-- after an error\n"
  let e1 ← runText processor errTrail
  errs := errs ++ check "edit in the trailing whitespace of an error" e0 e1 p fun c =>
    if exPos ≤ c.pos then some false else none
  -- `pp.sorrySource` and a message text that looks like a position, after a comment line between
  -- the first commands
  for (name, text, n) in [("pp.sorrySource", sorrySource, 4), ("⟨1, 2⟩ text", posText "⟨1, 2⟩", 4),
      ("12:3 text", posText "12:3", 4), ("line := text", posText "line := 5", 4),
      ("12:3 text of a tactic", posTactic, 4)] do
    let g0 ← runText processor text
    errs := errs ++ expectMsgs name g0 n
    let lastPos : String.Pos.Raw := ⟨base.utf8ByteSize⟩
    let (moved, p) := insertBefore text "theorem t1" "-- a comment between commands\n"
    let g1 ← runText processor moved
    errs := errs ++ check name g0 g1 p fun c => if lastPos < c.pos then some false else none
  -- a later command with "Try this" suggestions, moved by a comment edit above it: reused, and its
  -- "Try this" edit ranges and message widget ranges are those of a fresh run
  let t0 ← runText processor tryThis
  errs := errs ++ expectMsgs "Try this" t0 2
  let (tt, p) := insertBefore tryThis "def other" "-- a comment above\n"
  let t1 ← runText processor tt
  errs := errs ++ check "Try this" t0 t1 p fun _ => some true
  let (incInfo, incMsg) := suggestionRanges t1.inc.snap
  let (freshInfo, freshMsg) := suggestionRanges t1.fresh.snap
  if incInfo != freshInfo || incMsg != freshMsg || incInfo.size != 3 || incMsg.size != 2 ||
      (incInfo, incMsg) == suggestionRanges t0.inc.snap then
    errs := errs.push s!"Try this: ranges {incInfo}, {incMsg}, fresh: {freshInfo}, {freshMsg}"
  -- a comment edit inside a command whose message is not fixed text
  let t0 ← runText processor termMsg
  let (inTerm, p) := replaceFirst termMsg "(other + 1)" "(other /- c -/ + 1)"
  let t1 ← runText processor inTerm
  errs := errs ++ check "comment inside a term message" t0 t1 p fun c =>
    if c.pos < p then none else some false
  -- a suggestion on the line whose columns change
  let t0 ← runText processor sameLineHint
  let (wider, p) := replaceFirst sameLineHint "/- c -/" "/- cc -/"
  let t1 ← runText processor wider
  errs := errs ++ expectMsgs "suggestion on the changed line" t1 2
  errs := errs ++ check "suggestion on the changed line" t0 t1 p fun c =>
    if p < c.pos then some false else none
  -- a term with a panic position, and a panel widget, after a comment edit above them
  for (name, text, above, at_) in [("panic position", panicPos, "def other", "def g"),
      ("panel widget", panelWidget, "@[widget", "#widget")] do
    let t0 ← runText processor text
    let (moved, p) := insertBefore text above "-- a comment above\n"
    let atPos := (moved.splitOn at_).head!.utf8ByteSize
    let t1 ← runText processor moved
    errs := errs ++ check name t0 t1 p fun c => if c.pos.byteIdx == atPos then some false else none
  -- a trailing line comment edited to an unterminated comment: the tokens are the same, the parse
  -- errors differ
  let t0 ← runText processor lastComment
  let (unterm, p) := replaceFirst lastComment "-- x" "/- x"
  let t1 ← runText processor unterm
  errs := errs ++ expectMsgs "unterminated comment" t1 2
  let checkPos := (lastComment.splitOn "#check").head!.utf8ByteSize
  errs := errs ++ check "unterminated comment" t0 t1 p fun c =>
    if c.pos.byteIdx == checkPos then some false else none
  -- an edit while the old run is still elaborating the sleeping proof: fed at once, and again
  -- after the header is processed; no hang, the result equals a fresh run, and the sleeping
  -- theorem is elaborated again
  let slowPos : String.Pos.Raw := ⟨base.utf8ByteSize⟩
  for waitHeader in [false, true] do
    let processor ← mkProcessor true
    let name := s!"edit while elaborating{if waitHeader then " (after the header)" else ""}"
    let old ← processor.step (Parser.mkInputContext slow "Test.lean")
    if waitHeader then
      if let some parsed := old.result? then
        let _ ← IO.wait parsed.processedSnap.task
    let (moved, p) := insertBefore slow "theorem t1" "-- a comment between commands\n"
    let t0 ← IO.monoMsNow
    let new ← runTree processor moved
    let ms := (← IO.monoMsNow) - t0
    let fresh ← runTree (← mkProcessor true) moved
    errs := errs ++ checkFresh name { inc := new, fresh, imports := 0 }
    if ms > 60000 then
      errs := errs.push s!"{name}: took {ms} ms"
    let oldStates ← finishedStates old
    for c in cmdsOf new.snap do
      if slowPos < c.pos && oldStates.contains c.state then
        errs := errs.push s!"{name}: command at byte {c.pos} (edit at byte {p}) was reused"
  -- option off: a comment edit above the imports imports again and reuses no command
  let processor ← mkProcessor false
  let c0 ← runText processor ("/- header comment -/\n" ++ withHeader)
  let c1 ← runText processor ("/- header comment, longer -/\n" ++ withHeader)
  errs := errs ++ check "header comment edit, option off" c0 c1 0 fun _ => some false
  unless c1.imports == c0.imports + 1 do
    errs := errs.push s!"header comment edit, option off: {c1.imports - c0.imports} new imports"
  for e in errs do
    IO.println e
  return if errs.isEmpty then 0 else 1
