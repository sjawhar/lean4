# The `native` group of test.sh, which sources it: the C compiles and links of service mode (A6), rows N1-N13,
# where N8 is T7 (the timeout of native actions), so the row is named T7. The package `native/` has a library
# `Nat0` whose modules are precompiled, so each module has an object (`CCompile`), `Nat0.Use`'s compile loads
# `Nat0.Tac`'s module library (`LinkShared`) as a plugin, and `Use2`'s compile loads `Nat0`'s library
# (`LinkSharedLibrary`). Each row builds in a directory of its own under $WORK/native, with its own service
# (FAKE_CAS) and Lake cache, and each build has a fake log and a LAKE_REMOTE_EXEC_LOG of its own. N2, N4 and N5
# read N1's tree, N10 and N12 read N10's, and N11 and N13 read N11's: `build_N1`, `build_N10` and `build_N11` build
# each once, so that each row also runs alone.

NW=$GW
export LAKE_REMOTE_EXEC=grpc://fake:1
unset LAKE_REMOTE_EXEC_TIMEOUT LAKE_REMOTE_EXEC_FALLBACK LAKE_ARTIFACT_CACHE LAKE_RESTORE_ARTIFACTS
# The service's C compiler and the PATH of its actions: this machine's `cc`, and the `ld.lld` that the link flags'
# `-fuse-ld=lld` need
LAKE_REMOTE_EXEC_CC=$(command -v cc)
lld=$(command -v ld.lld)
export LAKE_REMOTE_EXEC_CC LAKE_REMOTE_EXEC_PATH="$(dirname "$lld"):/usr/bin:/bin"
MODS=Nat0,Nat0.Tac,Nat0.Use,Use2
# The native targets of `lake build Use2 Nat0:shared`: the object of each module, the module libraries that the
# compiles of Nat0.Use and Nat0 load, and the library that Use2's compile loads
OBJS='Nat0.Tac:c.o.export|Nat0.Use:c.o.export|Nat0:c.o.export'
LIBS='Nat0.Tac:dynlib|Nat0.Use:dynlib|native/Nat0:shared'
# Their actions, as `natives` prints them
NATIVES='CCompile:Nat0.Tac:c.o.export CCompile:Nat0.Use:c.o.export CCompile:Nat0:c.o.export LinkShared:Nat0.Tac:dynlib LinkShared:Nat0.Use:dynlib LinkSharedLibrary:native/Nat0:shared'
# Their files in the tree, and the targets of `lake query` that give each one's path
FILES='.lake/build/ir/Nat0/Tac.c.o.export .lake/build/ir/Nat0/Use.c.o.export .lake/build/ir/Nat0.c.o.export .lake/build/lib/lean/native_Nat0_Tac.so .lake/build/lib/lean/native_Nat0_Use.so .lake/build/lib/libnative_Nat0.so'
QUERY='+Nat0.Tac:o.export +Nat0.Use:o.export +Nat0:o.export +Nat0.Tac:dynlib +Nat0.Use:dynlib Nat0:shared'
# The header of Nat0/Use.lean as the editor sends it to `lake setup-file` on standard input
USE_HEADER='{"isModule":false,"imports":[{"module":"Nat0.Tac","isMeta":false,"isExported":true,"importAll":false}]}'

toolchain "$NW/tc"
export LAKE="$NW/tc/bin/lake"

