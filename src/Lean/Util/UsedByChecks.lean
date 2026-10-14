module
prelude
public import Lean.Data.NameMap.Basic
public import Init.System.IO
public section
namespace Lean
/-- Constants of every declaration given to `addDecl` in this process, including those elaborated in an
environment that is then discarded (`example`, `#eval`, `#guard`). -/
builtin_initialize usedByChecksRef : IO.Ref NameSet ← IO.mkRef {}
end Lean
