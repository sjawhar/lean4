# The `lines` group of test.sh, which sources it: the rows of the log line's table (LAKE_REMOTE_EXEC_LOG),
# L1-L34 with L4b, L5b, L5c, L5d, L5e and L9b, but L8 (remoteExecToolchainMismatch) and L29
# (remoteExecSourceRace). Each row builds in directories of its own under $WORK/lines, and each build writes
# its lines to a log of its own, which `lines_check.py` checks: one `lean` line for each module of the build,
# every field with its type, and the row's own rules. L2, L3 and L4 build on L1's tree, Lake cache and
# service: `build_L1` builds that tree once, so that each of them also runs without L1.

LW=$GW
# The group's own service, so that L1's actions are new to it; the service of every row (see `enter`)
GROUP_CAS="$LW/cas"
export FAKE_CAS="$GROUP_CAS" FAKE_LOG="$LW/fake.log"
MODS=Rx,Rx.A,Rx.B,Rx.C,Rx.M
# The rules of an `import-failed` line: every field but its result and times is null
IMPORT_FAILED='result=import-failed,rest=null'

# log_to NAME: the next builds write their lines to $LW/NAME.jsonl
log_to() { export LAKE_REMOTE_EXEC_LOG="$LW/$1.jsonl"; }
# lines NAME ARGS...: lines_check.py's checks of $LW/NAME.jsonl
lines() { check_lines "$LW/$1.jsonl" "${@:2}"; }
# fail_b ROW: Rx.B no longer compiles, and imports nothing; the error names ROW, so that no other row's action
# is the same
fail_b() { printf '/-! A module that does not compile. -/\n\ndef b : Nat := undefinedIdent%s\n' "$1" > Rx/B.lean; }

# L1's tree, Lake cache and settings: service mode, and a Lake cache that the build writes and restores from
l1_env() {
  export LAKE_REMOTE_EXEC=grpc://fake:1 LAKE_CACHE_DIR="$LW/L1.cache" LAKE_ARTIFACT_CACHE=true \
    LAKE_RESTORE_ARTIFACTS=true
}
build_L1() (
  [ ! -e "$LW/L1.built" ] || exit 0
  enter L1; l1_env; log_to L1
  test_run build Rx
  touch "$LW/L1.built"
)

# L1: a fresh tree through a service that has none of its actions: every module `executed`
row_L1() (
  build_L1
  lines L1 --modules "$MODS" --expect '*:result=executed,action=digest,outputs=digests,exitCode=0,code=null'
)

# L2: the same sources from a second directory: the service's cache serves every module
row_L2() (
  build_L1
  enter L2; log_to L2
  LAKE_REMOTE_EXEC=grpc://fake:1 test_run build Rx
  lines L2 --modules "$MODS" --expect '*:result=cached,action=digest,outputs=digests,exitCode=0,code=null' \
    --same-as "$LW/L1.jsonl:action,outputs"
)

# L3: L1's tree built again replays every module's trace, and its line gives the trace's service record
row_L3() (
  build_L1
  cd "$LW/L1"; l1_env; log_to L3
  test_run build Rx
  lines L3 --modules "$MODS" --expect '*:result=local-cache,action=digest,outputs=digests,code=null' \
    --same-as "$LW/L1.jsonl:action,outputs"
)

# L4: a fresh tree on L1's Lake cache restores every module from its cache entry, whose service record the
# line gives; built again, it replays the trace that the restore wrote, which has the record too
row_L4() (
  build_L1
  enter L4; l1_env
  for log in L4 L4-again; do
    log_to "$log"
    test_run build Rx
    lines "$log" --modules "$MODS" --expect '*:result=local-cache,action=digest,outputs=digests,code=null' \
      --same-as "$LW/L1.jsonl:action,outputs"
  done
)

# L4b: a tree whose traces have the service record and whose cache entries are gone, and so are its `.olean`
# files, so that it cannot replay: each module is restored through its trace, which writes the cache entry
# again, with the record, and a fresh tree then restores from that entry
row_L4b() (
  enter L4b
  export LAKE_REMOTE_EXEC=grpc://fake:1 LAKE_ARTIFACT_CACHE=true LAKE_RESTORE_ARTIFACTS=true
  log_to L4b-seed
  test_run build Rx
  test_cmd rm -r "$LAKE_CACHE_DIR/outputs"
  test_cmd find .lake/build/lib/lean -name '*.olean' -delete
  log_to L4b
  test_run build Rx
  lines L4b --modules "$MODS" --expect '*:result=local-cache,action=digest,outputs=digests,code=null' \
    --same-as "$LW/L4b-seed.jsonl:action,outputs"
  enter L4b-fresh; export LAKE_CACHE_DIR="$LW/L4b.cache"; log_to L4b-fresh
  test_run build Rx
  lines L4b-fresh --modules "$MODS" --expect '*:result=local-cache,action=digest,outputs=digests,code=null' \
    --same-as "$LW/L4b-seed.jsonl:action,outputs"
)

