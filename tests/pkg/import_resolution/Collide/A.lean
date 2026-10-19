def other : Nat := 0
-- `_h` is unused, so compiling `foo` generates `foo._redArg`
def foo (n : Nat) (_h : Nat) : Nat := n + 1