# state NAME: the tree $NW/NAME, made the working directory, with its service and Lake cache (as `enter` made them)
state() {
  cd "$NW/$1"
  export FAKE_CAS="$NW/$1.cas" LAKE_CACHE_DIR="$NW/$1.cache"
}
# natives: the `run` requests of the fake's log but those of Lean modules, each `MNEMONIC:TARGET`, sorted
natives() {
  "$PYTHON" -c 'import json, os, sys
p = sys.argv[1]
ls = [json.loads(l) for l in open(p) if l.strip()] if os.path.exists(p) else []
print(" ".join(sorted("%s:%s" % (e["params"].get("mnemonic"), e["params"].get("target"))
                      for e in ls if e.get("method") == "run" and e["params"].get("mnemonic") != "LeanModule")))' \
    "$FAKE_LOG"
}
# mnemonic_timeouts MNEMONIC: the `timeoutSecs` values of the `run` requests of MNEMONIC in the fake's log, sorted,
# each once
mnemonic_timeouts() {
  "$PYTHON" -c 'import json, os, sys
p, m = sys.argv[1:]
ls = [json.loads(l) for l in open(p) if l.strip()] if os.path.exists(p) else []
print(" ".join(sorted({str(e["params"].get("timeoutSecs")) for e in ls
                       if e.get("method") == "run" and e["params"].get("mnemonic") == m})))' "$FAKE_LOG" "$1"
}
# fake_bytes FILE...: each FILE of the tree (relative to it) holds the bytes of the output of an action that the
# fake ran (its action cache), at the path of the input root that names FILE: `lib/<pkg>/`, `native/<pkg>/` and
# `ir/<pkg>/` are the package's lean lib, build and IR directories, here the defaults
fake_bytes() {
  "$PYTHON" -c 'import hashlib, json, os, sys
ac, files = os.path.join(sys.argv[1], "ac"), sys.argv[2:]
dirs = {"lib": ".lake/build/lib/lean", "native": ".lake/build", "ir": ".lake/build/ir"}
outs = {}
for k in (sorted(os.listdir(ac)) if os.path.isdir(ac) else []):
    for o in json.load(open(os.path.join(ac, k))).get("outputs") or []:
        top, _, rest = o["rel"].partition("/")
        if top in dirs:
            outs.setdefault(os.path.join(dirs[top], rest.partition("/")[2]), set()).add(o["digest"])
bad = []
for f in files:
    data = open(f, "rb").read()
    d = "%s/%d" % (hashlib.sha256(data).hexdigest(), len(data))
    if outs.get(f) != {d}:
        bad.append("%s is %s; the outputs of the fake there: %s" % (f, d, sorted(outs.get(f, ()))))
print("\n".join(bad) or "%d files hold the outputs of the fake" % len(files))
sys.exit(1 if bad else 0)' "$FAKE_CAS" "$@"
}
# by_service_digest TARGET PRODUCER: TARGET's last `run` request takes the output of PRODUCER's `run` by digest,
# `{rel, digest, executable}` with no path, and that digest is of an output that the fake stored there (its action
# cache)
by_service_digest() {
  "$PYTHON" -c 'import json, os, sys
log, cas, t, prod = sys.argv[1:5]
runs = [e["params"] for e in map(json.loads, filter(str.strip, open(log))) if e.get("method") == "run"]
rels = {o for p in runs if p.get("target") == prod for o in p["outputs"]}
ac = os.path.join(cas, "ac")
outs = {o["digest"] for k in (sorted(os.listdir(ac)) if os.path.isdir(ac) else [])
        for o in json.load(open(os.path.join(ac, k))).get("outputs") or [] if o["rel"] in rels}
got = [i for p in runs if p.get("target") == t for i in p["inputs"] if i.get("rel") in rels][-1:]
print("%s takes %s; the outputs of the fake there: %s" % (t, json.dumps(got), sorted(outs)))
sys.exit(0 if got and sorted(got[0]) == ["digest", "executable", "rel"] and got[0]["digest"] in outs else 1)' \
    "$FAKE_LOG" "$FAKE_CAS" "$@"
}

# N1's tree: `native/` built through a service that has none of its actions; Lake's output is in $NW/N1.out
build_N1() (
  [ ! -e "$NW/N1.built" ] || exit 0
  enter N1 native; logs N1
  lake_out build Use2 Nat0:shared
  cp produced.out "$NW/N1.out"
  touch "$NW/N1.built"
)

# N1: every object, module library and library is an action of the service, `CCompile`, `LinkShared` and
# `LinkSharedLibrary`; each has one line of kind `c` or `shared`, and the end-of-build line counts them
row_N1() (
  build_N1
  export FAKE_LOG="$NW/N1.fake.log"
  test_cmd_eq "$NATIVES" natives
  check_lines "$NW/N1.jsonl" --modules "$MODS" --expect "Nat0|Nat0.Tac|Nat0.Use|Use2:kind=lean,result=executed" \
    --expect "$OBJS:kind=c,result=executed,action=digest,outputs.o=digest,exitCode=0,code=null" \
    --expect "$LIBS:kind=shared,result=executed,action=digest,outputs.so=digest,exitCode=0,code=null" \
    --unique
  match_text "other actions: 0 cached, 6 executed, 0 local" "$NW/N1.out"
)

# N2: the objects and the libraries are at the paths that Lake gives them (`Module.coExportFile`,
# `Module.dynlibFile`, `LeanLib.sharedLibFile`), and hold the bytes of the fake's outputs
row_N2() (
  build_N1
  state N1
  LAKE_REMOTE_EXEC_LOG="$NW/N2-query.jsonl" FAKE_LOG="$NW/N2-query.fake.log" \
    test_cmd_eq "$(printf "$PWD/%s\n" $FILES)" "$LAKE" query --no-build $QUERY
  test_cmd fake_bytes $FILES
)

