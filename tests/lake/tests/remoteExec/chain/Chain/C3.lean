import Chain.C2

/-! The third of ten modules in a chain, each importing the one before; its compile takes 10 s. -/

#eval IO.sleep 10000

def c3 := c2 + 1
