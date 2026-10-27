#!/usr/bin/env bash
source ../common.sh

./clean.sh

# A build slot that comes free goes to the waiting job of highest priority, and among jobs of one
# priority to the one that has waited longest (`Lake.withBuildSlot`'s `prio`). A module's compile
# asks at the priority its job was scheduled with, so when more jobs wait for a slot than there are
# slots (jobs give their worker up while they read the remote cache), the slots follow the order in
# which the task pool would start them.

copy_to_work SlotOrder.lean
test_cmd env LEAN_PATH="$BUILD_DIR/lib/lean" "$BUILD_DIR/bin/lean" SlotOrder.lean -c SlotOrder.c
test_cmd "$BUILD_DIR/bin/leanc" -o slotorder SlotOrder.c -L"$BUILD_DIR/lib/lean" -lLake_shared
env LEAN_NUM_THREADS=1 LD_LIBRARY_PATH="$BUILD_DIR/lib/lean" ./slotorder > order.out
cat order.out
test_exp "$(tr '\n' ' ' < order.out)" = "p7 p5a p5b p3 p0 "

rm -rf work produced.*
