#!/usr/bin/env bash
source ../common.sh

./clean.sh

# Lake keeps the hash and the parsed header of each module's source with the source's identity
# (device, inode, size, modification and status change times) in a record of its package's
# `.lake/build/source.stamps`, and reads the source again only when that identity changed. It records
# no identity that changed within 2 s before it looked at the file, so an edit in the same clock tick
# as the stored hash is seen. A record's first line holds the hash and the identity; the header
# follows. A process reads the file once for its lookups; each write of a build's changed records
# (after it reports its result, and before in the background when no record changed for a second)
# reads it again while it holds `source.stamps.lock`.

NO_BUILD_CODE=3
mkdir -p work/T work/U && cd work
printf 'name = "t"\n\n[[lean_lib]]\nname = "T"\n\n[[lean_lib]]\nname = "U"\n\n[[lean_lib]]\nname = "V"\n' > lakefile.toml
printf 'import T.B\n' > T.lean
printf 'import T.A\ndef b : Nat := a\n' > T/B.lean
printf 'def a : Nat := 1\n' > T/A.lean
# U.B's imports set each of the header's flags
printf 'module\n\npublic import U.B\n' > U.lean
printf 'module\n\npublic def a : Nat := 1\n' > U/A.lean
printf 'module\n\npublic def c : Nat := 2\n' > U/C.lean
printf 'module\n\npublic def d : Nat := 3\n' > U/D.lean
printf 'module\n\npublic import U.A\nimport all U.C\npublic meta import U.D\n\npublic def b : Nat := a\n' > U/B.lean
# V takes 8 s to build
printf '#eval IO.sleep 8000\n' > V.lean
STAMPS=.lake/build/source.stamps

# stamp OP KEY -- `get` (to standard output; fails if the module has no record), `put` (from
# standard input) or `del` the record of module KEY
stamp() { lean --run ../../stamps.lean "$1" "$STAMPS" "$2"; }
has_stamp() { test_cmd stamp get "$1" > /dev/null; }
no_stamp() { test_cmd_fails stamp get "$1" > /dev/null; }
# set_field KEY N VALUE -- replace the Nth field of the first line of KEY's record (1: the hash;
# 2-8: the identity)
set_field() {
  stamp get "$1" > rec.old
  awk -v n="$2" -v v="$3" 'NR == 1 { $n = v } { print }' rec.old | stamp put "$1"
}
# edit KEY SED-SCRIPT -- apply SED-SCRIPT to KEY's record
edit() { stamp get "$1" | sed "$2" | stamp put "$1"; }
plant() { set_field "${1:-T.A}" 1 0123456789abcdef; }
# uses_stamp -- the next build takes the record: with a planted hash, the module's input changed
uses_stamp() { test_status $NO_BUILD_CODE build "${1:-T}" --no-build; }
# ignores_stamp -- the next build hashes the source: the module is up to date
ignores_stamp() { test_run build "${1:-T}" --no-build; }

# The sources are older than 2 s: the first build keeps their hashes and headers
sleep 3
test_run build T U
has_stamp T.A
has_stamp T.B
# in one file for the package, not one file per module
test_exp ! -f .lake/build/lib/lean/T/A.lean.stamp

# A `--no-build` build writes no record
stamp del T.A
test_run build T --no-build
no_stamp T.A
test_run build T
has_stamp T.A

# An unchanged source is not hashed again: its stored hash is the input of its trace
plant
uses_stamp
# `--rehash` hashes every source again, and stores the hashes
test_run build T --no-build --rehash
test_run build T --rehash
ignores_stamp

# A record is used only for the identity it records: each of its parts is compared (on Unix-like
# systems, any change of the others also moves the status change time)
for n in 2 3 4 5 6 7 8; do
  plant
  set_field T.A $n 1
  ignores_stamp
  test_run build T --rehash
done

# The header is the record's too: B's record, with an import that B's source does not have, is used
edit T.B 's/ T\.A$/ T.Nope/'
test_err 'T.Nope' build T --no-build
test_run build T --rehash
# A record whose header cannot be read is no record
plant T.B
edit T.B '3s/.*/xyz T.A/'
ignores_stamp

# Each flag of an import survives the record: a build from the records finds U up to date, and
# U.B's record is used
test_run build U --no-build
plant U.B
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
  t0=$(date +%s)
  printf 'def a : Nat := %s\n' $((2 + i)) > T/A.lean
  test_out 'Built T.A' build T
  if [ $(($(date +%s) - t0)) -le 1 ]; then fast=1; break; fi
done
test_exp -n "$fast"
no_stamp T.A

# The rule is checked against the moment Lake read the source, however late the write comes. The
# source's modification time is set up to 3 s ahead of the edit, so a read up to 4 s after the edit
# is less than 2 s after it; every write of `source.stamps` waits for its lock, which another
# process holds until 6 s after the edit, so the write comes more than 2 s after that time. Skipped
# without `flock`, or where it cannot take the lock.
if command -v flock > /dev/null; then
  sleep 3
  test_run build T
  printf 'def a : Nat := 9\n' > T/A.lean
  test_cmd touch -d "@$(($(date +%s) + 3))" T/A.lean
  rm -f held
  flock "$STAMPS.lock" sh -c 'touch held; sleep 6' &
  holder=$!
  while [ ! -e held ] && kill -0 $holder 2> /dev/null; do sleep 0.1; done
  if [ -e held ]; then
    test_out 'Built T.A' build T
    wait $holder
    no_stamp T.A
  fi
fi

# A build writes its records in the background once none has changed for a second, so a build
# that compiles for long keeps them before it ends
sleep 3
test_run build T
stamp del T.B
printf -- '-- %s\n' "$(date +%s%N)" >> V.lean
"$LAKE" build T V > bg.out 2>&1 &
builder=$!
seen=
while kill -0 $builder 2> /dev/null; do
  if stamp get T.B > /dev/null 2>&1; then seen=1; break; fi
  sleep 0.1
done
# seen while V still compiled
test_exp -n "$seen"
test_cmd kill -0 $builder
test_cmd wait $builder
has_stamp T.B

# A record that cannot be read is no record, and the next build writes a good one
sleep 3
test_run build T
echo garbage | stamp put T.A
ignores_stamp
test_run build T
plant
uses_stamp

# A file that a crash left torn or zero-filled holds no record that a build uses, and the next
# build writes a good one
test_run build T --rehash
head -c 64 "$STAMPS" > torn
test_cmd cp torn "$STAMPS"
ignores_stamp
test_cmd dd if=/dev/zero of="$STAMPS" bs=1 count=4096 status=none
ignores_stamp
test_run build T
plant
uses_stamp
