#!/usr/bin/env bash
source ../common.sh
./clean.sh

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

# No record: stock order, the first import starts first. The build writes a record.
LEAN_NUM_THREADS=1 test_run build
test_cmd_eq "Test.Quick1" head -n1 order.txt
test_cmd test -f $REC
has_row Test.Slow
# A module name with a space, a dot and a percent sign in one component is escaped.
has_row 'Test.a%20b%2Ec%25d'

# The record survives a removed build directory, and the longest remaining path starts first.
rm -rf .lake/build order.txt
LEAN_NUM_THREADS=1 test_run build
test_cmd_eq "Test.Slow" head -n1 order.txt

# An executable's root module gets an entry too.
test_run build main
has_row Main

# A module compiled again whose importer is not: the importer's kept line still imports it.
cp Test/Quick1.lean Test/Quick1.lean.bak
printf -- '-- touched\n' >> Test/Quick1.lean
test_run build Test.Quick1
has_import Test Test.Quick1
has_import Test Test.SlowTop
mv Test/Quick1.lean.bak Test/Quick1.lean

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

# A save that fails warns, naming the file, and the build still succeeds. Here `Test`'s compile
# leaves a record that does not parse, so the save's re-read of the changed file fails.
cp Test.lean Test.lean.bak
printf '#eval IO.FS.writeFile ".lake/module-times.tsv" "{"\n' >> Test.lean
test_out "module-times.tsv: failed to save module compile times" build
mv Test.lean.bak Test.lean

# A write that fails (here the rename, onto a directory) leaves no temporary file behind.
test_cmd_out "write failed" "$LAKE" env lean --run WriteFails.lean
match_text "left: module-times.tsv" produced.out
no_match_pat "^left: .*\.tmp$" produced.out

# A stale import cycle in the record does not hang or fail the build: the rows of the two modules,
# which this build does not compile, are kept, and the save computes remaining paths around them.
printf 'lake-module-times 3\n5000\t10000\tTest.Quick1\t1\n5000\t10000\tTest.Quick2\t0\n' > $REC
cp Test.lean Test.lean.bak
printf -- '-- touched\n' >> Test.lean
test_run build
has_row Test.Quick1 5000
has_row Test.Quick2 5000
mv Test.lean.bak Test.lean

# A record that does not parse fails loudly, naming the file.
echo '{' > $REC
test_err "module-times.tsv" build

# The editor's `lake setup-file` names the file too.
test_err "module-times.tsv" setup-file Test/SlowTop.lean

# A record with another version fails loudly, naming the file.
printf 'lake-module-times 2\n' > $REC
test_err "module-times.tsv: line 1: expected 'lake-module-times 3', got 'lake-module-times 2'" build

# So do an import index past the last line, and lines out of order.
printf 'lake-module-times 3\n1\t1\tTest.Quick1\t5\n' > $REC
test_err "module-times.tsv: line 2: import index 5, but there are 1 lines" build
printf 'lake-module-times 3\n1\t1\tTest.Quick2\t\n1\t1\tTest.Quick1\t\n' > $REC
test_err "line 3: 'Test.Quick1' is not after 'Test.Quick2'" build

./clean.sh
