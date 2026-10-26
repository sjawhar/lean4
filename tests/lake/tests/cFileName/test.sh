#!/usr/bin/env bash
source ../common.sh

./clean.sh

# ---
# Tests that a module's object files do not depend on `LAKE_RESTORE_ARTIFACTS`.
#
# The C compiler writes the name of the file it compiles into the object file. Without
# `LAKE_RESTORE_ARTIFACTS`, a module fetched from the artifact cache has its C file only there,
# under a name that is its content hash. If Lake compiled it there, the object file's bytes (and
# then the input hash of every shared library that links it, and of every module that loads that
# library) would depend on the setting.
# ---

TEST_DIR="$(cd -- "$(dirname -- "${BASH_SOURCE[0]}")" &> /dev/null && pwd)"
WORK="$TEST_DIR/.lake/work"

# The package copies, each with its own artifact cache:
# * `restore`: built with `LAKE_RESTORE_ARTIFACTS=true`
# * `cache`: built without it
# * `fetch`: without it, and with `Plugin` fetched from the cache before its object files are built
# * `copy`: as `fetch`, with the cache on another file system (so Lake copies instead of linking)
CACHE_OF_copy=
if [ "$UNAME" = Linux ] && [ -d /dev/shm ] && [ -w /dev/shm ]; then
  CACHE_OF_copy=$(mktemp -d /dev/shm/lake-cFileName.XXXXXX 2>/dev/null) || CACHE_OF_copy=
  [ -z "$CACHE_OF_copy" ] || trap 'rm -rf "$CACHE_OF_copy"' EXIT
fi
cache_of() {
  if [ "$1" = copy ]; then echo "$CACHE_OF_copy"; else echo "$WORK/$1/cache"; fi
}
on() {
  local dir=$1; shift
  (
    cd "$WORK/$dir"
    export LAKE_ARTIFACT_CACHE=true LAKE_CACHE_DIR="$(cache_of "$dir")"
    if [ "$dir" = restore ]; then export LAKE_RESTORE_ARTIFACTS=true; else unset LAKE_RESTORE_ARTIFACTS; fi
    "$@"
  )
}
query() { local dir=$1; shift; on "$dir" "$LAKE" query "$@"; }
content() { cksum < "$(query "$1" "$2")"; }
setup() {
  mkdir -p "$WORK/$1"
  cp lakefile.toml Plugin.lean User.lean "$WORK/$1"
  chmod -R u+w "$WORK/$1"
}
# build_all DIR: builds `User` and both object files of `Plugin`; in a fetching copy, `Plugin` is
# first built alone and its build directory removed, so that the cache holds its outputs
build_all() {
  local dir=$1
  case $dir in fetch|copy)
    on $dir test_run build +Plugin
    rm -rf "$WORK/$dir/.lake/build"
  esac
  on $dir test_run build User +Plugin:o.export +Plugin:o.noexport
}

dirs=(restore cache fetch)
if [ -n "$CACHE_OF_copy" ] && [ "$(stat -c %d "$CACHE_OF_copy")" != "$(stat -c %d "$TEST_DIR")" ]; then
  dirs+=(copy)
else
  echo "skipped the copy case: no other file system for the cache"
fi
for dir in "${dirs[@]}"; do
  setup $dir
  build_all $dir
done

# check_c_file DIR: the C file Lake compiled is in the build directory, and its `.hash` file, if
# any, describes its contents (the name of its cached artifact is its content hash)
check_c_file() {
  local c="$WORK/$1/.lake/build/ir/Plugin.c"
  test_exp -f "$c"
  if [ -f "$c.hash" ]; then
    test_exp "$(cat "$c.hash")" = "$(basename "$(query "$1" +Plugin:c)" .c)"
  fi
}
# check_same: every setting gives the same bytes and the same input hashes
check_same() {
  for dir in "${dirs[@]}"; do
    [ $dir = restore ] && continue
    test_exp "$(content $dir +Plugin:o.export)" = "$(content restore +Plugin:o.export)"
    test_exp "$(content $dir +Plugin:o.noexport)" = "$(content restore +Plugin:o.noexport)"
    test_exp "$(content $dir Plugin:shared)" = "$(content restore Plugin:shared)"
    test_exp "$(content $dir +User:olean)" = "$(content restore +User:olean)"
    test_exp "$(query $dir +User:depHash)" = "$(query restore +User:depHash)"
  done
  for dir in "${dirs[@]}"; do
    case $dir in fetch|copy) check_c_file $dir ;; esac
  done
  # Placing a C file leaves no temporary files behind
  test_exp -z "$(find "$WORK" -name '*.tmp')"
}
check_same
userHash=$(query restore +User:depHash)

# A C file placed after another source's build gets no stale `.hash` file: build the module from
# the old source, then from a new one, then fetch the old one's outputs from the cache and compile
setup stale
on stale test_run build +Plugin
sed_i 's/42/43/' "$WORK/stale/Plugin.lean"
on stale test_run build +Plugin
sed_i 's/43/42/' "$WORK/stale/Plugin.lean"
on stale test_run build +Plugin:o.export
check_c_file stale
test_exp "$(content stale +Plugin:o.export)" = "$(content restore +Plugin:o.export)"

# A change to the library's source is compiled alike in every setting
for dir in "${dirs[@]}"; do
  sed_i 's/42/43/' "$WORK/$dir/Plugin.lean" "$WORK/$dir/User.lean"
  build_all $dir
done
check_same
test_exp "$(query restore +User:depHash)" != "$userHash"

# Cleanup
rm -f produced.out
