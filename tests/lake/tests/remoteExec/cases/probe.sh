# The `probe` group of test.sh, which sources it: the re-probe of the build service under the fallback `local`,
# rows S1-S12 of its state table, the k5 case, and P1-P2 (the traces of a build that the service joins in its middle).
# Each row builds in a directory of its own under $WORK/probe, with its own service and Lake cache (`enter`), and its
# fake log and LAKE_REMOTE_EXEC_LOG in $WORK/probe/<row>.d. probe_check.py reads the times of the fake's `hello` and
# `run` lines (`t`) and of Lake's lines (`startMs`, `wallMs`); its margins are wide, for a loaded machine. S1, S4 and
# S9 read one build (`build_down`), so that each of them also runs alone.

PW=$GW

# state NAME: the row state of NAME, in $PW/NAME.d (D): its fake log, per-target log and Lake's output; the builds
# after it are in service mode
state() {
  D="$PW/$1.d"
  export LAKE_REMOTE_EXEC=grpc://fake:1 FAKE_LOG="$D/fake.log" LAKE_REMOTE_EXEC_LOG="$D/lines.jsonl"
}
# enter_row NAME [PKG]: `enter NAME [PKG]`, with a fresh row state (`state`)
enter_row() {
  enter "$@"
  rm -rf "$PW/$1.d"; mkdir -p "$PW/$1.d"
  state "$1"
}
# slow NAME MS [IMPORT]: the module Rx.NAME, which imports IMPORT (if given) and whose compile takes MS ms
slow() {
  { [ -z "${3:-}" ] || printf 'import %s\n\n' "$3"
    printf '/-! A module whose compile takes %s ms. -/\n\n#eval IO.sleep %s\n\ndef %s := 1\n' "$2" "$2" "${1,,}"
  } > "Rx/$1.lean"
}
# lbuild ARGS...: `lake build ARGS...`, its output shown and kept in $D/out, and the time Lake exited
# (milliseconds since the epoch) in $D/exit; fails with Lake's exit code
lbuild() {
  local rc=0
  echo '$' lake build "$@"
  "$LAKE" build "$@" > "$D/out" 2>&1 || rc=$?
  date +%s%3N > "$D/exit"
  cat "$D/out"
  [ "$rc" = 0 ] || { echo "Lake exited with code $rc"; return "$rc"; }
}
# bridges: LAKE_REMOTE_EXEC_CLIENT becomes a wrapper of the fake that numbers the bridges Lake starts, in order
# (1: the decision's at the start of `lake build`; then one for each connection and each probe). Bridge N writes
# its pid to $D/b/N.pid and takes the settings (`export` lines) of $D/b/N.env, else of $D/b/rest.env. With
# BRIDGE_TIMED=1 it runs the fake as its child and writes the time the fake exited (seconds since the epoch) to
# $D/b/N.exit; else it is the fake itself (`exec`).
bridges() {
  B="$D/b"; mkdir -p "$B"
  printf '%s\n' '#!/bin/sh' \
    'n=1; while ! (set -C; : > "$BRIDGES/$n.start") 2> /dev/null; do n=$((n + 1)); done' \
    'if [ -f "$BRIDGES/$n.env" ]; then . "$BRIDGES/$n.env"; elif [ -f "$BRIDGES/rest.env" ]; then . "$BRIDGES/rest.env"; fi' \
    'echo $$ > "$BRIDGES/$n.pid"' \
    'if [ "${BRIDGE_TIMED:-}" = 1 ]; then "$FAKE" "$@"; rc=$?; date +%s.%N > "$BRIDGES/$n.exit"; exit "$rc"; fi' \
    'exec "$FAKE" "$@"' > "$B/bridge"
  chmod +x "$B/bridge"
  export BRIDGES="$B" FAKE="$TEST_DIR/fake_lean_remote.py" LAKE_REMOTE_EXEC_CLIENT="$B/bridge"
}
# lines ARGS...: lines_check.py's checks of the row's per-target log
lines() { check_lines "$LAKE_REMOTE_EXEC_LOG" "$@"; }
# pcheck ARGS...: probe_check.py's checks of the row's fake log and per-target log (see its docstring)
pcheck() { test_cmd "$PYTHON" "$TEST_DIR/probe_check.py" --fake "$FAKE_LOG" --lake "$LAKE_REMOTE_EXEC_LOG" "$@"; }

