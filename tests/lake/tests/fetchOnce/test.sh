#!/usr/bin/env bash
source ../common.sh
./clean.sh

# Two fetches of one build key from two threads at the same time run the key's
# fetch function once and share its job: one runs it, the other waits for it.

# `slow` records each run of its fetch function, which takes 500 ms.
test_run build slowTwice
test_exp "$(grep -c '^slow$' slow.produced.out)" = 1

# `failing` records each run of its fetch function, which fails after 500 ms.
# Lake makes the failure a failed job, which the two fetches share: the build
# fails, the function ran once, and the waiting fetch does not hang.
test_err "failing: failed on purpose" build failingTwice
test_exp "$(grep -c '^failing$' failing.produced.out)" = 1

# `Lib.M` imports 40 modules, so making its jobs takes a while. Its `.olean` is
# fetched twice at the same time: each module is compiled once.
mkdir -p Lib
for i in $(seq 1 40); do
  echo "import Lib.A$i" >> Lib/M.lean
  echo "def a$i : Nat := $i" > Lib/A$i.lean
done
lake_out build oleanTwice -v
test_exp "$(grep -c -E '\] Built Lib\.M( |$)' produced.out)" = 1
test_exp "$(grep -c -E '\] Built Lib\.A1( |$)' produced.out)" = 1

# Cleanup
./clean.sh
