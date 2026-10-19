#!/usr/bin/env bash
source ../common.sh

# A module that Lake does not know (`Foo.Old`, built only by `old.toml`), with
# a text-linter warning (`linter.unusedVariables`), in the import closure of a
# lint target with the same root (`Foo.Main`): `lake lint` finds its source
# through the source search path, only if the file exists.

./clean.sh

# `--record-exceptions` edits the sources in place, so work on a copy
copy_to_work lakefile.toml old.toml Foo
root=$(pwd -P)

test_run -f old.toml build
test_exp -f .lake/build/lib/lean/Foo/Old.olean

# The search path finds the source: report mode names it...
test_status_out 1 'Variable name `unusedInOld` is not explicitly referenced' lint --builtin-lint Foo.Main
match_pat "^$root/(\./)?Foo/Old\.lean:4:6: warning: Variable name \`unusedInOld\`" produced.out

# ...and record mode edits it.
lake_out lint --record-exceptions Foo.Main
match_pat "^recording 1 exception in $root/(\./)?Foo/Old\.lean" produced.out
grep -A1 -E 'set_option linter.unusedVariables false in' Foo/Old.lean | grep -qF 'def oldUnusedVar'

# Without the source, report mode names the module's path relative to the
# working directory, and record mode cannot locate the file: it records
# nothing and fails.
test_cmd mv Foo/Old.lean Foo/Old.lean.gone
test_status_out 1 'Variable name `unusedInOld` is not explicitly referenced' lint --builtin-lint Foo.Main
match_pat '^\./Foo/Old\.lean:4:6: warning:' produced.out
test_status_out 1 'could not locate source file for `Foo.Old` to record a `linter.unusedVariables` exception' \
  lint --record-exceptions Foo.Main
no_match_pat 'recording' produced.out
test_exp ! -e Foo/Old.lean
