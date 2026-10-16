#!/usr/bin/env bash
source ../common.sh

./clean.sh

# A module archive (`.ltar`) carries its own trace, so its outputs always agree with it. A
# well-formed archive of other contents, put where this input's archive should be (the module's
# local `.ltar`, or the cache entry its mapping names), must not be unpacked as this input's
# outputs, neither on the first restore nor on a retry after it fails.

mkdir -p work && cd work
export LAKE_ARTIFACT_CACHE=true LAKE_RESTORE_ARTIFACTS=true

# mkp DIR -- package `p`: `P.X` defines `X.v` (see `setx`), `P.D` proves `X.v = 1`, `P.E` `X.v = 2`
mkp() {
  mkdir -p "$1/P"
  printf 'name = "p"\n\n[[lean_lib]]\nname = "P"\n' > "$1/lakefile.toml"
  printf 'import P.D\nimport P.E\n' > "$1/P.lean"
  printf 'import P.X\ntheorem D.ok : X.v = 1 := rfl\n' > "$1/P/D.lean"
  printf 'import P.X\ntheorem E.ok : X.v = 2 := rfl\n' > "$1/P/E.lean"
}
# setx DIR V -- replace `P/X.lean` (a new file, as a checkout writes it) with `X.v := V`
setx() { rm -f "$1/P/X.lean"; printf 'def X.v : Nat := %s\n' "$2" > "$1/P/X.lean"; }
# test_truth DIR -- DIR builds as its source says (`X.v = 2`): `P.D` fails, `P.E` builds
test_truth() { test_err 'P/D.lean' -d "$1" build P.D; test_run -d "$1" build P.E; }

X_LTAR=.lake/build/ir/P/X.ltar
# An archive of `P.X` compiled from `X.v := 1`, without the cache
mkp u; setx u 1
LAKE_ARTIFACT_CACHE=false test_run -d u build +P.X:ltar
test_exp -f "u/$X_LTAR"

# The module's local archive replaced (its trace and `.ltar.hash` kept), its other outputs gone,
# and nothing in the cache: Lake unpacks the local archive
export LAKE_CACHE_DIR="$PWD/cache1"
mkp t; setx t 2
test_run -d t build P.X -o "$PWD/outputs1.jsonl"
test_exp -f "t/$X_LTAR"
test_cmd rm -f "t/$X_LTAR"
test_cmd cp "u/$X_LTAR" "t/$X_LTAR"
test_cmd rm -f t/.lake/build/lib/lean/P/X.olean t/.lake/build/lib/lean/P/X.ilean t/.lake/build/ir/P/X.c
export LAKE_CACHE_DIR="$PWD/cache2"
test_truth t
mkp v; setx v 2
test_truth v

# The cache entry of the archive the mapping names replaced, as the only cached output
export LAKE_CACHE_DIR="$PWD/cache3"
mkp t2; setx t2 2
test_run -d t2 build P.X -o "$PWD/outputs3.jsonl"
test_cmd find cache3/artifacts -type f ! -name '*.ltar' -delete
test_cmd rm -rf cache3/outputs
ENTRY="$(ls cache3/artifacts/*.ltar)"
test_cmd rm -f "$ENTRY"
test_cmd cp "u/$X_LTAR" "$ENTRY"
test_run -d t2 cache add "$PWD/outputs3.jsonl"
mkp v2; setx v2 2
test_err 'does not match its content hash' -d v2 build P.D
# The failed restore left nothing for a retry to replay
test_truth v2
mkp v3; setx v3 2
test_truth v3
