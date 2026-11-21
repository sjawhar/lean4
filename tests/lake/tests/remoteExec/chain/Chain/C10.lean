import Chain.C9

/-! The last of ten modules in a chain, each importing the one before; its compile takes 10 s. -/

#eval IO.sleep 10000

def c10 := c9 + 1