# L5: a tree compiled with service mode off, then built in service mode: every module replays, with no record
row_L5() (
  enter L5
  test_run build Rx
  log_to L5
  LAKE_REMOTE_EXEC=grpc://fake:1 test_run build Rx
  lines L5 --modules "$MODS" --expect '*:result=local-cache,action=null,outputs=null,code=null'
)

# L5d: the fallback compiles every module (`local`); the same tree built again with the service answering
# replays each one, and a fresh tree on the same Lake cache restores each one: neither has a record
row_L5d() (
  enter L5d
  export LAKE_REMOTE_EXEC=grpc://fake:1 LAKE_ARTIFACT_CACHE=true LAKE_RESTORE_ARTIFACTS=true
  log_to L5d-local
  FAKE_UNREACHABLE=1 test_run build Rx
  lines L5d-local --modules "$MODS" --expect '*:result=local,action=null,outputs=null,exitCode=0,code=null'
  log_to L5d
  test_run build Rx
  lines L5d --modules "$MODS" --expect '*:result=local-cache,action=null,outputs=null,code=null'
  enter L5d-fresh; export LAKE_CACHE_DIR="$LW/L5d.cache"; log_to L5d-fresh
  test_run build Rx
  lines L5d-fresh --modules "$MODS" --expect '*:result=local-cache,action=null,outputs=null,code=null'
)

# L5b: a restore from `.ltar` archives alone (remoteExecArchiveCache's setup, with a seed built through the
# service): an archive keeps no service record, so the restored modules have none, whether the reader's
# cache is read-only or writable
row_L5b() (
  enter L5b-seed; export LAKE_CACHE_DIR="$LW/L5b.cache"
  export LAKE_RESTORE_ARTIFACTS=true
  log_to L5b-seed
  LAKE_REMOTE_EXEC=grpc://fake:1 LAKE_ARTIFACT_CACHE=true test_run build Rx -o "$LW/L5b-outputs.jsonl"
  test_run cache add "$LW/L5b-outputs.jsonl"
  for t in readonly writable; do
    # Each reader starts with the archives and no other artifact
    find "$LAKE_CACHE_DIR/artifacts" -type f ! -name '*.ltar' -delete
    test_exp "$(find "$LAKE_CACHE_DIR/artifacts" -type f -name '*.ltar' | wc -l)" -gt 0
    enter "L5b-$t"; export LAKE_CACHE_DIR="$LW/L5b.cache"; log_to "L5b-$t"
    if [ "$t" = writable ]; then export LAKE_ARTIFACT_CACHE=true; else unset LAKE_ARTIFACT_CACHE; fi
    # The service does not answer and the fallback is `fail`: only a restore builds the tree
    FAKE_UNREACHABLE=1 LAKE_REMOTE_EXEC_FALLBACK=fail LAKE_REMOTE_EXEC=grpc://fake:1 test_run build Rx
    lines "L5b-$t" --modules "$MODS" --expect '*:result=local-cache,action=null,outputs=null,code=null'
  done
)

