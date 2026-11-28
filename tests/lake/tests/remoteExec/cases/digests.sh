# The `digests` group of test.sh, which sources it: the inputs of service actions (A7, and the promotion of A4),
# rows D1-D12. A Lean action takes a plugin by the digest and executable bit of the service's output, so two machines
# send the same actions (D1-D4); an input that this machine compiled is first compiled again on the service (its
# promotion), so no local output is an input of a service action (D5-D12). D1-D6 build the package `native/` (see
# cases/native.sh), D7-D12 the package Rx. Each row builds in directories of its own under $WORK/digests, and each
# build has a fake log and a LAKE_REMOTE_EXEC_LOG of its own. D4 builds on D2's service: `build_D2` builds D2's tree
# once, so that each of them also runs alone.

DW=$GW
export LAKE_REMOTE_EXEC=grpc://fake:1
unset LAKE_REMOTE_EXEC_TIMEOUT LAKE_REMOTE_EXEC_FALLBACK LAKE_ARTIFACT_CACHE LAKE_RESTORE_ARTIFACTS
# The service's C compiler and the PATH of its actions: this machine's `cc`, and the `ld.lld` that the link flags'
# `-fuse-ld=lld` need. With LAKE_REMOTE_EXEC_SYSROOT and LAKE_REMOTE_EXEC_TOOLCHAIN (test.sh) they are the four
# settings that make two machines send the same actions
LAKE_REMOTE_EXEC_CC=$(command -v cc)
lld=$(command -v ld.lld)
export LAKE_REMOTE_EXEC_CC LAKE_REMOTE_EXEC_PATH="$(dirname "$lld"):/usr/bin:/bin"
RX_MODS=Rx,Rx.A,Rx.B,Rx.C,Rx.M

toolchain "$DW/tc"
export LAKE="$DW/tc/bin/lake"

# The helpers below read the fake's log LOG with these functions: `runs(LOG)` its `run` requests (their params),
# in order; `action(LOG, T)` the key of target T's last run, which is the SHA-256 of the line of LOG.actions with
# that run's argv and outputs; `result(LOG, T)` what the fake stored for T's action (its action cache entry in
# FAKE_CAS), or None
FAKE_PY='import hashlib, json, os, sys
def jsonl(p):
    return [json.loads(l) for l in open(p) if l.strip()] if os.path.exists(p) else []
def runs(log):
    return [e["params"] for e in jsonl(log) if e.get("method") == "run"]
def actions(log):
    p = log + ".actions"
    lines = [l.strip() for l in open(p) if l.strip()] if os.path.exists(p) else []
    return {hashlib.sha256(l.encode()).hexdigest(): json.loads(l) for l in lines}
def action(log, t):
    r = [p for p in runs(log) if p.get("target") == t]
    ks = [k for k, a in actions(log).items() if r and (a["argv"], a["outputs"]) == (r[-1]["argv"], r[-1]["outputs"])]
    return ks[-1] if ks else None
def result(log, t):
    k = action(log, t)
    p = os.path.join(os.environ["FAKE_CAS"], "ac", k or "-")
    return json.load(open(p)) if k and os.path.exists(p) else None
