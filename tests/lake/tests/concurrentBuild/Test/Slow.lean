-- Keeps `lean` busy long enough for the test to act while the build is running.
#eval IO.sleep 3000
def slow : Nat := 0
