#!/usr/bin/env bash
source ../common.sh

# `lake lint` must load the `.olean` Lake built for each module, whichever
# package's build directory holds it, also when a namespace root spans two
# packages: the root package's library `SharedExtra` has `Shared.Extra`, the
# path dependency `dep`'s library `Shared` has `Shared.Dep`, and the root's
# `Root` imports both. No search-path order finds both `.olean` files under
# `Shared/`, so linting `Root` needs the artifacts of its imports as well as its
# own. Each of `Root` and `Shared.Extra` has a text-linter warning
# (`linter.unusedVariables`).

./clean.sh

# Lake builds work on a copy, so the checked-in tree stays clean
copy_to_work lakefile.toml Root.lean Shared dep
root=$(pwd -P)

test_run build
test_exp -f .lake/build/lib/lean/Shared/Extra.olean
test_exp -f dep/.lake/build/lib/lean/Shared/Dep.olean

# Linting `Root` loads both the dependency's `Shared.Dep` and the root
# package's `Shared.Extra`.
test_status_out 1 'Variable name `unusedInRoot` is not explicitly referenced' lint --builtin-lint Root
match_pat "^$root/(\./)?Root\.lean:5:6: warning: Variable name \`unusedInRoot\`" produced.out
no_match_pat 'does not exist|failed to open' produced.out

# Linting `Shared.Extra` loads the root package's `Shared.Extra`.
test_status_out 1 'Variable name `unusedInExtra` is not explicitly referenced' lint --builtin-lint Shared.Extra
match_pat "^$root/(\./)?Shared/Extra\.lean:4:6: warning: Variable name \`unusedInExtra\`" produced.out
no_match_pat 'does not exist|failed to open' produced.out
