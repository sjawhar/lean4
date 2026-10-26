#!/usr/bin/env bash
source ../common.sh

./clean.sh

# ---
# Tests that a module's object file does not depend on `LAKE_RESTORE_ARTIFACTS`.
#
# The C compiler writes the name of the file it compiles into the object file. Without
# `LAKE_RESTORE_ARTIFACTS`, a module's C file is only in the artifact cache, under a name that is
# its content hash. If Lake compiled it there, the object file's bytes (and then the input hash of
# every shared library that links it, and of every module that loads that library) would depend on
# the setting.
# ---

TEST_DIR="$(cd -- "$(dirname -- "${BASH_SOURCE[0]}")" &> /dev/null && pwd)"
WORK="$TEST_DIR/.lake/work"

# on DIR CMD...: runs CMD in the package copy DIR with its own artifact cache,
# with `LAKE_RESTORE_ARTIFACTS=true` in `restore` and unset in `cache`
on() {
  local dir=$1; shift
  (
    cd "$WORK/$dir"
    export LAKE_ARTIFACT_CACHE=true LAKE_CACHE_DIR="$WORK/$dir/cache"
    if [ "$dir" = restore ]; then export LAKE_RESTORE_ARTIFACTS=true; else unset LAKE_RESTORE_ARTIFACTS; fi
    "$@"
  )
}
query() { local dir=$1; shift; on "$dir" "$LAKE" query "$@"; }
content() { cksum < "$(query "$1" "$2")"; }

for dir in restore cache; do
  mkdir -p "$WORK/$dir"
  cp lakefile.toml Plugin.lean User.lean "$WORK/$dir"
  chmod -R u+w "$WORK/$dir"
  on $dir test_run build User
done

# check_same: both settings give the same bytes and the same input hashes
check_same() {
  test_exp "$(content restore +Plugin:o.export)" = "$(content cache +Plugin:o.export)"
  test_exp "$(content restore Plugin:shared)" = "$(content cache Plugin:shared)"
  test_exp "$(content restore +User:olean)" = "$(content cache +User:olean)"
  test_exp "$(query restore +User:depHash)" = "$(query cache +User:depHash)"
}
check_same
# Placing the C file leaves no temporary files behind
test_exp -z "$(find "$WORK" -name '*.tmp')"
userHash=$(query restore +User:depHash)

# A change to the library's source is compiled in both settings, alike
for dir in restore cache; do
  sed_i 's/42/43/' "$WORK/$dir/Plugin.lean" "$WORK/$dir/User.lean"
  on $dir test_run build User
done
check_same
test_exp "$(query restore +User:depHash)" != "$userHash"

# Cleanup
rm -f produced.out
