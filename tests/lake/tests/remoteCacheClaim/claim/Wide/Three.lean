/-
A module whose compile waits for three times `LAKE_TEST_CLAIM_SLEEP` milliseconds (see
`Claim.Slow`).
-/
#eval show IO Unit from do
  if let some ms ← IO.getEnv "LAKE_TEST_CLAIM_SLEEP" then
    IO.sleep (3 * ms.toNat?.getD 0).toUInt32

namespace Wide

def three := 3