# N3: Lake starts no C compiler or linker itself. LEAN_CC is a script that logs its arguments and fails, and so is
# the `cc` of PATH: the build passes and the script never ran (the fake runs LAKE_REMOTE_EXEC_CC, an absolute
# path, with the action's own PATH)
row_N3() (
  enter N3 native; logs N3
  mkdir -p "$NW/N3.bin"
  printf '#!/bin/sh\necho "$*" >> "%s"\nexit 1\n' "$NW/N3.cc.log" > "$NW/N3.bin/cc"
  chmod +x "$NW/N3.bin/cc"
  : > "$NW/N3.cc.log"
  LEAN_CC="$NW/N3.bin/cc" PATH="$NW/N3.bin:$PATH" test_run build Use2 Nat0:shared
  test_exp ! -s "$NW/N3.cc.log"
)

# N4: the actions name no path of this machine: N1's actions, the native ones among them, do not hold $WORK
row_N4() (
  build_N1
  match_text "\"argv\": [\"$LAKE_REMOTE_EXEC_CC\"," "$NW/N1.fake.log.actions"
  no_match_text "$WORK" "$NW/N1.fake.log.actions"
)

# N5: N1's tree built again replays every job: each native line is `local-cache` with N1's record, and no request
# is sent
row_N5() (
  build_N1
  state N1; logs N5
  test_run build Use2 Nat0:shared
  check_lines "$NW/N5.jsonl" --modules "$MODS" \
    --expect "$OBJS|$LIBS:result=local-cache,action=digest,outputs=digests,code=null" \
    --same-as "$NW/N1.jsonl:action,outputs"
  test_cmd_eq 0 count_method run
)

# N6: the service does not answer: the fallback builds every object and library here, with the `cc` of PATH
row_N6() (
  local f
  enter N6 native; logs N6
  FAKE_UNREACHABLE=1 test_run build Use2 Nat0:shared
  check_lines "$NW/N6.jsonl" --modules "$MODS" --expect "Nat0|Nat0.Tac|Nat0.Use|Use2:kind=lean,result=local" \
    --expect "$OBJS:kind=c,result=local,action=null,outputs=null,exitCode=0" \
    --expect "$LIBS:kind=shared,result=local,action=null,outputs=null,exitCode=0" \
    --unique
  for f in $FILES; do test_exp -f "$f"; done
)

# N7: `--no-build` sends no request: a tree built through the service whose library is gone needs a build of the
# library, which fails with `no-build`
row_N7() (
  enter N7 native; logs N7-build
  test_run build Use2 Nat0:shared
  rm -f .lake/build/lib/libnative_Nat0.so
  logs N7
  test_status 3 build --no-build Use2 Nat0:shared
  test_cmd_eq 0 count_method run
  check_lines "$NW/N7.jsonl" --modules "$MODS" --expect 'native/Nat0:shared:kind=shared,result=error,code=no-build'
)

# T7 (N8): `native/` built with the default timeout, then again with LAKE_REMOTE_EXEC_TIMEOUT=1 and no
# FAKE_ENFORCE_TIMEOUT: the second build sends every action again, and each request carries the timeout, those of
# the C compiles and links as those of the modules
row_T7() (
  enter T7 native; logs T7-default
  test_run build Use2 Nat0:shared
  logs T7
  LAKE_REMOTE_EXEC_TIMEOUT=1 test_run build Use2 Nat0:shared
  test_cmd_eq 1 mnemonic_timeouts CCompile
  test_cmd_eq 1 mnemonic_timeouts LinkShared
  test_cmd_eq 1 mnemonic_timeouts LinkSharedLibrary
  test_cmd_eq 1 mnemonic_timeouts LeanModule
)

# N9: the service answers TIMEOUT for Nat0.Tac's object: its line is `timeout`, the module library that links it
# writes no line (its input failed), and the setup of Nat0.Use, whose compile loads that library, fails
row_N9() (
  enter N9 native; logs N9
  FAKE_TIMEOUT_TARGET=Nat0.Tac:c.o.export test_fails build Nat0.Use
  check_lines "$NW/N9.jsonl" --modules Nat0.Tac,Nat0.Use \
    --expect 'Nat0.Tac:c.o.export:kind=c,result=timeout,exitCode=null' --expect 'Nat0.Use:result=error,code=setup'
  test_cmd_eq "Nat0.Tac:c.o.export=timeout" native_lines "$NW/N9.jsonl"
)

# N10's tree: `native/` with the default target Use2 (which `lake shake` checks), built here by the fallback `local`
# while the service does not answer, so no target has a service record
build_N10() (
  [ ! -e "$NW/N10.built" ] || exit 0
  enter N10 native; logs N10-local
  { echo 'defaultTargets = ["Use2"]'; cat "$TEST_DIR/native/lakefile.toml"; } > lakefile.toml
  FAKE_UNREACHABLE=1 test_run build Use2 Nat0:shared
  touch "$NW/N10.built"
)

