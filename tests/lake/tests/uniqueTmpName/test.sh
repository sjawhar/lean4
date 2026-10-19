#!/usr/bin/env bash
source ../common.sh

./clean.sh

# Lake names a temporary file next to its target (e.g., a download into the shared artifact cache)
# with the process ID, a counter that starts at 0 in each process, and 64 random bits. Two processes
# can report the same process ID (e.g., in two containers that share the cache directory), so the
# random bits alone keep their names apart: two such processes must get different names.

if [ "$UNAME" != Linux ]; then
  echo "SKIPPED: the same process ID comes from a Linux LD_PRELOAD"
  exit 0
fi

copy_to_work TmpName.lean SamePid.c
test_cmd cc -shared -fPIC -o same-pid.so SamePid.c
test_cmd env LEAN_PATH="$BUILD_DIR/lib/lean" "$BUILD_DIR/bin/lean" TmpName.lean -c TmpName.c
test_cmd "$BUILD_DIR/bin/leanc" -o tmpname TmpName.c -L"$BUILD_DIR/lib/lean" -lLake_shared
tmpnames() {
  env LD_LIBRARY_PATH="$BUILD_DIR/lib/lean" LD_PRELOAD="$PWD/same-pid.so" ./tmpname > "$1"
  cat "$1"
}
tmpnames a.out
tmpnames b.out
# Each process reports the preloaded ID, and numbers its names 0, 1, 2 (`uniqueTmpPath` uses the
# same counter as `uniqueTmpSuffix`)
for f in a.out b.out; do
  test_exp "$(wc -l < $f)" = 3
  test_cmd grep -qE '^\.4242\.0\.[0-9a-f]+\.tmp$' <(sed -n 1p $f)
  test_cmd grep -qE '^\.4242\.1\.[0-9a-f]+\.tmp$' <(sed -n 2p $f)
  test_cmd grep -qE '^entry\.4242\.2\.[0-9a-f]+\.tmp$' <(sed -n 3p $f)
done
# The two processes' names differ
test_exp "$(sed -n 1p a.out)" != "$(sed -n 1p b.out)"
test_exp "$(sed -n 3p a.out)" != "$(sed -n 3p b.out)"

rm -rf work produced.*
