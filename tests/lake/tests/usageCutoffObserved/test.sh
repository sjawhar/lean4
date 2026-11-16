#!/usr/bin/env bash
source ../common.sh

./clean.sh

# A check takes another check's sweep only if it saw every file of the record after the check started.
test_out "ok" env lean observed.lean
