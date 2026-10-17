/-
Copyright (c) 2026 Theorem Labs. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
-/
module
prelude
public import Lean.Data.NameMap.Basic
public import Lean.Expr
public import Init.System.IO
public section
namespace Lean
/-- Whether this process records `usedByChecksRef` and `extraModUsesByChecksRef`: set by `runFrontend` when it
will write an `.olean` and its `.usage` (`--usage`), which read them. Off in the language server, which writes
neither. -/
builtin_initialize usageRecordingRef : IO.Ref Bool ← IO.mkRef false
/-- Constants of every declaration given to `addDecl` in this process, including those elaborated in an
environment that is then discarded (`example`, `#eval`, `#guard`), and the names `recordUsedName` adds. -/
builtin_initialize usedByChecksRef : IO.Ref NameSet ← IO.mkRef {}
/--
Adds `n` to `usedByChecksRef` when recording is on: names that reach the current module's compiled code or
elaboration without occurring in any of its terms, namely a specialization reused from another module's cache,
the replacement of a `@[csimp]` theorem, and every declaration the IR interpreter resolves (called from
`src/library/ir_interpreter.cpp`, possibly on several threads).
-/
@[export lean_usage_record_used]
def recordUsedName (n : Name) : BaseIO Unit := do
  if (← usageRecordingRef.get) then usedByChecksRef.modify (·.insert n)
/-- The constants of a declaration's type and value, with that type and value. -/
structure DeclConsts where
  type : Expr
  value? : Option Expr
  consts : NameSet
/-- Per name, the `DeclConsts` of the last axiom, definition, theorem or opaque given to `addDecl` under that
name, so that `ModuleUsage.refs` does not walk a kept constant's type and value again. -/
builtin_initialize declConstsRef : IO.Ref (NameMap DeclConsts) ← IO.mkRef {}
end Lean
