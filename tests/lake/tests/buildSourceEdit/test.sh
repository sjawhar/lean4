#!/usr/bin/env bash
source ../common.sh

./clean.sh

# A source file rewritten after Lake hashed it, but before its `lean` read it, with its old
# modification time restored (as `rsync -a`, `cp -p` or `tar -x` leave it), must not have the new
# contents' outputs traced and cached under the input hash of the old ones.

mkdir -p work && cd work
export LAKE_CACHE_DIR="$PWD/cache" LAKE_ARTIFACT_CACHE=true LAKE_RESTORE_ARTIFACTS=true
GO="$PWD/go"

# mkp DIR -- package `p`: `P.X` (importing `P.Slow`, whose elaboration blocks until the test
# creates `$GO`, for at most 60 s) defines `X.v` (see `setx`), `P.D` proves `X.v = 1`, `P.E` `X.v = 2`
mkp() {
  mkdir -p "$1/P"
  printf 'name = "p"\n\n[[lean_lib]]\nname = "P"\n' > "$1/lakefile.toml"
  printf 'import P.D\nimport P.E\n' > "$1/P.lean"
  printf '#eval show IO Unit from do\n  for _ in [0:1200] do\n    if ← System.FilePath.pathExists "%s" then return\n    IO.sleep 50\n' \
    "$GO" > "$1/P/Slow.lean"
  printf 'import P.X\ntheorem D.ok : X.v = 1 := rfl\n' > "$1/P/D.lean"
  printf 'import P.X\ntheorem E.ok : X.v = 2 := rfl\n' > "$1/P/E.lean"
}
# setx DIR V -- replace `P/X.lean` (a new file, as a checkout writes it) with `X.v := V`
setx() { rm -f "$1/P/X.lean"; printf 'import P.Slow\ndef X.v : Nat := %s\n' "$2" > "$1/P/X.lean"; }
# test_truth DIR -- DIR builds as its source says (`X.v = 2`): `P.D` fails, `P.E` builds
test_truth() { test_err 'P/D.lean' -d "$1" build P.D; test_run -d "$1" build P.E; }
wait_until() { for _ in $(seq 600); do "$@" && return 0; sleep 0.1; done; return 1; }

# Lake hashes `P/X.lean` (`X.v := 2`) to find its imports, so before `P.Slow` compiles. While it
# does, `X.v := 1` replaces it under the old modification time.
mkp t; setx t 2
"$LAKE" -d t build P.D P.E > build.log 2>&1 &
pid=$!
test_cmd wait_until test -f t/.lake/build/ir/P/Slow.setup.json
test_cmd cp -p t/P/X.lean x.ref
setx t 1
test_cmd touch -r x.ref t/P/X.lean
test_cmd touch "$GO"
wait "$pid" || true
test_cmd cat build.log
match_text 'P/X.lean: source file was modified during the build' build.log
# A fresh tree with `X.v := 2` restores what the cache holds for it
mkp v; setx v 2
test_truth v

# A source file Lake reads part-way through an in-place write (git writes a blob with one
# `write(2)`, which sets the modification time when it starts): Lake hashes the prefix, `lean`
# compiles the whole file, and the modification time does not change in between.
GO="$PWD/go2"
mkp t2
test_cmd rm -f t2/P/X.lean
printf 'import P.Slow\n-- written so far\n' > t2/P/X.lean
"$LAKE" -d t2 build P.D P.E > build2.log 2>&1 &
pid=$!
test_cmd wait_until test -f t2/.lake/build/ir/P/Slow.setup.json
test_cmd cp -p t2/P/X.lean x2.ref
printf 'def X.v : Nat := 1\n' >> t2/P/X.lean
test_cmd touch -r x2.ref t2/P/X.lean
test_cmd touch "$GO"
wait "$pid" || true
test_cmd cat build2.log
match_text 'P/X.lean: source file was modified during the build' build2.log
# A fresh tree with only the prefix (no `X.v`) restores no outputs compiled from the whole file
mkp v2
test_cmd cp x2.ref v2/P/X.lean
test_err 'P/D.lean' -d v2 build P.D
