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
/-- The index of the command whose elaboration the frontend is currently running. Async elaboration outlives it:
recorders read `MonadCommandIdx.getCommandIdx?` first and this ref only outside any command context. -/
builtin_initialize currentCommandRef : IO.Ref Nat ← IO.mkRef 0
/-
The per-command logs below are lists, newest first, read once in recording order (`List.toArray.reverse`): a global
ref's value is multi-threaded and so never exclusive, and `Array.push` on it would copy the whole log at every record.
-/
/-- The declarations and dependencies submitted to `addDecl`, grouped by top-level command. -/
builtin_initialize declsByCommandRef : IO.Ref (List (Nat × Array Name × NameSet)) ← IO.mkRef []
/-- Constants whose values were consulted without leaving a reference in the elaborated term. -/
builtin_initialize usedByCommandRef : IO.Ref (List (Nat × Name)) ← IO.mkRef []
/-- The attributes whose handlers, which may run code outside core Lean (`AttributeImplCore.onlyCoreCode`), a top-level
command ran. Such a handler may write state no command payload carries. -/
builtin_initialize foreignAttributesByCommandRef : IO.Ref (List (Nat × Name)) ← IO.mkRef []

/-- Monads that know the top-level command whose elaboration they run (`Core.Context.cmdIdx?`). -/
class MonadCommandIdx (m : Type → Type) where
  getCommandIdx? : m (Option Nat)

instance (m n) [MonadLift m n] [MonadCommandIdx m] : MonadCommandIdx n where
  getCommandIdx? := liftM (MonadCommandIdx.getCommandIdx? : m _)

instance : MonadCommandIdx CoreM where
  getCommandIdx? := return (← read).cmdIdx?

/-- The command a recorded use belongs to. -/
def commandIdx [Monad m] [MonadLiftT IO m] [MonadCommandIdx m] : m Nat := do
  match ← MonadCommandIdx.getCommandIdx? with
  | some i => return i
  | none => (currentCommandRef.get : IO Nat)

def recordUsedByCommand (n : Name) : CoreM Unit := do
  unless ← usageRecordingRef.get do return
  usedByCommandRef.modify ((← commandIdx, n) :: ·)

def recordForeignAttribute (attr : Name) : CoreM Unit := do
  unless ← usageRecordingRef.get do return
  foreignAttributesByCommandRef.modify ((← commandIdx, attr) :: ·)

/-- Clears per-invocation usage recording state. -/
def resetCommandUsageRefs : IO Unit := do
  currentCommandRef.set 0
  declsByCommandRef.set []
  usedByCommandRef.set []
  foreignAttributesByCommandRef.set []
end Lean
