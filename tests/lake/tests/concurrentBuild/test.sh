#!/usr/bin/env bash
source ../common.sh

./clean.sh
copy_to_work lakefile.toml Test.lean Test

export LAKE_ARTIFACT_CACHE=true

# Wait (up to 60 s) until `lean` has been started on `Test.Slow`.
wait_for_slow() {
  for _ in $(seq 600); do
    test -f .lake/build/ir/Test/Slow.setup.json && return 0
    sleep 0.1
  done
  return 1
}

# Two Lake processes building the same workspace must not run at the same time:
# the second waits for the first instead of removing and caching its outputs mid-build.
export LAKE_CACHE_DIR="$PWD/cache1"
"$LAKE" build > build1.log 2>&1 &
pid=$!
wait_for_slow
test_cmd "$LAKE" build > build2.log
match_pat "waiting for another Lake process" build2.log
wait $pid
test_cmd cat build1.log
rm -rf .lake

# A source file modified after Lake hashed it, but before `lean` finished, must not have
# its outputs cached under the hash of the old contents.
export LAKE_CACHE_DIR="$PWD/cache2"
mkdir pristine && cp -r lakefile.toml Test.lean Test pristine/
"$LAKE" build > build3.log 2>&1 &
pid=$!
wait_for_slow
sed_i 's/X.v : Nat := 1/X.v : Nat := 2/' Test/X.lean
if wait $pid; then cat build3.log; echo "FAILURE: build succeeded"; exit 1; fi
match_pat "Test/X.lean: source file was modified during the build" build3.log
# The next build compiles the current contents.
test_run build
# A workspace with the original contents gets outputs compiled from them.
cd pristine
printf 'import Test.X\nexample : X.v = 1 := rfl\n' > Test/Check.lean
echo 'import Test.Check' >> Test.lean
test_run build
