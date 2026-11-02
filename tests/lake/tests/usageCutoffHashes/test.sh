#!/usr/bin/env bash
source ../common.sh

./clean.sh

# One hash per path for all tasks of a usage-cutoff check (`Lake.ContentHashes`).
test_out "ok" env lean hashes.lean
