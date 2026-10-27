/-
Copyright (c) 2026 Sami Jawhar. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.

Authors: Sami Jawhar
-/
module

prelude
public import Lean.Language.Lean.Types
public import Lean.Meta.TryThis

public section

/-!
# Moving the positions of reused elaboration results

When an edit changes only whitespace and comments, every command after the edit keeps its tokens,
but its positions move. `PosShift` describes how old positions map to new positions, and the
functions here move the positions of an old command's syntax, info trees and messages, so that the
old elaboration results can be reported for the new input (see `Lean.Language.Lean.process`).

They also decide where a moved result could differ from a new elaboration of the new input, and
refuse to move it there: messages whose text can hold positions, source text or columns, and info
that holds positions as terms.
-/

namespace Lean.Language.Lean
open Lean.Elab Lean.Meta.Tactic.TryThis

/--
Reuse the elaboration of commands whose tokens did not change but whose positions moved, after an
edit of whitespace and comments only, and of the header after such an edit above the imports.
-/
register_builtin_option server.reuseMovedPositions : Bool := {
  defValue := false
  descr := "reuse the elaboration of commands whose positions moved after an edit of whitespace and \
    comments only, and move the positions of their reported messages and info trees, declaration \
    ranges and section variables; the info trees in the reused command states keep their old \
    positions (editor requests read them through `Server.Snapshots.Snapshot.infoTree`), so this is \
    meant for checking tools"
}

/--
The difference between two inputs: the old bytes `[start, oldStop)` were replaced by the new bytes
`[start, newStop)`, and all bytes outside agree.
-/
structure PosShift where
  /-- File map of the old input. -/
  oldMap    : FileMap
  /-- File map of the new input. -/
  newMap    : FileMap
  /-- First changed byte. -/
  start     : String.Pos.Raw
  /-- End of the changed bytes in the old input. -/
  oldStop   : String.Pos.Raw
  /-- End of the changed bytes in the new input. -/
  newStop   : String.Pos.Raw
  /--
  For an insertion (`start = oldStop`), what a message position equal to `start` does: `some true`
  (it stays) when only a token end can be there (no whitespace before it, whitespace after it),
  `some false` (it moves) when only a token start can be there (whitespace or the start of the input
  before it), and `none` when both can (no whitespace on either side, or the end of the input): then
  the message cannot be moved. Syntax positions know their side (`mapPos?`).
  -/
  msgStartSide? : Option Bool
  /--
  The old line of `oldStop` if the text after the change on that line moves to another column, so
  that text derived from a column (indentation of suggestions) can differ.
  -/
  colShiftLine? : Option Nat

namespace PosShift

private def isContByte (b : UInt8) : Bool := b &&& 0xC0 == 0x80

private def isWsByte (b : UInt8) : Bool := b == 32 || b == 10 || b == 9 || b == 13

/-- Computes the changed region of `newMap` against `oldMap` from their common prefix and suffix. -/
def compute (oldMap newMap : FileMap) : PosShift := Id.run do
  let o := oldMap.source.toUTF8
  let n := newMap.source.toUTF8
  let minLen := min o.size n.size
  let mut p := 0
  while p < minLen && o[p]! == n[p]! do
    p := p + 1
  -- the common prefix ends at a character boundary of both inputs
  while p > 0 && p < o.size && isContByte o[p]! do
    p := p - 1
  let mut s := 0
  while s < minLen - p && o[o.size - 1 - s]! == n[n.size - 1 - s]! do
    s := s + 1
  while s > 0 && isContByte o[o.size - s]! do
    s := s - 1
  let oldStop : String.Pos.Raw := ⟨o.size - s⟩
  let newStop : String.Pos.Raw := ⟨n.size - s⟩
  let oldStopPos := oldMap.toPosition oldStop
  return {
    oldMap, newMap, oldStop, newStop
    start := ⟨p⟩
    msgStartSide? :=
      if p == 0 || isWsByte o[p - 1]! then some false
      else if p < o.size && isWsByte o[p]! then some true
      else none
    colShiftLine? :=
      if oldStopPos.column == (newMap.toPosition newStop).column then none else some oldStopPos.line
  }

/--
Maps an old byte position to the new input; `none` inside the changed old bytes. At an insertion
point, a position that ends something (a token end, the start of whitespace) stays (`stays`), and a
position that starts something (a token start, the end of whitespace) moves with the text after it.
-/
def mapPos? (s : PosShift) (p : String.Pos.Raw) (stays : Bool) : Option String.Pos.Raw :=
  if p < s.start || (p == s.start && (stays || s.start < s.oldStop)) then
    some p
  else if s.oldStop ≤ p then
    some ⟨p.byteIdx - s.oldStop.byteIdx + s.newStop.byteIdx⟩
  else
    none

