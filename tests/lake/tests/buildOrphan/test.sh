#!/usr/bin/env bash
source ../common.sh

./clean.sh

# Killing a process and finding its children are POSIX; the inherited lock is Unix-only
if [ "$OS" = Windows_NT ]; then
  echo "SKIPPED: not supported on Windows"
  exit 0
fi

# A `lean` whose Lake was killed (`kill -9`) keeps running and writes its outputs into the tree
# when it finishes. The next build of that tree must not run until it has: otherwise the orphan
# replaces the outputs that build compiled from the current source with those of the old one.

mkdir -p work && cd work
export LAKE_CACHE_DIR="$PWD/cache" LAKE_ARTIFACT_CACHE=true LAKE_RESTORE_ARTIFACTS=true
unset LAKE_NO_BUILD_LOCK
GO="$PWD/go"
STARTED="$PWD/started"

# mkp DIR -- package `p`: `P.X` defines `X.v` (see `setx`), `P.D` proves `X.v = 1`, `P.E` `X.v = 2`
mkp() {
  mkdir -p "$1/P"
  printf 'name = "p"\n\n[[lean_lib]]\nname = "P"\n' > "$1/lakefile.toml"
  printf 'import P.D\nimport P.E\n' > "$1/P.lean"
  printf 'import P.X\ntheorem D.ok : X.v = 1 := rfl\n' > "$1/P/D.lean"
  printf 'import P.X\ntheorem E.ok : X.v = 2 := rfl\n' > "$1/P/E.lean"
}
# setx DIR V [HEADER] -- replace `P/X.lean` (a new file, as a checkout writes it) with `X.v := V`
setx() { rm -f "$1/P/X.lean"; printf '%s\ndef X.v : Nat := %s\n' "${3:-}" "$2" > "$1/P/X.lean"; }
# test_truth DIR -- DIR builds as its source says (`X.v = 2`): `P.D` fails, `P.E` builds
test_truth() { test_err 'P/D.lean' -d "$1" build P.D; test_run -d "$1" build P.E; }
# wait_until CMD... -- poll CMD for up to 60 s
wait_until() { for _ in $(seq 600); do "$@" && return 0; sleep 0.1; done; return 1; }
# Elaborating this records that `lean` has read the file, then blocks until the test creates
# `$GO` (at most 60 s)
WAIT_GO="#eval show IO Unit from do
  IO.FS.writeFile \"$STARTED\" \"\"
  for _ in [0:1200] do
    if ← System.FilePath.pathExists \"$GO\" then return
    IO.sleep 50"

# Kill Lake while `lean` compiles `P.X` from `X.v := 1` (held back until `$GO` exists)
mkp t; setx t 1 "$WAIT_GO"
"$LAKE" -d t build P.D P.E > a.log 2>&1 &
lake_a=$!
test_cmd wait_until test -f "$STARTED"
orphans=$(pgrep -P "$lake_a" -x lean || true)
test_exp -n "$orphans"
test_cmd kill -9 "$lake_a"
wait "$lake_a" || true
# Build `X.v := 2` in the tree; let the orphan finish once this build has either waited or finished
setx t 2
"$LAKE" -d t build P.D P.E > b.log 2>&1 &
lake_b=$!
waited_or_done() { ! kill -0 "$lake_b" 2> /dev/null || grep -q 'waiting for another Lake' b.log; }
test_cmd wait_until waited_or_done
test_cmd touch "$GO"
wait "$lake_b" || true
for p in $orphans; do test_cmd wait_until eval "! kill -0 $p 2> /dev/null"; done
test_cmd cat a.log b.log
match_text 'waiting for another Lake' b.log
# The tree holds `X.olean` compiled from its source, as a build without the cache produces it
mkp r; setx r 2
LAKE_ARTIFACT_CACHE=false test_run -d r build P.X
test_cmd cmp r/.lake/build/lib/lean/P/X.olean t/.lake/build/lib/lean/P/X.olean
test_truth t
# A fresh tree with the same source restores what the cache holds for it
mkp v; setx v 2
test_truth v
