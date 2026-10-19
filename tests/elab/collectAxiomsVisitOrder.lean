import Lean

/-!
The axiom summaries that a module exports for its declarations (`exportedAxiomsExt`, which
`#print axioms` reads for imported declarations) must equal the axioms reachable from each
declaration, whatever order the export walks the declarations in. The export walks them in hash
order. For the names below it reaches `S9.mk` before `S9` and `S15.mk` before `S15`, so it reaches
each structure again through its constructor while the constructor is still being walked.
-/

open Lean

axiom ax : Nat

structure S9 where
  x : Fin ax

#guard_msgs (drop warning) in
structure S15 where
  x : Fin (sorry : Nat)

/-- The summaries that the `.olean` of this file would hold. -/
unsafe def exportedSummaries : CoreM (Array (Name × Array Name)) := do
  let md ← mkModuleData (← getEnv)
  let some (_, entries) := md.entries.find? (privateToUserName ·.1 == `Lean.exportedAxiomsExt)
    | throwError "no exported axiom summaries"
  return entries.map (unsafeCast ·)

/-- Logs the exported summary of each of `names`. -/
unsafe def showExported (names : List Name) : CoreM Unit := do
  let summaries ← exportedSummaries
  for n in names do
    match summaries.find? (·.1 == n) with
    | some (_, axs) => logInfo m!"{n}: {axs}"
    | none => logInfo m!"{n}: no summary"

/-- Logs every declaration whose exported summary differs from what `collectAxioms` reaches. -/
unsafe def checkExported : CoreM Unit := do
  for (c, axs) in ← exportedSummaries do
    let reached ← collectAxioms c
    unless axs == reached do
      logInfo m!"{c}: exported {axs}, reachable {reached}"

/-! In-file, `#print axioms` walks the declarations itself. -/

/-- info: 'S9' depends on axioms: [ax] -/
#guard_msgs in
#print axioms S9

/-- info: 'S15' depends on axioms: [sorryAx] -/
#guard_msgs in
#print axioms S15

/-! The exported summaries. -/

/--
info: S9: [ax]
---
info: S9.mk: [ax]
---
info: S15: [sorryAx]
---
info: S15.mk: [sorryAx]
-/
#guard_msgs in
#eval showExported [``S9, ``S9.mk, ``S15, ``S15.mk]

#guard_msgs in
#eval checkExported

/-! `r7` reaches `S9` directly, and the export walks it before `S9.mk`. Adding it changes the order
in which the export reaches `S9`, not `S9`'s summary. -/

def r7 (_ : S9) : Nat := 0

/-- info: S9: [ax] -/
#guard_msgs in
#eval showExported [``S9]

#guard_msgs in
#eval checkExported
