#!/usr/bin/env bash
# A kept-module checker for `test.sh` that rejects every module it is asked about. The test sets it only to see the
# reason Lake gives for not asking it (`kept-module check: not asked: ...`).
set -u
while IFS= read -r line; do
  [[ $line =~ \"id\":([0-9]+) ]] && id=${BASH_REMATCH[1]}
  printf '{"id":%s,"ok":false,"reason":"the stub rejects every module"}\n' "$id"
done
