#!/usr/bin/env bash
source ../common.sh

./clean.sh

# Lake keeps the hash and the parsed header of each module's source with the source's identity
# (device, inode, size, modification and status change times) in a record of its package's
# `.lake/build/source.stamps`, and reads the source again only when that identity changed: then it
# hashes and parses the source. It records no identity that changed within 2 s before it looked at
# the file, so an edit in the same clock tick as the stored hash is seen. A record's first line
# holds the hash and the identity; the header follows. A process reads the file once for its
# lookups; each write of a build's changed records (after it reports its result, and before in the
# background when no record changed for a tenth of a second or a change waited a second) reads it
# again while it holds `source.stamps.lock`.

NO_BUILD_CODE=3
mkdir -p work/T work/U work/W && cd work
printf 'name = "t"\n\n[[lean_lib]]\nname = "T"\n\n[[lean_lib]]\nname = "U"\n\n[[lean_lib]]\nname = "V"\n\n[[lean_lib]]\nname = "W"\n' > lakefile.toml
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
# Each module of W that W.I<n> imports is named after a component that Lean's escaper leaves as it
# is (`fun`, `α`) or escapes (`123`, `9a`, `a b`)
parts=(fun 123 9a α 'a b')
: > W.lean
for i in "${!parts[@]}"; do
  printf 'def x%s : Nat := %s\n' "$i" "$i" > "W/${parts[$i]}.lean"
  printf 'import W.«%s»\ndef y%s : Nat := x%s\n' "${parts[$i]}" "$i" "$i" > "W/I$i.lean"
  printf 'import W.I%s\n' "$i" >> W.lean
done
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

# A record's hash is used only for the identity it records: each of its parts is compared (on
# Unix-like systems, any change of the others also moves the status change time)
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

# An import name, plain (`W.fun`) or not (`W.«123»`, `W.«9a»`, `W.α`), is recorded as the encoding
# writes it, and the next build reads it back: it builds nothing, and with a planted hash it takes
# the record
test_run build W
test_cmd test "$(stamp get W.I0 | tail -n 1)" = '-e- W.fun'
test_cmd test "$(stamp get W.I1 | tail -n 1)" = '-e- W.«123»'
test_cmd test "$(stamp get W.I2 | tail -n 1)" = '-e- W.«9a»'
test_cmd test "$(stamp get W.I3 | tail -n 1)" = '-e- W.α'
test_not_out 'Built' build W
for i in 0 1 2 3; do
  plant W.I$i
  uses_stamp W
  test_run build W --rehash
done

# A name the encoding cannot write is not recorded: the space in `W.«a b»` separates an import's
# flags from its name, so the check fails and W.I4 has no record; W stays up to date
no_stamp W.I4
ignores_stamp W

# A header line that drops the escaping holds another name: `W.123` is a numeric component, which
# the build does not find
edit W.I1 '3s/.*/-e- W.123/'
test_err 'W.123' build W --no-build
test_run build W --rehash
# `W.9a` is no name at all, so that record is not read
plant W.I2
edit W.I2 '3s/.*/-e- W.9a/'
ignores_stamp W
test_run build W --rehash

# An edit that keeps the size and the modification time (as `cp -p` or `touch -r` can) changes the
# status change time, so the source is hashed again
test_cmd touch -r T/A.lean ref
printf 'def a : Nat := 2\n' > T/A.lean
test_cmd touch -r ref T/A.lean
test_out 'Built T.A' build T

# An edit in the same second as the stored hash: a build that reads the source less than 2 s after
# it changed keeps no identity for it, so an edit in the same clock tick (which can keep every part
# of the identity) is seen. The modification time is set 30 s ahead, so that a read in the next 30 s
# is less than 2 s after it, however slow the build; then it is set to now, as an edit leaves it.
printf 'def a : Nat := 3\n' > T/A.lean
test_cmd touch -d "@$(($(date +%s) + 30))" T/A.lean
test_out 'Built T.A' build T
no_stamp T.A
test_cmd touch T/A.lean

# A build that reads the source less than 2 s after an edit (at the time the edit set) keeps no
# identity for it either. `touch` changes the identity and not the contents, so the build hashes the
# source again and compiles nothing. On a local filesystem, a file's modification time is a reading
# of the clock that `date` reads, and the build reads the source after the edit and before it ends,
# so a build that ends less than 2 s after the source's modification time (`date -r`; a `date` taken
# before the edit can be a clock tick later) read it less than 2 s after the edit. A slower build
# proves nothing, and is tried again.
for _ in {1..20}; do
  test_cmd touch T/A.lean
  edited=$(date -r T/A.lean +%s%N)
  test_run build T
  span=$(($(date +%s%N) - edited))
  if [ $span -lt 2000000000 ]; then break; fi
done
if [ $span -lt 2000000000 ]; then
  no_stamp T.A
else
  echo "SKIPPED: check of the 2 s rule: each of 20 builds ended 2 s or more after its edit"
fi

# The rule is checked against the moment Lake read the source, however late the write comes. The
# source's modification time is set to 3 s after the edit, so a read up to 5 s after the edit is
# less than 2 s after it. Another process then holds the lock of `source.stamps` for 6 s, and a
# write waits for it at most 5 s, so the write comes more than 2 s after that time; a later time
# cannot work, as a fast build could then write less than 2 s after it. Skipped without `flock`, or
# where it cannot take the lock.
if command -v flock > /dev/null; then
  sleep 3
  test_run build T
  printf 'def a : Nat := 9\n' > T/A.lean
  t=$(date +%s%N)
  test_cmd touch -d "@$((t / 1000000000 + 3)).$(printf '%09d' $((t % 1000000000)))" T/A.lean
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

# A build writes its records in the background once none has changed for a tenth of a second, so a
# build that compiles for long keeps them before it ends
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

# A copy of the tree (new inodes and status change times, the same modification times, as `cp -a`
# makes) matches no record's identity, so each source is read, hashed and parsed again, and recorded
# again under the copy's identity. The copy builds nothing, and its next build reads no source.
printf 'def a : Nat := 1\n' > T/A.lean
sleep 3
test_run build T
test_cmd rm -rf ../copy ../copy2 ../copy3
test_cmd cp -a . ../copy
test_cmd cp -a . ../copy2
test_cmd cp -a . ../copy3
inode_field() { stamp get "$1" | head -n 1 | cut -d ' ' -f 3; }
cd ../copy
sleep 3
test_cmd test "$(inode_field T.A)" != "$(stat -c %i T/A.lean)"
test_not_out 'Built' build T
test_cmd test "$(inode_field T.A)" = "$(stat -c %i T/A.lean)"
plant
uses_stamp

# A record of another identity gives no header: in a copy, B's record (of the other tree's identity,
# with the hash of B's source) with an import that B's source does not have is not used; B's source
# is parsed, and recorded again under the copy's identity with the parsed header
cd ../copy2
edit T.B 's/ T\.A$/ T.Nope/'
test_run build T --no-build
test_run build T
test_cmd test "$(inode_field T.B)" = "$(stat -c %i T/B.lean)"
test_cmd test "$(stamp get T.B | tail -n 1 | cut -d ' ' -f 2)" = T.A

# In a copy, where no identity matches, an edit that keeps the size and the modification time
# (restored with `touch -d`) is read and built; then T is up to date
cd ../copy3
mtime=$(stat -c %y T/A.lean)
printf 'def a : Nat := 2\n' > T/A.lean
test_cmd touch -d "$mtime" T/A.lean
test_cmd test "$(stat -c %y T/A.lean)" = "$mtime"
test_out 'Built T.A' build T
test_run build T --no-build
cd ../work
