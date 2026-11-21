# The `native` group of test.sh, which sources it: the C compiles and links of service mode (A6), rows N1-N9,
# where N8 is T7 (the timeout of native actions), so the row is named T7. The package `native/` has a library
# `Nat0` whose modules are precompiled, so each module has an object (`CCompile`), `Nat0.Use`'s compile loads
# `Nat0.Tac`'s module library (`LinkShared`) as a plugin, and `Use2`'s compile loads `Nat0`'s library
# (`LinkSharedLibrary`). Each row builds in a directory of its own under $WORK/native, with its own service
# (FAKE_CAS) and Lake cache, and each build has a fake log and a LAKE_REMOTE_EXEC_LOG of its own. N2, N4 and N5
# read N1's tree: `build_N1` builds it once, so that each of them also runs alone.

NW="$WORK/native"
mkdir -p "$NW"
export LAKE_REMOTE_EXEC=grpc://fake:1
unset LAKE_REMOTE_EXEC_TIMEOUT LAKE_REMOTE_EXEC_FALLBACK LAKE_ARTIFACT_CACHE LAKE_RESTORE_ARTIFACTS
# The service's C compiler and the PATH of its actions: this machine's `cc`, and the `ld.lld` that the link flags'
# `-fuse-ld=lld` need
export LAKE_REMOTE_EXEC_CC="$(command -v cc)" LAKE_REMOTE_EXEC_PATH="$(dirname "$(command -v ld.lld)"):/usr/bin:/bin"
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

# toolchain DIR: DIR becomes a toolchain that holds the test's Lake beside Lean, as a release does: links to the
# files of `lean --print-prefix`, with a copy of $LAKE as `bin/lake`. Lean loads Lake's own shared library as a
# plugin wherever it loads a plugin of the workspace, and a request names that library only under the sysroot:
# the test's Lake has it in tests/lake/.lake/build, so it sends no request that loads a plugin (`plugin … is
# outside the workspace`). Beside Lean, Lake's library is the sysroot's lib/lean/libLake_shared.so.
toolchain() {
  local sysroot f
  sysroot=$(lean --print-prefix)
  rm -rf "$1"; mkdir -p "$1/bin"
  for f in "$sysroot"/*; do [ "${f##*/}" = bin ] || ln -s "$f" "$1/"; done
  for f in "$sysroot"/bin/*; do [ "${f##*/}" = lake ] || ln -s "$f" "$1/bin/"; done
  f=$(command -v "$LAKE")
  ln "$f" "$1/bin/lake" 2> /dev/null || cp "$f" "$1/bin/lake"
}
toolchain "$NW/tc"
export LAKE="$NW/tc/bin/lake"

# state NAME: the tree $NW/NAME, made the working directory, with its service and Lake cache
state() {
  cd "$NW/$1"
  export FAKE_CAS="$NW/$1.cas" LAKE_CACHE_DIR="$NW/$1.cache"
}
# enter NAME: a fresh copy of `native/` in $NW/NAME, with a new service and Lake cache (`state`)
enter() {
  rm -rf "$NW/$1" "$NW/$1.cas" "$NW/$1.cache"; mkdir -p "$NW/$1"
  cp -r "$TEST_DIR/native/." "$NW/$1/"
  chmod -R u+w "$NW/$1"
  state "$1"
}
# logs NAME: the next builds log to the new files $NW/NAME.fake.log (the fake's) and $NW/NAME.jsonl (Lake's lines)
logs() {
  export FAKE_LOG="$NW/$1.fake.log" LAKE_REMOTE_EXEC_LOG="$NW/$1.jsonl"
  rm -f "$FAKE_LOG" "$FAKE_LOG.actions" "$LAKE_REMOTE_EXEC_LOG"
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
# timeouts MNEMONIC: the `timeoutSecs` values of the `run` requests of MNEMONIC in the fake's log, sorted, each once
timeouts() {
  "$PYTHON" -c 'import json, os, sys
p, m = sys.argv[1:]
ls = [json.loads(l) for l in open(p) if l.strip()] if os.path.exists(p) else []
print(" ".join(sorted({str(e["params"].get("timeoutSecs")) for e in ls
                       if e.get("method") == "run" and e["params"].get("mnemonic") == m})))' "$FAKE_LOG" "$1"
}
# native_lines LOG: the lines of LAKE_REMOTE_EXEC_LOG file LOG whose kind is not `lean`, each `TARGET=RESULT`, sorted
native_lines() {
  "$PYTHON" -c 'import json, os, sys
p = sys.argv[1]
ls = [json.loads(l) for l in open(p) if l.strip()] if os.path.exists(p) else []
print(" ".join(sorted("%s=%s" % (l.get("target"), l.get("result")) for l in ls if l.get("kind") != "lean")))' "$1"
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

# N1's tree: `native/` built through a service that has none of its actions; Lake's output is in $NW/N1.out
build_N1() (
  [ ! -e "$NW/N1.built" ] || exit 0
  enter N1; logs N1
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
    --same-as "$NW/N1.jsonl:kind"
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
  enter N3; logs N3
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
  enter N6; logs N6
  FAKE_UNREACHABLE=1 test_run build Use2 Nat0:shared
  check_lines "$NW/N6.jsonl" --modules "$MODS" --expect "Nat0|Nat0.Tac|Nat0.Use|Use2:kind=lean,result=local" \
    --expect "$OBJS:kind=c,result=local,action=null,outputs=null,exitCode=0" \
    --expect "$LIBS:kind=shared,result=local,action=null,outputs=null,exitCode=0" \
    --same-as "$NW/N6.jsonl:kind"
  for f in $FILES; do test_exp -f "$f"; done
)

# N7: `--no-build` sends no request: a tree built through the service whose library is gone needs a build of the
# library, which fails with `no-build`
row_N7() (
  enter N7; logs N7-build
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
  enter T7; logs T7-default
  test_run build Use2 Nat0:shared
  logs T7
  LAKE_REMOTE_EXEC_TIMEOUT=1 test_run build Use2 Nat0:shared
  test_cmd_eq 1 timeouts CCompile
  test_cmd_eq 1 timeouts LinkShared
  test_cmd_eq 1 timeouts LinkSharedLibrary
  test_cmd_eq 1 timeouts LeanModule
)

# N9: the service answers TIMEOUT for Nat0.Tac's object: its line is `timeout`, the module library that links it
# writes no line (its input failed), and the setup of Nat0.Use, whose compile loads that library, fails
row_N9() (
  enter N9; logs N9
  FAKE_TIMEOUT_TARGET=Nat0.Tac:c.o.export test_fails build Nat0.Use
  check_lines "$NW/N9.jsonl" --modules Nat0.Tac,Nat0.Use \
    --expect 'Nat0.Tac:c.o.export:kind=c,result=timeout,exitCode=null' --expect 'Nat0.Use:result=error,code=setup'
  test_cmd_eq "Nat0.Tac:c.o.export=timeout" native_lines "$NW/N9.jsonl"
)

run_rows N1 N2 N3 N4 N5 N6 N7 T7 N9
