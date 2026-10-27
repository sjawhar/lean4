#!/usr/bin/env bash
source ../common.sh

# Tests that the trace of a C object includes the identity of the compiler that builds it
# (module objects through `buildLeanO`, and `buildO`): one compiler gives the same input
# hashes in another process and at another install path; a compiler that differs only in the
# macros it predefines, or in its assembler, gives other input hashes; a weak argument changes
# them only if it changes the predefined macros. Each Lake process asks a compiler for its
# identity once, and for its macros once per set of arguments.

if [ "$(uname)" != Linux ]; then
  # The fake compilers are extensionless bash scripts, which only a POSIX spawn can run
  echo "SKIP: ccIdentity runs on Linux only"
  exit 0
fi

./clean.sh

export REAL_CC=${CC:-cc}
for dir in plain plain2 avx2; do
  mkdir -p .lake/cc/$dir/tools
  cp fakecc.sh .lake/cc/$dir/cc
  echo cc1 > .lake/cc/$dir/tools/cc1
  echo as > .lake/cc/$dir/tools/as
done

TARGETS=(+Foo:c.o.export +Foo:c.o.noexport ffi.o)
OBJS=(.lake/build/ir/Foo.c.o.export .lake/build/ir/Foo.c.o.noexport .lake/build/c/ffi.o)

# Prints the input hash of each object in `OBJS`, one per line
input_hashes() {
  for obj in "${OBJS[@]}"; do
    # A trace file does not end in a newline
    echo "$(sed -n 's/.*"depHash": *"\([0-9a-f]*\)".*/\1/p' "$obj.trace")"
  done
}

# Runs the command `$2...` with the fake compiler in `.lake/cc/$1` as `LEAN_CC`,
# which logs the calls of this command to `.lake/cc/calls`
with_cc() {
  local dir=$1; shift
  echo "# LEAN_CC=.lake/cc/$dir/cc"
  rm -f .lake/cc/calls
  LEAN_CC="$PWD/.lake/cc/$dir/cc" FAKECC_LOG="$PWD/.lake/cc/calls" "$@"
}

with_cc plain test_run build "${TARGETS[@]}"
plain=($(input_hashes))
echo "plain: ${plain[*]}"
test_exp ${#plain[@]} = 3

# The same compiler in another process, and a copy of it at another path (whose `--version`
# and tools name that path), give the same input hashes, so nothing is rebuilt
with_cc plain test_run build "${TARGETS[@]}" --no-build
with_cc plain2 test_run build "${TARGETS[@]}" --no-build
plain2=($(input_hashes))
echo "plain2: ${plain2[*]}"
test_exp "${plain2[*]}" = "${plain[*]}"

# A compiler that differs only in its predefined macros (`__AVX2__`) gives different
# input hashes, so every object is rebuilt
with_cc avx2 test_status 3 build "${TARGETS[@]}" --no-build
with_cc avx2 test_run build "${TARGETS[@]}"
avx2=($(input_hashes))
echo "avx2: ${avx2[*]}"
for i in 0 1 2; do
  test_exp "${avx2[$i]}" != "${plain[$i]}"
done

# That build asked the compiler for `--version` and its two tools once, and for its
# predefined macros once for each set of arguments without `-D`: the module's (with and
# without `-DLEAN_EXPORTING`) and `ffi.o`'s
test_cmd cat .lake/cc/calls
test_exp "$(grep -c -e '--version' .lake/cc/calls)" = 1
test_exp "$(grep -c -e '-print-prog-name' .lake/cc/calls)" = 2
test_exp "$(grep -c -e '-dM' .lake/cc/calls)" = 2

# Another assembler gives different input hashes
with_cc plain test_run build "${TARGETS[@]}"
plain3=($(input_hashes))
test_exp "${plain3[*]}" = "${plain[*]}"
echo other-as > .lake/cc/plain/tools/as
with_cc plain test_status 3 build "${TARGETS[@]}" --no-build
echo as > .lake/cc/plain/tools/as
with_cc plain test_run build "${TARGETS[@]}" --no-build

# A weak `-D` changes no input hash; a weak argument that changes the target does, though
# its text stays out of the trace
if [ "$(uname -m)" = x86_64 ]; then
  if [ "$("$REAL_CC" -dM -E -x c - < /dev/null | grep -c __AVX2__)" != 0 ]; then
    weak_target=-march=x86-64
  else
    weak_target=-march=x86-64-v3
  fi
else
  weak_target=-ffast-math
fi
with_cc plain test_run build "${TARGETS[@]}" -R -KweakLeancArgs=-DBAR --no-build
with_cc plain test_status 3 build "${TARGETS[@]}" -R -KweakLeancArgs=$weak_target --no-build
with_cc plain test_run build "${TARGETS[@]}" -R -KweakLeancArgs=$weak_target
weak=($(input_hashes))
echo "weak $weak_target: ${weak[*]}"
for i in 0 1; do
  test_exp "${weak[$i]}" != "${plain[$i]}"
  # The log of the compile names the argument; the inputs do not
  test_cmd_fails grep -F -e "$weak_target" <(sed -n '/"inputs":/,$p' "${OBJS[$i]}.trace")
done
test_exp "${weak[2]}" = "${plain[2]}"

# A compiler that cannot be run fails the build, even when the objects are up to date
with_cc missing test_err "failed to identify the C compiler" build +Foo:c.o.export

# Cleanup
rm -f produced.out