'
# run_seq [TARGET...]: the `run` requests of the fake's log (of TARGETs), in order, each `MNEMONIC:TARGET`, and `!`
# after it when the request skips the action cache (`skipCacheLookup`)
run_seq() {
  "$PYTHON" -c "$FAKE_PY"'
ts = sys.argv[2:]
print(" ".join("%s:%s%s" % (p.get("mnemonic"), p.get("target"), "!" if p.get("skipCacheLookup") else "")
               for p in runs(sys.argv[1]) if not ts or p.get("target") in ts))' "$FAKE_LOG" "$@"
}
# key_of LOG TARGET: the key of TARGET's action in the fake's log LOG
key_of() {
  "$PYTHON" -c "$FAKE_PY"'
k = action(*sys.argv[1:3])
print(k or "%s has no action in %s" % (sys.argv[2], sys.argv[1])); sys.exit(0 if k else 1)' "$1" "$2"
}
# fake_out TARGET: the digest of the one output that the fake stored for TARGET's action
fake_out() {
  "$PYTHON" -c "$FAKE_PY"'
outs = (result(*sys.argv[1:3]) or {}).get("outputs") or []
print(outs[0]["digest"] if len(outs) == 1 else "%s has no stored result with one output" % sys.argv[2])
sys.exit(0 if len(outs) == 1 else 1)' "$FAKE_LOG" "$1"
}
# by_digest TARGET PRODUCER [PRODUCER_LOG]: TARGET's last request names the one output of PRODUCER's action (in the
# fake's log PRODUCER_LOG, default the same) as the fake stored it: `{rel, digest, executable}`, with no path
by_digest() {
  "$PYTHON" -c "$FAKE_PY"'
log, t, prod = sys.argv[1:4]
plog = sys.argv[4] if len(sys.argv) > 4 else log
outs = (result(plog, prod) or {}).get("outputs") or []
if len(outs) != 1: sys.exit("%s has no stored result with one output in %s" % (prod, plog))
want = {k: outs[0][k] for k in ("rel", "digest", "executable")}
r = [p for p in runs(log) if p.get("target") == t]
got = [i for i in r[-1]["inputs"] if i.get("rel") == want["rel"]] if r else None
print("%s names %s: %s, want %s" % (t, want["rel"], json.dumps(got), json.dumps([want])))
sys.exit(0 if got == [want] else 1)' "$FAKE_LOG" "$@"
}
# same_keys LOG LOG2: the actions of the fake's logs LOG and LOG2 have the same keys
same_keys() {
  "$PYTHON" -c "$FAKE_PY"'
a, b = actions(sys.argv[1]), actions(sys.argv[2])
for k in sorted(a.keys() ^ b.keys()):
    act = a.get(k) or b.get(k)
    print("only in %s: the action of %s" % (sys.argv[1] if k in a else sys.argv[2], act["outputs"]))
print("%d and %d actions" % (len(a), len(b)))
sys.exit(0 if a and a.keys() == b.keys() else 1)' "$1" "$2"
}
# inputs_from TARGET PRODUCER: each input of TARGET's action that is an output of PRODUCER's action has the digest of
# that output as the fake stored it, and there is one at least
inputs_from() {
  "$PYTHON" -c "$FAKE_PY"'
log, t, prod = sys.argv[1:4]
outs = {o["rel"]: o["digest"] for o in (result(log, prod) or {}).get("outputs") or []}
k = action(log, t)
got = {rel: d for rel, d, _ in actions(log)[k]["inputs"] if rel in outs} if k else {}
print("%s takes %s; the outputs of %s: %s" % (t, json.dumps(got), prod, json.dumps(outs)))
sys.exit(0 if got and all(got[rel] == outs[rel] for rel in got) else 1)' "$FAKE_LOG" "$1" "$2"
}
# record_of TRACE TARGET: the trace file TRACE has the service's record of TARGET's action: its action digest and
# the digests of its outputs, as the fake stored them
record_of() {
  "$PYTHON" -c "$FAKE_PY"'
log, trace, t = sys.argv[1:4]
res = result(log, t) or {}
rec = json.load(open(trace)).get("remote") or {}
want = (res.get("action"), sorted(o["digest"] for o in res.get("outputs") or []))
got = (rec.get("action"), sorted(o.get("digest") for o in (rec.get("outputs") or {}).values()))
print("%s: record %s, want %s" % (trace, json.dumps(got), json.dumps(want)))
sys.exit(0 if res and got == want else 1)' "$FAKE_LOG" "$1" "$2"
}
# serviced LOG: every target that has a `run` in the fake's log has its lines in LOG `executed` or `cached` (a
# promoted target keeps the line of its local outputs), and so has Nat0.Tac's module library
serviced() {
  check_lines "$1" --modules Nat0.Tac,Nat0.Use --expect "$(run_targets 0 | tr ' ' '|'):result=executed|cached" \
    --expect 'Nat0.Tac:dynlib:kind=shared,result=executed|cached'
}