# The build of S1, S4 and S9: the service never answers, and Rx.Sl's compile takes 22 s, so the timer probes
# 1, 3, 7 and 15 s after the decision's `hello` and sleeps (until 31 s) when the build ends
build_down() (
  [ ! -e "$PW/down.built" ] || exit 0
  enter_row down
  slow Sl 22000
  FAKE_UNREACHABLE=1 lbuild Rx.A Rx.Sl
  touch "$PW/down.built"
)

# S1: the decision's `hello` finds the service down: the timer starts (its first probe 1 s later), and the
# modules compile locally with no request
row_S1() (
  build_down; state down
  pcheck probes=1
  test_cmd_eq 0 count_method run
  lines --modules Rx.A,Rx.Sl --expect '*:result=local,action=null,outputs=null,exitCode=0'
  match_text "lake: remote: unreachable; 0 cached (0 from manifest), 0 executed, 2 local;" "$D/out"
)

# S2: a `run` that answers UNAVAILABLE (Rx.B's first one, which takes the fake down) starts the timer: Rx.B
# compiles locally and is not sent again, and Rx.Sl (8 s), which imports it, compiles locally while the probes
# find the service down
row_S2() (
  enter_row S2
  slow Sl 8000 Rx.B
  FAKE_DOWN_FILE="$D/down" FAKE_DOWN_AT_TARGET=Rx.B lbuild Rx.B Rx.Sl
  pcheck --failure run:Rx.B probes=1 down runs=Rx.B:1
  lines --modules Rx.A,Rx.B,Rx.Sl --expect 'Rx.A:result=executed' \
    --expect 'Rx.B|Rx.Sl:result=local,action=null,outputs=null,exitCode=0'
)

# S3: a request sent before the timer found the service again, which answers UNAVAILABLE after that: the service
# stays in use, and Lake sends the request once more. Rx.Sl's run (20 s) is in flight when Rx.U's run answers
# UNAVAILABLE (Rx.U waits for Rx.W, 3 s, so that Rx.Sl's request goes first; the fake answers requests in
# parallel); once the probe has found the service, the test kills the bridge that carries Rx.Sl's request, so
# that request answers UNAVAILABLE
row_S3() (
  local lake_pid rc=0
  enter_row S3; bridges
  slow Sl 20000; slow W 3000
  printf 'import Rx.W\n\n/-! A module whose run answers UNAVAILABLE. -/\n\ndef u := w\n' > Rx/U.lean
  # The killed bridge leaves its action's scratch root in the row's directory: the bridge, which sources 2.env,
  # expands the exported BRIDGES ($D/b) when it runs
  mkdir -p "$D/tmp"; printf 'export TMPDIR="$BRIDGES/../tmp"\n' > "$B/2.env"
  echo '$' lake build Rx.Sl Rx.U
  FAKE_CONCURRENT=1 FAKE_UNAVAILABLE_TARGET=Rx.U "$LAKE" build Rx.Sl Rx.U > "$D/out" 2>&1 & lake_pid=$!
  trap 'kill "$lake_pid" 2> /dev/null || true' EXIT
  pcheck --failure run:Rx.U --until "$lake_pid" up
  kill -9 "$(cat "$B/2.pid")"
  wait "$lake_pid" || rc=$?
  cat "$D/out"
  test_exp "$rc" = 0
  pcheck --failure run:Rx.U resent=Rx.Sl
  lines --modules Rx.Sl,Rx.W,Rx.U --expect 'Rx.Sl|Rx.W:result=executed' --expect 'Rx.U:result=local'
  match_text "lake: remote: ok;" "$D/out"
)

# S4: a probe that finds the service down leaves the modules local, and the next probe follows the schedule:
# 2 s after the first probe's answer, then 4 s after the second's
row_S4() (
  build_down; state down
  pcheck probes=3 down
)

# S5: a probe that finds the service answering puts it in use: Lake stops the bridge whose `hello` had found it
# down, the timer stops, and the next module that is ready sends its request on a new bridge. The decision finds
# the service; the bridge that carries the first request (2) finds it down, so Rx.Q1 (10 s) compiles locally;
# every later bridge finds the service
row_S5() (
  enter_row S5; bridges
  printf 'export FAKE_UNREACHABLE=1 BRIDGE_TIMED=1\n' > "$B/2.env"
  slow Q1 10000; slow Q2 0 Rx.Q1
  lbuild Rx.Q2
  pcheck probes=1
  pcheck "reconnect=$(cat "$B/2.exit")"
  lines --modules Rx.Q1,Rx.Q2 --expect 'Rx.Q1:result=local' --expect 'Rx.Q2:result=executed'
)

