import Chain.C4

/-! The fifth of ten modules in a chain, each importing the one before; its compile takes 10 s. -/

#eval IO.sleep 10000

def c5 := c4 + 1
