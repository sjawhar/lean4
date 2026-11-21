import Chain.C1

/-! The second of ten modules in a chain, each importing the one before; its compile takes 10 s. -/

#eval IO.sleep 10000

def c2 := c1 + 1
