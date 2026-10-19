#!/usr/bin/env bash
source ../common.sh

./clean.sh

# A build slot that comes free goes to the waiting job of highest priority, and among jobs of one
# priority to the one that has waited longest (`Lake.withBuildSlot`'s `prio`). A module's compile
# asks at the priority its job was scheduled with, so when more jobs wait for a slot than there are
# slots (jobs give their worker up while they read the remote cache), the slots follow the order in
# which the task pool would start them. A job that waits for a slot lends its worker to the task
# pool, so that the pool still starts other jobs (e.g., the reads of a module that has just become
# ready) while compiles wait.

copy_to_work SlotOrder.lean SlotLend.lean
for p in SlotOrder SlotLend; do
  test_cmd env LEAN_PATH="$BUILD_DIR/lib/lean" "$BUILD_DIR/bin/lean" $p.lean -c $p.c
  test_cmd "$BUILD_DIR/bin/leanc" -o $p $p.c -L"$BUILD_DIR/lib/lean" -lLake_shared
done
env LEAN_NUM_THREADS=1 LD_LIBRARY_PATH="$BUILD_DIR/lib/lean" ./SlotOrder > order.out
cat order.out
test_exp "$(tr '\n' ' ' < order.out)" = "p7 p5a p5b p3 p0 "
# With the holders' commands run as a build runs them (`Lake.outputLending`), the pool still starts a
# job while every slot is busy and a job waits for one; the control holds the workers and must not.
env LEAN_NUM_THREADS=2 LD_LIBRARY_PATH="$BUILD_DIR/lib/lean" ./SlotLend hold > hold.out
cat hold.out
test_exp "$(cat hold.out)" = blocked
env LEAN_NUM_THREADS=2 LD_LIBRARY_PATH="$BUILD_DIR/lib/lean" ./SlotLend lend > lend.out
cat lend.out
test_exp "$(cat lend.out)" = ran

rm -rf work produced.*