# S6: a probe that finds another Lean behind the service: the modules after it compile locally as
# `toolchain-mismatch`, with the warning once, and the timer stops. The decision finds the service down; every
# later `hello` answers with another Lean (`mismatch-after-outage`)
row_S6() (
  enter_row S6
  slow Q1 6000; slow Q2 0 Rx.Q1
  FAKE_HELLO_SEQUENCE=mismatch-after-outage FAKE_HELLO_STATE="$D/hello.state" lbuild Rx.Q2
  pcheck probes=1 hellos=1
  test_cmd_eq 0 count_method run
  test_cmd_eq 1 grep -c "falling back to local compilation" "$D/out"
  lines --modules Rx.Q1,Rx.Q2 --expect 'Rx.Q1:result=local' \
    --expect 'Rx.Q2:result=toolchain-mismatch,action=null,outputs=null'
  match_text "lake: remote: off: build service at grpc://fake:1 runs Lean 0000000000000000000000000000000000000000" \
    "$D/out"
)

# S7: a probe that the service refuses (it does not verify its toolchain) leaves the service unused: the modules
# compile locally, nothing fails, and the next probe follows the schedule. The decision finds the service down;
# the service of every later bridge refuses
row_S7() (
  enter_row S7; bridges
  printf 'export FAKE_UNREACHABLE=1\n' > "$B/1.env"
  printf 'export FAKE_UNVERIFIED=1\n' > "$B/rest.env"
  slow Sl 8000
  lbuild Rx.A Rx.Sl
  pcheck probes=2
  test_cmd_eq 0 count_method run
  lines --modules Rx.A,Rx.Sl --expect '*:result=local,action=null,outputs=null,exitCode=0'
  match_text "lake: remote: unreachable; 0 cached (0 from manifest), 0 executed, 2 local;" "$D/out"
)

# S8: a module that is ready while a probe is in flight compiles locally at once. The decision finds the service
# down, and the `hello` of every probe is held for 30 s
row_S8() (
  enter_row S8; bridges
  printf 'export FAKE_UNREACHABLE=1\n' > "$B/1.env"
  printf 'export FAKE_UNREACHABLE=1 FAKE_HELLO_DELAY_S=30\n' > "$B/rest.env"
  slow Q1 3000; slow Q2 3000 Rx.Q1; slow Q3 0 Rx.Q2
  lbuild Rx.Q3
  pcheck in-flight=Rx.Q2 in-flight=Rx.Q3 no-wait
  lines --modules Rx.Q1,Rx.Q2,Rx.Q3 --expect '*:result=local,action=null,outputs=null,exitCode=0'
)

# S9: the build ends while the timer sleeps (its next probe is due 31 s after the failure, some 8 s after the
# build's end): Lake exits within 1 s of the build's end, here 3 s (see probe_check.py's `exit`)
row_S9() (
  build_down; state down
  pcheck probes=1
  pcheck answered
  pcheck "exit=$(cat "$D/exit")"
)

# S10: the build ends while the `hello` of a probe is held (60 s): Lake kills that probe's bridge and exits within
# 1 s of the build's end, here 3 s (as in S9)
row_S10() (
  enter_row S10; bridges
  printf 'export FAKE_UNREACHABLE=1\n' > "$B/1.env"
  printf 'export FAKE_UNREACHABLE=1 FAKE_HELLO_DELAY_S=60\n' > "$B/rest.env"
  slow Sl 5000
  lbuild Rx.Sl
  pcheck held hellos=1
  pcheck "exit=$(cat "$D/exit")"
  test_cmd wait_dead "$(cat "$B/2.pid")" 2
)

