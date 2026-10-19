#!/usr/bin/env bash
# A C compiler that runs `$REAL_CC` and logs its arguments to `$FAKECC_LOG`. Like a `gcc`-style
# driver, it names the files in `tools/` next to it as its compiler proper and assembler; like
# Clang, its `--version` names the directory it is installed in. A copy in a directory named
# `avx2` also predefines `__AVX2__`, as a compiler whose default target is x86-64-v3 does; it
# compiles the same way.
set -euo pipefail
dir=$(dirname -- "$0")
echo "$*" >> "$FAKECC_LOG"
case "$*" in
  -print-prog-name=*)
    echo "$dir/tools/${1#-print-prog-name=}"
    exit
    ;;
  --version)
    "$REAL_CC" --version | grep -v -e '^InstalledDir:' -e '^Configuration file:'
    echo "InstalledDir: $dir"
    exit
    ;;
esac
if [ "$(basename -- "$dir")" = avx2 ]; then
  for arg in "$@"; do
    if [ "$arg" = -dM ]; then
      "$REAL_CC" "$@"
      echo '#define __AVX2__ 1'
      exit
    fi
  done
fi
exec "$REAL_CC" "$@"
