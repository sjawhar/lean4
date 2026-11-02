/-!
A borrow annotation survives a default value or an auto-param on the same binder.
`(a : @& T := d)` elaborates to `optParam (@& T) d` and `(a : @& T := by tac)` to
`autoParam (@& T) _`. If the compiler lost the mark under these wrappers, a caller of an `[extern]`
whose C side takes the argument borrowed would `inc` it and nothing would `dec` it.
-/

@[extern "test_size_plain"]
opaque sizePlain (a : @& Array Nat) : Nat

@[extern "test_size_default"]
opaque sizeDefault (a : @& Array Nat := #[]) : Nat

@[extern "test_size_auto"]
opaque sizeAuto (a : @& Array Nat := by exact #[]) : Nat

/-!
The calls to the three externs compile alike: no `inc` of the borrowed argument.
-/

/--
trace: [Compiler.IR] [result]
    def usePlain (x_1 : @& obj) : tobj :=
      let x_2 : tobj := sizePlain x_1;
      let x_3 : tagged := Array.size ◾ x_1;
      let x_4 : tobj := Nat.add x_2 x_3;
      dec x_2;
      ret x_4
    def usePlain._boxed (x_1 : obj) : tobj :=
      let x_2 : tobj := usePlain x_1;
      dec x_1;
      ret x_2
-/
#guard_msgs in
set_option trace.compiler.ir.result true in
def usePlain (a : Array Nat) : Nat := sizePlain a + a.size

/--
trace: [Compiler.IR] [result]
    def useDefault (x_1 : @& obj) : tobj :=
      let x_2 : tobj := sizeDefault x_1;
      let x_3 : tagged := Array.size ◾ x_1;
      let x_4 : tobj := Nat.add x_2 x_3;
      dec x_2;
      ret x_4
    def useDefault._boxed (x_1 : obj) : tobj :=
      let x_2 : tobj := useDefault x_1;
      dec x_1;
      ret x_2
-/
#guard_msgs in
set_option trace.compiler.ir.result true in
def useDefault (a : Array Nat) : Nat := sizeDefault a + a.size

/--
trace: [Compiler.IR] [result]
    def useAuto (x_1 : @& obj) : tobj :=
      let x_2 : tobj := sizeAuto x_1;
      let x_3 : tagged := Array.size ◾ x_1;
      let x_4 : tobj := Nat.add x_2 x_3;
      dec x_2;
      ret x_4
    def useAuto._boxed (x_1 : obj) : tobj :=
      let x_2 : tobj := useAuto x_1;
      dec x_1;
      ret x_2
-/
#guard_msgs in
set_option trace.compiler.ir.result true in
def useAuto (a : Array Nat) : Nat := sizeAuto a + a.size

/-!
A definition's own parameter keeps the mark too. `push` needs an owned array, so a borrowed
parameter is copied with an `inc` first, where an owned one would be consumed in place.
-/

/--
trace: [Compiler.IR] [result]
    def pushDefault (x_1 : @& obj) : obj :=
      let x_2 : tagged := 1;
      inc x_1;
      let x_3 : obj := Array.push ◾ x_1 x_2;
      ret x_3
    def pushDefault._boxed (x_1 : obj) : obj :=
      let x_2 : obj := pushDefault x_1;
      dec x_1;
      ret x_2
-/
#guard_msgs in
set_option trace.compiler.ir.result true in
def pushDefault (a : @& Array Nat := #[]) : Array Nat := a.push 1

/-!
An `[export]` declaration cannot have a borrowed parameter, with or without a default value.
`compiler.ignoreBorrowAnnotation` drops the annotation, as the error suggests.
-/

/--
error:  Declaration exportedDefault is marked as `export` but some of its parameters have borrow annotations.
 Consider using `set_option compiler.ignoreBorrowAnnotation true in` to suppress the borrow annotations in its type.
 If the declaration is part of an `export`/`extern` pair make sure to also suppress the annotations at the `extern` declaration.
-/
#guard_msgs in
@[export test_exported_default]
def exportedDefault (a : @& Array Nat := #[]) : Nat := a.size

#guard_msgs in
set_option compiler.ignoreBorrowAnnotation true in
@[export test_exported_ignored]
def exportedIgnored (a : @& Array Nat := #[]) : Nat := a.size
