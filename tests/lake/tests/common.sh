set -euo pipefail

# Elan configuration

ELAN=${ELAN:-elan}
echo "ELAN=$ELAN"

# Lake configuration

LAKE=${LAKE:-lake}
echo "LAKE=$LAKE"

# Platform-specific configuration

OS="${OS:-}"
echo "OS=$OS"

UNAME="`uname`"
echo "UNAME=$UNAME"

if [ "$OS" = Windows_NT ]; then
LIB_PREFIX=
SHARED_LIB_EXT=dll
elif [ "$UNAME" = Darwin ]; then
LIB_PREFIX=lib
SHARED_LIB_EXT=dylib
else
LIB_PREFIX=lib
SHARED_LIB_EXT=so
fi

if [ "$UNAME" = Darwin ] || [ "$UNAME" = FreeBSD ]; then
  sed_i() { sed -i '' "$@"; }
  stat_ch() { stat -f %l -- "$1"; }
  TAIL=gtail
else
  sed_i() { sed -i "$@"; }
  stat_ch() { stat -c %h -- "$1"; }
  TAIL=tail
fi

if [ "$OS" = Windows_NT ]; then
  norm_path() { cygpath -u "$1";  }
else
  norm_path() { echo "$1";  }
fi
norm_dirname() { norm_path "$(dirname -- "$1")";  }

# Copy the given paths into the ignored `work/` directory and `cd` into it, so that tests
# which mutate their inputs or initialize a Git repository leave the checked-in source tree
# untouched. The copies are made writable because `cp` propagates the source mode and CI
# runs the suite with tracked files read-only.
copy_to_work() {
  mkdir -p work
  cp -r "$@" work/
  chmod -R u+w work
  cd work
}

init_git() {
  echo "# initialize test repository"
  set -x
  git init
  git checkout -b master
  git config user.name test
  git config user.email test@example.com
  git add --all
  git commit -m "initial commit"
  set +x
}

# Test functions

test_cmd() {
  echo '$' "$@"
  if "$@" 2>&1; then
    return 0
  else
    rc=$?
    echo "Program exited with code $rc"
    return $rc
  fi
}

test_exp() {
  echo '$' test "$@"
  test "$@"
}

test_cmd_fails() {
  if test_cmd "$@"; then
    echo "FAILURE: Program unexpectedly succeeded"
    return 1
  else
    return 0
  fi
}

test_run() {
  echo '$' lake "$@"
  if "$LAKE" "$@" 2>&1; then
    return 0
  else
    rc=$?
    echo "Lake exited with code $rc"
    return $rc
  fi
}

test_fails() {
  if test_run "$@"; then
    echo "FAILURE: Lake unexpectedly succeeded"
    return 1
  else
    return 0
  fi
}

test_status() {
  expected=$1; shift
  if test_run "$@"; then rc=$?; else rc=$?; fi
  if [ $rc = $expected ]; then
    return 0
  else
    echo "FAILURE: Expected Lake to exit with code $expected."
    return 1
  fi
}

test_status_out() {
  expected_rc=$1; shift
  expected=$1; shift
  if lake_out "$@"; then rc=$?; else rc=$?; fi
  match_text "$expected" produced.out
  if [ $rc = $expected_rc ]; then
    return 0
  else
    echo "FAILURE: Expected Lake to exit with code $expected_rc."
    return 1
  fi
}

program_out() {
  echo '$' "$@"
  if "$@" >produced.out 2>&1; then
    cat produced.out
    return 0
  else
    rc=$?
    cat produced.out
    echo "Program exited with code $rc"
    return $rc
  fi
}

lake_out() {
  echo '$' lake "$@"
  if "$LAKE" "$@" >produced.out 2>&1; then
    cat produced.out
    return 0
  else
    rc=$?
    cat produced.out
    echo "Lake exited with code $rc"
    return $rc
  fi
}

match_text() {
  echo "? grep -F \"$1\""
  if grep --color -F -- "$1" $2; then
    return 0
  else
    echo "No match found"
    return 1
  fi
}

match_pat() {
  echo "? grep -E \"$1\""
  if grep --color -E -- "$1" $2; then
    return 0
  else
    echo "No match found"
    return 1
  fi
}


no_match_text() {
  echo "! grep -F \"$1\""
  if grep --color -F -- "$1" $2; then
    return 1
  else
    return 0
  fi
}

no_match_pat() {
  echo "! grep -E \"$1\""
  if grep --color -E -- "$1" $2; then
    return 1
  else
    return 0
  fi
}

test_out() {
  expected=$1; shift
  if lake_out "$@"; then rc=$?; else rc=$?; fi
  match_text "$expected" produced.out
  return $rc
}

test_out_pat() {
  expected=$1; shift
  if lake_out "$@"; then rc=$?; else rc=$?; fi
  match_pat "$expected" produced.out
  return $rc
}

test_cmd_out() {
  expected=$1; shift
  if program_out "$@"; then rc=$?; else rc=$?; fi
  match_text "$expected" produced.out
  return $rc
}

test_not_out() {
  expected=$1; shift
  if lake_out "$@"; then rc=$?; else rc=$?; fi
  no_match_text "$expected" produced.out
  return $rc
}

test_not_pat() {
  expected=$1; shift
  if lake_out "$@"; then rc=$?; else rc=$?; fi
  no_match_pat "$expected" produced.out
  return $rc
}

test_err() {
  expected=$1; shift
  if lake_out "$@"; then rc=$?; else rc=$?; fi
  if match_text "$expected" produced.out; then
    if [ $rc == 0 ]; then
      echo "FAILURE: Lake unexpectedly succeeded"
      return 1
    fi
  else
    return 1
  fi
}

test_maybe_err() {
  expected=$1; shift
  lake_out "$@" || true
  match_text "$expected" produced.out
}