# S10w: S10 with a bridge command that runs the bridge as its child instead of exec'ing it (a wrapper script,
# `timeout`, `strace -f`; `killBridge` names this case): the build ends while the probe's `hello` is held (60 s),
# and Lake still exits within 1 s of the build's end, here 3 s (as in S10)
row_S10w() (
  enter_row S10w; bridges
  printf 'export FAKE_UNREACHABLE=1\n' > "$B/1.env"
  printf 'export FAKE_UNREACHABLE=1 FAKE_HELLO_DELAY_S=60 BRIDGE_TIMED=1\n' > "$B/rest.env"
  slow Sl 5000
  lbuild Rx.Sl
  pcheck "exit=$(cat "$D/exit")"
  pcheck held hellos=1
)

# S10t: S10w with a bridge command that runs the bridge under GNU `timeout` without exec (`killBridge` names
# `timeout`). `timeout` moves itself and the bridge into a process group of their own, inside the bridge
# command's session. The build ends while the probe's `hello` is held (60 s), and Lake still exits within 1 s
# of the build's end, here 3 s (as in S10)
row_S10t() (
  enter_row S10t
  B="$D/b"; mkdir -p "$B"
  printf '%s\n' '#!/bin/sh' \
    'n=1; while ! (set -C; : > "$BRIDGES/$n.start") 2> /dev/null; do n=$((n + 1)); done' \
    '[ "$n" = 1 ] || export FAKE_HELLO_DELAY_S=60' \
    'timeout 600 "$FAKE" "$@"' > "$B/bridge"
  chmod +x "$B/bridge"
  export BRIDGES="$B" FAKE="$TEST_DIR/fake_lean_remote.py" LAKE_REMOTE_EXEC_CLIENT="$B/bridge" FAKE_UNREACHABLE=1
  slow Sl 5000
  lbuild Rx.Sl
  pcheck "exit=$(cat "$D/exit")"
  pcheck held hellos=1
)

# held_bridges: LAKE_REMOTE_EXEC_CLIENT becomes a bridge command, numbered as in `bridges`, whose fake the kill
# of the bridge's process group does not end. Bridge 1 (the decision's) is the fake itself, which finds the
# service down. Each later bridge ignores SIGTERM and SIGHUP, keeps the fake's input open after Lake's input
# ends, and runs the fake in a session of its own; that fake answers its `hello` 60 s late, writes its pid to
# $D/b/N.fakepid, and is killed when the row ends
held_bridges() {
  B="$D/b"; mkdir -p "$B"
  printf '%s\n' '#!/bin/sh' \
    'n=1; while ! (set -C; : > "$BRIDGES/$n.start") 2> /dev/null; do n=$((n + 1)); done' \
    '[ "$n" != 1 ] || exec "$FAKE" "$@"' \
    'export FAKE_HELLO_DELAY_S=60 FAKE_PIDFILE="$BRIDGES/$n.fakepid"' \
    "trap '' TERM HUP" \
    '{ cat; exec sleep 600; } | "$PYTHON" -c '\''import os, sys; os.setsid(); os.execv(sys.argv[1], sys.argv[1:])'\'' "$FAKE" "$@"' \
    > "$B/bridge"
  chmod +x "$B/bridge"
  export BRIDGES="$B" FAKE="$TEST_DIR/fake_lean_remote.py" LAKE_REMOTE_EXEC_CLIENT="$B/bridge" FAKE_UNREACHABLE=1 PYTHON
  trap 'for f in "$B"/*.fakepid; do [ ! -f "$f" ] || kill -9 "$(cat "$f")" 2> /dev/null || true; done' EXIT
}

# S10s: S10t with a bridge command whose probe neither the kill of the bridge's process group nor end of input
# ends (`held_bridges`): its fake holds Lake's read of the `hello` answer for 60 s. The build ends while that
# `hello` is held, and Lake waits at most 1 s for the probe and exits without it, within 3 s of the build's end
# (as in S10): with code 0, after its end-of-build line, a line of its log for each module and the build lock's
# release
row_S10s() (
  local rc=0
  enter_row S10s; held_bridges
  slow Sl 5000
  lbuild Rx.Sl || rc=$?
  test_exp "$rc" = 0
  pcheck "exit=$(cat "$D/exit")"
  pcheck held hellos=1
  lines --modules Rx.Sl --expect 'Rx.Sl:result=local,action=null,outputs=null,exitCode=0'
  match_text "lake: remote: unreachable; 0 cached (0 from manifest), 0 executed, 1 local;" "$D/out"
  test_cmd lock_free .lake/build.lock
)

