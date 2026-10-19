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
/-- The declarations and dependencies submitted to `addDecl`, grouped by top-level command. -/
builtin_initialize declsByCommandRef : IO.Ref (Array (Nat × Array Name × NameSet)) ← IO.mkRef #[]
/-- Constants whose values were consulted without leaving a reference in the elaborated term. -/
builtin_initialize usedByCommandRef : IO.Ref (Array (Nat × Name)) ← IO.mkRef #[]
/-- Top-level commands that gave `addDecl` a declaration with `debug.skipKernelTC` set: the kernel did not check it,
so a keep, which does, may reject it. -/
builtin_initialize uncheckedDeclsByCommandRef : IO.Ref (Std.HashSet Nat) ← IO.mkRef {}

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
  usedByCommandRef.modify (·.push (← commandIdx, n))

/-- Clears per-invocation usage recording state. -/
def resetCommandUsageRefs : IO Unit := do
  currentCommandRef.set 0
  declsByCommandRef.set #[]
  usedByCommandRef.set #[]
  uncheckedDeclsByCommandRef.set {}
end Lean
