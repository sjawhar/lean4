/-
Prints a line when it starts, waits `LAKE_TEST_CLAIM_EXE_SLEEP` milliseconds (none if unset), and
greets, so that a test can run it with `lake exe` for a while after the build has ended.
-/
def main : IO Unit := do
  IO.println "claimexe started"
  (← IO.getStdout).flush
  if let some ms ← IO.getEnv "LAKE_TEST_CLAIM_EXE_SLEEP" then
    IO.sleep (ms.toNat?.getD 0).toUInt32
  IO.println "Hello, claim"
