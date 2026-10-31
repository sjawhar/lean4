#!/usr/bin/env bash
source ../common.sh

./clean.sh

# Lake keeps the hash and the parsed header of each module's source with the source's identity
# (device, inode, size, modification and status change times) in `<module>.lean.stamp` in the build
# directory, and reads the source again only when that identity changed. It records no identity that
# changed within 2 s before it looked at the file, so an edit in the same clock tick as the stored
# hash is seen. A stamp's first line holds the hash and the identity; the header follows.

NO_BUILD_CODE=3
mkdir -p work/T work/U && cd work
printf 'name = "t"\n\n[[lean_lib]]\nname = "T"\n\n[[lean_lib]]\nname = "U"\n' > lakefile.toml
printf 'import T.B\n' > T.lean
printf 'import T.A\ndef b : Nat := a\n' > T/B.lean
printf 'def a : Nat := 1\n' > T/A.lean
# U.B's imports set each of the header's flags
printf 'module\n\npublic import U.B\n' > U.lean
printf 'module\n\npublic def a : Nat := 1\n' > U/A.lean
printf 'module\n\npublic def c : Nat := 2\n' > U/C.lean
printf 'module\n\npublic def d : Nat := 3\n' > U/D.lean
printf 'module\n\npublic import U.A\nimport all U.C\npublic meta import U.D\n\npublic def b : Nat := a\n' > U/B.lean
STAMP=.lake/build/lib/lean/T/A.lean.stamp
BSTAMP=.lake/build/lib/lean/T/B.lean.stamp
USTAMP=.lake/build/lib/lean/U/B.lean.stamp

# set_field FILE N VALUE -- replace the Nth field of the stamp's first line (1: the hash; 2-8: the
# identity)
set_field() {
  test_exp -f "$1"
  awk -v n="$2" -v v="$3" 'NR == 1 { $n = v } { print }' "$1" > "$1.new"
  mv "$1.new" "$1"
}
plant() { set_field "${1:-$STAMP}" 1 0123456789abcdef; }
# uses_stamp -- the next build takes the stamp: with a planted hash, the module's input changed
uses_stamp() { test_status $NO_BUILD_CODE build "${1:-T}" --no-build; }
# ignores_stamp -- the next build hashes the source: the module is up to date
ignores_stamp() { test_run build "${1:-T}" --no-build; }

# The sources are older than 2 s: the first build keeps their hashes and headers
sleep 3
test_run build T U
test_exp -f "$STAMP"
test_exp -f "$BSTAMP"

# A `--no-build` build writes no stamp
test_cmd rm -f "$STAMP"
test_run build T --no-build
test_exp ! -f "$STAMP"
test_run build T
test_exp -f "$STAMP"

# An unchanged source is not hashed again: its stored hash is the input of its trace
plant
uses_stamp
# `--rehash` hashes every source again, and stores the hashes
test_run build T --no-build --rehash
test_run build T --rehash
ignores_stamp

# A stamp is used only for the identity it records: each of its parts is compared (on Unix-like
# systems, any change of the others also moves the status change time)
for n in 2 3 4 5 6 7 8; do
  plant
  set_field "$STAMP" $n 1
  ignores_stamp
  test_run build T --rehash
done

# The header is the stamp's too: B's stamp, with an import that B's source does not have, is used
test_cmd sed -i.bak 's/ T\.A$/ T.Nope/' "$BSTAMP"
test_err 'T.Nope' build T --no-build
test_run build T --rehash
# A stamp whose header cannot be read is no stamp
plant "$BSTAMP"
test_cmd sed -i.bak '3s/.*/xyz T.A/' "$BSTAMP"
ignores_stamp

# Each flag of an import survives the stamp: a build from the stamps finds U up to date, and U.B's
# stamp is used
test_run build U --no-build
plant "$USTAMP"
uses_stamp U

# An edit that keeps the size and the modification time (as `cp -p` or `touch -r` can) changes the
# status change time, so the source is hashed again
test_cmd touch -r T/A.lean ref
printf 'def a : Nat := 2\n' > T/A.lean
test_cmd touch -r ref T/A.lean
test_out 'Built T.A' build T

# An edit in the same second as the stored hash: the build right after the edit (within 2 s of it)
# keeps no identity for it, so an edit in the same clock tick (which can keep every part of the
# identity) is seen. A build that ends at most 1 s (by `date +%s`) after the edit looked at the
# source less than 2 s after it; a slower build is tried again.
fast=
for i in 1 2 3; do
  test_cmd cp "$STAMP" before.stamp
  t0=$(date +%s)
  printf 'def a : Nat := %s\n' $((2 + i)) > T/A.lean
  test_out 'Built T.A' build T
  if [ $(($(date +%s) - t0)) -le 1 ]; then fast=1; break; fi
done
test_exp -n "$fast"
test_cmd cmp "$STAMP" before.stamp
plant
ignores_stamp

# A stamp that cannot be read is no stamp, and the next build writes a good one
sleep 3
echo garbage > "$STAMP"
ignores_stamp
test_run build T
plant
uses_stamp
