import Lean.Util.ModuleUsage
/-! Owner folding (`Lean.ModuleUsage.ownerOf`, `stripSuffix?`, `atOwner?`): a compiler-only name folds into the
first of its successive stripped forms that is a node, a specialization `g._at_.o.spec_N` into its creator `o`,
also when `o` carries macro scopes in the middle of the name (a `_hyg` component, which `Name.append` would treat
as macro scopes and reject). -/
open Lean ModuleUsage

/-- `f._@.M._hyg.3`, a macro-scoped declaration name. -/
def scopedDecl : Name := .num (.str (.str (.str (.str .anonymous "f") "_@") "M") "_hyg") 3

/-- `g._at_.f._@.M._hyg.3.spec_0`: a specialization of `g` that `scopedDecl` created. -/
def specName : Name := ((`g).appendCore `_at_ |>.appendCore scopedDecl).str "spec_0"

#guard atOwner? ((`g).str "_at_" ++ `o) == some `o
#guard ownerOf (· == scopedDecl) specName == scopedDecl
#guard ownerOf (· == `f) `f._redArg == `f
#guard ownerOf (· == `f) `f._lam_2._boxed == `f
#guard ownerOf (fun _ => false) `x._redArg == `x._redArg