# S10f: S10s with a build that fails (Rx.Bad, which imports Rx.Sl, does not compile): Lake exits as it does
# without a held probe, with code 1, the error and its end-of-build line, within 3 s of the build's end
row_S10f() (
  local rc=0
  enter_row S10f; held_bridges
  slow Sl 5000
  printf 'import Rx.Sl\n\n/-! A module that does not compile. -/\n\ndef bad : Nat := undefinedIdentS10f\n' > Rx/Bad.lean
  lbuild Rx.Bad || rc=$?
  test_exp "$rc" = 1
  pcheck "exit=$(cat "$D/exit")"
  pcheck held hellos=1
  lines --modules Rx.Sl,Rx.Bad --expect 'Rx.Sl:result=local,action=null,outputs=null,exitCode=0' \
    --expect 'Rx.Bad:result=local,action=null,outputs=null,exitCode=null'
  match_text undefinedIdentS10f "$D/out"
  match_text "lake: remote: unreachable; 0 cached (0 from manifest), 0 executed, 1 local;" "$D/out"
)

# S10n: S10s with `lake build --no-build` of Rx.A, which needs a build: Rx.A's job first waits for the library's
# extra target `slow` (5 s), so the build ends while the probe's `hello` is held. Lake exits as it does without a
# held probe, with the code of `--no-build` (3) and its end-of-build line, within 3 s of the build's end
row_S10n() (
  local rc=0
  enter_row S10n; held_bridges
  rm lakefile.toml
  printf 'import Lake\nopen Lake DSL\npackage rx\ntarget slow : Unit := Job.async (prio := .dedicated) do\n  IO.sleep 5000\nlean_lib Rx where\n  extraDepTargets := #[`slow]\n' \
    > lakefile.lean
  lbuild --no-build Rx.A || rc=$?
  test_exp "$rc" = 3
  pcheck "exit=$(cat "$D/exit")"
  pcheck held hellos=1
  lines --modules Rx.A --expect 'Rx.A:result=error,code=no-build'
  match_text "lake: remote: unreachable; 0 cached (0 from manifest), 0 executed, 0 local;" "$D/out"
)

# S11: under `fail` and `wait` no timer runs. Under `fail` Rx.A fails at once, and a target that sleeps 5 s keeps
# the build going: only the decision says `hello`. Under `wait` the probes are `awaitService`'s: one at a time, 1 s
# and then 2 s apart, and after the one that finds the service only the bridge that carries the requests says
# `hello`
row_S11() (
  local lake_pid rc=0
  enter_row S11-fail
  rm lakefile.toml
  printf 'import Lake\nopen Lake DSL\npackage rx\ntarget slow : Unit := Job.async (prio := .dedicated) do\n  IO.sleep 5000\nlean_lib Rx\n' \
    > lakefile.lean
  FAKE_UNREACHABLE=1 LAKE_REMOTE_EXEC_FALLBACK=fail lbuild Rx.A slow || rc=$?
  test_exp "$rc" = 75
  test_cmd_eq 1 count_method hello
  enter_row S11-wait
  touch "$D/down"
  echo '$' lake build Rx.A
  FAKE_DOWN_FILE="$D/down" LAKE_REMOTE_EXEC_FALLBACK=wait "$LAKE" build Rx.A > "$D/out" 2>&1 & lake_pid=$!
  trap 'kill "$lake_pid" 2> /dev/null || true' EXIT
  wait_down 0 4 || { cat "$D/out"; false; }
  rm -f "$D/down"
  rc=0; wait "$lake_pid" || rc=$?
  cat "$D/out"
  test_exp "$rc" = 0
  test_cmd "$PYTHON" "$TEST_DIR/fallback_check.py" probes "$FAKE_LOG" 0
  pcheck reconnect
)

# S12: once a probe finds the service answering again, every module that starts after its answer goes to the
# service. The decision finds the service down; the first probe finds it answering, while Rx.Q1 (8 s) compiles
# locally
row_S12() (
  enter_row S12; bridges
  printf 'export FAKE_UNREACHABLE=1\n' > "$B/1.env"
  slow Q1 8000; slow Q2 0 Rx.Q1; slow Q3 0 Rx.Q2
  lbuild Rx.Q3
  pcheck service after
  lines --modules Rx.Q1,Rx.Q2,Rx.Q3 --expect 'Rx.Q1:result=local' --expect 'Rx.Q2|Rx.Q3:result=executed|cached'
)

