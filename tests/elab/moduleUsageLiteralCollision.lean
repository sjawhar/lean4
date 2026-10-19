import Lean
/-! Meaning digests are collision-resistant for string literals. Each pair below has the same
MurmurHash64A `hash` (the first pair: a second preimage built block by block; the second: two 16-byte
valid UTF-8 strings whose two 8-byte block pairs each flip bit 63 of the hash state, which collides for
any seed and prefix). The first value checks that the literals collide under `hash`, so the second is not
vacuous; the definitions differing only in the literal must get different local hashes. -/
open Lean Elab Command

def s1 : String := "AAAAAAAABBBBBBBB"
def s2 : String := "nkofbhgf4 ^i:J2x"
def u1 : String := "VX(Samp0IBpB\u0749\u0336"
def u2 : String := "VXk9\u0187\u0221IB-\u005cxotE"

#eval show CommandElabM Unit from do
  let env ← getEnv
  let lh n := ModuleUsage.localHash (env.find? n).get!
  logInfo m!"{hash s1 == hash s2 && hash u1 == hash u2} {lh ``s1 == lh ``s2 || lh ``u1 == lh ``u2}"
