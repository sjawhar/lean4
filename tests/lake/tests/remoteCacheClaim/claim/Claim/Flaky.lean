/-
A module whose compile fails when `LAKE_TEST_CLAIM_FAIL` is set. The environment is not part of
Lake's input hash, so two machines compile the same input with different outcomes.
-/
#eval show IO Unit from do
  if (← IO.getEnv "LAKE_TEST_CLAIM_FAIL").isSome then
    throw (IO.userError "LAKE_TEST_CLAIM_FAIL is set")

namespace Claim

def flaky := 3