# k5 (S1, S4, S5, S8 and S12 on `chain/`, ten modules in a chain, each 10 s): the service is down when the build
# starts and answers again 30 s later. The modules compile locally without waiting for a probe until a probe finds
# the service; every module that starts after that goes to the service, and each module compiled locally that it
# imports is first promoted (its own run on the service), so no local output is an input of a service action: each
# input of the fake's actions but a source file is an output of the fake's runs. No local compile is in the push
# queue of the shared cache (LAKE_REMOTE_CACHE).
row_k5() (
  local i up_pid pairs=
  enter_row k5 chain
  touch "$D/down"
  (sleep 30; rm -f "$D/down") & up_pid=$!
  trap 'kill "$up_pid" 2> /dev/null || true' EXIT
  FAKE_DOWN_FILE="$D/down" LAKE_REMOTE_CACHE=ok LAKE_REMOTE_CACHE_QUEUE=true lbuild Chain
  pcheck probes=1
  pcheck no-wait
  pcheck service
  pcheck after
  pcheck "inputs=$FAKE_CAS"
  test_exp ! -e "$LAKE_CACHE_DIR/push.jsonl"
  match_pat 'lake: remote: [a-z]+; [0-9]+ cached \([0-9]+ from manifest\), [1-9][0-9]* executed, [1-9][0-9]* local;' \
    "$D/out"
  for i in $(seq 2 10); do pairs="$pairs,Chain.C$i:Chain.C$((i - 1))"; done
  pcheck "promoted=${pairs#,}"
)

# qb_midway: Rx.W (25 s) and Rx.QB, which imports Rx.QA and Rx.W, then `lake build Rx.QB` with the usage cutoff on,
# the service not answering when the build starts and answering again 10 s later, while Rx.W compiles here: so Rx.QB
# goes to the service, whose request promotes the modules that it imports
qb_midway() {
  local up_pid
  export LAKE_USAGE_CUTOFF=1
  slow W 25000
  printf 'import Rx.QA\nimport Rx.W\n\ndef qb := qa + w\n' > Rx/QB.lean
  touch "$D/down"
  (sleep 10; rm -f "$D/down") & up_pid=$!
  trap "kill $up_pid 2> /dev/null || true" EXIT
  FAKE_DOWN_FILE="$D/down" lbuild Rx.QB
}

# P1: Rx.QA and Rx.W compile here while the service does not answer, and a probe finds it again while Rx.W compiles
# (`qb_midway`); then Rx.QB goes to the service, whose request promotes Rx.QA and Rx.W. Rx.QB's trace has the hash
# of its inputs after those promotions, the one the next build computes: `--no-build` of Rx.QB builds nothing, and
# the next build sends no request
row_P1() (
  enter_row P1
  printf 'def qa := 1\n' > Rx/QA.lean
  qb_midway
  lines --modules Rx.QA,Rx.W,Rx.QB --expect 'Rx.QA|Rx.W:result=local' --expect 'Rx.QB:result=executed|cached'
  pcheck promoted=Rx.QB:Rx.QA,Rx.QB:Rx.W
  export FAKE_LOG="$D/again.fake.log" LAKE_REMOTE_EXEC_LOG="$D/again.jsonl"
  test_run build --no-build Rx.QB
  test_run build Rx.QB
  test_cmd_eq 0 count_method run
)

# P2: P1 with a chain: Rx.QA0 and Rx.QA, which imports it, compile here while the service does not answer, and Rx.QB's
# request promotes Rx.QA0, then Rx.QA, whose own request takes Rx.QA0's promoted outputs. Each trace has the hash of
# its module's inputs after the promotions: `--no-build` of Rx.QA and of Rx.QB builds nothing
row_P2() (
  enter_row P2
  printf 'def qa0 := 1\n' > Rx/QA0.lean
  printf 'import Rx.QA0\n\ndef qa := qa0\n' > Rx/QA.lean
  qb_midway
  lines --modules Rx.QA0,Rx.QA,Rx.W,Rx.QB --expect 'Rx.QA0|Rx.QA|Rx.W:result=local' \
    --expect 'Rx.QB:result=executed|cached'
  pcheck promoted=Rx.QA:Rx.QA0,Rx.QB:Rx.QA
  export FAKE_LOG="$D/again.fake.log" LAKE_REMOTE_EXEC_LOG="$D/again.jsonl"
  test_run build --no-build Rx.QA
  test_run build --no-build Rx.QB
)

