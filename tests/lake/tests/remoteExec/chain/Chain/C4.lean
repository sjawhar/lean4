import Chain.C3

/-! The fourth of ten modules in a chain, each importing the one before; its compile takes 10 s. -/

#eval IO.sleep 10000

def c4 := c3 + 1
