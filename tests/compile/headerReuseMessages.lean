import Lean

open Lean Lean.Language Lean.Language.Lean

/-!
Tests that the language processor keeps the header's messages and info tree when it reuses the
header after an edit below it. The header imports a deprecated module, so a fresh run reports a
deprecation warning and has one `import` command info node; after an edit below the header, the
incremental run must report the same messages and info nodes as a fresh run of the new text, and it
must not process the imports again. Adding or removing a `deprecated_module: ignore` directive after
the last import must also give the messages of a fresh run.
-/

def base : String :=
  "def f (n : Nat) : Nat := n + 1\n\
  \n\
  theorem t1 : f 1 = 2 := by\n  \
    simp [f]\n\
  \n\
  #check f\n"

/-- `base` with a header whose import gives a deprecation warning. -/
def withHeader : String :=
  "import Lean.Data.RBMap\n\n" ++ base

/-- `withHeader` with the directive that turns off the deprecation warning of the last import. -/
def withHeaderIgnore : String :=
  "import Lean.Data.RBMap -- deprecated_module: ignore\n\n" ++ base

/-- Inserts `s` before the first occurrence of `before` in `text`. -/
def insertBefore (text before s : String) : String :=
  match text.splitOn before with
  | pre :: rest => pre ++ s ++ before ++ before.intercalate rest
  | [] => text

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

structure Processor where
  step : Parser.InputContext → BaseIO InitialSnapshot
  /-- Number of header processings (imports) so far. -/
  imports : IO.Ref Nat

unsafe def mkProcessor : BaseIO Processor := do
  let opts := Elab.async.set {} true
  let opts := Elab.inServer.set opts true
  let imports ← IO.mkRef 0
  let step ← mkIncrementalProcessor <| process fun stx => do
    imports.modify (· + 1)
    -- each import resets the flag (`withImporting`)
    enableInitializersExecution
    return .ok { mainModuleName := `Test, isModule := stx.isModule, imports := stx.imports, opts }
  return { step, imports }

/-- What one run of a processor on a text left in the snapshot tree. -/
structure Tree where
  msgs : Array String
  importNodes : Nat

def runTree (p : Processor) (text : String) : IO Tree := do
  let snap ← p.step (Parser.mkInputContext text "Test.lean")
  let tree := toSnapshotTree snap
  waitAll tree
  return {
    msgs := ← treeMsgs tree
    importNodes := tree.getAll.foldl (fun n s => n + (s.infoTree?.map countImportNodes).getD 0) 0
  }

/-- The failures of an incremental run of `p` on `text`, against a fresh run of `text`. -/
unsafe def checkFresh (name : String) (p : Processor) (text : String) : IO (Array String) := do
  let inc ← runTree p text
  let fresh ← runTree (← mkProcessor) text
  let mut errs := #[]
  if inc.msgs != fresh.msgs then
    errs := errs.push s!"{name}: messages differ from a fresh elaboration\n  \
      incremental: {inc.msgs}\n  fresh:       {fresh.msgs}"
  if inc.importNodes != fresh.importNodes then
    errs := errs.push s!"{name}: {inc.importNodes} import info nodes, fresh has {fresh.importNodes}"
  return errs

unsafe def main : IO UInt32 := do
  let mut errs := #[]
  let p ← mkProcessor
  let h0 ← runTree p withHeader
  unless h0.msgs.any (·.contains "deprecated") && h0.importNodes == 1 do
    errs := errs.push s!"start: expected a deprecation warning and 1 import info node, got \
      {h0.msgs}, {h0.importNodes}"
  -- an edit below the header reuses the header and keeps its messages and info tree
  let imports ← p.imports.get
  errs := errs ++ (← checkFresh "comment below the header" p
    (insertBefore withHeader "theorem t1" "-- a comment below the header\n"))
  errs := errs ++ (← checkFresh "second edit below the header" p
    (insertBefore withHeader "#check f" "-- another comment\n"))
  unless (← p.imports.get) == imports do
    errs := errs.push s!"edit below the header: imported again"
  -- a `deprecated_module: ignore` directive after the last import, added and removed again
  let p ← mkProcessor
  errs := errs ++ (← checkFresh "directive, start" p withHeader)
  errs := errs ++ (← checkFresh "directive added" p withHeaderIgnore)
  errs := errs ++ (← checkFresh "directive removed" p withHeader)
  for e in errs do
    IO.println e
  return if errs.isEmpty then 0 else 1