/-- Like `mapPos?`, but maps a position inside the changed bytes to `start`. -/
def mapPos (s : PosShift) (p : String.Pos.Raw) (stays : Bool) : String.Pos.Raw :=
  s.mapPos? p stays |>.getD s.start

/-- Maps an old line and column to the new input. -/
def mapPosition? (s : PosShift) (pos : Position) (stays : Bool) : Option Position := do
  let b := s.oldMap.ofPosition pos
  guard <| s.oldMap.toPosition b == pos
  return s.newMap.toPosition (← s.mapPos? b stays)

/-- Maps an old editor position to the new input. -/
def mapLspPos? (s : PosShift) (pos : Lsp.Position) (stays : Bool) : Option Lsp.Position := do
  let b := s.oldMap.lspPosToUtf8Pos pos
  guard <| s.oldMap.utf8PosToLspPos b == pos
  return s.newMap.utf8PosToLspPos (← s.mapPos? b stays)

/-- Maps an old editor range to the new input, or keeps it if it cannot be moved. -/
def mapLspRange (s : PosShift) (r : Lsp.Range) : Lsp.Range :=
  let r'? : Option Lsp.Range := do
    return { start := ← s.mapLspPos? r.start false, «end» := ← s.mapLspPos? r.end true }
  r'?.getD r

/-- Moves every editor range that a JSON value holds under the key `range`. -/
partial def mapJsonRanges (s : PosShift) : Json → Json
  | .obj kvs => .obj <| kvs.foldl (init := {}) fun acc k v =>
    acc.insert k <|
      if k == "range" then
        match fromJson? (α := Lsp.Range) v with
        | .ok r => toJson (s.mapLspRange r)
        | .error _ => s.mapJsonRanges v
      else
        s.mapJsonRanges v
  | .arr vs => .arr (vs.map s.mapJsonRanges)
  | j => j

/-- Whether `ss` is a slice of the old input at its own positions. -/
private def isOldSlice (s : PosShift) (ss : Substring.Raw) : Bool :=
  ss.startPos ≤ ss.stopPos && ss.stopPos ≤ s.oldMap.source.rawEndPos &&
    String.Pos.Raw.substrEq ss.str ss.startPos s.oldMap.source ss.startPos
      (ss.stopPos.byteIdx - ss.startPos.byteIdx)

/--
Whether the start of a whitespace slice stays at an insertion point: the start of a trailing slice
is the end of its token, and so is the start of a non-empty leading slice (whitespace before the
first token) or of one at the start of the input; another empty leading slice sits at the start of
its token and moves with it.
-/
private def sliceStartStays (leading : Bool) (ss : Substring.Raw) : Bool :=
  !leading || ss.startPos < ss.stopPos || ss.startPos == 0

/--
Maps the positions of source info, and gives its whitespace slices the new input. Positions inside
the changed bytes map to `start`. Original info whose whitespace is no slice of the old input
(syntax from another file) stays as it is.
-/
def mapInfo (s : PosShift) : SourceInfo → SourceInfo
  | info@(.original leading pos trailing endPos) =>
    if s.isOldSlice leading && s.isOldSlice trailing then
      -- the end of an empty token (the end of input) moves with its start
      let endStays := pos < endPos
      let slice (startStays : Bool) (ss : Substring.Raw) : Substring.Raw :=
        { str := s.newMap.source, startPos := s.mapPos ss.startPos startStays
          stopPos := s.mapPos ss.stopPos false }
      .original (slice (sliceStartStays true leading) leading) (s.mapPos pos false)
        (slice endStays trailing) (s.mapPos endPos endStays)
    else
      info
  | .synthetic pos endPos canonical =>
    .synthetic (s.mapPos pos false) (s.mapPos endPos (pos < endPos)) canonical
  | .none => .none

/-- Maps an identifier's raw text, if it is a slice of the old input. -/
private def mapRawVal (s : PosShift) (ss : Substring.Raw) : Substring.Raw :=
  if s.isOldSlice ss then
    { str := s.newMap.source, startPos := s.mapPos ss.startPos false, stopPos := s.mapPos ss.stopPos true }
  else
    ss

/-- Moves all positions in `stx`. -/
partial def mapSyntax (s : PosShift) : Syntax → Syntax
  | .missing => .missing
  | .node info k args => .node (s.mapInfo info) k (args.map s.mapSyntax)
  | .atom info val => .atom (s.mapInfo info) val
  | .ident info rawVal val pre => .ident (s.mapInfo info) (s.mapRawVal rawVal) val pre