check_diff_core() {
  expected=$1; actual=$2
  if diff -u --strip-trailing-cr "$expected" "$actual"; then
    cat "$actual"
    echo "Output matched expectations"
    return 0
  else
    return 1
  fi
}

check_diff() {
  expected=$1; actual=$2
  cat "$actual" > produced.out
  check_diff_core "$expected" produced.out
}

test_out_diff() {
  expected=$1; shift
  # We avoid a `.expected.out` name here so `lint.py` does not pick up these orphaned files
  cat "$expected" > produced.expected
  echo '$' lake "$@"
  if "$LAKE" "$@" >produced.out 2>&1; then rc=$?; else rc=$?; fi
  if check_diff_core produced.expected produced.out; then
    if [ $rc != 0 ]; then
      echo "FAILURE: Program exited with code $rc"
      return 1
    fi
  else
    if [ $rc != 0 ]; then
      echo "Program exited with code $rc"
    fi
    return 1
  fi
}

test_err_diff() {
  expected=$1; shift
  cat "$expected" > produced.expected
  echo '$' lake "$@"
  if "$LAKE" "$@" >produced.out 2>&1; then rc=$?; else rc=$?; fi
  if check_diff_core produced.expected produced.out; then
    if [ $rc == 0 ]; then
      echo "FAILURE: Lake unexpectedly succeeded"
      return 1
    fi
    echo "Lake exited with code $rc"
  else
    echo "Lake exited with code $rc"
    return 1
  fi
}


test_no_out() {
  if lake_out "$@"; then rc=$?; else rc=$?; fi
  diff produced.out /dev/null
  return $rc
}

test_no_stderr() {
  echo '$' lake "$@"
  if "$LAKE" "$@" 2>produced.out; then
    diff produced.out /dev/null
  else
    rc=$?
    cat produced.out
    echo "FAILURE: Lake exited with code $rc"
    return 1
  fi
}

test_cmd_eq() {
  expected=$1; shift
  echo '$' "$@"
  if "$@" >produced.out; then
    echo "? output \"`cat produced.out`\" = \"$expected\""
    if test "`cat produced.out`" = "$expected"; then
      return 0
    else
      return 1
    fi
  else
    rc=$?
    cat produced.out
    echo "FAILURE: Program exited with code $rc"
    return 1
  fi
}

test_eq() {
  expected=$1; shift
  echo '$' lake "$@"
  if "$LAKE" "$@" >produced.out; then
    echo "? output \"`cat produced.out`\" = \"$expected\""
    if test "`cat produced.out`" = "$expected"; then
      return 0
    else
      return 1
    fi
  else
    rc=$?
    cat produced.out
    echo "FAILURE: Lake exited with code $rc"
    return 1
  fi
}

# Usage-cutoff packs (`X.usepack`, `Lake.UsagePack`): the header line `lake-usepack 1 k=<n>:<d> u=<n>:<d> v=<n>:<d>`,
# then the parts `k` (the `.usekey`), `u` (the `.usage`) and `v` (the `.resolved`), in that order. `<n>` is the
# part's size in bytes and `<d>` the first 32 hex digits of its SHA-256; a part the pack does not hold is `k=-` (etc.).

# usepack_part PACK PART: the bytes of part PART (k, u or v) of PACK on stdout; fails if PACK does not hold it.
usepack_part() {
  local pack=$1 want=$2 header off w tag n
  header=$(head -n 1 -- "$pack") || return 1
  off=$(( ${#header} + 1 ))
  for w in $header; do
    case $w in
      [kuv]=*)
        tag=${w%%=*} n=${w#*=} n=${n%%:*}
        if [ "$tag" = "$want" ]; then
          [ "$n" != - ] || return 1
          tail -c +$((off + 1)) -- "$pack" | head -c "$n"
          return
        fi
        [ "$n" = - ] || off=$((off + n)) ;;
    esac
  done
  return 1
}

# usepack_has PACK PART: whether PACK exists and holds part PART.
usepack_has() {
  [ -f "$1" ] && usepack_part "$1" "$2" > /dev/null
}

# usepack_write PACK K U V: writes PACK of the parts in the files K, U and V (`-` for a part it does not hold), as a new
# file renamed over PACK, never through it (it can be a read-only link to a cache entry).
usepack_write() {
  local pack=$1 header="lake-usepack 1" tag f
  local -a parts=("$2" "$3" "$4")
  local i=0
  for tag in k u v; do
    f=${parts[$i]}
    if [ "$f" = - ]; then
      header="$header $tag=-"
    else
      header="$header $tag=$(( $(wc -c < "$f") )):$(sha256sum < "$f" | cut -c1-32)"
    fi
    i=$((i + 1))
  done
  { printf '%s\n' "$header"; for f in "${parts[@]}"; do [ "$f" = - ] || cat -- "$f"; done; } > "$pack.tmp"
  mv -f -- "$pack.tmp" "$pack"
}

# usepack_set PACK PART FILE: rewrites PACK with part PART replaced by the bytes of FILE, or without it if FILE is `-`.
# A PACK that does not exist is made of that part alone.
usepack_set() {
  local pack=$1 part=$2 src=$3 t tag
  local -a files=()
  t=$(mktemp -d)
  for tag in k u v; do
    if [ "$tag" = "$part" ]; then
      if [ "$src" = - ]; then files+=(-); else cat -- "$src" > "$t/$tag"; files+=("$t/$tag"); fi
    elif [ -f "$pack" ] && usepack_part "$pack" "$tag" > "$t/$tag"; then
      files+=("$t/$tag")
    else
      files+=(-)
    fi
  done
  usepack_write "$pack" "${files[@]}"
  rm -rf -- "$t"
}
