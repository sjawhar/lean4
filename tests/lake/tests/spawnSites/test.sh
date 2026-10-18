#!/usr/bin/env bash
source ../common.sh

# Every process Lake starts is spawned by `Lake.spawnProc` (`Lake/Util/Proc.lean`), one spawn at a
# time: the kept-module checker's spawn turns off the inheritance of the workspace build lock, and no
# other spawn may run meanwhile, or a compiler it starts would not hold the lock. So no other Lake
# source calls the process API itself.
SRC=../../../../src/lake
test_exp -f "$SRC/Lake/Util/Proc.lean"
test_cmd_fails grep -rnE --include='*.lean' --exclude=Proc.lean \
  'IO\.Process\.(spawn|output|run)\b|(^|[^A-Za-z0-9_.])(spawn|output) \{ *(cmd|args)\b' "$SRC"
