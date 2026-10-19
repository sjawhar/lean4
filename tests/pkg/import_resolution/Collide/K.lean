def unrelated : Nat := 0
-- a kernel constant named like the compiler-generated `_redArg` of `A`'s `foo`
@[noinline] def foo._redArg (_n : Nat) : UInt32 := 7
