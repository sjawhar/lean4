/-
A module whose compile waits for `LAKE_TEST_CLAIM_SLEEP` milliseconds (see `Claim.Slow`).
-/
#eval show IO Unit from do
  if let some ms ← IO.getEnv "LAKE_TEST_CLAIM_SLEEP" then
    IO.sleep (ms.toNat?.getD 0).toUInt32

namespace Wide

def one := 1
