/-
Copyright (c) 2020 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Leonardo de Moura
-/
module

prelude
public import Lean.Expr

public section
namespace Lean

def markBorrowed (e : Expr) : Expr :=
  mkAnnotation `borrowed e

/--
Returns `true` if the binder type `e` is marked borrowed (`@& T`). The mark may sit under the type
annotations `optParam`, `autoParam`, `outParam` and `semiOutParam`: for example, `(x : @& T := d)`
elaborates to `optParam (@& T) d`.
-/
def isMarkedBorrowed (e : Expr) : Bool :=
  annotation? `borrowed e.consumeTypeAnnotations |>.isSome

end Lean
