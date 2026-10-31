#!/usr/bin/env bash
source ../common.sh

# Tests that Lake paces its task pool by `LAKE_TASK_POOL_SPAWN_DELAY_US`: with a 1 s delay, a burst of
# 64 short jobs runs on the few workers that start at once; with `0` (pacing off), 32 jobs that each
# wait until all 32 have started do start, each on its own worker.

if [ "$(uname)" != Linux ]; then
  echo "SKIP: taskPoolPacing reads /proc/self/status"
  exit 0
fi

./clean.sh
export LEAN_NUM_THREADS=64

LAKE_TASK_POOL_SPAWN_DELAY_US=1000000 test_run build burst
test_cmd cat .lake/build/threads
test_exp "$(cat .lake/build/threads)" -lt 24

LAKE_TASK_POOL_SPAWN_DELAY_US=0 test_run build barrier
test_cmd cat .lake/build/threads
test_exp "$(cat .lake/build/threads)" -ge 32

# Cleanup
rm -f produced.out
