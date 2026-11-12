import Slow

/-! The root of `app`: it imports `Slow`, so its build is canceled when the build of `Slow` is. -/

def main : IO Unit := pure ()
