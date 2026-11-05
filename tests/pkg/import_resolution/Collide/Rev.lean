-- The kernel constant's module comes first, and the code calls the kernel constant.
import Collide.K
import Collide.A
@[noinline] def useIt (n : Nat) : UInt32 := foo._redArg n
