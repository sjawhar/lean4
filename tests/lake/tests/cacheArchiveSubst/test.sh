#!/usr/bin/env bash
source ../common.sh

./clean.sh

# A module archive (`.ltar`) carries its own trace, so its outputs always agree with it. A
# well-formed archive of other contents, put in place of the module's own local `.ltar`, must not
# be unpacked, reused or recorded as this input's archive.

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
X_OLEAN=.lake/build/lib/lean/P/X.olean
X_ILEAN=.lake/build/lib/lean/P/X.ilean
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

# The module's genuine local archive, with one output replaced by other contents and another
# output removed: unpacking the archive must replace every output, not only the missing one, in
# both the cache-on and the cache-off branch
# mixed_case NAME on|off -- the build after the change runs with the cache on or off
mixed_case() {
  local name=$1 cache=$2
  export LAKE_CACHE_DIR="$PWD/cache-$name-1"
  mkp "$name"; setx "$name" 2
  test_run -d "$name" build P.X -o "$PWD/$name.jsonl"
  test_exp -f "$name/$X_LTAR"
  test_cmd cp "$name/$X_OLEAN" "$name.genuine"
  test_cmd rm -f "$name/$X_OLEAN" "$name/$X_ILEAN"
  test_cmd cp "u/$X_OLEAN" "$name/$X_OLEAN"
  export LAKE_CACHE_DIR="$PWD/cache-$name-2"
  if [ "$cache" = on ]; then
    test_truth "$name"
    # A fresh tree restores what that build cached
    mkp "$name-v"; setx "$name-v" 2
    test_truth "$name-v"
  else
    LAKE_ARTIFACT_CACHE=false test_truth "$name"
  fi
  test_cmd cmp "$name.genuine" "$name/$X_OLEAN"
}
mixed_case mixon on
mixed_case mixoff off

# The same, with the unpack killed (Lake and leantar, so Lake cleans up nothing) before leantar
# writes the `.olean`: the `.olean` must not keep its replaced contents next to the freshly
# unpacked trace and `.ilean`, where a cache-off retry would take every output as unpacked. A
# `LEAN_SYSROOT` farm's `leantar` runs the real one, then puts the `.olean` path back as it was
# before the unpack (its old bytes, or no file) and kills Lake and itself.
FARM="$PWD/farm"
mkdir -p "$FARM/bin"
for e in "$LEAN_SYSROOT"/*; do [ "$(basename "$e")" = bin ] || ln -s "$e" "$FARM/$(basename "$e")"; done
for e in "$LEAN_SYSROOT"/bin/*; do
  [ "$(basename "$e")" = leantar ] || ln -s "$e" "$FARM/bin/$(basename "$e")"
done
cat > "$FARM/bin/leantar" << EOF
#!/usr/bin/env bash
unpack=false; for a; do [ "\$a" = -x ] && unpack=true; done
\$unpack && [ -n "\${LEANTAR_KILL_BEFORE:-}" ] || exec "$LEAN_SYSROOT/bin/leantar" "\$@"
f=\$LEANTAR_KILL_BEFORE; had=false
if [ -e "\$f" ]; then cp -p "\$f" "\$f.before-unpack"; had=true; fi
"$LEAN_SYSROOT/bin/leantar" "\$@"
rm -f "\$f"; if \$had; then mv "\$f.before-unpack" "\$f"; fi
kill -9 \$PPID \$\$
EOF
chmod +x "$FARM/bin/leantar"
export LAKE_CACHE_DIR="$PWD/cache-kill"
mkp k; setx k 2
test_run -d k build P.X -o "$PWD/k.jsonl"
test_exp -f "k/$X_LTAR"
test_cmd cp "k/$X_OLEAN" k.genuine
test_cmd rm -f "k/$X_OLEAN" "k/$X_ILEAN"
test_cmd cp "u/$X_OLEAN" "k/$X_OLEAN"
echo "# lake -d k build P.X, killed during the unpack"
LAKE_OVERRIDE_LEAN=true LEAN_SYSROOT="$FARM" LEANTAR_KILL_BEFORE="$PWD/k/$X_OLEAN" \
  LAKE_ARTIFACT_CACHE=false "$LAKE" -d k build P.X && exit 1
LAKE_ARTIFACT_CACHE=false test_truth k
test_cmd cmp k.genuine "k/$X_OLEAN"

# The module's local archive replaced while all its other outputs stay intact, so a build is a
# complete hit on them and reuses the local archive for `-o`: with no hash recorded for it, or
# under `--rehash`, it must not be recorded under this input's hash (both archives are cached
# under their own names, so a mapping to the substitute would restore it)
# reuse_case NAME LAKE_ARGS... -- run the case in fresh trees against a fresh cache
reuse_case() {
  local name=$1; shift
  export LAKE_CACHE_DIR="$PWD/cache-$name"
  mkp "$name-t"; setx "$name-t" 2
  mkp "$name-u"; setx "$name-u" 1
  test_run -d "$name-t" build P.X -o "$PWD/$name-good2.jsonl"
  test_run -d "$name-u" build P.X -o "$PWD/$name-good1.jsonl"
  test_cmd rm -f "$name-t/$X_LTAR"
  test_cmd cp "$name-u/$X_LTAR" "$name-t/$X_LTAR"
  if [ "$name" = nohash ]; then test_cmd rm -f "$name-t/$X_LTAR.hash"; fi
  test_run -d "$name-t" "$@" build P.X -o "$PWD/$name-reused.jsonl"
  test_run -d "$name-t" cache add "$PWD/$name-reused.jsonl"
  mkp "$name-v"; setx "$name-v" 2
  test_truth "$name-v"
}
reuse_case nohash
reuse_case rehash --rehash

# An intact local archive that is the cache entry itself (the hard link packing makes) is reused
# without reading it: made unreadable, it must not fail a build that reuses it
export LAKE_CACHE_DIR="$PWD/cache-noread"
mkp n; setx n 2
test_run -d n build P.X -o "$PWD/noread1.jsonl"
test_exp -f "n/$X_LTAR"
test_cmd chmod 000 "n/$X_LTAR"
if cat "n/$X_LTAR" > /dev/null 2>&1; then
  echo "SKIPPED: the archive is still readable (running as root?)"
else
  test_not_out 'discarding it' -d n build P.X -o "$PWD/noread2.jsonl"
  # The outputs file still names the archive
  match_text "$(cat "n/$X_LTAR.hash").ltar" noread2.jsonl
fi
test_cmd chmod 444 "n/$X_LTAR"
