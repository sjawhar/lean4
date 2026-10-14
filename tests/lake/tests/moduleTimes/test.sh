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
printf '{"version":1,"modules":[{"name":"Test.Quick1","ms":777777,"imports":[]}]}' > inject.json
cp Test.lean Test.lean.bak
printf 'import Test.Quick1\nimport Test.Quick2\nimport Test.Quick3\nimport Test.SlowTop\n#eval do IO.FS.writeFile ".lake/module-times.json" (← IO.FS.readFile "inject.json")\n' > Test.lean
test_run build
match_text '"ms":777777' .lake/module-times.json
mv Test.lean.bak Test.lean; rm inject.json

# A stale import cycle in the record does not hang or fail the build.
printf '{"version":1,"modules":[{"name":"Test.Quick1","ms":5000,"imports":["Test.Quick2"]},{"name":"Test.Quick2","ms":5000,"imports":["Test.Quick1"]}]}' \
  > .lake/module-times.json
rm -rf .lake/build
test_run build

# A record that does not parse fails loudly, naming the file.
echo '{' > .lake/module-times.json
test_err "module-times.json" build

# A record with another version fails loudly, naming the file.
echo '{"version":2,"modules":[]}' > .lake/module-times.json
test_err "module-times.json" build

./clean.sh
