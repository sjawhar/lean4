#!/usr/bin/env bash
source ../common.sh
./clean.sh
copy_to_work lakefile.toml Main.lean Test.lean Test WriteFails.lean FlushFails.lean

REC=.lake/module-times.tsv

# has_row NAME [MS]: the record has a line for the module whose encoded name is NAME (with compile
# time MS, if given).
has_row() {
  echo "? row for $*"
  python3 -c '
import sys
with open(".lake/module-times.tsv") as f:
    assert next(f) == "lake-module-times 3\n"
    rows = {}
    for line in f:
        ms, rem, name, imports = line.rstrip("\n").split("\t")
        rows[name] = (int(ms), int(rem), imports)
row = rows.get(sys.argv[1])
print(row)
sys.exit(0 if row and (len(sys.argv) < 3 or row[0] == int(sys.argv[2])) else 1)
' "$@"
}

# has_import NAME IMPORT: NAME's line lists the line of IMPORT among its imports.
has_import() {
  echo "? $1 imports $2"
  python3 -c '
import sys
with open(".lake/module-times.tsv") as f:
    assert next(f) == "lake-module-times 3\n"
    rows = [line.rstrip("\n").split("\t") for line in f]
names = [r[2] for r in rows]
imports = {r[2]: [names[int(i)] for i in r[3].split()] for r in rows}
print(imports.get(sys.argv[1]))
sys.exit(0 if sys.argv[2] in imports.get(sys.argv[1], []) else 1)
' "$@"
}

# rec_check EXPR: the Python expression EXPR holds over the record, where `ms(NAME)` and `rem(NAME)`
# read NAME's line.
rec_check() {
  echo "? $1"
  python3 -c '
import sys
with open(".lake/module-times.tsv") as f:
    assert next(f) == "lake-module-times 3\n"
    rows = {r[2]: r for r in (line.rstrip("\n").split("\t") for line in f)}
ms = lambda n: int(rows[n][0])
rem = lambda n: int(rows[n][1])
names = [n for n in rows if n in sys.argv[1]]
print({n: (ms(n), rem(n)) for n in names})
sys.exit(0 if eval(sys.argv[1]) else 1)
' "$1"
}

# No record: stock order, the first import starts first. The build writes a record.
LEAN_NUM_THREADS=1 test_run build
test_cmd_eq "Test.Quick1" head -n1 order.txt
test_cmd test -f $REC
has_row Test.Slow
# A module name with a space, a dot and a percent sign in one component is escaped.
has_row 'Test.a%20b%2Ec%25d'

# The record survives a removed build directory.
rm -rf .lake/build order.txt
test_cmd test -f $REC
# The longest remaining path starts first. Priorities are bands of `log₂` seconds, so the order is
# checked against a record with fixed numbers rather than measured times: `Test.Slow` at 128 s
# (priority 7), the other modules ready at the start at 0.
printf 'lake-module-times 3\n0\t0\tTest.Quick1\t\n0\t0\tTest.Quick2\t\n0\t0\tTest.Quick3\t\n128000\t128000\tTest.Slow\t\n0\t0\tTest.a%%20b%%2Ec%%25d\t\n' > $REC
LEAN_NUM_THREADS=1 test_run build
test_cmd_eq "Test.Slow" head -n1 order.txt

# An executable's root module gets an entry too.
test_run build main
has_row Main

# A module compiled again whose importer is not: the importer's kept line still imports it, and the
# module's remaining path includes the importer's.
cp Test/Quick1.lean Test/Quick1.lean.bak
printf -- '-- touched\n' >> Test/Quick1.lean
test_run build Test.Quick1
has_import Test Test.Quick1
has_import Test Test.SlowTop
rec_check 'rem("Test.Quick1") == ms("Test.Quick1") + rem("Test")'
mv Test/Quick1.lean.bak Test/Quick1.lean

# An import with no line of its own (here: the record is gone, and only `Test` recompiles) gets a
# line with no time, so the edge survives until the import is compiled, by a build that does not
# recompile its importer.
test_run build
cp $REC .lake/module-times.tsv.saved
rm $REC
cp Test.lean Test.lean.bak
printf -- '-- touched\n' >> Test.lean
test_run build
has_row Test.Quick1 0
has_import Test Test.Quick1
cp Test/Quick1.lean Test/Quick1.lean.bak
printf -- '-- touched again\n' >> Test/Quick1.lean
test_run build Test.Quick1
has_import Test Test.Quick1
rec_check 'ms("Test.Quick1") > 0 and rem("Test.Quick1") == ms("Test.Quick1") + rem("Test")'
mv Test.lean.bak Test.lean; mv Test/Quick1.lean.bak Test/Quick1.lean
mv .lake/module-times.tsv.saved $REC

