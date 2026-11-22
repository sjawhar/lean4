# The `timeout` group of test.sh, which sources it: LAKE_REMOTE_EXEC_TIMEOUT, rows T1-T6 and T8 (T7 is the `native`
# group's). The fake records each `run` request's `timeoutSecs` and lets the action run to its end (no
# FAKE_ENFORCE_TIMEOUT). Each row builds in a directory of its own under $WORK/timeout, and each build has a
# fake log of its own. T6 builds on T1's tree: `build_T1` builds it once, so that each of them also runs alone.

TW=$GW
# The group's own service, the service of every row (see `enter`); no artifact cache, so that a build that is not
# up to date sends its requests
GROUP_CAS="$TW/cas"
export LAKE_REMOTE_EXEC=grpc://fake:1 FAKE_CAS="$GROUP_CAS"
unset LAKE_REMOTE_EXEC_TIMEOUT LAKE_ARTIFACT_CACHE

# fake_log NAME: the next builds log to a new fake log, $TW/NAME.fake.log
fake_log() { export FAKE_LOG="$TW/$1.fake.log"; rm -f "$FAKE_LOG" "$FAKE_LOG.actions"; }
# target_timeouts [TARGET]: the `timeoutSecs` values of the `run` requests (of TARGET) in the fake's log, sorted,
# each once
target_timeouts() {
  "$PYTHON" -c 'import json, os, sys
p, target = sys.argv[1], sys.argv[2:]
ls = [json.loads(l) for l in open(p) if l.strip()] if os.path.exists(p) else []
print(" ".join(map(str, sorted({l["params"].get("timeoutSecs") for l in ls if l.get("method") == "run"
                                and (not target or l["params"].get("target") == target[0])}))))' "$FAKE_LOG" "$@"
}
# o_keys OUTPUTS MOD...: for each module MOD, `MOD=ok` when the `depHash` of MOD's trace is a key of the `-o` file
# OUTPUTS and the Lake cache has one entry under it, else `MOD=` and what lacks it (`outputs`, `cache`); then `keys=N`,
# the number of keys of OUTPUTS
o_keys() {
  "$PYTHON" -c 'import glob, json, os, sys
outputs, mods = sys.argv[1], sys.argv[2:]
keys = {k for k, _ in (json.loads(l) for l in open(outputs).read().splitlines()[1:] if l.strip())}
res = []
for m in mods:
    dep = json.load(open(os.path.join(".lake/build/lib/lean", *m.split(".")) + ".trace"))["depHash"]
    entries = glob.glob(os.path.join(os.environ["LAKE_CACHE_DIR"], "outputs", "*", dep + ".json"))
    miss = [w for w, ok in (("outputs", dep in keys), ("cache", len(entries) == 1)) if not ok]
    res.append("%s=%s" % (m, "+".join(miss) or "ok"))
print(" ".join(res + ["keys=%d" % len(keys)]))' "$@"
}

# T1's tree: a fresh tree built through the fake with LAKE_REMOTE_EXEC_TIMEOUT unset
build_T1() (
  [ ! -e "$TW/T1.built" ] || exit 0
  enter T1; fake_log T1
  test_run build Rx
  touch "$TW/T1.built"
)

# T1: unset, a `run` request carries the default timeout, 3600 s
row_T1() (
  build_T1
  export FAKE_LOG="$TW/T1.fake.log"
  test_cmd_eq 3600 target_timeouts Rx.A
)

# T2 and T3: a set value is each request's timeout, here 1 s and the largest, 21600 s (6 h)
row_T2() (
  enter T2; fake_log T2
  LAKE_REMOTE_EXEC_TIMEOUT=1 test_run build Rx.A
  test_cmd_eq 1 target_timeouts Rx.A
)
row_T3() (
  enter T3; fake_log T3
  LAKE_REMOTE_EXEC_TIMEOUT=21600 test_run build Rx.A
  test_cmd_eq 21600 target_timeouts Rx.A
)

# T4: a value that is not a whole number of seconds from 1 to 21600 stops Lake when it reads its environment,
# before any request: the error names the variable, and the fake's log has no `hello`
row_T4() (
  local v
  enter T4
  for v in 0 21601 abc 1_000; do
    fake_log "T4-$v"
    LAKE_REMOTE_EXEC_TIMEOUT="$v" test_err "LAKE_REMOTE_EXEC_TIMEOUT" build Rx.A
    test_cmd_eq 0 count_method hello
  done
)

# T5: an empty value is as unset: 3600 s
row_T5() (
  enter T5; fake_log T5
  LAKE_REMOTE_EXEC_TIMEOUT= test_run build Rx.A
  test_cmd_eq 3600 target_timeouts Rx.A
)

# T6: a timeout other than 3600 s is part of each module's trace. T1's tree (built with the default) built again
# with 1 s sends a request for every module, each with 1 s; built again unset, it sends them again, and the
# service's cache serves each (T1's actions); built a third time unset, it is up to date and sends none
row_T6() (
  build_T1
  cd "$TW/T1"; export LAKE_CACHE_DIR="$TW/T1.cache"
  fake_log T6-1
  LAKE_REMOTE_EXEC_TIMEOUT=1 test_run build Rx
  test_cmd_eq "Rx Rx.A Rx.B Rx.C Rx.M" run_targets 0
  test_cmd_eq 1 target_timeouts
  fake_log T6-unset
  test_out "lake: remote: ok; 5 cached (0 from manifest), 0 executed, 0 local;" build Rx
  test_cmd_eq "Rx Rx.A Rx.B Rx.C Rx.M" run_targets 0
  test_cmd_eq 3600 target_timeouts
  fake_log T6-again
  test_out "lake: remote: ok; 0 cached (0 from manifest), 0 executed, 0 local;" build Rx
  test_cmd_eq 0 count_method run
)

# T8: with a timeout other than 3600 s, the `-o` file keys each module by the hash of its trace and of its Lake cache
# entry, which mix the timeout in. T8's tree, built with 1 s and the artifact cache, then a change of Rx.C: in one
# `lake build -o` with 1 s, Rx.A, Rx.B and Rx.M replay, and Rx.C and Rx (which imports it) build on the service
row_T8() (
  enter T8; logs T8-first
  export LAKE_REMOTE_EXEC_TIMEOUT=1 LAKE_ARTIFACT_CACHE=true
  test_run build Rx
  printf '\ndef c2 := c + 1\n' >> Rx/C.lean
  logs T8
  test_run build Rx -o "$TW/T8.outputs.jsonl"
  check_lines "$LAKE_REMOTE_EXEC_LOG" --modules Rx,Rx.A,Rx.B,Rx.C,Rx.M \
    --expect 'Rx.A|Rx.B|Rx.M:result=local-cache' --expect 'Rx.C|Rx:result=executed|cached'
  test_cmd_eq "Rx=ok Rx.A=ok Rx.B=ok Rx.C=ok Rx.M=ok keys=5" o_keys "$TW/T8.outputs.jsonl" Rx Rx.A Rx.B Rx.C Rx.M
)

run_rows T1 T2 T3 T4 T5 T6 T8