# N10: an object or library whose trace is up to date replays in every mode, also with no service record. On N10's
# tree, `--no-build` builds nothing and sends no request, and each line is `local-cache` with no record; the editor's
# `lake setup-file --no-build --no-cache` of Nat0.Use (its absolute path, its header on standard input), whose compile
# loads Nat0.Tac's module library, succeeds and names that library
row_N10() (
  build_N10
  state N10; logs N10
  test_run build --no-build Use2 Nat0:shared
  test_cmd_eq 0 count_method run
  check_lines "$NW/N10.jsonl" --modules "$MODS" \
    --expect "Nat0|Nat0.Tac|Nat0.Use|Use2|$OBJS|$LIBS:result=local-cache,action=null,outputs=null,code=null" --unique
  logs N10-setup
  echo "$USE_HEADER" | test_out native_Nat0_Tac.so setup-file "$PWD/Nat0/Use.lean" - --no-build --no-cache
  test_cmd_eq 0 count_method run
  check_lines "$NW/N10-setup.jsonl" \
    --expect 'Nat0.Tac:c.o.export|Nat0.Tac:dynlib:result=local-cache,action=null,outputs=null,code=null'
)

# N11's tree: `native/` built here by the fallback `local` while the service does not answer, with a local C compiler
# that writes other bytes than the service's (`-g`, as D1's), then Use2 changed and built with the service answering;
# Lake's output of that build is in $NW/N11.out
build_N11() (
  [ ! -e "$NW/N11.built" ] || exit 0
  enter N11 native; logs N11-local
  mkdir -p "$NW/N11.bin"
  printf '#!/bin/sh\nexec "%s" -g "$@"\n' "$LAKE_REMOTE_EXEC_CC" > "$NW/N11.bin/cc"
  chmod +x "$NW/N11.bin/cc"
  LEAN_CC=cc PATH="$NW/N11.bin:$PATH" FAKE_UNREACHABLE=1 test_run build Use2 Nat0:shared
  logs N11
  printf '\n-- a change of N11\n' >> Use2.lean
  lake_out build Use2 Nat0:shared
  cp produced.out "$NW/N11.out"
  touch "$NW/N11.built"
)

# N11: in N11's second build the objects are up to date with no service record, and the service answers: so each
# object's job builds it on the service (`executed`, counted), and each consumer takes the service's bytes. The
# libraries that link the objects, and Nat0.Use and Nat0, whose compiles load those libraries, are out of date, and
# build on the service too. Nat0.Tac replays (`local-cache`, no record), and is promoted when its object's request
# takes its C file. Use2's request takes Nat0's library by the digest of the service's output, and the files hold the
# service's bytes
row_N11() (
  build_N11
  state N11; export FAKE_LOG="$NW/N11.fake.log"
  check_lines "$NW/N11.jsonl" --modules "$MODS" --expect 'Nat0|Nat0.Use|Use2:result=executed' \
    --expect 'Nat0.Tac:result=local-cache,action=null,outputs=null,code=null' \
    --expect "$OBJS|$LIBS:result=executed,action=digest,outputs=digests,exitCode=0,code=null" --unique
  match_text "other actions: 0 cached, 6 executed, 0 local" "$NW/N11.out"
  test_cmd_eq "$NATIVES" natives
  test_cmd by_service_digest Use2 native/Nat0:shared
  test_cmd fake_bytes $FILES
  test_cmd "$PYTHON" "$TEST_DIR/probe_check.py" --fake "$FAKE_LOG" "inputs=$FAKE_CAS"
)

# N12: `lake shake` checks N10's tree as `--no-build` does (`Workspace.checkNoBuild`), so it does not stop with
# "there are out of date oleans": it goes on to shake the files, and stops there because they are no `module`s
row_N12() (
  build_N10
  state N10; logs N12
  lake_out shake Use2 || true
  no_match_text "out of date oleans" produced.out
  match_text 'only works with `module`s' produced.out
)

# N13: N11's second build leaves the tree up to date: `--no-build` builds nothing and sends no request, and each
# line is `local-cache` with the service's record; the next build sends no request either
row_N13() (
  build_N11
  state N11; logs N13
  test_run build --no-build Use2 Nat0:shared
  test_cmd_eq 0 count_method run
  check_lines "$NW/N13.jsonl" --modules "$MODS" \
    --expect "Nat0|Nat0.Tac|Nat0.Use|Use2|$OBJS|$LIBS:result=local-cache,action=digest,outputs=digests,code=null" \
    --unique
  logs N13-again
  test_run build Use2 Nat0:shared
  test_cmd_eq 0 count_method run
)

run_rows N1 N2 N3 N4 N5 N6 N7 T7 N9 N10 N11 N12 N13