# L5e: with the cutoff off, the Lake cache holds each module only as an archive (L5b's seed). Under `--no-build` a
# tree restores each one from its archive, which keeps no record: `local-cache` with no action and no outputs. In a
# build that uses the service, each one goes to the service instead, whose cache answers from the seed's run: `cached`
# with the action and the outputs. Each tree reads the seed's cache and does not write it, so the archives stay its
# only entries
row_L5e() (
  export LAKE_USAGE_CUTOFF=0 LAKE_RESTORE_ARTIFACTS=true LAKE_REMOTE_EXEC=grpc://fake:1
  enter L5e-seed; log_to L5e-seed
  LAKE_ARTIFACT_CACHE=true test_run build Rx -o "$LW/L5e-outputs.jsonl"
  test_run cache add "$LW/L5e-outputs.jsonl"
  find "$LAKE_CACHE_DIR/artifacts" -type f ! -name '*.ltar' -delete
  test_exp "$(find "$LAKE_CACHE_DIR/artifacts" -type f -name '*.ltar' | wc -l)" -gt 0
  enter L5e-nobuild; export LAKE_CACHE_DIR="$LW/L5e-seed.cache"; log_to L5e-nobuild
  test_run build --no-build Rx
  lines L5e-nobuild --modules "$MODS" --expect '*:result=local-cache,action=null,outputs=null,code=null'
  test_exp "$(find "$LAKE_CACHE_DIR/artifacts" -type f ! -name '*.ltar' | wc -l)" -eq 0
  enter L5e-service; export LAKE_CACHE_DIR="$LW/L5e-seed.cache"; log_to L5e-service
  test_run build Rx
  lines L5e-service --modules "$MODS" --expect '*:result=cached,action=digest,outputs=digests,code=null'
)

# L5c: under the fallback, with the usage cutoff, a change of Rx.A that Rx.B does not use: Rx.A compiles,
# and Rx.B's compile is skipped (`Replayed`), with no record
row_L5c() (
  enter L5c
  export LAKE_REMOTE_EXEC=grpc://fake:1 FAKE_UNREACHABLE=1 LAKE_USAGE_CUTOFF=1
  log_to L5c-first
  test_run build Rx
  printf '\ndef unusedA := 0\n' >> Rx/A.lean
  log_to L5c
  test_out "Replayed Rx.B" -v build Rx
  lines L5c --modules "$MODS" --expect 'Rx.A:result=local,action=null,outputs=null,exitCode=0' \
    --expect 'Rx.B:result=local-cache,action=null,outputs=null,code=null'
)

# L6: the service does not answer: the fallback compiles every module, with no record and exit code 0
row_L6() (
  enter L6; log_to L6
  FAKE_UNREACHABLE=1 LAKE_REMOTE_EXEC=grpc://fake:1 test_run build Rx
  lines L6 --modules "$MODS" --expect '*:result=local,action=null,outputs=null,exitCode=0,code=null'
)

# L7: the fallback's compile of Rx.B fails: its line has no exit code, and its importers' imports failed
row_L7() (
  enter L7; log_to L7
  fail_b L7
  FAKE_UNREACHABLE=1 LAKE_REMOTE_EXEC=grpc://fake:1 test_err undefinedIdentL7 build Rx
  lines L7 --modules "$MODS" --expect 'Rx.A|Rx.M:result=local,exitCode=0' \
    --expect 'Rx.B:result=local,action=null,outputs=null,exitCode=null' --expect "Rx.C|Rx:$IMPORT_FAILED"
)

