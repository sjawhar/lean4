-- The kernel constant's module comes first, and the code uses `foo`.
import Collide.K
import Collide.A
def useFoo (n : Nat) : Nat × Nat := (foo n 0, n)