# D1 (k7): `native/` built through the service from two directories at different paths, each with a `cc` of its
# own first on PATH (Lake's C compiler), which adds `-g` in one and `-g0` in the other, so that local compiles
# write other bytes: the actions of the two builds have the same keys, which cover the timeout and each input's
# digest and executable bit
row_D1() (
  local g
  rm -rf "$DW/D1.cas"
  for g in g g0; do
    enter "D1-$g" native; export FAKE_CAS="$DW/D1.cas"; logs "D1-$g"
    mkdir -p "$DW/D1-$g.bin"
    # The script expands the exported LAKE_REMOTE_EXEC_CC when it runs; `-$g` is `-g` or `-g0`, no path
    printf '#!/bin/sh\nexec "$LAKE_REMOTE_EXEC_CC" -%s "$@"\n' "$g" > "$DW/D1-$g.bin/cc"
    chmod +x "$DW/D1-$g.bin/cc"
    LEAN_CC=cc PATH="$DW/D1-$g.bin:$PATH" test_run build Use2 Nat0:shared
  done
  test_cmd same_keys "$DW/D1-g.fake.log" "$DW/D1-g0.fake.log"
)

# D2's tree: `native/` built through a service of its own
build_D2() (
  [ ! -e "$DW/D2.built" ] || exit 0
  enter D2 native; logs D2
  test_run build Use2 Nat0:shared
  touch "$DW/D2.built"
)

# D2: a request names each library that its compile loads by the digest and executable bit of the library's
# output on the service, not by its path: Nat0.Use the module library of Nat0.Tac, Use2 the library of Nat0
row_D2() (
  build_D2
  export FAKE_LOG="$DW/D2.fake.log" FAKE_CAS="$DW/D2.cas"
  test_cmd by_digest Nat0.Use Nat0.Tac:dynlib
  test_cmd by_digest Use2 native/Nat0:shared
)

