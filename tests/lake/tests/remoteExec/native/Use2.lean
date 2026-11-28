import Nat0

/-! A module of another library that uses `Nat0`'s elaborator: its compile loads `Nat0`'s library shared library. -/

def two : Nat := nat0% + 2

example : two = 2 := rfl