/--
Whether `new` is `old` with its positions moved: the same node kinds, atoms and identifiers, and each
old position maps to the new one.
-/
partial def syntaxMoved (s : PosShift) (old new : Syntax) : Bool :=
  match old, new with
  | .missing, .missing => true
  | .node i k as, .node i' k' as' =>
    k == k' && infoMoved i i' && as.size == as'.size &&
      (as.zip as').all fun (a, a') => s.syntaxMoved a a'
  | .atom i v, .atom i' v' => v == v' && infoMoved i i'
  | .ident i r n p, .ident i' r' n' p' => n == n' && p == p' && r == r' && infoMoved i i'
  | _, _ => false
where
  infoMoved (i i' : SourceInfo) : Bool :=
    match i, i' with
    | .original l p t e, .original l' p' t' e' =>
      s.mapPos? p false == some p' && s.mapPos? e (p < e) == some e' &&
      s.mapPos? l.startPos (sliceStartStays true l) == some l'.startPos &&
      s.mapPos? l.stopPos false == some l'.stopPos &&
      s.mapPos? t.startPos (p < e) == some t'.startPos && s.mapPos? t.stopPos false == some t'.stopPos
    | .synthetic p e c, .synthetic p' e' c' =>
      s.mapPos? p false == some p' && s.mapPos? e (p < e) == some e' && c == c'
    | .none, .none => true
    | _, _ => false

private def mapElabInfo (s : PosShift) (i : ElabInfo) : ElabInfo :=
  { i with stx := s.mapSyntax i.stx }

private def mapCompletionInfo (s : PosShift) : CompletionInfo → CompletionInfo
  | .dot ti e? => .dot { ti with toElabInfo := s.mapElabInfo ti.toElabInfo } e?
  | .id stx n dd lctx e? => .id (s.mapSyntax stx) n dd lctx e?
  | .dotId stx n lctx e? => .dotId (s.mapSyntax stx) n lctx e?
  | .fieldId stx n? lctx sn => .fieldId (s.mapSyntax stx) n? lctx sn
  | .namespaceId stx => .namespaceId (s.mapSyntax stx)
  | .option stx => .option (s.mapSyntax stx)
  | .errorName stx pid => .errorName (s.mapSyntax stx) (s.mapSyntax pid)
  | .endSection stx id? dd ns => .endSection (s.mapSyntax stx) id? dd ns
  | .tactic stx => .tactic (s.mapSyntax stx)

/-- Moves custom info: its syntax, and the edit range of a "Try this" code action. -/
private def mapCustomInfo (s : PosShift) (i : CustomInfo) : CustomInfo :=
  let value := match i.value.get? TryThisInfo with
    | some t => Dynamic.mk { t with edit.range := s.mapLspRange t.edit.range }
    | none => i.value
  { stx := s.mapSyntax i.stx, value }

/-- Moves the positions of an info node. -/
def mapInfoNode (s : PosShift) : Info → Info
  | .ofTacticInfo i => .ofTacticInfo { i with toElabInfo := s.mapElabInfo i.toElabInfo }
  | .ofTermInfo i => .ofTermInfo { i with toElabInfo := s.mapElabInfo i.toElabInfo }
  | .ofPartialTermInfo i => .ofPartialTermInfo { i with toElabInfo := s.mapElabInfo i.toElabInfo }
  | .ofCommandInfo i => .ofCommandInfo { i with toElabInfo := s.mapElabInfo i.toElabInfo }
  | .ofMacroExpansionInfo i =>
    .ofMacroExpansionInfo { i with stx := s.mapSyntax i.stx, output := s.mapSyntax i.output }
  | .ofOptionInfo i => .ofOptionInfo { i with stx := s.mapSyntax i.stx }
  | .ofErrorNameInfo i => .ofErrorNameInfo { i with stx := s.mapSyntax i.stx }
  | .ofFieldInfo i => .ofFieldInfo { i with stx := s.mapSyntax i.stx }
  | .ofCompletionInfo i => .ofCompletionInfo (s.mapCompletionInfo i)
  | .ofUserWidgetInfo i => .ofUserWidgetInfo { i with stx := s.mapSyntax i.stx }
  | .ofCustomInfo i => .ofCustomInfo (s.mapCustomInfo i)
  | .ofFVarAliasInfo i => .ofFVarAliasInfo i
  | .ofFieldRedeclInfo i => .ofFieldRedeclInfo { i with stx := s.mapSyntax i.stx }
  | .ofDelabTermInfo i =>
    .ofDelabTermInfo { i with toTermInfo := { i.toTermInfo with toElabInfo := s.mapElabInfo i.toElabInfo } }
  | .ofChoiceInfo i => .ofChoiceInfo { i with toElabInfo := s.mapElabInfo i.toElabInfo }
  | .ofChoiceResolutionInfo i => .ofChoiceResolutionInfo { i with stx := s.mapSyntax i.stx }
  | .ofDocInfo i => .ofDocInfo { i with toElabInfo := s.mapElabInfo i.toElabInfo }
  | .ofDocElabInfo i => .ofDocElabInfo { i with toElabInfo := s.mapElabInfo i.toElabInfo }

/-- Moves all positions of an info tree and gives its contexts the new file map. -/
partial def mapInfoTree (s : PosShift) : InfoTree → InfoTree
  | .context (.commandCtx ci) t => .context (.commandCtx { ci with fileMap := s.newMap }) (s.mapInfoTree t)
  | .context ci t => .context ci (s.mapInfoTree t)
  | .node i cs => .node (s.mapInfoNode i) (cs.map s.mapInfoTree)
  | .hole id => .hole id

/--
Moves a declaration range. Its UTF-16 columns come from the new file map, as in
`Elab.getDeclarationRange?`.
-/
def mapDeclarationRange (s : PosShift) (r : DeclarationRange) : DeclarationRange :=
  let pos := s.oldMap.ofPosition r.pos
  let endPos := s.oldMap.ofPosition r.endPos
  .ofStringPositions s.newMap (s.mapPos pos false) (s.mapPos endPos (pos < endPos))

/-- Moves both ranges of a declaration. -/
def mapDeclarationRanges (s : PosShift) (r : DeclarationRanges) : DeclarationRanges :=
  { range := s.mapDeclarationRange r.range, selectionRange := s.mapDeclarationRange r.selectionRange }

/--
Moves the syntax of a scope: the `variable` binders, which each later declaration elaborates again
(`Elab/Command/Scope.lean:44-52`), so that their messages and info point into them, and the section
attributes. The other fields hold names and options.
-/
def mapScope (s : PosShift) (sc : Command.Scope) : Command.Scope :=
  { sc with
    varDecls := sc.varDecls.map fun b => ⟨s.mapSyntax b.raw⟩
    attrs := sc.attrs.map fun a => ⟨s.mapSyntax a.raw⟩ }

end PosShift

/--
Whether an info tree holds data whose positions `PosShift.mapInfoTree` cannot move: a panel widget
(its props can hold editor ranges), or a `panic!`, `assert!` or `unreachable!` call, whose term holds
the line and column of the call.
-/
partial def InfoTree.holdsUnmovablePositions : InfoTree → Bool
  | .context _ t => holdsUnmovablePositions t
  | .node i cs =>
    (match i with
      | .ofUserWidgetInfo _ => true
      | .ofTermInfo ti =>
        let f := ti.expr.getAppFn
        f.isConstOf ``panicWithPosWithDecl || f.isConstOf ``panicWithPos
      | _ => false) ||
    cs.any holdsUnmovablePositions
  | .hole _ => false

/-- Whether every task of a snapshot tree has finished; never waits. -/
partial def snapshotTreeFinished (t : SnapshotTree) : BaseIO Bool :=
  t.children.allM fun c => do
    if !(← IO.hasFinished c.task) then
      return false
    snapshotTreeFinished c.task.get

/-- Whether a message holds a widget. -/
partial def MessageData.hasWidget : MessageData → Bool
  | .ofWidget .. => true
  | .withContext _ m | .withNamingContext _ m | .nest _ m | .group m | .tagged _ m
  | .ofOriginatingSyntax _ m => hasWidget m
  | .compose a b => hasWidget a || hasWidget b
  | .trace _ m cs => hasWidget m || cs.any hasWidget
  | _ => false

/--
Whether a message is fixed text: no lazily formatted part (embedded syntax prints its comments,
terms can print positions), no widget and no trace.
-/
partial def MessageData.isFixedText : MessageData → Bool
  | .ofFormatWithInfos _ => true
  | .withContext _ m | .withNamingContext _ m | .nest _ m | .group m | .tagged _ m
  | .ofOriginatingSyntax _ m => isFixedText m
  | .compose a b => isFixedText a && isFixedText b
  | _ => false

/-- Moves the editor ranges in the props of a message's widgets and its originating syntax. -/
partial def PosShift.mapMessageData (s : PosShift) : MessageData → MessageData
  | .ofWidget wi alt =>
    .ofWidget { wi with props := return s.mapJsonRanges (← wi.props) } (s.mapMessageData alt)
  | .withContext c m => .withContext c (s.mapMessageData m)
  | .withNamingContext c m => .withNamingContext c (s.mapMessageData m)
  | .nest n m => .nest n (s.mapMessageData m)
  | .group m => .group (s.mapMessageData m)
  | .tagged n m => .tagged n (s.mapMessageData m)
  | .ofOriginatingSyntax stx m => .ofOriginatingSyntax (s.mapSyntax stx) (s.mapMessageData m)
  | .compose a b => .compose (s.mapMessageData a) (s.mapMessageData b)
  | .trace d m cs => .trace d (s.mapMessageData m) (cs.map s.mapMessageData)
  | m => m

/--
Whether a rendered message holds position-like text: `LINE:COLUMN` (digits, a colon, digits), as
error messages print the positions of failed overload alternatives, recursive calls in termination
tables, or labeled `sorry`s; `⟨LINE, COLUMN⟩` or `line := `, as traces print a `Position`.
-/
def textHoldsLineCol (text : String) : Bool := Id.run do
  let bs := text.toUTF8
  let isDigit (b : UInt8) := 48 ≤ b && b ≤ 57
  let mut i := 0
  let pat := "line := ".toUTF8
  while i < bs.size do
    if i > 0 && i + 1 < bs.size && bs[i]! == 58 && isDigit bs[i - 1]! && isDigit bs[i + 1]! then
      return true
    -- `⟨` is E2 9F A8
    if i + 3 < bs.size && bs[i]! == 0xE2 && bs[i + 1]! == 0x9F && bs[i + 2]! == 0xA8 &&
        isDigit bs[i + 3]! then
      return true
    if bs[i]! == pat[0]! && i + pat.size ≤ bs.size &&
        (pat.size.all fun j _ => bs[i + j]! == pat[j]!) then
      return true
    i := i + 1
  return false

/-- How a command's results relate to the changed bytes. -/
structure MoveScope where
  /-- Whether the command has a position at or after the changed bytes, so that its positions move. -/
  moves  : Bool
  /-- Whether the changed bytes lie between the command's first and last token. -/
  inside : Bool
  /--
  Whether the changed bytes lie between the command's first token and the end of its trailing
  whitespace: some errors print the command's source text with that whitespace (`Syntax.reprint`).
  -/
  touches : Bool
  /--
  Whether the command's first token keeps its byte offset, line and column, so that every result of
  the command whose syntax keeps its bytes also keeps its line and column.
  -/
  firstStays : Bool

namespace PosShift

/-- Maps a message position to the new input (see `msgStartSide?`). -/
def mapMsgPosition? (s : PosShift) (pos : Position) : Except String Position := do
  let b := s.oldMap.ofPosition pos
  unless s.oldMap.toPosition b == pos do
    throw "message position outside the old input"
  if b == s.start && s.start == s.oldStop && s.msgStartSide?.isNone then
    throw "message at an insertion point between two tokens"
  let some b' := s.mapPos? b (s.msgStartSide?.getD false) | throw "message position in the changed bytes"
  return s.newMap.toPosition b'

/--
Moves a message, or names why a new elaboration could give other bytes: an error or a message other
than fixed text of a command that holds the changed bytes (embedded syntax prints its comments,
hints print the source text of their span, some errors print the command's source text), a message
that is not fixed text on the line whose columns change (suggestions take their indentation from
the column), or a position that cannot be mapped. `mapSnapshot?` also checks the rendered text
(`textHoldsLineCol`).
-/
def mapMessage? (s : PosShift) (scope : MoveScope) (m : Message) : Except String Message := do
  if scope.touches && m.severity == .error then
    throw "error in the changed command"
  if scope.moves then
    unless !scope.inside || MessageData.isFixedText m.data do
      throw "message other than fixed text in the changed command"
    if s.colShiftLine? == some m.pos.line && !MessageData.isFixedText m.data then
      throw "message other than fixed text on a line whose columns change"
  let pos ← s.mapMsgPosition? m.pos
  let endPos ← m.endPos.mapM s.mapMsgPosition?
  let data := if MessageData.hasWidget m.data then s.mapMessageData m.data else m.data
  return { m with pos, endPos, data }

/-- Moves all messages of a log. -/
def mapMessageLog? (s : PosShift) (scope : MoveScope) (log : MessageLog) : Except String MessageLog := do
  let reported ← log.reported.mapM (s.mapMessage? scope)
  let unreported ← log.unreported.mapM (s.mapMessage? scope)
  return { log with reported, unreported }

private def mapTraces (s : PosShift) (t : TraceState) : TraceState :=
  { t with traces := t.traces.map fun e => { e with ref := s.mapSyntax e.ref } }

/--
Moves the positions of a snapshot: messages, info tree and trace references; or names why a message
or the info tree cannot be moved (see `mapMessage?` and `InfoTree.holdsUnmovablePositions`).
-/
def mapSnapshot? (s : PosShift) (scope : MoveScope) (snap : Snapshot) :
    BaseIO (Except String Snapshot) := ExceptT.run do
  let log := snap.diagnostics.msgLog
  let log' ← ExceptT.mk <| pure <| s.mapMessageLog? scope log
  if scope.moves then
    if snap.infoTree?.any InfoTree.holdsUnmovablePositions then
      throw "info tree holds a panel widget or a panic position"
    for m in log.reportedPlusUnreported do
      if textHoldsLineCol (← m.data.toString) then
        throw "message text holds LINE:COL"
  -- a new `Diagnostics` value, as the old one memoizes the editor ranges of its messages
  let diagnostics ← if log.reported.isEmpty && log.unreported.isEmpty then
      pure snap.diagnostics
    else
      Snapshot.Diagnostics.ofMessageLog log'
  return { snap with
    diagnostics
    infoTree? := snap.infoTree?.map s.mapInfoTree
    traces := s.mapTraces snap.traces }

/--
Moves the positions of a finished snapshot tree and all its children, which must be finished too.
-/
partial def mapTree? (s : PosShift) (scope : MoveScope) (t : SnapshotTree) :
    BaseIO (Except String SnapshotTree) := ExceptT.run do
  let element ← ExceptT.mk <| s.mapSnapshot? scope t.element
  let mut children := #[]
  for c in t.children do
    let c' ← ExceptT.mk <| s.mapTree? scope c.get
    children := children.push (.finished (c.stx?.map s.mapSyntax) c')
  return ⟨element, children⟩

/-- How the old command `stx` relates to the changed bytes. -/
def moveScope (s : PosShift) (stx : Syntax) : MoveScope :=
  let moves := stx.getTailPos?.any (s.start < ·)
  let afterFirst := stx.getPos?.any (· < s.start)
  { moves, inside := moves && afterFirst
    touches := afterFirst && stx.getTrailingTailPos?.any (s.start ≤ ·)
    firstStays := stx.getPos?.any fun p =>
      s.mapPos? p false == some p && s.oldMap.toPosition p == s.newMap.toPosition p }

private unsafe def sameObjectImpl {α : Type u} (a b : α) : Bool := ptrAddrUnsafe a == ptrAddrUnsafe b

/-- Whether `a` and `b` are the same object; `false` is always a correct answer. -/
@[implemented_by sameObjectImpl] private opaque sameObject {α : Type u} (a b : α) : Bool

/-- Whether a declaration range ends at or after `start`, so that it moves. -/
private def rangesMove (start : Position) (r : DeclarationRanges) : Bool :=
  let after (p : Position) := start.line < p.line || (start.line == p.line && start.column ≤ p.column)
  after r.range.endPos || after r.selectionRange.endPos

/-- The names that an info tree declares: a `TermInfo` binder whose term is a constant. -/
private partial def InfoTree.declaredNames (acc : Array Name) : InfoTree → Array Name
  | .context _ t => declaredNames acc t
  | .node i cs =>
    let acc := match i with
      | .ofTermInfo ti => if ti.isBinder && ti.expr.isConst then acc.push ti.expr.constName! else acc
      | _ => acc
    cs.foldl (init := acc) declaredNames
  | .hole _ => acc

/--
The names that the info trees of a snapshot tree declare, as for `def`, `theorem`, constructors and
structure fields (see `Linter.getNewDecls`).
-/
def declaredNames (tree : SnapshotTree) : Array Name :=
  tree.getAll.foldl (init := #[]) fun acc snap =>
    (snap.infoTree?.map (InfoTree.declaredNames acc)).getD acc

/--
Moves the main module's declaration ranges in `env`, the environment after an old command. `prevOld`
and `prevNew` are the environment after the previous command before and after its move: the entries
that the command added are moved and added to those of `prevNew`, so that each entry is moved once.
Later commands read them: `Linter/Extra/DupNamespace.lean:51-58` compares them with the position of
the current command, go to definition from a later command reads them (`Server/GoTo.lean:100`).

The added entries are found among `candidates`, the names that the command declares
(`declaredNames`): a command only adds entries (`addDeclarationRanges` never replaces one), so the
candidates that are new in `env` are all added entries when their number is the difference of the
map sizes. Else, as for a name that no info tree declares, the map is walked once.

Only the state of the main environment branch moves. The `checked` state is read only with
`asyncMode := .sync`, as for the `.olean` export (`Environment.lean:1561-1564`), which the server
does not do. Entries that an async branch writes (a `let rec` in a theorem's proof,
`Elab/LetRec.lean:63`; a `native_decide` axiom, `Meta/Native.lean:84`) are visible only on that
branch: `DupNamespace` reads the main branch, and the other readers in a command
(`Linter/Util.lean:92`, `BuiltinDocAttr.lean:20`) ask for declarations of that command.
-/
def mapDeclRangeExt (s : PosShift) (candidates : Thunk (Array Name)) (prevOld prevNew env : Environment) :
    Environment := Id.run do
  let ext := declRangeExt.toPersistentEnvExtension
  let ranges := ext.getState (asyncMode := .local) env
  let prevOldRanges := ext.getState (asyncMode := .local) prevOld
  let prevNewRanges := ext.getState (asyncMode := .local) prevNew
  let start := s.oldMap.toPosition s.start
  let size (m : NameMap DeclarationRanges) :=
    (show Std.TreeMap Name DeclarationRanges Name.quickCmp from m).size
  let mut added : Array (Name × DeclarationRanges) := #[]
  unless sameObject ranges prevOldRanges do
    let mut seen : NameSet := {}
    for n in candidates.get do
      if let some r := ranges.find? n then
        if !prevOldRanges.contains n && !seen.contains n then
          seen := seen.insert n
          added := added.push (n, r)
    if added.size != size ranges - size prevOldRanges then
      added := #[]
      for (n, r) in ranges do
        unless prevOldRanges.contains n do
          added := added.push (n, r)
  if sameObject prevNewRanges prevOldRanges && added.all (!rangesMove start ·.2) then
    return env
  let moved := added.foldl (init := prevNewRanges) fun acc (n, r) =>
    acc.insert n (if rangesMove start r then s.mapDeclarationRanges r else r)
  return ext.modifyState (asyncMode := .local) env fun _ => moved

/--
Moves the parts of an old command's state `st` that a later command reads, given the state after
the previous command before (`prevOld`) and after (`prevNew`) its move: the syntax of the scopes
(`mapScope`) and the declaration ranges (`mapDeclRangeExt`).

Left as they are:
- `messages`, `infoState`, `traceState`, `snapshotTasks`, `codeQualityEntryTasks`: each command
  starts with them empty (`doElab` in `Language/Lean.lean`, `Elab/Command.lean:912`);
- `usedQuotCtxts`, `nextMacroScope`, `ngen`, `auxDeclNGen`, `maxRecDepth`: no positions;
- `prevLinterStates`: opaque, so `holdsUnmovedPositions` marks a state that has them;
- in the environment, module docs (read by a later command only for `isEmpty`,
  `DocString/Add.lean:389`), Verso documents (the `doc.verso` gate), error explanation locations
  (read only by the server, `Server/GoTo.lean:206`), stored traces (the `store_traces_as` gate), and
  the positions in labeled `sorry`s (`holdsUnmovedPositions`).
-/
def mapCmdState (s : PosShift) (candidates : Thunk (Array Name)) (prevOld prevNew st : Command.State) :
    Command.State :=
  { st with
    scopes := if sameObject st.scopes prevOld.scopes then prevNew.scopes else st.scopes.map s.mapScope
    env := s.mapDeclRangeExt candidates prevOld.env prevNew.env st.env }

/--
Moves the positions of an old command's elaboration snapshots, all of which must be finished, for
reporting with the new command syntax `stx`, with the moved command state `cmdState`.

The typed snapshot value (the value of `elabSnap`), which a later edit of the command passes to its
incremental elaboration, is kept only if the command's first token keeps its byte offset, line and
column (`MoveScope.firstStays`), and the edit is no `lineShift`: a change of the same byte length
that moves text that keeps its bytes to another line or column
(`Language.Lean.sameLengthLineShift?`).
Incremental elaboration reuses its parts where their syntax keeps its bytes and positions
(`Syntax.eqWithInfo`, `Elab/MutualDef.lean:1552`, `Elab/Tactic/BuiltinTactic.lean:72-73`), but their
messages hold lines and columns: after a same-length edit above the command, or inside it before a
part, that adds or removes a line, a reused part would report its old line. After a change of
another length, every part after it has other byte positions and is not reused. Otherwise the value
is one that no elaborator accepts, so that a later edit elaborates the command in full; the moved
snapshot tree is still reported.
-/
def mapElabSnap? (s : PosShift) (scope : MoveScope) (lineShift : Bool) (stx : Syntax)
    (cmdState : Command.State) (e : CommandElaboratingSnapshot) :
    BaseIO (Except String CommandElaboratingSnapshot) := ExceptT.run do
  let toSnapshot ← ExceptT.mk <| s.mapSnapshot? scope e.toSnapshot
  let dyn := e.elabSnap.get
  let dynTree ← ExceptT.mk <| s.mapTree? scope (toSnapshotTree dyn)
  let res := e.resultSnap.get
  let resSnap ← ExceptT.mk <| s.mapSnapshot? scope res.toSnapshot
  let infoSnap ← ExceptT.mk <| s.mapSnapshot? scope e.infoTreeSnap.get.toSnapshot
  let report ← ExceptT.mk <| s.mapTree? scope e.reportSnap.get
  let val := if scope.firstStays && !lineShift then dyn.val else (default : DynamicSnapshot).val
  return {
    toSnapshot
    elabSnap := .finished stx { val, toSnapshotTreeM := dynTree.transform }
    resultSnap := .finished stx { res with toSnapshot := resSnap, cmdState }
    infoTreeSnap := .finished stx { toSnapshot := infoSnap }
    reportSnap := .finished none report
  }

end PosShift

/-- Whether `stx` names the option `opt`, as `set_option opt ... in` does. -/
private partial def mentionsOption (opt : Name) : Syntax → Bool
  | .node _ _ args => args.any (mentionsOption opt)
  | .ident _ _ val _ => val == opt
  | _ => false

/--
Whether the state `cmdState` after an old command `stx`, with the finished snapshot tree `tree` and
parse messages `parseLog`, holds positions that `PosShift.mapCmdState` does not move:
- a `sorry` labeled with its source position (`Meta/Sorry.lean:83-109`) in a declaration that the
  command added: a declaration with `sorry` logs a `hasSorry` warning (`AddDecl.lean:81-97`) unless
  the log has an error or `warn.sorry` is off, and an elaboration error adds a labeled synthetic
  `sorry` (`Elab/Term/TermElabM.lean:1359`). A later command prints its position with
  `pp.sorrySource` or when two labeled `sorry`s differ (`Meta/Check.lean:148-153`);
- the state of a stateful linter, which is opaque (`Elab/Command.lean:612-635`).
-/
def holdsUnmovedPositions (stx : Syntax) (tree : SnapshotTree) (parseLog : MessageLog)
    (cmdState : Command.State) : Bool :=
  let opts := cmdState.scopes.head!.opts
  cmdState.prevLinterStates.isSome || parseLog.hasErrors || !opts.getBool `warn.sorry true ||
    mentionsOption `warn.sorry stx ||
    tree.getAll.any fun snap => snap.diagnostics.msgLog.reportedPlusUnreported.any fun m =>
      m.severity matches .error || m.data.hasTag (· == `hasSorry)

/--
Atoms of constructs whose results can depend on absolute positions, columns or source text in ways
that moving positions does not reproduce: evaluation output, panic messages, `#guard_msgs` (relative
positions, embedded messages), `#where` (prints section variables with their comments),
`bv_decide?` (names its proof file after the line and column), and `store_traces_as` (stores
messages with their positions in the environment, `PostprocessTraces/StoredTraces.lean:100-152`).
-/
def positionSensitiveAtoms : List String :=
  ["#eval", "#eval!", "run_cmd", "run_elab", "run_meta", "run_tac", "panic!", "assert!",
    "unreachable!", "#guard_msgs", "#where", "bv_decide?", "store_traces_as"]

/--
Whether `stx` contains a construct whose results can depend on absolute positions, or sets an
option that prints source positions (`pp.sorrySource`) or reads source text (`doc.verso`).
-/
partial def hasPositionSensitiveSyntax : Syntax → Bool
  | .node _ _ args => args.any hasPositionSensitiveSyntax
  | .atom _ val => positionSensitiveAtoms.contains val
  | .ident _ _ val _ => val == `pp.sorrySource || val == `doc.verso
  | .missing => false

/--
Whether the elaboration state of a snapshot, made for the input `src?` (`none`: its own input) and
ending at its stop position there, is also valid for `input` with the command ending at `stopPos`:
the inputs agree up to the end of the command.
-/
def elabSourceMatches (src? : Option (String × String.Pos.Raw)) (input : String)
    (stopPos : String.Pos.Raw) : Bool :=
  match src? with
  | none => true
  | some (text, stop) => stop == stopPos && stop ≤ text.firstDiffPos input

end Lean.Language.Lean