# D3: a fresh tree on the Lake cache of a first build (artifact cache on) restores Nat0.Tac and its module library,
# whose cache entry holds the service's record, and compiles Nat0.Use, whose entry is gone: its request names the
# library by the service's digest, so its action is the first build's (a library restored from the Lake cache can
# have another mode than the one the service materialized, and a path input would carry the mode)
row_D3() (
  local dep
  export LAKE_ARTIFACT_CACHE=true LAKE_RESTORE_ARTIFACTS=true
  enter D3-first native; logs D3-first
  test_run build Nat0.Use
  dep=$("$PYTHON" -c 'import json, sys; print(json.load(open(sys.argv[1]))["depHash"])' .lake/build/lib/lean/Nat0/Use.trace)
  test_cmd rm "$LAKE_CACHE_DIR"/outputs/*/"$dep.json"
  enter D3 native; export FAKE_CAS="$DW/D3-first.cas" LAKE_CACHE_DIR="$DW/D3-first.cache"; logs D3
  test_run build Nat0.Use
  test_cmd_eq "LeanModule:Nat0.Use" run_seq
  test_cmd by_digest Nat0.Use Nat0.Tac:dynlib "$DW/D3-first.fake.log"
  test_cmd_eq "$(key_of "$DW/D3-first.fake.log" Nat0.Use)" key_of "$DW/D3.fake.log" Nat0.Use
)

# D4: the service lost the blob of Nat0.Tac's module library (FAKE_DROP_ONCE), so Nat0.Use's run answers UNAVAILABLE
# naming it: Lake runs the library's link once more, past the action cache, and then Nat0.Use's once more, which
# succeeds. The tree is on D2's service, with a Nat0.Use that the service has not compiled
row_D4() (
  local lib
  build_D2
  lib=$(FAKE_LOG="$DW/D2.fake.log" FAKE_CAS="$DW/D2.cas" fake_out Nat0.Tac:dynlib)
  enter D4 native; export FAKE_CAS="$DW/D2.cas"; logs D4
  printf '\n-- a change of D4\n' >> Nat0/Use.lean
  FAKE_DROP_ONCE="$lib" test_run build Nat0.Use
  test_cmd_eq "LinkShared:Nat0.Tac:dynlib LeanModule:Nat0.Use LinkShared:Nat0.Tac:dynlib! LeanModule:Nat0.Use" \
    run_seq Nat0.Tac:dynlib Nat0.Use
  check_lines "$DW/D4.jsonl" --modules Nat0.Tac,Nat0.Use --expect 'Nat0.Use:result=executed,exitCode=0'
)

# D5: Nat0.Tac's module library is built here while the service does not answer (`shared` `local`). Once it
# answers, Nat0.Tac's object, up to date with no service record, is built on the service by its own job, which first
# promotes Nat0.Tac for its C file, and the library, whose input changed, is built there too: Nat0.Tac's compile, its
# object and the library run on the service, before Nat0.Use's run; Nat0.Use's request names the library's digest,
# and the library's file holds the service's bytes
row_D5() (
  local lib
  enter D5 native; logs D5-local
  FAKE_UNREACHABLE=1 test_run build +Nat0.Tac:dynlib
  check_lines "$DW/D5-local.jsonl" --modules Nat0.Tac \
    --expect 'Nat0.Tac:dynlib:kind=shared,result=local,action=null,outputs=null,exitCode=0'
  logs D5
  test_run build Nat0.Use
  test_cmd_eq "LeanModule:Nat0.Tac CCompile:Nat0.Tac:c.o.export LinkShared:Nat0.Tac:dynlib LeanModule:Nat0.Use" run_seq
  test_cmd by_digest Nat0.Use Nat0.Tac:dynlib
  lib=$(fake_out Nat0.Tac:dynlib)
  test_cmd cmp .lake/build/lib/lean/native_Nat0_Tac.so "$FAKE_CAS/${lib%/*}"
  check_lines "$DW/D5.jsonl" --modules Nat0.Tac,Nat0.Use --expect 'Nat0.Use:result=executed'
)

# D6: under `fail` and `wait`, while the service does not answer, no object or library is built here, so later no
# target is promoted: under `fail` the build fails (Nat0.Tac `error` UNAVAILABLE, no native line), and the next
# build, with the service answering, has only lines of the service; under `wait` the build waits for the service
# and has only lines of the service
row_D6() (
  local pid rc
  enter D6-fail native; logs D6-fail-down
  FAKE_UNREACHABLE=1 LAKE_REMOTE_EXEC_FALLBACK=fail test_status 75 build Nat0.Use
  test_exp ! -e .lake/build/lib/lean/native_Nat0_Tac.so
  test_exp ! -e .lake/build/ir/Nat0/Tac.c.o.export
  test_cmd_eq 0 count_method run
  check_lines "$DW/D6-fail-down.jsonl" --modules Nat0.Tac,Nat0.Use --expect 'Nat0.Tac:result=error,code=UNAVAILABLE'
  test_cmd_eq "" native_lines "$DW/D6-fail-down.jsonl"
  logs D6-fail
  LAKE_REMOTE_EXEC_FALLBACK=fail test_run build Nat0.Use
  serviced "$DW/D6-fail.jsonl"
  enter D6-wait native; logs D6-wait
  touch "$DW/D6.down"
  (FAKE_DOWN_FILE="$DW/D6.down" LAKE_REMOTE_EXEC_FALLBACK=wait "$LAKE" build Nat0.Use > "$DW/D6-wait.out" 2>&1) &
  pid=$!
  wait_down 0 2 || { kill "$pid" 2> /dev/null; cat "$DW/D6-wait.out"; false; }
  rm -f "$DW/D6.down"
  rc=0; wait "$pid" || rc=$?
  cat "$DW/D6-wait.out"
  test_exp "$rc" = 0
  serviced "$DW/D6-wait.jsonl"
)

# D7: Rx.A compiled here while the service did not answer, then Rx.B built through the service: Lake first promotes
# Rx.A (its run on the service), so Rx.B's request takes Rx.A's outputs with the service's bytes, and Rx.A's trace
# has the service's record; Rx.A has one line in each build, `local`, then `local-cache` with no record (it
# replayed its local trace before the promotion)
row_D7() (
  enter D7; logs D7-local
  FAKE_UNREACHABLE=1 test_run build Rx.A
  logs D7
  test_run build Rx.B
  test_cmd_eq "LeanModule:Rx.A LeanModule:Rx.B" run_seq
  test_cmd inputs_from Rx.B Rx.A
  test_cmd record_of .lake/build/lib/lean/Rx/A.trace Rx.A
  check_lines "$DW/D7.jsonl" --modules Rx.A,Rx.B \
    --expect 'Rx.A:result=local-cache,action=null,outputs=null,code=null' --expect 'Rx.B:result=executed'
  check_lines "$DW/D7-local.jsonl" --modules Rx.A --expect 'Rx.A:result=local,action=null,outputs=null,exitCode=0'
)

# D8: L5's tree (compiled with service mode off) with Rx.B changed, built through the service under each fallback:
# Rx.A, which Rx.B imports, is promoted before Rx.B's run (and Rx.M before Rx's), and no action takes a file that
# no action of the service wrote
row_D8() (
  local fb
  for fb in local fail wait; do
    enter "D8-$fb"
    (unset LAKE_REMOTE_EXEC LAKE_REMOTE_EXEC_LOG; test_run build Rx)
    logs "D8-$fb"
    printf '\ndef b2 := b + 1\n' >> Rx/B.lean
    LAKE_REMOTE_EXEC_FALLBACK="$fb" test_run build Rx
    test_cmd_eq "LeanModule:Rx.A LeanModule:Rx.B" run_seq Rx.A Rx.B
    test_cmd "$PYTHON" "$TEST_DIR/probe_check.py" --fake "$FAKE_LOG" "inputs=$FAKE_CAS"
    check_lines "$DW/D8-$fb.jsonl" --modules "$RX_MODS" \
      --expect 'Rx.A|Rx.M:result=local-cache,action=null,outputs=null,code=null' --expect 'Rx.B|Rx.C|Rx:result=executed'
  done
)

# D9: D7 with the service answering UNAVAILABLE for Rx.A's run: under `local` the promotion fails and Rx.B compiles
# here, with no request of its own; under `fail` Rx.B fails with UNAVAILABLE
row_D9() (
  enter D9-local; logs D9-local-first
  FAKE_UNREACHABLE=1 test_run build Rx.A
  logs D9-local
  FAKE_UNAVAILABLE_TARGET=Rx.A test_run build Rx.B
  test_cmd_eq "LeanModule:Rx.A" run_seq
  check_lines "$DW/D9-local.jsonl" --modules Rx.A,Rx.B \
    --expect 'Rx.A:result=local-cache,action=null,outputs=null,code=null' \
    --expect 'Rx.B:result=local,action=null,outputs=null,exitCode=0'
  enter D9-fail; logs D9-fail-first
  FAKE_UNREACHABLE=1 test_run build Rx.A
  logs D9-fail
  FAKE_UNAVAILABLE_TARGET=Rx.A LAKE_REMOTE_EXEC_FALLBACK=fail test_status 75 build Rx.B
  test_cmd_eq "LeanModule:Rx.A" run_seq
  check_lines "$DW/D9-fail.jsonl" --modules Rx.A,Rx.B \
    --expect 'Rx.A:result=local-cache,action=null,outputs=null,code=null' --expect 'Rx.B:result=error,code=UNAVAILABLE'
)

# D10: a tree that the fallback compiled with the usage cutoff off, then Rx.B changed and built through the service:
# Rx.A and Rx.M replay, and are promoted when the requests of Rx.B and Rx take them, after their importers hashed
# their local outputs. A local compile with the same toolchain gives the service's bytes, so the build leaves the tree
# up to date: `--no-build` builds nothing, each line has the service's record, and the next build sends no request
row_D10() (
  enter D10; logs D10-local
  FAKE_UNREACHABLE=1 test_run build Rx
  logs D10
  printf '\ndef b2 := b + 1\n' >> Rx/B.lean
  test_run build Rx
  test_cmd_eq "LeanModule:Rx.A LeanModule:Rx.B" run_seq Rx.A Rx.B
  test_cmd_eq "LeanModule:Rx.M LeanModule:Rx" run_seq Rx.M Rx
  check_lines "$DW/D10.jsonl" --modules "$RX_MODS" \
    --expect 'Rx.A|Rx.M:result=local-cache,action=null,outputs=null,code=null' --expect 'Rx.B|Rx.C|Rx:result=executed'
  logs D10-no-build
  test_run build --no-build Rx
  test_cmd_eq 0 count_method run
  check_lines "$DW/D10-no-build.jsonl" --modules "$RX_MODS" \
    --expect '*:result=local-cache,action=digest,outputs=digests,code=null'
  logs D10-again
  test_run build Rx
  test_cmd_eq 0 count_method run
)

# D11: the fallback builds the tree with the usage cutoff on, then a change of Rx.A that Rx.B does not use skips Rx.B's
# compile, which keeps its outputs (L5c). Then Rx.C changed and built through the service: with the cutoff on, no
# local output is what the service compiles (a local compile passes `--usage`, which writes digests into the
# `.olean`, and a skip keeps older outputs), so each module goes to the service in its own job, Rx.A first, and each
# importer takes the service's outputs. The build leaves the tree up to date: `--no-build` builds nothing, each line
# has the service's record, and the next build sends no request
row_D11() (
  enter D11; export LAKE_USAGE_CUTOFF=1; logs D11-local
  FAKE_UNREACHABLE=1 test_run build Rx
  printf '\ndef unusedA := 0\n' >> Rx/A.lean
  logs D11-skip
  FAKE_UNREACHABLE=1 test_out "Replayed Rx.B" -v build Rx
  logs D11
  printf '\ndef c2 := c + 1\n' >> Rx/C.lean
  test_run build Rx
  test_cmd_eq "LeanModule:Rx.A LeanModule:Rx.B LeanModule:Rx.C" run_seq Rx.A Rx.B Rx.C
  check_lines "$DW/D11.jsonl" --modules "$RX_MODS" --expect '*:result=executed,action=digest,outputs=digests,exitCode=0'
  logs D11-no-build
  test_run build --no-build Rx
  test_cmd_eq 0 count_method run
  check_lines "$DW/D11-no-build.jsonl" --modules "$RX_MODS" \
    --expect '*:result=local-cache,action=digest,outputs=digests,code=null'
  logs D11-again
  test_run build Rx
  test_cmd_eq 0 count_method run
)

# D12: the fallback builds the tree with the usage cutoff on, and its compiles fill a Lake cache (artifact cache on)
# with no service record. A fresh tree on that cache, built through the service, restores none of them: with the cutoff
# on, they are not what the service compiles (D11), so each module goes to the service in its own job, as on a cache
# miss. The build leaves the tree up to date: `--no-build` builds nothing, each line has the service's record, and the
# next build sends no request
row_D12() (
  export LAKE_USAGE_CUTOFF=1 LAKE_ARTIFACT_CACHE=true LAKE_RESTORE_ARTIFACTS=true
  enter D12-local; logs D12-local
  FAKE_UNREACHABLE=1 test_run build Rx
  enter D12; export LAKE_CACHE_DIR="$DW/D12-local.cache"; logs D12
  test_run build Rx
  check_lines "$DW/D12.jsonl" --modules "$RX_MODS" --expect '*:result=executed|cached,action=digest,outputs=digests'
  logs D12-no-build
  test_run build --no-build Rx
  test_cmd_eq 0 count_method run
  check_lines "$DW/D12-no-build.jsonl" --modules "$RX_MODS" \
    --expect '*:result=local-cache,action=digest,outputs=digests,code=null'
  logs D12-again
  test_run build Rx
  test_cmd_eq 0 count_method run
)

run_rows D1 D2 D3 D4 D5 D6 D7 D8 D9 D10 D11 D12
