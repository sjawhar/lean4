#!/usr/bin/env bash
source ../common.sh

./clean.sh

# A build-directory output that has its artifact's hash but is not the cache entry is relinked to
# the entry: a hard link to `<output>.relink`, renamed over the output. Where that rename fails
# (Linux overlayfs fails it with ESTALE once a lower-layer output was linked into the cache), the
# build keeps the output, whose hash it has just checked, and does not fail the module. On Linux, a
# preload (FailRelink.c) makes the rename from every `.relink` path fail with ESTALE.

if [ "$UNAME" != Linux ]; then
  echo "SKIPPED: the rename failure is injected with an LD_PRELOAD library (Linux only)"
  exit 0
fi

mkdir -p work && cd work
export LAKE_CACHE_DIR="$PWD/cache" LAKE_ARTIFACT_CACHE=true LAKE_RESTORE_ARTIFACTS=true
test_cmd cc -shared -fPIC -o fail-relink.so ../FailRelink.c

mkdir -p t/P
printf 'name = "p"\n\n[[lean_lib]]\nname = "P"\n' > t/lakefile.toml
printf 'import P.D\n' > t/P.lean
printf 'def X.v : Nat := 1\n' > t/P/X.lean
printf 'import P.X\ntheorem D.ok : X.v = 1 := rfl\n' > t/P/D.lean
test_run -d t build P.D

# `X.olean` becomes a copy with the same bytes, which is not the cache entry
X_OLEAN=t/.lake/build/lib/lean/P/X.olean
test_cmd cp "$X_OLEAN" x.genuine
test_cmd cp "$X_OLEAN" x.copy
test_cmd rm -f "$X_OLEAN"
test_cmd mv x.copy "$X_OLEAN"

echo "\$ (preload: a rename from a .relink path fails with ESTALE; lake -v -d t build P.D)"
rc=0
out=$(env LD_PRELOAD="$PWD/fail-relink.so" "$LAKE" -v -d t build P.D 2>&1) || rc=$?
printf '%s\n' "$out" > relink.out
cat relink.out
test_exp $rc = 0
match_pat 'could not relink .*P/X\.olean to its cache entry, keeping the file' relink.out
test_cmd cmp x.genuine "$X_OLEAN"
test_exp -z "$(find t/.lake -name '*.relink')"

# Without the preload, the next build links the output to the entry
test_run -d t build P.D
test_cmd cmp x.genuine "$X_OLEAN"
ENTRY="$LAKE_CACHE_DIR/artifacts/$(cat "$X_OLEAN.hash").olean"
test_exp "$(stat -c %i "$X_OLEAN")" = "$(stat -c %i "$ENTRY")"