# A module with no time of its own whose source is gone loses its line, even while a kept line
# still imports it. `Test.User` imports `Test.Gone`; with no record, a build that recompiles only
# `User` gives `Gone` a line with no time. Then `Gone.lean` goes, and a build that compiles neither
# keeps `User`'s line but not `Gone`'s.
cp $REC .lake/module-times.tsv.saved
printf -- '-- gone\n' > Test/Gone.lean
printf 'import Test.Gone\n' > Test/User.lean
test_run build Test.User
rm $REC
printf -- '-- touched\n' >> Test/User.lean
test_run build Test.User
has_row Test.Gone 0
has_import Test.User Test.Gone
rm Test/Gone.lean
cp Test/Quick1.lean Test/Quick1.lean.bak
printf -- '-- touched\n' >> Test/Quick1.lean
test_run build Test.Quick1
has_row Test.User
no_match_text "Test.Gone" $REC
mv Test/Quick1.lean.bak Test/Quick1.lean
rm Test/User.lean
mv .lake/module-times.tsv.saved $REC

# A module whose source is gone leaves the record at the next build that compiles something.
# Entries of modules this build did not compile stay: the executable's root, and the escaped name,
# which must decode back to a module whose source exists.
cp Test.lean Test.lean.bak; mv Test/Quick3.lean Test/Quick3.lean.bak
printf 'import Test.Quick1\nimport Test.Quick2\nimport Test.SlowTop\n' > Test.lean
test_run build
no_match_text "Test.Quick3" $REC
has_row Test.Slow
has_row Main
has_row 'Test.a%20b%2Ec%25d'
mv Test.lean.bak Test.lean; mv Test/Quick3.lean.bak Test/Quick3.lean

# The save merges over the record as it is on disk at the end of the build, so an entry another
# Lake process wrote during the build survives. Here `Test`'s own compile plays that process.
printf 'lake-module-times 3\n777777\t777777\tTest.Quick1\t\n' > inject.tsv
cp Test.lean Test.lean.bak
printf '#eval do IO.FS.writeFile ".lake/module-times.tsv" (← IO.FS.readFile "inject.tsv")\n' >> Test.lean
test_run build
has_row Test.Quick1 777777
mv Test.lean.bak Test.lean; rm inject.tsv

# A record that stops parsing during the build (here `Test`'s compile leaves one) is replaced by the
# save: it warns, naming the file, and writes a new record with this build's entries.
cp Test.lean Test.lean.bak
printf '#eval IO.FS.writeFile ".lake/module-times.tsv" "{"\n' >> Test.lean
test_out "module-times.tsv: line 1: expected 'lake-module-times 3', got '{'; ignoring it and starting a new record" build
has_row Test
mv Test.lean.bak Test.lean

# A save that fails warns, naming the file, and the build still succeeds. Here `Test`'s compile
# turns the record into a directory, so the save's re-read of the changed file fails.
cp Test.lean Test.lean.bak
printf '#eval do IO.FS.removeFile ".lake/module-times.tsv"; IO.FS.createDirAll ".lake/module-times.tsv/sub"\n' >> Test.lean
test_out "module-times.tsv: failed to save module compile times" build
mv Test.lean.bak Test.lean
rm -rf $REC

# A write that fails (here the rename, onto a directory) leaves no temporary file behind.
test_cmd_out "write failed" "$LAKE" env lean --run WriteFails.lean
match_text "left: module-times.tsv" produced.out
no_match_pat "^left: .*\.tmp$" produced.out

# A write whose bytes fail only when the buffer is flushed (a 1 KiB file size limit, with SIGXFSZ
# ignored so the write returns an error) fails, leaves the old record as it was, and leaves no
# temporary file behind. Windows has no file size limit to set.
if [ "$OS" = Windows_NT ]; then
  echo "skipped: no file size limit on Windows"
else
  mkdir -p flushFails
  printf 'lake-module-times 3\n1\t1\tTest.Old\t\n' > flushFails/module-times.tsv
  test_cmd_out "write failed" "$LAKE" env bash -c "ulimit -f 1 && trap '' XFSZ && exec lean --run FlushFails.lean"
  match_text "record: lake-module-times 3|1	1	Test.Old	|" produced.out
  no_match_pat "^left: .*\.tmp$" produced.out
