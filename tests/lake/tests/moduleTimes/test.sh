#!/usr/bin/env bash
source ../common.sh
./clean.sh

# No record: stock order, the first import starts first. The build writes a record.
LEAN_NUM_THREADS=1 test_run build
test_cmd_eq "Test.Quick1" head -n1 order.txt
test_cmd test -f .lake/module-times.json
match_text '"Test.Slow"' .lake/module-times.json

# The record survives a removed build directory, and the longest remaining path starts first.
rm -rf .lake/build order.txt
LEAN_NUM_THREADS=1 test_run build
test_cmd_eq "Test.Slow" head -n1 order.txt

# An executable's root module gets an entry too.
test_run build main
match_text '"Main"' .lake/module-times.json

# A module whose source is gone leaves the record at the next build that compiles something.
# Entries of modules this build did not compile stay, the executable's root among them.
cp Test.lean Test.lean.bak; mv Test/Quick3.lean Test/Quick3.lean.bak
printf 'import Test.Quick1\nimport Test.Quick2\nimport Test.SlowTop\n' > Test.lean
test_run build
no_match_text '"Test.Quick3"' .lake/module-times.json
match_text '"Test.Slow"' .lake/module-times.json
match_text '"Main"' .lake/module-times.json
mv Test.lean.bak Test.lean; mv Test/Quick3.lean.bak Test/Quick3.lean

# The save merges over the record as it is on disk at the end of the build, so an entry another
# Lake process wrote during the build survives. Here `Test`'s own compile plays that process.
printf '{"version":2,"names":["Test.Quick1"],"modules":[[0,777777,[]]]}' > inject.json
cp Test.lean Test.lean.bak
printf 'import Test.Quick1\nimport Test.Quick2\nimport Test.Quick3\nimport Test.SlowTop\n#eval do IO.FS.writeFile ".lake/module-times.json" (← IO.FS.readFile "inject.json")\n' > Test.lean
test_run build
match_text ',777777,' .lake/module-times.json
mv Test.lean.bak Test.lean; rm inject.json

# A save that fails warns, naming the file, and the build still succeeds. Here `Test`'s compile
# leaves a record that does not parse, so the save's re-read of the changed file fails.
cp Test.lean Test.lean.bak
printf 'import Test.Quick1\nimport Test.Quick2\nimport Test.Quick3\nimport Test.SlowTop\n#eval IO.FS.writeFile ".lake/module-times.json" "{"\n' > Test.lean
test_out "module-times.json: failed to save module compile times" build
mv Test.lean.bak Test.lean

# A write that fails (here the rename, onto a directory) leaves no temporary file behind.
test_cmd_out "write failed" "$LAKE" env lean --run WriteFails.lean
match_text "left: module-times.json" produced.out
no_match_pat "^left: .*\.tmp$" produced.out

# A stale import cycle in the record does not hang or fail the build.
printf '{"version":2,"names":["Test.Quick1","Test.Quick2"],"modules":[[0,5000,[1]],[1,5000,[0]]]}' \
  > .lake/module-times.json
rm -rf .lake/build
test_run build

# A record that does not parse fails loudly, naming the file.
echo '{' > .lake/module-times.json
test_err "module-times.json" build

# The editor's `lake setup-file` names the file too.
test_err "module-times.json" setup-file Test/SlowTop.lean

# A record with another version (here the first format) fails loudly, naming the file.
echo '{"version":1,"modules":[]}' > .lake/module-times.json
test_err "module-times.json: version 1, expected 2" build

./clean.sh