# qa_chain: Rx.QA0, Rx.QA (which imports it), Rx.W (25 s) and Rx.QB (which imports Rx.QA and Rx.W), with the usage
# cutoff and the artifact cache on
qa_chain() {
  export LAKE_USAGE_CUTOFF=1 LAKE_ARTIFACT_CACHE=true
  printf 'def qa0 := 1\n' > Rx/QA0.lean
  printf 'import Rx.QA0\n\ndef qa := qa0\n' > Rx/QA.lean
  slow W 25000
  printf 'import Rx.QA\nimport Rx.W\n\ndef qb := qa + w\n' > Rx/QB.lean
}
# o_restore NAME: the mappings of the row's `lake build Rx.QB -o $D/outputs.jsonl` serve a fresh tree: a fresh copy
# of the row's sources in $PW/NAME, and a new Lake cache that holds only the archives of the row's cache, into which
# `lake cache add` installs the mappings. The fresh tree, with service mode off (the same input hashes) and that cache,
# restores Rx.QB and its imports with no compile, with the bytes that the row's tree holds
o_restore() {
  local tree=$PWD fresh="$PW/$1" m
  rm -rf "$fresh" "$fresh.cache"; mkdir -p "$fresh" "$fresh.cache"
  cp -r "$tree/lakefile.toml" "$tree/Rx.lean" "$tree/Rx" "$fresh/"; chmod -R u+w "$fresh"
  cp -r "$LAKE_CACHE_DIR/artifacts" "$fresh.cache/"
  find "$fresh.cache/artifacts" -type f ! -name '*.ltar' -delete
  test_exp "$(find "$fresh.cache/artifacts" -type f -name '*.ltar' | wc -l)" -gt 0
  (
    cd "$fresh"; unset LAKE_REMOTE_EXEC
    export LAKE_CACHE_DIR="$fresh.cache" LAKE_RESTORE_ARTIFACTS=true
    test_run cache add "$D/outputs.jsonl"
    lake_out build Rx.QB
    no_match_text "Built Rx." produced.out
  )
  for m in QA0 QA W QB; do test_cmd cmp "$tree/.lake/build/lib/lean/Rx/$m.olean" "$fresh/.lake/build/lib/lean/Rx/$m.olean"; done
}

# P3c: the case of P3 with no promotion, so that P3 tests the mappings and not their restore: the service answers
# the whole build, every module goes to it, and the build's mappings serve a fresh tree (`o_restore`)
row_P3c() (
  enter_row P3c; qa_chain
  lbuild Rx.QB -o "$D/outputs.jsonl"
  lines --modules Rx.QA0,Rx.QA,Rx.W,Rx.QB --expect '*:result=executed'
  o_restore P3c-fresh
)

# P3: P2 with the artifact cache and `lake build -o`: Rx.QA0, Rx.QA and Rx.W compile here while the service does not
# answer, and Rx.QB's request promotes them. The build's mappings are those of its outputs after the promotions, not
# those its jobs wrote before them: each names the input hash of the module's trace and the archive of the service's
# outputs, and none maps a module's input hash from before the promotions to its local outputs, so they serve a
# fresh tree as P3c's do (`o_restore`)
row_P3() (
  local up_pid
  enter_row P3; qa_chain
  touch "$D/down"
  (sleep 10; rm -f "$D/down") & up_pid=$!
  trap "kill $up_pid 2> /dev/null || true" EXIT
  FAKE_DOWN_FILE="$D/down" lbuild Rx.QB -o "$D/outputs.jsonl"
  lines --modules Rx.QA0,Rx.QA,Rx.W,Rx.QB --expect 'Rx.QA0|Rx.QA|Rx.W:result=local' \
    --expect 'Rx.QB:result=executed|cached'
  pcheck promoted=Rx.QA:Rx.QA0,Rx.QB:Rx.QA
  o_restore P3-fresh
)

run_rows S1 S2 S3 S4 S5 S6 S7 S8 S9 S10 S10w S10t S10s S10f S10n S11 S12 k5 P1 P2 P3c P3