fi

# A stale import cycle in the record does not hang or fail the build: the rows of the two modules,
# which this build does not compile, are kept, and the save computes remaining paths around them.
printf 'lake-module-times 3\n5000\t10000\tTest.Quick1\t1\n5000\t10000\tTest.Quick2\t0\n' > $REC
cp Test.lean Test.lean.bak
printf -- '-- touched\n' >> Test.lean
test_run build
has_row Test.Quick1 5000
has_row Test.Quick2 5000
# Each remaining path takes in `Test` (which imports both), and the edge that closes the cycle
# counts 0, so exactly one of the two takes in the other.
rec_check 'rem("Test.Quick1") >= 5000 + ms("Test") and rem("Test.Quick2") >= 5000 + ms("Test") and (rem("Test.Quick1") == 5000 + rem("Test.Quick2")) != (rem("Test.Quick2") == 5000 + rem("Test.Quick1"))'
mv Test.lean.bak Test.lean

# A record that does not parse only warns, naming the file to delete, and the build starts a new
# record: it succeeds, and its save replaces the file with this build's entries alone (`Test`'s line,
# and lines with no time for its imports).
WARN='; ignoring it and starting a new record (delete it to silence this warning)'
echo '{' > $REC
cp Test.lean Test.lean.bak
printf -- '-- touched for a record that does not parse\n' >> Test.lean
test_out "module-times.tsv: line 1: expected 'lake-module-times 3', got '{'$WARN" build
has_row Test
has_row Test.Quick1 0
has_row Test.SlowTop 0
mv Test.lean.bak Test.lean

# The editor's `lake setup-file` warns too, and still prints the module's setup.
echo '{' > $REC
test_out "module-times.tsv: line 1: expected 'lake-module-times 3', got '{'$WARN" setup-file Test/SlowTop.lean
match_text '"name":"Test.SlowTop"' produced.out

# So does a record with another version, an import index past the last line, or lines out of order.
printf 'lake-module-times 2\n' > $REC
test_out "module-times.tsv: line 1: expected 'lake-module-times 3', got 'lake-module-times 2'$WARN" build
printf 'lake-module-times 3\n1\t1\tTest.Quick1\t5\n' > $REC
test_out "module-times.tsv: line 2: import index 5, but there are 1 lines$WARN" build
printf 'lake-module-times 3\n1\t1\tTest.Quick2\t\n1\t1\tTest.Quick1\t\n' > $REC
test_out "line 3: 'Test.Quick1' is not after 'Test.Quick2' (lines are sorted by name)$WARN" build

# An older Lake's record, with no record of this format beside it, only warns, naming the old file
# to delete, and the build starts a new record beside it.
rm $REC
echo '{"version":2,"names":[],"modules":[]}' > .lake/module-times.json
cp Test.lean Test.lean.bak
printf -- '-- touched for an older record\n' >> Test.lean
test_out "module-times.json: a module-times record from an older Lake$WARN" build
has_row Test
has_row Test.Quick1 0
mv Test.lean.bak Test.lean
rm .lake/module-times.json

# A record that cannot be read at all only warns too, naming it, and the build goes on in stock
# order. Here a directory stands in its place, which the save at the end cannot replace either.
rm $REC
mkdir -p $REC/sub
cp Test.lean Test.lean.bak
printf -- '-- touched for a record that cannot be read\n' >> Test.lean
test_out "$WARN" build
match_text "module-times.tsv: " produced.out
match_text "module-times.tsv: failed to save module compile times" produced.out
mv Test.lean.bak Test.lean
test_out "$WARN" setup-file Test/SlowTop.lean
match_text '"name":"Test.SlowTop"' produced.out
rm -rf $REC

# So does a record its user may not read (skipped when the user can read a mode-000 file anyway).
printf 'lake-module-times 3\n' > $REC
chmod 000 $REC
if [ -r $REC ]; then
  echo "skipped: this user can read a mode-000 file"
else
  cp Test.lean Test.lean.bak
  printf -- '-- touched for a record that may not be read\n' >> Test.lean
  test_out "$WARN" build
  match_text "module-times.tsv: " produced.out
  mv Test.lean.bak Test.lean
fi
chmod 644 $REC
rm $REC
