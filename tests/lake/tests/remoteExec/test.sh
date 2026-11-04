#!/usr/bin/env bash
source ../common.sh
./clean.sh
# Service mode against the fake daemon (fake_lean_remote.py), which runs each action locally in a
# scratch input root. Each case builds in its own directory, so the absolute paths differ.
PYTHON="${PYTHON:-python3}"
TEST_DIR="$(norm_path "$(cd -- "$(dirname -- "${BASH_SOURCE[0]}")" &>/dev/null && pwd)")"
WORK="$TEST_DIR/work"; mkdir -p "$WORK"

# The fake itself first, so that the cases below test Lake and not the fake.
test_cmd bash "$TEST_DIR/fake_selftest.sh"

for d in local remote remote2 failed timeout unreach later later-local later2 wrongtc killed termed termed-write stuck \
    late late-ref fb-local fb-mixed fb-unavail fb-mat fb-mat-nf fb-seed fb-restore fb-wait fb-wait-mid \
    cf-seed cf-restore cf-svc cf-svc2; do
  mkdir -p "$WORK/$d"; cp -r lakefile.toml Rx.lean Rx "$WORK/$d/"
done
export LAKE_REMOTE_EXEC_CLIENT="$TEST_DIR/fake_lean_remote.py" FAKE_CAS="$WORK/cas" FAKE_LOG="$WORK/fake.log"
export LAKE_REMOTE_EXEC_TOOLCHAIN=sha256:0000000000000000000000000000000000000000000000000000000000000001
export LAKE_REMOTE_EXEC_SYSROOT="$(lean --print-prefix)"
export LAKE_CACHE_DIR="$WORK/lake-cache"
# count_method METHOD: how many requests of METHOD the fake logged (0 if the fake never ran)
count_method() {
  "$PYTHON" -c 'import json,os,sys
p=sys.argv[2]; print(0 if not os.path.exists(p) else sum(1 for l in open(p) if l.strip() and json.loads(l).get("method")==sys.argv[1]))' "$1" "$FAKE_LOG"
}
# same_outputs DIR: every output of DIR is byte-identical to the local build's
same_outputs() {
  for f in $(cd "$WORK/local/.lake/build" && find lib ir -type f \( -name '*.olean*' -o -name '*.ilean' -o -name '*.ir' -o -name '*.ir.sig' -o -name '*.c' \) | sort); do
    cmp "$WORK/local/.lake/build/$f" "$1/.lake/build/$f" || return 1
  done
}
# same_actions: the second build's 5 actions are the first build's, from another directory
same_actions() { diff <(head -n 5 "$FAKE_LOG.actions" | sort) <(sed -n '6,10p' "$FAKE_LOG.actions" | sort); }
# lock_free LOCK: whether no process holds the `flock` on LOCK (the workspace build lock)
lock_free() {
  "$PYTHON" -c 'import fcntl, sys
with open(sys.argv[1], "a") as f:
    try: fcntl.flock(f, fcntl.LOCK_EX | fcntl.LOCK_NB)
    except OSError: sys.exit(1)' "$1"
}
# kill_lake SIG PID LOCK: send SIG (KILL, TERM) to PID (-PGID: to its process group) and print the
# milliseconds until LOCK is free (-1 after 10 s)
kill_lake() {
  "$PYTHON" -c 'import fcntl, os, signal, sys, time
sig, pid, lock = getattr(signal, "SIG" + sys.argv[1]), int(sys.argv[2]), sys.argv[3]
os.kill(pid, sig); t0 = time.monotonic()
while True:
    with open(lock, "a") as f:
        try:
            fcntl.flock(f, fcntl.LOCK_EX | fcntl.LOCK_NB); break
        except OSError:
            pass
    if time.monotonic() - t0 > 10: print(-1); sys.exit()
    time.sleep(0.005)
print(round((time.monotonic() - t0) * 1000))' "$1" "$2" "$3"
}
# wait_run RUNS: wait up to 30 s until the fake has logged more than RUNS `run` requests
wait_run() {
  for _ in $(seq 1 300); do
    [ "$(count_method run)" -gt "$1" ] && return 0
    sleep 0.1
  done
  return 1
}
# seconds_since T: the seconds from T (seconds since the epoch) to now
seconds_since() { "$PYTHON" -c 'import sys, time; print(round(time.time() - float(sys.argv[1]), 2))' "$1"; }
# in_range X LO HI: LO <= X < HI, for decimal X
in_range() { "$PYTHON" -c 'import sys; x, lo, hi = map(float, sys.argv[1:]); sys.exit(0 if lo <= x < hi else 1)' "$@"; }
# dead PID: PID is no longer running
dead() { ! kill -0 "$1" 2> /dev/null; }
# results FILE: the `result` of each line of a LAKE_REMOTE_EXEC_LOG file, counted, e.g. `cached 2 local 3`
results() {
  "$PYTHON" -c 'import collections,json,sys
c=collections.Counter(json.loads(l)["result"] for l in open(sys.argv[1]) if l.strip())
print(" ".join(f"{k} {c[k]}" for k in sorted(c)))' "$1"
}
# local_targets FILE: the sorted targets of the `local` lines of a LAKE_REMOTE_EXEC_LOG file; each line names
# no action and no output, and has the compile's own wall time
local_targets() {
  "$PYTHON" -c 'import json,sys
ls=[json.loads(l) for l in open(sys.argv[1]) if l.strip()]
ls=[l for l in ls if l["result"]=="local"]
assert all(l["kind"]=="lean" and l["action"]=="" and l["outputs"]=={} and l["exitCode"]==0 and l["wallMs"]>0 for l in ls), ls
print(" ".join(sorted(l["target"] for l in ls)))' "$1"
}
# log_lines: how many lines the fake's log has
log_lines() { if [ -f "$FAKE_LOG" ]; then wc -l < "$FAKE_LOG"; else echo 0; fi; }
# wait_down SKIP N: wait up to 30 s until N hello answers after line SKIP of the fake's log said unreachable
wait_down() {
  for _ in $(seq 1 300); do
    [ "$("$PYTHON" -c 'import json,sys
ls=open(sys.argv[1]).read().splitlines()[int(sys.argv[2]):]
print(sum(1 for l in ls if l.strip() and json.loads(l).get("answer")=="hello" and not json.loads(l)["reachable"]))' \
      "$FAKE_LOG" "$1")" -ge "$2" ] && return 0
    sleep 0.1
  done
  return 1
}

(cd "$WORK/local" && test_run build Rx)

# Every module is an action on the service, and its outputs are those of a local compile.
(cd "$WORK/remote" && LAKE_REMOTE_EXEC=grpc://fake:1 \
  test_out "lake: remote: ok; 0 cached (0 from manifest), 5 executed, 0 local;" build Rx)
match_text "c says hi" "$WORK/remote/produced.out"
test_cmd_eq 5 count_method run
test_cmd same_outputs "$WORK/remote"
no_match_text "$WORK" "$FAKE_LOG.actions"

# The same modules from another directory are the same actions, and the service's cache serves them.
# Lake ends the bridge that carried the build's requests by closing its input, not by killing it; the
# bridge that only made the decision (before the build lock) carried no write and is killed at once.
hellos=$(count_method hello)
(cd "$WORK/remote2" && FAKE_EXIT_LOG="$WORK/exits.log" LAKE_REMOTE_EXEC=grpc://fake:1 \
  test_out "lake: remote: ok; 5 cached (0 from manifest), 0 executed, 0 local;" build Rx)
match_text "c says hi" "$WORK/remote2/produced.out"
test_cmd same_actions
test_cmd same_outputs "$WORK/remote2"
test_cmd_eq 2 echo "$(($(count_method hello) - hellos))"
test_cmd_eq 1 grep -c "end of input" "$WORK/exits.log"

# A client that runs the bridge as its child (a wrapper script without `exec`, as `timeout` or
# `strace -f` also do): when Lake kills the decision bridge, that child keeps Lake's pipes and exits
# only at end of input, so Lake must close the bridge's input too, or it never exits.
printf '#!/bin/sh\n"%s" "$@"\n' "$TEST_DIR/fake_lean_remote.py" > "$WORK/fork-bridge"; chmod +x "$WORK/fork-bridge"
rc=0
(cd "$WORK/remote" && FAKE_PIDFILE="$WORK/fork.pid" LAKE_REMOTE_EXEC_CLIENT="$WORK/fork-bridge" \
  LAKE_REMOTE_EXEC=grpc://fake:1 timeout 30 "$LAKE" build Rx > "$WORK/fork.out" 2>&1) || rc=$?
kill -9 "$(cat "$WORK/fork.pid")" 2> /dev/null || true
test_exp "$rc" = 0

# An up-to-date module sends no request.
(cd "$WORK/remote" && LAKE_REMOTE_EXEC=grpc://fake:1 \
  test_out "lake: remote: ok; 0 cached (0 from manifest), 0 executed, 0 local;" build Rx)
test_cmd_eq 10 count_method run

# A module whose output was deleted is fetched again, and its messages show once.
rm -f "$WORK/remote/.lake/build/lib/lean/Rx/C.olean"
(cd "$WORK/remote" && LAKE_REMOTE_EXEC=grpc://fake:1 \
  test_out "lake: remote: ok; 1 cached (0 from manifest), 0 executed, 0 local;" build Rx \
  && cp produced.out rerun.out)
test_cmd_eq 1 grep -c "c says hi" "$WORK/remote/rerun.out"
test_cmd same_outputs "$WORK/remote"

# A failed compile on the service shows Lean's messages for the module's file, counts as executed
# (the service ran it; A and M are served from the cache, B runs and fails), and records nothing.
printf '/-! A module that does not compile. -/\n\ndef b : Nat := undefinedIdentXyz\n' > "$WORK/failed/Rx/B.lean"
(cd "$WORK/failed" && LAKE_REMOTE_EXEC=grpc://fake:1 test_err "undefinedIdentXyz" build Rx)
match_text "Rx/B.lean" "$WORK/failed/produced.out"
match_text "lake: remote: ok; 2 cached (0 from manifest), 1 executed, 0 local;" "$WORK/failed/produced.out"
no_match_text "no such file or directory" "$WORK/failed/produced.out"
test_exp ! -e "$WORK/failed/.lake/build/lib/lean/Rx/B.olean"
test_exp ! -e "$WORK/failed/.lake/build/lib/lean/Rx/B.trace"

# An action that ran on the service and ended in TIMEOUT, OOM or DISK_LIMIT counts as executed too.
for var in FAKE_TIMEOUT_TARGET FAKE_OOM_TARGET FAKE_DISK_TARGET; do
  rm -rf "$WORK/timeout/.lake"
  (cd "$WORK/timeout" && export "$var=Rx.B" && LAKE_REMOTE_EXEC=grpc://fake:1 \
    test_err "the build service's run of Rx.B failed" build Rx)
  match_text "lake: remote: ok; 2 cached (0 from manifest), 1 executed, 0 local;" "$WORK/timeout/produced.out"
done

# The bridge that carries a build's actions says its own `hello`, after the decision and the wait for
# the workspace build lock; when the service no longer answers by then, no request is sent and nothing
# is recorded. With `LAKE_REMOTE_EXEC_FALLBACK=fail` every module fails, the end-of-build line says
# `unreachable`, and Lake exits with code 75, as every failure is the service's.
runs=$(count_method run)
(cd "$WORK/later" && FAKE_UNREACHABLE_LATER="$WORK/later.state" LAKE_REMOTE_EXEC_FALLBACK=fail LAKE_REMOTE_EXEC=grpc://fake:1 \
  test_status_out 75 "build service at grpc://fake:1 did not answer: fake: unreachable" build Rx)
match_text "lake: remote: unreachable; 0 cached (0 from manifest), 0 executed, 0 local;" "$WORK/later/produced.out"
test_cmd_eq 2 grep -c hello "$WORK/later.state"
test_cmd_eq "$runs" count_method run
test_exp ! -e "$WORK/later/.lake/build/lib/lean/Rx/A.olean"
# With the default fallback (`local`), the same build compiles every module on this machine.
(cd "$WORK/later-local" && FAKE_UNREACHABLE_LATER="$WORK/later-local.state" LAKE_REMOTE_EXEC=grpc://fake:1 \
  test_out "lake: remote: unreachable; 0 cached (0 from manifest), 0 executed, 5 local;" build Rx)
test_cmd_eq "$runs" count_method run
test_cmd same_outputs "$WORK/later-local"

# A later hello with a confirmed toolchain mismatch refuses requests under `fail` and exits 75.
# The dedicated mismatch test also covers the local and wait policies on this second connection.
runs=$(count_method run)
(cd "$WORK/later2" && FAKE_UNVERIFIED_LATER="$WORK/later2.state" LAKE_REMOTE_EXEC_FALLBACK=fail LAKE_REMOTE_EXEC=grpc://fake:1 \
  test_status_out 75 "runs Lean 0000000000000000000000000000000000000000, but this Lake uses Lean" build Rx)
match_text "lake: remote: off: build service at grpc://fake:1 runs Lean 0000000000000000000000000000000000000000" "$WORK/later2/produced.out"
test_cmd_eq "$runs" count_method run
test_exp ! -e "$WORK/later2/.lake/build/lib/lean/Rx/A.olean"

# An UNAVAILABLE answer to a request means the service did not answer: the line says `unreachable`.
# With `fail`, the module fails, and Lake exits with code 75.
rm -rf "$WORK/timeout/.lake"
(cd "$WORK/timeout" && FAKE_UNAVAILABLE_TARGET=Rx.B LAKE_REMOTE_EXEC_FALLBACK=fail LAKE_REMOTE_EXEC=grpc://fake:1 \
  test_status_out 75 "the build service's run of Rx.B failed" build Rx)
match_text "lake: remote: unreachable; 2 cached (0 from manifest), 0 executed, 0 local;" "$WORK/timeout/produced.out"

# After an UNAVAILABLE answer, a module whose job starts later (Rq.N waits 2 s for a local target) sends
# no request and, with `fail`, fails at once, and its error names the service. Rx.A and Rx.B are the only
# runs: Rx.M, which Rq.N imports, starts after `slow` too.
mkdir -p "$WORK/unavail-later/Rq"; cp -r Rx.lean Rx "$WORK/unavail-later/"
printf 'import Lake\nopen Lake DSL\npackage rz\ntarget slow : Unit := Job.async do\n  IO.sleep 2000\nlean_lib Rx\nlean_lib Rq where\n  extraDepTargets := #[`slow]\n' > "$WORK/unavail-later/lakefile.lean"
printf 'import Rx.M\n\n/-! A module whose build starts after a slow local target. -/\n\ndef n := m + 1\n' > "$WORK/unavail-later/Rq/N.lean"
runs=$(count_method run)
(cd "$WORK/unavail-later" && FAKE_UNAVAILABLE_TARGET=Rx.B LAKE_REMOTE_EXEC_FALLBACK=fail LAKE_REMOTE_EXEC=grpc://fake:1 \
  test_status_out 75 "error: build service at grpc://fake:1 did not answer: Rx.B: the service did not answer" build Rx.B Rq.N)
test_cmd_eq "$((runs + 2))" count_method run

# With `fail`, a service that does not answer fails the build with exit code 75, and the line says so.
(cd "$WORK/unreach" && FAKE_UNREACHABLE=1 LAKE_REMOTE_EXEC_FALLBACK=fail LAKE_REMOTE_EXEC=grpc://fake:1 \
  test_status_out 75 "build service at grpc://fake:1 did not answer: fake: unreachable" build Rx)
match_text "lake: remote: unreachable; 0 cached (0 from manifest), 0 executed, 0 local;" "$WORK/unreach/produced.out"

# The default fallback (`local`): a service that does not answer fails no build. Every module compiles on
# this machine and counts as `local`, no `run` is sent, the outputs are those of a local build, and the
# per-target log has one `local` line for each. The same tree again is up to date: nothing compiles.
runs=$(count_method run)
(cd "$WORK/fb-local" && FAKE_UNREACHABLE=1 LAKE_REMOTE_EXEC=grpc://fake:1 LAKE_REMOTE_EXEC_LOG="$WORK/fb-local.jsonl" \
  test_out "lake: remote: unreachable; 0 cached (0 from manifest), 0 executed, 5 local;" build Rx)
match_text "c says hi" "$WORK/fb-local/produced.out"
test_cmd_eq "$runs" count_method run
test_cmd same_outputs "$WORK/fb-local"
test_cmd_eq "local 5" results "$WORK/fb-local.jsonl"
test_cmd_eq "Rx Rx.A Rx.B Rx.C Rx.M" local_targets "$WORK/fb-local.jsonl"
(cd "$WORK/fb-local" && FAKE_UNREACHABLE=1 LAKE_REMOTE_EXEC=grpc://fake:1 LAKE_REMOTE_EXEC_LOG="$WORK/fb-local.jsonl" \
  test_out "lake: remote: unreachable; 0 cached (0 from manifest), 0 executed, 0 local;" build Rx)
test_cmd_eq "local 5" results "$WORK/fb-local.jsonl"

# With `fail`, a build whose failures are not all the service's exits with code 1, not 75: Rx.M does not
# compile (a result, sent before the service stopped answering), and Rx.B's run answers UNAVAILABLE.
printf 'module\n\n/-! A module that does not compile. -/\n\npublic def m : Nat := undefinedIdentXyz\n' > "$WORK/fb-mixed/Rx/M.lean"
(cd "$WORK/fb-mixed" && FAKE_UNAVAILABLE_TARGET=Rx.B LAKE_REMOTE_EXEC_FALLBACK=fail LAKE_REMOTE_EXEC=grpc://fake:1 \
  test_status_out 1 "undefinedIdentXyz" build Rx)
match_text "the build service's run of Rx.B failed" "$WORK/fb-mixed/produced.out"

# A request that answers UNAVAILABLE mid-build (after the daemon's own retries): with the default fallback,
# Rx.B compiles locally, and so do the modules after it, without a request: the service is not asked again
# in this build. Rx.A and Rx.M came from the service's cache before.
runs=$(count_method run)
(cd "$WORK/fb-unavail" && FAKE_UNAVAILABLE_TARGET=Rx.B LAKE_REMOTE_EXEC=grpc://fake:1 LAKE_REMOTE_EXEC_LOG="$WORK/fb-unavail.jsonl" \
  test_out "lake: remote: unreachable; 2 cached (0 from manifest), 0 executed, 3 local;" build Rx)
test_cmd_eq "$((runs + 3))" count_method run
test_cmd same_outputs "$WORK/fb-unavail"
test_cmd_eq "cached 2 local 3" results "$WORK/fb-unavail.jsonl"
test_cmd_eq "Rx Rx.B Rx.C" local_targets "$WORK/fb-unavail.jsonl"

# A materialize that answers UNAVAILABLE after a good run: the module compiles locally and counts once, as
# `local`; the remote run's messages, already replayed, are dropped, so Rx.C's message shows once.
(cd "$WORK/fb-mat" && FAKE_MATERIALIZE_FAIL=UNAVAILABLE:/Rx/C.olean LAKE_REMOTE_EXEC=grpc://fake:1 \
  LAKE_REMOTE_EXEC_LOG="$WORK/fb-mat.jsonl" \
  test_out "lake: remote: unreachable; 3 cached (0 from manifest), 0 executed, 2 local;" build Rx)
test_cmd_eq 1 grep -c "c says hi" "$WORK/fb-mat/produced.out"
test_cmd same_outputs "$WORK/fb-mat"
test_cmd_eq "Rx Rx.C" local_targets "$WORK/fb-mat.jsonl"

# Any other materialize failure is not a fallback: the build fails, and the run still counts as cached.
(cd "$WORK/fb-mat-nf" && FAKE_MATERIALIZE_FAIL=NOT_FOUND:/Rx/B.olean LAKE_REMOTE_EXEC=grpc://fake:1 \
  test_status_out 1 "materializing Rx.B from the build service failed" build Rx)
match_text "lake: remote: ok; 3 cached (0 from manifest), 0 executed, 0 local;" "$WORK/fb-mat-nf/produced.out"

# `local` counts compiles only: a fresh tree whose fallback finds its modules in the Lake cache restores them,
# replays the saved log of each (here Rx.C's message), and records `0 local`. With `LAKE_RESTORE_ARTIFACTS=false`
# (Lake's default), a restore leaves each `.olean` in the cache, and Lake gives a reader the cache's file.
(cd "$WORK/fb-seed" && LAKE_CACHE_DIR="$WORK/fb-cache" LAKE_ARTIFACT_CACHE=true test_run build Rx)
(cd "$WORK/fb-restore" && LAKE_CACHE_DIR="$WORK/fb-cache" LAKE_ARTIFACT_CACHE=true LAKE_RESTORE_ARTIFACTS=false \
  FAKE_UNREACHABLE=1 LAKE_REMOTE_EXEC=grpc://fake:1 LAKE_REMOTE_EXEC_LOG="$WORK/fb-restore.jsonl" \
  test_out "lake: remote: unreachable; 0 cached (0 from manifest), 0 executed, 0 local;" build Rx)
match_text "Replayed Rx.C" "$WORK/fb-restore/produced.out"
test_exp ! -s "$WORK/fb-restore.jsonl"
# Rx.D, which the cache does not hold, imports Rx, so its compile needs `Rx.olean`. With the service still down,
# Rx is restored (`Reused`: taken from the cache again, through the trace the restore wrote), not compiled: Rx.D
# is the one local compile, and the per-target log has its line only, none for Rx.
printf 'import Rx\n\n/-! A module that imports the library root, so its compile needs `Rx.olean`. -/\n\ndef d := c + m\n' \
  > "$WORK/fb-restore/Rx/D.lean"
(cd "$WORK/fb-restore" && LAKE_CACHE_DIR="$WORK/fb-cache" LAKE_ARTIFACT_CACHE=true LAKE_RESTORE_ARTIFACTS=false \
  FAKE_UNREACHABLE=1 LAKE_REMOTE_EXEC=grpc://fake:1 LAKE_REMOTE_EXEC_LOG="$WORK/fb-consume.jsonl" \
  test_out_pat "Reused Rx( |$)" -v build Rx.D)
match_text "lake: remote: unreachable; 0 cached (0 from manifest), 0 executed, 1 local;" "$WORK/fb-restore/produced.out"
test_cmd_eq "local 1" results "$WORK/fb-consume.jsonl"
test_cmd_eq "Rx.D" local_targets "$WORK/fb-consume.jsonl"
# The `Rx.olean` that Lake gives Rx's readers has the bytes of the one a local build makes, and it is the cache's
# file: the tree has none.
rx_olean=$(cd "$WORK/fb-restore" && LAKE_CACHE_DIR="$WORK/fb-cache" LAKE_ARTIFACT_CACHE=true \
  LAKE_RESTORE_ARTIFACTS=false FAKE_UNREACHABLE=1 LAKE_REMOTE_EXEC=grpc://fake:1 "$LAKE" query +Rx:olean)
test_cmd cmp "$WORK/local/.lake/build/lib/lean/Rx.olean" "$rx_olean"
test_exp "${rx_olean#"$WORK/fb-cache/artifacts/"}" != "$rx_olean"
test_exp ! -e "$WORK/fb-restore/.lake/build/lib/lean/Rx.olean"

# The Lake cache comes first in service mode too, as in a local build: a fresh tree whose modules the cache holds
# restores each of them with no request, replays its saved log (Rx.C's message), counts nothing, writes no line to
# LAKE_REMOTE_EXEC_LOG, and has the outputs of a local build.
(cd "$WORK/cf-seed" && LAKE_CACHE_DIR="$WORK/cf-cache" LAKE_ARTIFACT_CACHE=true LAKE_RESTORE_ARTIFACTS=true \
  test_run build Rx)
runs=$(count_method run)
(cd "$WORK/cf-restore" && LAKE_CACHE_DIR="$WORK/cf-cache" LAKE_ARTIFACT_CACHE=true LAKE_RESTORE_ARTIFACTS=true \
  LAKE_REMOTE_EXEC=grpc://fake:1 LAKE_REMOTE_EXEC_LOG="$WORK/cf-restore.jsonl" \
  test_out "lake: remote: ok; 0 cached (0 from manifest), 0 executed, 0 local;" build Rx)
match_text "c says hi" "$WORK/cf-restore/produced.out"
test_cmd_eq "$runs" count_method run
test_cmd same_outputs "$WORK/cf-restore"
test_exp ! -s "$WORK/cf-restore.jsonl"
# The outputs that the service gives a build go to the Lake cache, as a local compile's do: another fresh tree on
# that cache restores every module with no request, and so does the first tree for an output it lost.
(cd "$WORK/cf-svc" && LAKE_CACHE_DIR="$WORK/cf-cache2" LAKE_ARTIFACT_CACHE=true LAKE_RESTORE_ARTIFACTS=true \
  LAKE_REMOTE_EXEC=grpc://fake:1 test_out "lake: remote: ok; 5 cached (0 from manifest), 0 executed, 0 local;" build Rx)
runs=$(count_method run)
(cd "$WORK/cf-svc2" && LAKE_CACHE_DIR="$WORK/cf-cache2" LAKE_ARTIFACT_CACHE=true LAKE_RESTORE_ARTIFACTS=true \
  LAKE_REMOTE_EXEC=grpc://fake:1 test_out "lake: remote: ok; 0 cached (0 from manifest), 0 executed, 0 local;" build Rx)
match_text "c says hi" "$WORK/cf-svc2/produced.out"
test_cmd same_outputs "$WORK/cf-svc2"
rm -f "$WORK/cf-svc/.lake/build/lib/lean/Rx/C.olean"
(cd "$WORK/cf-svc" && LAKE_CACHE_DIR="$WORK/cf-cache2" LAKE_ARTIFACT_CACHE=true LAKE_RESTORE_ARTIFACTS=true \
  LAKE_REMOTE_EXEC=grpc://fake:1 test_out "lake: remote: ok; 0 cached (0 from manifest), 0 executed, 0 local;" build Rx)
test_cmd same_outputs "$WORK/cf-svc"
test_cmd_eq "$runs" count_method run

# `wait`, with the service down when the build starts: no module compiles locally; Lake probes the service
# again on a new connection after 1, 2, 4 … s, one job at a time, prints the waiting line, and builds on the
# service once it answers.
rm -f "$WORK/down" "$WORK/down.tripped"; touch "$WORK/down"
skip=$(log_lines)
(cd "$WORK/fb-wait" && FAKE_DOWN_FILE="$WORK/down" LAKE_REMOTE_EXEC_FALLBACK=wait LAKE_REMOTE_EXEC=grpc://fake:1 \
  "$LAKE" build Rx > "$WORK/fb-wait.out" 2>&1) & wait_pid=$!
wait_down "$skip" 4 || { kill "$wait_pid" 2> /dev/null; cat "$WORK/fb-wait.out"; exit 1; }
rm -f "$WORK/down"
rc=0; wait "$wait_pid" || rc=$?
cat "$WORK/fb-wait.out"
test_exp "$rc" = 0
match_text "waiting for the build service at grpc://fake:1 since" "$WORK/fb-wait.out"
match_text "lake: remote: ok; 5 cached (0 from manifest), 0 executed, 0 local;" "$WORK/fb-wait.out"
test_cmd "$PYTHON" "$TEST_DIR/fallback_check.py" probes "$FAKE_LOG" "$skip"
test_cmd same_outputs "$WORK/fb-wait"

# `wait`, with the service gone in the middle of the build: Rx.B's run answers UNAVAILABLE, and Lake sends
# it again only after a hello on a new connection found the service answering again.
rm -f "$WORK/down" "$WORK/down.tripped"
skip=$(log_lines)
(cd "$WORK/fb-wait-mid" && FAKE_DOWN_FILE="$WORK/down" FAKE_DOWN_AT_TARGET=Rx.B LAKE_REMOTE_EXEC_FALLBACK=wait \
  LAKE_REMOTE_EXEC=grpc://fake:1 "$LAKE" build Rx > "$WORK/fb-wait-mid.out" 2>&1) & wait_pid=$!
wait_down "$skip" 2 || { kill "$wait_pid" 2> /dev/null; cat "$WORK/fb-wait-mid.out"; exit 1; }
rm -f "$WORK/down"
rc=0; wait "$wait_pid" || rc=$?
cat "$WORK/fb-wait-mid.out"
test_exp "$rc" = 0
match_text "waiting for the build service at grpc://fake:1 since" "$WORK/fb-wait-mid.out"
match_text "lake: remote: ok; 5 cached (0 from manifest), 0 executed, 0 local;" "$WORK/fb-wait-mid.out"
test_cmd "$PYTHON" "$TEST_DIR/fallback_check.py" retry "$FAKE_LOG" "$skip" Rx.B
test_cmd same_outputs "$WORK/fb-wait-mid"

# Under `fail`, a service whose toolchain runs another Lean exits 75 before any action and records nothing.
runs=$(count_method run)
(cd "$WORK/wrongtc" && FAKE_GITHASH=0000000000000000000000000000000000000000 LAKE_REMOTE_EXEC_FALLBACK=fail LAKE_REMOTE_EXEC=grpc://fake:1 \
  test_status_out 75 "runs Lean 0000000000000000000000000000000000000000" build Rx)
# The refusal also holds where no hello is said at the start (`lake lean`, the editor's `setup-file`),
# and a hello without `toolchainVerified` counts as false.
(cd "$WORK/wrongtc" && FAKE_GITHASH=0000000000000000000000000000000000000000 LAKE_REMOTE_EXEC_FALLBACK=fail LAKE_REMOTE_EXEC=grpc://fake:1 \
  test_status_out 75 "runs Lean 0000000000000000000000000000000000000000" lean Rx/C.lean)
(cd "$WORK/wrongtc" && FAKE_OMIT_VERIFIED=1 LAKE_REMOTE_EXEC=grpc://fake:1 \
  test_err "did not verify its toolchain" lean Rx/C.lean)
test_cmd_eq "$runs" count_method run
test_exp ! -e "$WORK/wrongtc/.lake/build/lib/lean/Rx/A.olean"

# After a kill -9 of Lake, its bridge gets only end of input: it cancels the request in flight and
# exits, freeing the workspace build lock it inherited, and the daemon it started (which outlives
# Lake and closes every descriptor it inherited) holds no lock. The next build starts within 2 s.
(
  cd "$WORK/killed"
  LAKE_REMOTE_EXEC=grpc://fake:1 test_run build Rx
  has_lock=0; [ -e .lake/build.lock ] && has_lock=1
  printf '/-! A leaf module, changed. -/\n\ndef a := 2\n' > Rx/A.lean
  runs=$(count_method run)
  FAKE_SLEEP_MS=60000 FAKE_DAEMON_S=60 FAKE_PIDFILE="$WORK/killed.pid" LAKE_REMOTE_EXEC=grpc://fake:1 \
    "$LAKE" lean Rx/C.lean >"$WORK/killed.out" 2>&1 &
  lake_pid=$!
  wait_run "$runs"
  test_cmd_eq "$((runs + 1))" count_method run
  [ $has_lock = 0 ] || test_cmd_fails lock_free .lake/build.lock
  ms=$(kill_lake KILL "$lake_pid" .lake/build.lock); wait "$lake_pid" || true
  echo "workspace build lock free $ms ms after kill -9 of Lake"
  test_exp "$ms" -ge 0 -a "$ms" -lt 2000
  start=$(date +%s.%N)
  FAKE_HELLO_STAMP="$WORK/killed.hello" LAKE_REMOTE_EXEC=grpc://fake:1 \
    test_not_out "waiting for another Lake" build Rx
  test_cmd "$PYTHON" -c 'import sys; sys.exit(0 if float(open(sys.argv[1]).read()) - float(sys.argv[2]) < 2 else 1)' \
    "$WORK/killed.hello" "$start"
  kill "$(cat "$WORK/killed.pid.daemon")" "$(cat "$WORK/killed.pid")" 2>/dev/null || true
)

# A SIGTERM to Lake's process group (as GNU `timeout` sends) kills Lake. The bridge, which ignores
# SIGTERM once connected, outlives it, gets end of input, cancels the request in flight and exits,
# freeing the workspace build lock.
(
  cd "$WORK/termed"
  LAKE_REMOTE_EXEC=grpc://fake:1 test_run build Rx
  printf '/-! A leaf module, changed. -/\n\ndef a := 4\n' > Rx/A.lean
  runs=$(count_method run)
  FAKE_SLEEP_MS=60000 FAKE_EXIT_LOG="$WORK/termed.exits" LAKE_REMOTE_EXEC=grpc://fake:1 \
    setsid "$LAKE" lean Rx/C.lean >"$WORK/termed.out" 2>&1 &
  lake_pid=$!
  wait_run "$runs"
  test_cmd_eq "$((runs + 1))" count_method run
  pgid=$(ps -o pgid= -p "$lake_pid" | tr -d ' ')
  test_exp "$pgid" = "$lake_pid" -a "$pgid" != "$(ps -o pgid= -p $$ | tr -d ' ')"
  ms=$(kill_lake TERM "-$pgid" .lake/build.lock); wait "$lake_pid" || true
  echo "workspace build lock free $ms ms after SIGTERM to Lake's process group"
  test_exp "$ms" -ge 0 -a "$ms" -lt 2000
  for _ in $(seq 1 100); do
    [ -s "$WORK/termed.exits" ] && break
    sleep 0.05
  done
  test_cmd_eq 1 grep -c "end of input" "$WORK/termed.exits"
)

# The same SIGTERM during a write of the bridge into the workspace: the bridge finishes that write
# before it exits, so the workspace build lock stays held until the file has landed whole.
(
  cd "$WORK/termed-write"
  FAKE_SLOW_WRITE=lib/lean/Rx/A.olean FAKE_SLOW_WRITE_MS=3000 FAKE_EXIT_LOG="$WORK/termedw.exits" \
    LAKE_REMOTE_EXEC=grpc://fake:1 setsid "$LAKE" build Rx >"$WORK/termedw.out" 2>&1 &
  lake_pid=$!
  write_started() { compgen -G '.lake/build/lib/lean/Rx/A.olean.fake-*.tmp' > /dev/null; }
  for _ in $(seq 1 300); do
    write_started && break
    sleep 0.05
  done
  test_cmd write_started
  if [ ! -e .lake/build.lock ]; then
    echo "SKIP: this Lake takes no workspace build lock, so nothing holds the write's lock"
    kill -9 "$lake_pid"; wait "$lake_pid" || true
    exit 0
  fi
  pgid=$(ps -o pgid= -p "$lake_pid" | tr -d ' ')
  test_exp "$pgid" = "$lake_pid" -a "$pgid" != "$(ps -o pgid= -p $$ | tr -d ' ')"
  ms=$(kill_lake TERM "-$pgid" .lake/build.lock); wait "$lake_pid" || true
  echo "workspace build lock free $ms ms after SIGTERM to Lake's process group during a 3 s write"
  test_exp "$ms" -ge 1000 -a "$ms" -lt 10000
  for _ in $(seq 1 100); do
    [ -s "$WORK/termedw.exits" ] && break
    sleep 0.05
  done
  test_cmd_eq 1 grep -c "end of input" "$WORK/termedw.exits"
  test_cmd cmp .lake/build/lib/lean/Rx/A.olean "$WORK/local/.lake/build/lib/lean/Rx/A.olean"
)

# A bridge that does not exit on end of input (its daemon never closes the connection) is killed
# after the 10 s stop limit (`bridgeExitTimeoutMs`), and Lake exits. The bridge that only made the
# decision is killed at once, so it adds no wait: the build takes one stop limit, not two, and a
# build that sends no request does not wait at all.
(
  cd "$WORK/stuck"
  start=$("$PYTHON" -c 'import time; print(time.time())')
  FAKE_IGNORE_EOF_S=60 FAKE_PIDFILE="$WORK/stuck.pid" LAKE_REMOTE_EXEC=grpc://fake:1 \
    test_out "lake: remote: ok; 5 cached (0 from manifest), 0 executed, 0 local;" build Rx
  took=$(seconds_since "$start")
  echo "a build whose bridge ignores end of input took $took s"
  test_cmd in_range "$took" 9.5 18
  test_cmd dead "$(cat "$WORK/stuck.pid")"
  start=$("$PYTHON" -c 'import time; print(time.time())')
  FAKE_IGNORE_EOF_S=60 FAKE_PIDFILE="$WORK/stuck.pid" LAKE_REMOTE_EXEC=grpc://fake:1 \
    test_out "lake: remote: ok; 0 cached (0 from manifest), 0 executed, 0 local;" build Rx
  took=$(seconds_since "$start")
  echo "an up-to-date build whose bridge ignores end of input took $took s"
  test_cmd in_range "$took" 0 5
  test_cmd dead "$(cat "$WORK/stuck.pid")"
)

# A write that the bridge of a killed Lake has started lands before the next Lake takes the workspace
# build lock, so the next build hashes no file that changes afterwards. The bridge's write of
# `Rx/A.olean` takes 4 s; Lake is killed during it, and `Rx/A.lean` changes before the next build.
(
  cd "$WORK/late"
  FAKE_SLOW_WRITE=lib/lean/Rx/A.olean FAKE_SLOW_WRITE_MS=4000 FAKE_PIDFILE="$WORK/late.pid" \
    LAKE_REMOTE_EXEC=grpc://fake:1 "$LAKE" build Rx >"$WORK/late1.out" 2>&1 &
  lake_pid=$!
  slow_write_started() { compgen -G '.lake/build/lib/lean/Rx/A.olean.fake-*.tmp' > /dev/null; }
  for _ in $(seq 1 300); do
    slow_write_started && break
    sleep 0.05
  done
  test_cmd slow_write_started
  if [ ! -e .lake/build.lock ]; then
    echo "SKIP: this Lake takes no workspace build lock, so nothing orders the bridge's write before the next build"
    kill -9 "$lake_pid"; wait "$lake_pid" || true
    exit 0
  fi
  kill -9 "$lake_pid"; wait "$lake_pid" || true
  test_cmd_fails lock_free .lake/build.lock
  new_a='/-! A leaf module, changed again. -/\n\ndef a := 3\n'
  printf "$new_a" > Rx/A.lean
  LAKE_REMOTE_EXEC=grpc://fake:1 test_out "waiting for another Lake" build Rx
  end=$("$PYTHON" -c 'import time; print(time.time())')
  bridge=$(cat "$WORK/late.pid")
  for _ in $(seq 1 300); do
    kill -0 "$bridge" 2> /dev/null || break
    sleep 0.05
  done
  test_cmd_fails kill -0 "$bridge"
  test_cmd_eq none "$PYTHON" -c 'import os, sys
late = [os.path.join(d, f) for d, _, fs in os.walk(".lake/build") for f in fs
        if os.stat(os.path.join(d, f)).st_mtime > float(sys.argv[1])]
print(" ".join(sorted(late)) or "none")' "$end"
  (cd "$WORK/late-ref" && printf "$new_a" > Rx/A.lean && LAKE_REMOTE_EXEC=grpc://fake:1 test_run build Rx)
  test_cmd cmp .lake/build/lib/lean/Rx/A.olean "$WORK/late-ref/.lake/build/lib/lean/Rx/A.olean"
)

# A non-module file under `compiler.postponeCompile` still gets `-c` and its `.c`, as compileLeanModule.
for d in pc-local pc-remote; do
  mkdir -p "$WORK/$d"
  printf '/-! A non-module file under compiler.postponeCompile. -/\n\ndef x := 1\n' > "$WORK/$d/Pc.lean"
  printf 'import Lake\nopen Lake DSL\npackage pc\n@[default_target] lean_lib Pc where\n  leanOptions := #[⟨`compiler.postponeCompile, true⟩]\n' > "$WORK/$d/lakefile.lean"
done
(cd "$WORK/pc-local" && test_run build)
(cd "$WORK/pc-remote" && LAKE_REMOTE_EXEC=grpc://fake:1 test_run build)
test_cmd cmp "$WORK/pc-local/.lake/build/ir/Pc.c" "$WORK/pc-remote/.lake/build/ir/Pc.c"

# One hello per process: the jobs that need the service wait for one decision instead of each
# starting a bridge (`lake lean` decides in its jobs; Rx.A and Rx.M start together).
printf '#!/bin/sh\necho start >> "$DEAD_LOG"\nsleep 1\nexit 75\n' > "$WORK/dead-bridge"; chmod +x "$WORK/dead-bridge"
(cd "$WORK/unreach" && rm -rf .lake && DEAD_LOG="$WORK/dead.log" LAKE_REMOTE_EXEC_CLIENT="$WORK/dead-bridge" \
  LAKE_REMOTE_EXEC_FALLBACK=fail LAKE_REMOTE_EXEC=grpc://fake:1 test_status_out 75 "did not answer" lean Rx.lean)
test_cmd_eq 1 grep -c start "$WORK/dead.log"
