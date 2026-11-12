#!/usr/bin/env bash
# A kept-module checker for `test.sh`: it reads one JSON request per line on stdin and accepts every module,
# replying with the hash recorded in the `.hash` file next to the module's `.olean`.
set -u
while IFS= read -r line; do
  # Lean's JSON objects keep their keys sorted: `id` and `olean` come before `setup`
  [[ $line =~ \"id\":([0-9]+) ]] && id=${BASH_REMATCH[1]}
  [[ $line =~ \"olean\":\"([^\"]*)\" ]] && olean=${BASH_REMATCH[1]}
  printf '{"id":%s,"ok":true,"oleanHash":"%s"}\n' "$id" "$(cat "$olean.hash")"
done
