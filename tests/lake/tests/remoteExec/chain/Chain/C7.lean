import Chain.C6

/-! The seventh of ten modules in a chain, each importing the one before; its compile takes 10 s. -/

#eval IO.sleep 10000

def c7 := c6 + 1
