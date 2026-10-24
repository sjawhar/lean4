#!/usr/bin/env bash
source ../../tests/common.sh

# Lake folds the imports of a module, and the outputs of a collection of jobs, through a chain of
# tasks. Tests that the fold stays linear when a step has to wait. A chain built while one of its jobs
# still runs passes every later step a value that Lean marks as shared between threads, and Lean
# copies such a value on each update, so a fold that extends an array in each step takes about 16
# times as long for 4 times as many steps. A right fold (`Job.collectList`) that merges the logs also
# copies the logs merged so far in each step.

./clean.sh

# The folds give the results of the chains of `zipWith` they replace
test_run build same

# Job collections: the time each takes once its slowest job (which sleeps) is done
collect_ms() {
  "$LAKE" build "$1" 2>&1 | sed -n 's/.* jobs: \([0-9]*\) ms after the slowest job.*/\1/p'
}
for c in collectArray collectVector collectList; do
  c1=$(collect_ms ${c}1)
  c4=$(collect_ms ${c}4)
  echo "$c: 10000 jobs: $c1 ms; 40000 jobs: $c4 ms"
  test_exp "$c4" -lt $((8 * c1 + 500))
done

# The import fold of a library's root module while its first import, which sleeps, recompiles.
# The root repeats imports of 100 empty modules, so the fold has many steps but few modules build.
N=${IMPORT_FOLD_N:-8000}
mkdir -p Test
for ((i = 0; i < 100; i++)); do echo prelude > Test/M$i.lean; done
# CPU seconds (user and system, `lean` included) of the build of `Test` that recompiles `Test.Slow`,
# with `Test` importing `Test.Slow` and then $1 other modules
fold_cpu() {
  { echo prelude; echo "import Test.Slow"; for ((i = 0; i < $1; i++)); do echo "import Test.M$((i % 100))"; done; } > Test.lean
  printf 'import Init\n#eval IO.sleep 2000\n' > Test/Slow.lean
  "$LAKE" build Test > /dev/null
  echo "-- edited" >> Test/Slow.lean
  local TIMEFORMAT='%3U %3S'
  { time "$LAKE" build Test > /dev/null; } 2> cpu.produced.out
  awk '{print $1 + $2}' cpu.produced.out
}
f1=$(fold_cpu "$N")
f4=$(fold_cpu $((4 * N)))
echo "import fold: $N imports: $f1 CPU-s; $((4 * N)) imports: $f4 CPU-s"
test_cmd awk -v a="$f1" -v b="$f4" 'BEGIN { exit !(b < 8 * a + 1) }'

# Cleanup
rm -f produced.out cpu.produced.out
