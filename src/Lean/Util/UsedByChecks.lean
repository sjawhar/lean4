module
prelude
public import Lean.CoreM
public import Lean.Data.NameMap.Basic
public import Init.System.IO
public section
namespace Lean
/-- Whether this process records `usedByChecksRef` and `extraModUsesByChecksRef`: set by `runFrontend` when it
will write an `.olean` and its `.usage`, which read them. Off in the language server, which writes neither. -/
builtin_initialize usageRecordingRef : IO.Ref Bool ← IO.mkRef false
/-- Constants of every declaration given to `addDecl` in this process, including those elaborated in an
environment that is then discarded (`example`, `#eval`, `#guard`). -/
builtin_initialize usedByChecksRef : IO.Ref NameSet ← IO.mkRef {}
/-- The index of the command currently being elaborated, used by generic recording code that does not run in
`CoreM`. -/
builtin_initialize currentCommandRef : IO.Ref Nat ← IO.mkRef 0
/-- The declarations and dependencies submitted to `addDecl`, grouped by top-level command. -/
builtin_initialize declsByCommandRef : IO.Ref (Array (Nat × Array Name × NameSet)) ← IO.mkRef #[]
/-- Constants whose values were consulted without leaving a reference in the elaborated term. -/
builtin_initialize usedByCommandRef : IO.Ref (Array (Nat × Name)) ← IO.mkRef #[]

def commandIdx : CoreM Nat :=
  return (← read).cmdIdx?.getD (← currentCommandRef.get)

def recordUsedByCommand (n : Name) : CoreM Unit := do
  unless ← usageRecordingRef.get do return
  usedByCommandRef.modify (·.push (← commandIdx, n))

/-- Clears per-invocation usage recording state. -/
def resetCommandUsageRefs : IO Unit := do
  currentCommandRef.set 0
  declsByCommandRef.set #[]
  usedByCommandRef.set #[]
end Lean
