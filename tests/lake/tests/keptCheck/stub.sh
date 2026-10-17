#!/usr/bin/env bash
# A stand-in for a kept-module checker, for `test.sh`. It reads one JSON request per line on stdin
# and answers each with one JSON line on stdout. Each start appends a line to `$STUB_LOG.spawns`
# and its `LEAN_SYSROOT` to `$STUB_LOG.sysroot`; each request appends its module to `$STUB_LOG` and
# the request itself to `$STUB_LOG.json`. It
# accepts every module except those listed as `<module> fail` in `$STUB_VERDICTS`, replying with
# the hash recorded in the `.hash` file next to the `.olean` (a real checker hashes what it read).
#
# `STUB_MODE` changes that:
# - `wronghash`: accept with a hash that is not the `.olean`'s
# - `die`: exit on every request, without answering
# - `die-once` / `hang-once`: on the first request of all runs (marker `$STUB_LOG.once`), exit /
#   stop answering, then behave normally
# - `wait-go`: before answering for `P.B`, wait (at most 30 s) until the file `$STUB_GO` exists
set -u
echo spawn >> "$STUB_LOG.spawns"
echo "${LEAN_SYSROOT-unset}" >> "$STUB_LOG.sysroot"
while IFS= read -r line; do
  # Lean's JSON objects keep their keys sorted: `id`, `module` and `olean` come before `setup`
  [[ $line =~ \"id\":([0-9]+) ]] && id=${BASH_REMATCH[1]}
  [[ $line =~ \"module\":\"([^\"]*)\" ]] && mod=${BASH_REMATCH[1]}
  [[ $line =~ \"olean\":\"([^\"]*)\" ]] && olean=${BASH_REMATCH[1]}
  echo "$mod" >> "$STUB_LOG"
  printf '%s\n' "$line" >> "$STUB_LOG.json"
  case "${STUB_MODE:-}" in
    die) exit 3;;
    die-once) if [ ! -e "$STUB_LOG.once" ]; then touch "$STUB_LOG.once"; exit 3; fi;;
    hang-once) if [ ! -e "$STUB_LOG.once" ]; then touch "$STUB_LOG.once"; exec sleep 600; fi;;
    wait-go)
      if [ "$mod" = P.B ]; then
        for _ in $(seq 300); do [ -e "$STUB_GO" ] && break; sleep 0.1; done
      fi;;
  esac
  if [ -n "${STUB_VERDICTS:-}" ] && grep -qx "$mod fail" "$STUB_VERDICTS"; then
    printf '{"id":%s,"ok":false,"reason":"the stub rejects %s"}\n' "$id" "$mod"
  else
    hash=$(cat "$olean.hash" 2>/dev/null || echo missing)
    [ "${STUB_MODE:-}" = wronghash ] && hash=0000000000000000
    printf '{"id":%s,"ok":true,"oleanHash":"%s"}\n' "$id" "$hash"
  fi
done
