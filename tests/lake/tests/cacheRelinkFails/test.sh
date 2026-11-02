#!/usr/bin/env bash
source ../common.sh

./clean.sh

# A build-directory output that has its artifact's hash but is not the cache entry is relinked to
# the entry: a hard link to `<output>.relink`, renamed over the output. Where that rename fails
# (Linux overlayfs fails it with ESTALE once a lower-layer output was linked into the cache), the
# build keeps the output, whose hash it has just checked, and does not fail the module; the output
# gets the mode a relink gives it (read-only, and executable for an executable). On Linux, a
# preload (FailRelink.c) makes the rename from every `.relink` path fail with ESTALE.

if [ "$UNAME" != Linux ]; then
  echo "SKIPPED: the rename failure is injected with an LD_PRELOAD library (Linux only)"
  exit 0
fi

mkdir -p work && cd work
export LAKE_CACHE_DIR="$PWD/cache" LAKE_ARTIFACT_CACHE=true LAKE_RESTORE_ARTIFACTS=true
test_cmd cc -shared -fPIC -o fail-relink.so ../FailRelink.c

mkdir -p t/P
printf 'name = "p"\n\n[[lean_lib]]\nname = "P"\n\n[[lean_exe]]\nname = "hello"\nroot = "Main"\n' > t/lakefile.toml
printf 'import P.D\n' > t/P.lean
printf 'def X.v : Nat := 1\n' > t/P/X.lean
printf 'import P.X\ntheorem D.ok : X.v = 1 := rfl\n' > t/P/D.lean
printf 'def main : IO Unit := IO.println "hello"\n' > t/Main.lean
test_run -d t build P.D hello

X_OLEAN=t/.lake/build/lib/lean/P/X.olean
EXE=t/.lake/build/bin/hello
test_cmd cp "$X_OLEAN" x.genuine
test_cmd cp "$EXE" exe.genuine
# copies FILE -- replace FILE with a writable, non-executable copy of the same bytes, which is not
# the cache entry
copies() {
  for f in "$@"; do
    test_cmd cp "$f" copy
    test_cmd chmod 644 copy
    test_cmd rm -f "$f"
    test_cmd mv copy "$f"
  done
}
mode() { stat -c %a "$1"; }

# The modes a relink gives: a build without the preload links both copies to their entries
X_ENTRY="$LAKE_CACHE_DIR/artifacts/$(cat "$X_OLEAN.hash").olean"
EXE_ENTRY="$LAKE_CACHE_DIR/artifacts/$(cat "$EXE.hash")"
X_ENTRY_MODE=$(mode "$X_ENTRY") EXE_ENTRY_MODE=$(mode "$EXE_ENTRY")
copies "$X_OLEAN" "$EXE"
test_run -d t build P.D hello
X_MODE=$(mode "$X_OLEAN") EXE_MODE=$(mode "$EXE")
test_exp "$X_MODE" = "$X_ENTRY_MODE"
test_exp "$EXE_MODE" = "$EXE_ENTRY_MODE"
test_exp "$(stat -c %i "$X_OLEAN")" = "$(stat -c %i "$X_ENTRY")"
test_exp "$(stat -c %i "$EXE")" = "$(stat -c %i "$EXE_ENTRY")"
test_exp -x "$EXE"

# The same with every relink rename failing: the build keeps the copies, with those modes
copies "$X_OLEAN" "$EXE"
X_COPY_INODE=$(stat -c %i "$X_OLEAN") EXE_COPY_INODE=$(stat -c %i "$EXE")
test_exp "$X_COPY_INODE" != "$(stat -c %i "$X_ENTRY")"
test_exp "$EXE_COPY_INODE" != "$(stat -c %i "$EXE_ENTRY")"
echo "\$ (preload: a rename from a .relink path fails with ESTALE; lake -v -d t build P.D hello)"
rc=0
out=$(env LD_PRELOAD="$PWD/fail-relink.so" "$LAKE" -v -d t build P.D hello 2>&1) || rc=$?
printf '%s\n' "$out" > relink.out
cat relink.out
test_exp $rc = 0
match_pat 'could not relink .*P/X\.olean to its cache entry, keeping the file' relink.out
match_pat 'could not relink .*bin/hello to its cache entry, keeping the file' relink.out
test_cmd cmp x.genuine "$X_OLEAN"
test_cmd cmp exe.genuine "$EXE"
test_exp "$(stat -c %i "$X_OLEAN")" = "$X_COPY_INODE"
test_exp "$(stat -c %i "$EXE")" = "$EXE_COPY_INODE"
test_exp "$(mode "$X_OLEAN")" = "$X_MODE"
test_exp "$(mode "$EXE")" = "$EXE_MODE"
test_exp "$(mode "$X_ENTRY")" = "$X_ENTRY_MODE"
test_exp "$(mode "$EXE_ENTRY")" = "$EXE_ENTRY_MODE"
test_cmd_out hello "$EXE"
test_exp -z "$(find t/.lake -name '*.relink')"

# Without the preload, the next build links both outputs to their entries
test_run -d t build P.D hello
test_cmd cmp x.genuine "$X_OLEAN"
test_cmd cmp exe.genuine "$EXE"
test_exp "$(stat -c %i "$X_OLEAN")" = "$(stat -c %i "$X_ENTRY")"
test_exp "$(stat -c %i "$EXE")" = "$(stat -c %i "$EXE_ENTRY")"
test_cmd_out hello "$EXE"
