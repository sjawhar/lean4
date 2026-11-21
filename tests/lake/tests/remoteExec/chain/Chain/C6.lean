import Chain.C5

/-! The sixth of ten modules in a chain, each importing the one before; its compile takes 10 s. -/

#eval IO.sleep 10000

def c6 := c5 + 1
