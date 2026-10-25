/-
A module whose compile waits for `LAKE_TEST_CLAIM_SLEEP` milliseconds. The environment is not part
of Lake's input hash, so one machine can hold the claim of this input while another waits for it.
-/
#eval show IO Unit from do
  if let some ms ← IO.getEnv "LAKE_TEST_CLAIM_SLEEP" then
    IO.sleep (ms.toNat?.getD 0).toUInt32

namespace Claim

def slow := 4
