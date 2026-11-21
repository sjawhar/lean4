import Nat0.Tac

/-! Uses the elaborator of `Nat0.Tac` of the same library: its compile loads `Nat0.Tac`'s module shared library. -/

def zero : Nat := nat0%

example : zero = 0 := rfl
