#!/usr/bin/env bash
source ../common.sh

./clean.sh

# The targets are given in the order Lake fetches them: each one before `Slow` is fetched before the token is set.

echo "# TEST: without --fail-fast, nothing is canceled: the executable and the shared library build"
test_err "Some required targets logged failures" build Fail slowA app sharedSlow Slow awaitsCanceled lateNoError
test_exp -f .lake/build/bin/app
test_exp -n "$(grep -E '^✔ .*Built Slow:shared' produced.out)"
if grep -E 'Canceled' produced.out; then
  echo "FAILURE: a job reported as canceled without --fail-fast"
  exit 1
fi

./clean.sh

# Verbose, so that a job that only ran is shown (`✔ ... Ran`). The failure is listed once, for the job that logged it.
echo "# TEST: without --fail-fast, the jobs that depend on a job that failed are shown as failed, not as run"
if lake_out build -v NeedsFail; then rc=0; else rc=$?; fi
test_exp "$rc" = 1
if grep -E '^✔ .*Ran (NeedsFail|NeedsFail:irArts|test/NeedsFail:default)$' produced.out; then
  echo "FAILURE: a job that depends on a failed job reported as run"
  exit 1
fi
test_exp -n "$(grep -E '^✖ .*Running NeedsFail$' produced.out)"
failures=$(sed -n '/^Some required targets logged failures:$/,/^error: build failed$/p' produced.out | grep '^- ' || true)
test_exp "$failures" = "- test/failingNeed"

./clean.sh

echo "# TEST: under --fail-fast, an executable whose root imports a canceled module is canceled, not bad imports"
test_err "Some required targets logged failures" build --fail-fast Fail slowA app Slow
test_exp ! -f .lake/build/bin/app
if grep -E 'bad import' produced.out; then
  echo "FAILURE: cancellation misreported as bad imports"
  exit 1
fi
if grep -E '^- (app:exe|App|Slow)$' produced.out; then
  echo "FAILURE: canceled job listed as a failure"
  exit 1
fi
test_exp -n "$(grep -E '^⊘ .*Canceled app:exe$' produced.out)"

./clean.sh

# Verbose, so that a job that only ran is shown (`✔ ... Ran`)
echo "# TEST: under --fail-fast, jobs that depend on a canceled module through registered jobs are canceled, not run"
test_err "Some required targets logged failures" build --fail-fast -v Fail slowA sharedSlow Slow
if grep -E '^✔ .*Ran (Slow:c\.o|Slow:shared|test/sharedSlow)' produced.out; then
  echo "FAILURE: a job that depends on a canceled job reported as run"
  exit 1
fi
test_exp -n "$(grep -E '^(⊘|ℹ) .*Canceled Slow:c\.o' produced.out)"
test_exp -n "$(grep -E '^(⊘|ℹ) .*Canceled Slow:shared$' produced.out)"
test_exp -n "$(grep -E '^(⊘|ℹ) .*Canceled test/sharedSlow$' produced.out)"

./clean.sh

echo "# TEST: under --fail-fast, a running job that awaits a job that the cancellation cancels is canceled"
test_err "Some required targets logged failures" build --fail-fast Fail slowA awaitsCanceled
test_exp -n "$(grep -E '^⊘ .*Canceled test/awaitsCanceled$' produced.out)"

./clean.sh

echo "# TEST: under --fail-fast, a fetch that fails with an error entry after the build was canceled is a failure"
test_err "Some required targets logged failures" build --fail-fast Fail lateError
test_exp -n "$(grep -E '^✖ .*test/lateError$' produced.out)"
test_exp -n "$(grep -E '^- test/lateError$' produced.out)"

./clean.sh

# The known limit of `ensureJob`: it takes a fetch that fails without an error entry once the build is canceled as
# canceled, since that is how an await of a canceled job fails a fetch. The build has failed already.
echo "# TEST: under --fail-fast, a fetch that fails without an error entry after the build was canceled is canceled"
test_err "Some required targets logged failures" build --fail-fast Fail lateNoError
test_exp -n "$(grep -E '^⊘ .*Canceled test/lateNoError$' produced.out)"

./clean.sh

# A job that depends on a job that failed can be labeled canceled or not, depending on whether the monitor had set the
# token when it failed: the module of `NeedsFail`, whose `needs` fails, is in practice not, and `awaitsFailing`, which
# waits for the token before it awaits `failingNeed`, always is. What it is labeled must not change the rest of the
# report.
echo "# TEST: under --fail-fast, the failed job, the exit code and the list of failures are the same in every run"
check_failing_need() {
  test_exp "$1" = 1
  test_exp -n "$(grep -E '^✖ .*test/failingNeed$' produced.out)"
  failures=$(sed -n '/^Some required targets logged failures:$/,/^error: build failed$/p' produced.out | grep '^- ' || true)
  test_exp "$failures" = "- test/failingNeed"
}
for i in 1 2 3 4 5; do
  if lake_out build --fail-fast NeedsFail; then rc=0; else rc=$?; fi
  check_failing_need "$rc"
  ./clean.sh
  if lake_out build --fail-fast awaitsFailing; then rc=0; else rc=$?; fi
  check_failing_need "$rc"
  test_exp -n "$(grep -E '^⊘ .*Canceled test/awaitsFailing$' produced.out)"
  ./clean.sh
done
