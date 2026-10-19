/-
A module whose compile waits for `LAKE_TEST_CLAIM_SLEEP` milliseconds, and then until the file that
`LAKE_TEST_CLAIM_GATE` names exists. The environment is not part of Lake's input hash, so one
machine can hold the claim of this input while another waits for it.
-/
#eval show IO Unit from do
  if let some ms ← IO.getEnv "LAKE_TEST_CLAIM_SLEEP" then
    IO.sleep (ms.toNat?.getD 0).toUInt32
  if let some gate ← IO.getEnv "LAKE_TEST_CLAIM_GATE" then
    repeat
      if ← System.FilePath.pathExists gate then break
      IO.sleep 100

namespace Claim

def slow := 4
