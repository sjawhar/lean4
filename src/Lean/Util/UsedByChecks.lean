module
prelude
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
end Lean