# L9: the fallback restores every module from the shared remote cache (`LAKE_REMOTE_CACHE=ok`: the `ok`
# service of ../remoteCache/lib.sh on ../cacheTransfer/server.py, which ../remoteCacheRead/seed_remote.py
# fills from a local build): the bucket is not the service, so the lines have no record
row_L9() (
  # The mock server's requirements, as ../remoteCache/lib.sh checks them
  if ! "$PYTHON" -c 'import sys; sys.exit(sys.version_info < (3, 11))' 2> /dev/null ||
      ! curl --help all 2> /dev/null | grep -q -- '--aws-sigv4'; then
    echo "SKIPPED: row L9 needs $PYTHON 3.11 or later and a curl that supports '--aws-sigv4'"
    exit 0
  fi
  local store="$LW/L9.store" server url platform
  "$PYTHON" "$TEST_DIR/../cacheTransfer/server.py" --store "$store" --port-file "$LW/L9.port" \
    > "$LW/L9.server.log" 2>&1 &
  server=$!
  trap 'kill "$server" 2> /dev/null || true' EXIT
  for _ in $(seq 1 300); do
    [ -s "$LW/L9.port" ] && break
    sleep 0.1
  done
  test_exp -s "$LW/L9.port"
  url="http://127.0.0.1:$(cat "$LW/L9.port")"
  printf '[[cache.service]]\nname = "ok"\ntype = "s3"\nartifactEndpoint = "%s/ok/a0"\nrevisionEndpoint = "%s/ok/r0"\n' \
    "$url" "$url" > "$LW/L9.services.toml"
  # As ../remoteCache/lib.sh: no request leaves this machine, and no toolchain name is in a cache path
  export LAKE_CONFIG="$LW/L9.services.toml" RESERVOIR_API_URL="$url/ok/api/v1" ELAN_TOOLCHAIN=
  unset LAKE_CACHE_KEY LAKE_CACHE_TOKEN_CMD LAKE_REMOTE_CACHE
  enter L9-seed
  LAKE_ARTIFACT_CACHE=true test_run build Rx -o "$LW/L9-outputs.jsonl"
  cp -r .lake/build "$LW/L9-seed-build"
  # The scope of the package's mappings, as ../remoteCache/lib.sh's `remote_scope` gives it
  printf '/-! Prints the platform part of a remote cache scope. -/\n\n#eval System.Platform.target\n' \
    > "$LW/L9-platform.lean"
  platform=$("$LAKE" env lean "$LW/L9-platform.lean")
  platform=${platform#\"}; platform=${platform%\"}
  test_cmd "$PYTHON" "$TEST_DIR/../remoteCacheRead/seed_remote.py" --store "$store/a0" \
    --scope "v1/$("$LAKE" env lean --githash)/$platform/rx" --outputs "$LW/L9-outputs.jsonl" \
    --cache "$LAKE_CACHE_DIR" --build "$LW/L9-seed-build"
  enter L9; log_to L9
  FAKE_UNREACHABLE=1 LAKE_REMOTE_CACHE=ok LAKE_REMOTE_EXEC=grpc://fake:1 test_run build Rx
  lines L9 --modules "$MODS" --expect '*:result=bucket,action=null,outputs=null,code=null'
)

# L9b: a trace and a Lake cache entry with one more top-level key replay and restore as without it, with
# their service record
row_L9b() (
  enter L9b
  export LAKE_REMOTE_EXEC=grpc://fake:1 LAKE_ARTIFACT_CACHE=true LAKE_RESTORE_ARTIFACTS=true
  log_to L9b-seed
  test_run build Rx
  test_cmd "$PYTHON" -c 'import json, os, sys
for root, ext in ((sys.argv[1], ".trace"), (sys.argv[2], ".json")):
    n = 0
    for d, _, fs in os.walk(root):
        for f in fs:
            if not f.endswith(ext): continue
            p = os.path.join(d, f)
            with open(p) as h: data = json.load(h)
            data["x-later"] = {"added": "by a later Lake"}
            with open(p + ".tmp", "w") as h: json.dump(data, h)
            os.replace(p + ".tmp", p)
            n += 1
    assert n >= 5, f"{root}: {n} files of {ext}, not 5"' .lake/build/lib/lean "$LAKE_CACHE_DIR/outputs"
  log_to L9b
  test_run build Rx
  lines L9b --modules "$MODS" --expect '*:result=local-cache,action=digest,outputs=digests,code=null' \
    --same-as "$LW/L9b-seed.jsonl:action,outputs"
  enter L9b-fresh; export LAKE_CACHE_DIR="$LW/L9b.cache"; log_to L9b-fresh
  test_run build Rx
  lines L9b-fresh --modules "$MODS" --expect '*:result=local-cache,action=digest,outputs=digests,code=null' \
    --same-as "$LW/L9b-seed.jsonl:action,outputs"
)

# L10: Rx.B fails to compile on the service: `executed` with exit code 1 and the digest of Lean's `--json`
# messages on stdout, none of stderr; a fresh tree gets the stored failure, `cached` with the same digests
row_L10() (
  export LAKE_REMOTE_EXEC=grpc://fake:1
  for log in L10 L10-fresh; do
    enter "$log"; log_to "$log"
    fail_b L10
    test_err undefinedIdentL10 build Rx
  done
  lines L10 --modules "$MODS" \
    --expect 'Rx.B:result=executed,action=digest,exitCode=1,stdoutDigest=digest,stderrDigest=null' \
    --expect "Rx.C|Rx:$IMPORT_FAILED"
  lines L10-fresh --modules "$MODS" \
    --expect 'Rx.B:result=cached,action=digest,exitCode=1,stdoutDigest=digest,stderrDigest=null' \
    --expect "Rx.C|Rx:$IMPORT_FAILED" --same-as "$LW/L10.jsonl:action,stdoutDigest,stderrDigest"
)

# L11: the recorded TIMEOUT of today's bridge, which has no action, streams, signal or limits
row_L11() (
  enter L11; log_to L11
  FAKE_REPLAY_TARGET=Rx.B FAKE_REPLAY_FILE="$TEST_DIR/recorded/timeout.json" LAKE_REMOTE_EXEC=grpc://fake:1 \
    test_fails build Rx
  lines L11 --modules "$MODS" --expect "Rx.C|Rx:$IMPORT_FAILED" \
    --expect 'Rx.B:result=timeout,action=null,stdoutDigest=null,stderrDigest=null,exitCode=null,terminationSignal=null,limits=null'
)

# L12: with LAKE_REMOTE_EXEC_TIMEOUT=5 the service ends Rx.S's compile, which writes a line on its stderr and then
# runs a 60 s `#eval`, at 5 s and answers TIMEOUT with the new fields: the line gives the action, the signal, the
# limits and the digest of the stderr, none of the empty stdout. The line goes to stderr's file itself, past the
# `#eval`'s capture of its streams, and is flushed before the kill
row_L12() (
  enter L12; log_to L12
  printf '%s\n' '/-! A module whose compile writes a line on its stderr, then runs past a timeout of 5 s. -/' '' \
    '#eval show IO Unit from do' '  let h ← IO.FS.Handle.mk "/dev/stderr" .append' '  h.putStrLn "Rx.S: started"' \
    '  h.flush' '' '#eval IO.sleep 60000' > Rx/S.lean
  FAKE_FIELDS=new FAKE_ENFORCE_TIMEOUT=Rx.S LAKE_REMOTE_EXEC_TIMEOUT=5 LAKE_REMOTE_EXEC=grpc://fake:1 \
    test_fails build Rx.S
  lines L12 --modules Rx.S \
    --expect 'Rx.S:result=timeout,action=digest,terminationSignal=KILL,exitCode=null,limits=object,stdoutDigest=null,stderrDigest=digest'
)

# L13: the recorded answer of an action killed for its memory, from today's bridge: an OK result with exit
# code -1 and no signal or limits, so `executed`
row_L13() (
  enter L13; log_to L13
  FAKE_REPLAY_TARGET=Rx.B FAKE_REPLAY_FILE="$TEST_DIR/recorded/oom.json" LAKE_REMOTE_EXEC=grpc://fake:1 \
    test_fails build Rx
  lines L13 --modules "$MODS" --expect "Rx.C|Rx:$IMPORT_FAILED" \
    --expect 'Rx.B:result=executed,exitCode=-1,limits=null,terminationSignal=null'
)

# L14: the same with the new fields: `limits.oomKills` makes the result `oom`; the line gives the digest of the
# action's stdout, none of its empty stderr
row_L14() (
  enter L14; log_to L14
  FAKE_OOM_TARGET=Rx.B FAKE_FIELDS=new LAKE_REMOTE_EXEC=grpc://fake:1 test_fails build Rx
  lines L14 --modules "$MODS" --expect "Rx.C|Rx:$IMPORT_FAILED" \
    --expect 'Rx.B:result=oom,limits.oomKills>=1,terminationSignal=KILL,stdoutDigest=digest,stderrDigest=null'
)

# L15: an action that filled its disk: the recorded answer of today's bridge is `executed` with exit code -1;
# with the new fields, `limits.diskLimitExceeded` makes it `disk-limit`, and the line gives the digest of the
# action's stdout, none of its empty stderr
row_L15() (
  export LAKE_REMOTE_EXEC=grpc://fake:1
  enter L15; log_to L15
  FAKE_REPLAY_TARGET=Rx.B FAKE_REPLAY_FILE="$TEST_DIR/recorded/disk-limit.json" test_fails build Rx
  lines L15 --modules "$MODS" --expect "Rx.C|Rx:$IMPORT_FAILED" --expect 'Rx.B:result=executed,exitCode=-1'
  enter L15-new; log_to L15-new
  FAKE_DISK_TARGET=Rx.B FAKE_FIELDS=new test_fails build Rx
  lines L15-new --modules "$MODS" --expect "Rx.C|Rx:$IMPORT_FAILED" \
    --expect 'Rx.B:result=disk-limit,limits.diskLimitExceeded=true,terminationSignal=KILL,stdoutDigest=digest,stderrDigest=null'
)

# L16: the recorded failed action of today's bridge: exit code 1, a digest of its stderr and none of its
# empty stdout
row_L16() (
  enter L16; log_to L16
  FAKE_REPLAY_TARGET=Rx.B FAKE_REPLAY_FILE="$TEST_DIR/recorded/fail-basic.json" LAKE_REMOTE_EXEC=grpc://fake:1 \
    test_fails build Rx
  lines L16 --modules "$MODS" --expect "Rx.C|Rx:$IMPORT_FAILED" \
    --expect 'Rx.B:result=executed,exitCode=1,stderrDigest=digest,stdoutDigest=null'
)

# L17: an error of the service is `error` with the service's code as it sent it, a code Lake does not know too
row_L17() (
  export LAKE_REMOTE_EXEC=grpc://fake:1
  for code in INTERNAL SOMETHING_NEW; do
    enter "L17-$code"; log_to "L17-$code"
    FAKE_ERROR_TARGET="Rx.B:$code" test_fails build Rx
    lines "L17-$code" --modules "$MODS" --expect "Rx.C|Rx:$IMPORT_FAILED" --expect "Rx.B:result=error,code=$code"
  done
)

# L18: the service's errors OOM and DISK_LIMIT are `oom` and `disk-limit`, with no action and no exit code
row_L18() (
  export LAKE_REMOTE_EXEC=grpc://fake:1
  for code in OOM:oom DISK_LIMIT:disk-limit; do
    enter "L18-${code#*:}"; log_to "L18-${code#*:}"
    FAKE_ERROR_TARGET="Rx.B:${code%:*}" test_fails build Rx
    lines "L18-${code#*:}" --modules "$MODS" --expect "Rx.C|Rx:$IMPORT_FAILED" \
      --expect "Rx.B:result=${code#*:},action=null,exitCode=null"
  done
)

# L19: a result that names an output the request did not declare
row_L19() (
  enter L19; log_to L19
  FAKE_EXTRA_OUTPUT_TARGET=Rx.B LAKE_REMOTE_EXEC=grpc://fake:1 test_fails build Rx
  lines L19 --modules "$MODS" --expect "Rx.C|Rx:$IMPORT_FAILED" --expect 'Rx.B:result=error,code=undeclared-output'
)

# L20: a result that Lake cannot parse
row_L20() (
  enter L20; log_to L20
  FAKE_MALFORMED_TARGET=Rx.B LAKE_REMOTE_EXEC=grpc://fake:1 test_fails build Rx
  lines L20 --modules "$MODS" --expect "Rx.C|Rx:$IMPORT_FAILED" --expect 'Rx.B:result=error,code=malformed-result'
)

# L21: a materialize that fails, but not with UNAVAILABLE: Rx.B's one line is `error` with the run's action
# and outputs
row_L21() (
  enter L21; log_to L21
  FAKE_MATERIALIZE_FAIL=NOT_FOUND:/Rx/B.olean LAKE_REMOTE_EXEC=grpc://fake:1 \
    test_status_out 1 "materializing Rx.B from the build service failed" build Rx
  lines L21 --modules "$MODS" --expect "Rx.C|Rx:$IMPORT_FAILED" \
    --expect 'Rx.B:result=error,code=materialize,action=digest,outputs=digests'
)

# L22: a materialize that answers UNAVAILABLE: under `local` the fallback compiles Rx.C; under `fail` Rx.C
# fails with UNAVAILABLE, Rx's import failed, and Lake exits with code 75
row_L22() (
  export LAKE_REMOTE_EXEC=grpc://fake:1 FAKE_MATERIALIZE_FAIL=UNAVAILABLE:/Rx/C.olean
  enter L22-local; log_to L22-local
  test_run build Rx
  lines L22-local --modules "$MODS" --expect 'Rx.C:result=local,action=null,outputs=null,exitCode=0'
  enter L22-fail; log_to L22-fail
  LAKE_REMOTE_EXEC_FALLBACK=fail test_status 75 build Rx
  lines L22-fail --modules "$MODS" --expect 'Rx.C:result=error,code=UNAVAILABLE' --expect "Rx:$IMPORT_FAILED"
)

# L23: a `run` that answers UNAVAILABLE under `fail`
row_L23() (
  enter L23; log_to L23
  FAKE_UNAVAILABLE_TARGET=Rx.B LAKE_REMOTE_EXEC_FALLBACK=fail LAKE_REMOTE_EXEC=grpc://fake:1 test_status 75 build Rx
  lines L23 --modules "$MODS" --expect 'Rx.B:result=error,code=UNAVAILABLE' --expect "Rx.C|Rx:$IMPORT_FAILED"
)

# L24: under `fail`, the bridge that carries the build's actions finds the service gone: the modules that
# start fail with UNAVAILABLE, and their importers' imports failed
row_L24() (
  enter L24; log_to L24
  FAKE_UNREACHABLE_LATER="$LW/L24.state" LAKE_REMOTE_EXEC_FALLBACK=fail LAKE_REMOTE_EXEC=grpc://fake:1 \
    test_status 75 build Rx
  lines L24 --modules "$MODS" --expect 'Rx.A|Rx.M:result=error,code=UNAVAILABLE' \
    --expect "Rx.B|Rx.C|Rx:$IMPORT_FAILED"
)

# L25: Lake cannot build the request: the library loads a shared library outside the workspace
row_L25() (
  enter L25; log_to L25
  mkdir -p "$LW/L25-outside"; : > "$LW/L25-outside/libouter.so"
  rm lakefile.toml
  printf 'import Lake\nopen System Lake DSL\n\npackage rx\n\n-- A shared library outside the workspace\ntarget outer : Dynlib :=\n  return Job.pure {name := "outer", path := "%s"}\n\nlean_lib Rx where\n  dynlibs := #[`@/outer]\n' \
    "$LW/L25-outside/libouter.so" > lakefile.lean
  LAKE_REMOTE_EXEC=grpc://fake:1 test_fails build Rx.A
  lines L25 --modules Rx.A --expect 'Rx.A:result=error,code=request'
)

# L26: a module that imports a module that does not exist: the missing module's setup fails (it has no
# source), and the importer's import failed
row_L26() (
  enter L26; log_to L26
  printf 'import Rx.Nope\n\n/-! A module that imports a module that does not exist. -/\n\ndef e := 1\n' > Rx/E.lean
  LAKE_REMOTE_EXEC=grpc://fake:1 test_fails build Rx.E
  lines L26 --modules Rx.E,Rx.Nope --expect 'Rx.Nope:result=error,code=setup' --expect "Rx.E:$IMPORT_FAILED"
)

# L27: `--no-build` of a tree that needs a build: the modules whose imports are there fail with `no-build`
row_L27() (
  enter L27; log_to L27
  LAKE_REMOTE_EXEC=grpc://fake:1 test_status 3 build --no-build Rx
  lines L27 --modules "$MODS" --expect 'Rx.A|Rx.M:result=error,code=no-build' \
    --expect "Rx.B|Rx.C|Rx:$IMPORT_FAILED"
)

# L28: `--fail-fast`: Rx.B (which `fail_b` leaves with no import) fails while the service still runs Rx.Slow,
# a 10 s `#eval`; Rx.AfterSlow, which waits for Rx.Slow, is canceled
row_L28() (
  enter L28; log_to L28
  fail_b L28
  printf '/-! A slow module that imports nothing. -/\n\n#eval IO.sleep 10000\n\ndef slow := 1\n' > Rx/Slow.lean
  printf 'import Rx.Slow\n\n/-! A module that waits for the slow one. -/\n\ndef afterSlow := slow\n' > Rx/AfterSlow.lean
  FAKE_CONCURRENT=1 LAKE_REMOTE_EXEC=grpc://fake:1 test_fails build --fail-fast Rx.B Rx.AfterSlow
  lines L28 --modules Rx.B,Rx.Slow,Rx.AfterSlow --expect 'Rx.B:result=executed|cached,exitCode=1' \
    --expect 'Rx.AfterSlow:result=error,code=canceled'
)

# L30: a service that refuses, on the bridge that carries the build's actions or at the start: the modules
# that start fail with `toolchain-unverified`, their importers' imports failed, and Lake exits with code 1
row_L30() (
  export LAKE_REMOTE_EXEC=grpc://fake:1
  enter L30-later; log_to L30-later
  FAKE_HELLO_SEQUENCE=refused-later FAKE_HELLO_STATE="$LW/L30.state" \
    test_status_out 1 'did not verify its toolchain' build Rx
  lines L30-later --modules "$MODS" --expect 'Rx.A|Rx.M:result=error,code=toolchain-unverified' \
    --expect "Rx.B|Rx.C|Rx:$IMPORT_FAILED"
  enter L30-start; log_to L30-start
  FAKE_UNVERIFIED=1 test_status_out 1 'did not verify its toolchain' build Rx
  lines L30-start --modules "$MODS" --expect 'Rx.A|Rx.M:result=error,code=toolchain-unverified' \
    --expect "Rx.B|Rx.C|Rx:$IMPORT_FAILED"
)

# L31: 32 modules that import nothing, built at once through a service that answers requests in parallel:
# every line parses, so no two lines were written into one
row_L31() (
  local mods=Cc i
  mkdir -p "$LW/L31/Cc"; cd "$LW/L31"
  export LAKE_CACHE_DIR="$LW/L31.cache"
  printf 'name = "cc"\n\n[[lean_lib]]\nname = "Cc"\n' > lakefile.toml
  : > Cc.lean
  for i in $(seq 1 32); do
    printf '/-! One of 32 modules that import nothing. -/\n\ndef m%s := %s\n' "$i" "$i" > "Cc/M$i.lean"
    printf 'import Cc.M%s\n' "$i" >> Cc.lean
    mods="$mods,Cc.M$i"
  done
  printf '\n/-! The root of 32 modules that import nothing. -/\n' >> Cc.lean
  log_to L31
  FAKE_CONCURRENT=1 LAKE_REMOTE_EXEC=grpc://fake:1 test_run build Cc
  lines L31 --modules "$mods" --expect '*:result=executed|cached'
)

# L32: a module that imports itself: its setup fails, and its line, `error` with code `setup`, waits for no
# job (not its own, which it ends); `timeout` makes a wait fail the row
row_L32() (
  local rc=0
  enter L32; log_to L32
  printf 'import Rx.Self\n\n/-! A module that imports itself. -/\n\ndef s := 1\n' > Rx/Self.lean
  LAKE_REMOTE_EXEC=grpc://fake:1 timeout 120 "$LAKE" build Rx.Self > produced.out 2>&1 || rc=$?
  cat produced.out
  test_exp "$rc" = 1
  match_text 'Rx/Self.lean: module imports itself' produced.out
  lines L32 --modules Rx.Self --expect 'Rx.Self:result=error,code=setup'
)

# L33: L26's build and Rx.A with a LAKE_REMOTE_EXEC_LOG that Lake cannot append to (a directory): the jobs of Rx.E
# and Rx.Nope, which did not run, warn that their lines are lost, Rx.A's job, which ran, fails with the same text,
# and the exit code stays 1
row_L33() (
  enter L33; log_to L33
  mkdir -p "$LAKE_REMOTE_EXEC_LOG"
  printf 'import Rx.Nope\n\n/-! A module that imports a module that does not exist. -/\n\ndef e := 1\n' > Rx/E.lean
  LAKE_REMOTE_EXEC=grpc://fake:1 \
    test_status_out 1 'warning: Rx.E: could not append its line to LAKE_REMOTE_EXEC_LOG' build Rx.E Rx.A
  match_text 'warning: Rx.Nope: could not append its line to LAKE_REMOTE_EXEC_LOG' produced.out
  match_text 'error: Rx.A: could not append its line to LAKE_REMOTE_EXEC_LOG' produced.out
)

# L34: under `compiler.postponeCompile`, Rx.P compiles, but its `irArts` fails (its `leanir` setup file is a
# directory): Rx.Q, which imports it, is not built, and its import failed
row_L34() (
  enter L34; log_to L34
  printf 'name = "rx"\n\n[[lean_lib]]\nname = "Rx"\n\n[lean_lib.leanOptions]\ncompiler.postponeCompile = true\n' \
    > lakefile.toml
  printf 'module\n\n/-! A module whose code generation fails. -/\n\npublic def p : Nat := 1\n' > Rx/P.lean
  printf 'module\n\nimport Rx.P\n\n/-! A module whose import fails its code generation. -/\n\npublic def q : Nat := p + 1\n' \
    > Rx/Q.lean
  mkdir -p .lake/build/ir/Rx/P.irsetup.json
  LAKE_REMOTE_EXEC=grpc://fake:1 test_status_out 1 'P.irsetup.json' build Rx.Q
  lines L34 --modules Rx.P,Rx.Q --expect 'Rx.P:result=executed|cached,exitCode=0' --expect "Rx.Q:$IMPORT_FAILED"
)

run_rows L1 L2 L3 L4 L4b L5 L5d L5b L5e L5c L6 L7 L9 L9b L10 L11 L12 L13 L14 L15 L16 L17 L18 L19 L20 L21 L22 \
  L23 L24 L25 L26 L27 L28 L30 L31 L32 L33 L34
