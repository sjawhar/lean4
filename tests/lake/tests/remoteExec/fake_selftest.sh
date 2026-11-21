#!/usr/bin/env bash
# Self-test of fake_lean_remote.py: it must answer `lean-remote` protocol 1 (contract C5.1) on stdio,
# so that the service-mode tests of Lake (tests/lake/tests/remoteExec/test.sh) test Lake and not the fake.
# Needs no Lean and no build service. Run: bash fake_selftest.sh
set -euo pipefail
HERE="$(cd -- "$(dirname -- "${BASH_SOURCE[0]}")" &>/dev/null && pwd)"
PYTHON="${PYTHON:-python3}"
export FAKE="$HERE/fake_lean_remote.py"
WORK="$(mktemp -d)"
export WORK
trap 'rm -rf "$WORK"' EXIT

"$PYTHON" - <<'PY'
import hashlib, json, os, shutil, signal, subprocess, sys, time

fake = os.environ["FAKE"]
work = os.environ["WORK"]
recorded = os.path.join(os.path.dirname(fake), "recorded")
failures = []

def check(name, cond, detail=""):
    print(("ok   " if cond else "FAIL ") + name + (f": {detail}" if detail and not cond else ""))
    if not cond:
        failures.append(name)

class Bridge:
    """One `fake_lean_remote.py bridge` process, spoken to as Lake speaks to `lean-remote bridge`."""
    def __init__(self, pass_fds=(), **env):
        e = dict(os.environ)
        e["FAKE_CAS"] = os.path.join(work, "cas")
        e["FAKE_LOG"] = os.path.join(work, "fake.log")
        e.update(env)
        self.p = subprocess.Popen([fake, "bridge"], stdin=subprocess.PIPE, stdout=subprocess.PIPE, env=e, text=True,
                                  pass_fds=pass_fds)
        self.id = 0

    def call(self, method, params):
        self.id += 1
        self.p.stdin.write(json.dumps({"id": self.id, "method": method, "params": params}) + "\n")
        self.p.stdin.flush()
        line = self.p.stdout.readline()
        if not line:
            return None
        return json.loads(line)

    def close(self):
        self.p.stdin.close()
        return self.p.wait(timeout=30)

def result(resp):
    assert resp is not None and "result" in resp, resp
    return resp["result"]

def digest_of(x):
    """The digest of `x`: bytes, or the path of a file."""
    data = x if isinstance(x, bytes) else open(x, "rb").read()
    return f"{hashlib.sha256(data).hexdigest()}/{len(data)}"

def alive(pid):
    try:
        os.kill(pid, 0)
        return True
    except ProcessLookupError:
        return False

# --- the exchange a module compile makes: hello, digest, run, run again, materialize
src = os.path.join(work, "in.txt")
with open(src, "w") as f:
    f.write("the fake daemon runs the action locally\n")
want = digest_of(src)

before_first = time.time()
b = Bridge()
h = result(b.call("hello", {"protocol": 1, "endpoint": "grpc://fake:1", "instance": "lean",
                            "toolchain": "sha256:" + "0" * 63 + "1", "sysroot": "/nonexistent",
                            "leanGithash": "selftest", "client": {"tool": "lake", "version": "selftest"},
                            "invocationId": "00000000-0000-0000-0000-000000000000", "command": "build"}))
check("hello is reachable", h.get("reachable") is True, json.dumps(h))
check("hello verifies the toolchain", h.get("toolchainVerified") is True, json.dumps(h))
check("hello names the daemon", bool(h.get("daemonVersion")) and isinstance(h.get("daemonPid"), int), json.dumps(h))

d = result(b.call("digest", {"paths": [src]}))
check("digest hashes a local file", d["digests"] == [want], f'{d["digests"]} != [{want}]')

req = {"argv": ["/bin/sh", "-c", "cat in.txt > out/out.txt; printf hi; printf oh >&2"],
       "env": {"LEAN_PATH": "lib/rx"}, "workingDirectory": "",
       "inputs": [{"rel": "in.txt", "path": src}], "files": [], "outputs": ["out/out.txt"],
       "platform": {"arch": "x86_64", "memory": "std", "os": "linux", "toolchain": "sha256:" + "0" * 63 + "1"},
       "timeoutSecs": 3600, "mnemonic": "SelfTest", "target": "selftest"}
r1 = result(b.call("run", req))
check("run executes the action", r1["exitCode"] == 0 and r1["cached"] is False, json.dumps(r1))
check("run returns the output digest", [o["rel"] for o in r1["outputs"]] == ["out/out.txt"]
      and r1["outputs"][0]["digest"] == want, json.dumps(r1["outputs"]))
check("run returns stdout and stderr", r1["stdout"] == "hi" and r1["stderr"] == "oh", json.dumps(r1))
check("run names its action", "/" in r1.get("action", ""), json.dumps(r1.get("action")))

r2 = result(b.call("run", req))
check("the same action is served from the fake's cache", r2["cached"] is True, json.dumps(r2))
check("the cached result holds the same outputs", r2["outputs"] == r1["outputs"], json.dumps(r2["outputs"]))

out = os.path.join(work, "tree", "out.txt")
m = result(b.call("materialize", {"files": [{"digest": want, "path": out}]}))
check("materialize writes the blob", m == {"written": 1, "present": 0, "bytes": int(want.split("/")[1])}, json.dumps(m))
check("the materialized bytes have the digest", digest_of(out) == want, digest_of(out))
check("the materialized file is read-only", oct(os.stat(out).st_mode & 0o777) == "0o444", oct(os.stat(out).st_mode & 0o777))

m2 = result(b.call("materialize", {"files": [{"digest": want, "path": out}]}))
check("a file already there is present, not written", m2["present"] == 1 and m2["written"] == 0, json.dumps(m2))

absent = hashlib.sha256(b"never stored").hexdigest() + "/12"
e = b.call("materialize", {"files": [{"digest": absent, "path": os.path.join(work, "tree", "gone")}]})
check("an absent blob is NOT_FOUND with `missing`",
      e.get("error", {}).get("code") == "NOT_FOUND" and e["error"].get("missing") == [absent], json.dumps(e))

bad = b.call("frobnicate", {})
check("an unknown method is INVALID", bad.get("error", {}).get("code") == "INVALID", json.dumps(bad))
check("the bridge exits 0 on EOF", b.close() == 0)

# --- the log: every request, and every action without this machine's paths
log = [json.loads(l) for l in open(os.path.join(work, "fake.log"))]
requests = [x for x in log if "method" in x]
check("FAKE_LOG holds one line per request", [x["method"] for x in requests] ==
      ["hello", "digest", "run", "run", "materialize", "materialize", "materialize", "frobnicate"],
      json.dumps([x["method"] for x in requests]))
answers = [x for x in log if "method" not in x]
check("and one line for the hello's answer, right after it, with its time",
      [x.get("answer") for x in answers] == ["hello"] and log[1] is answers[0] and answers[0]["reachable"] is True
      and before_first <= answers[0]["t"] <= time.time(), json.dumps(answers))
check("every request line has the time it came, `t`",
      all(isinstance(x.get("t"), float) and before_first <= x["t"] <= time.time() for x in requests), json.dumps(requests))
actions = [json.loads(l) for l in open(os.path.join(work, "fake.log.actions"))]
check("FAKE_LOG.actions holds one line per run", len(actions) == 2, str(len(actions)))
check("an action names no local path", work not in json.dumps(actions), json.dumps(actions))
check("an action names its inputs by digest and executable bit, and its timeoutSecs",
      actions[0]["inputs"] == [["in.txt", want, False]] and actions[0].get("timeoutSecs") == 3600, json.dumps(actions[0]))

# --- the first request of a connection must be `hello` (contract C5.1)
b2 = Bridge()
first = b2.call("digest", {"paths": [src]})
check("a first request that is not hello is INVALID", first.get("error", {}).get("code") == "INVALID", json.dumps(first))
check("and the connection closes", b2.p.stdout.readline() == "" and b2.close() == 0)

# --- FAKE_UNREACHABLE=1: the build service does not answer
b3 = Bridge(FAKE_UNREACHABLE="1")
h3 = result(b3.call("hello", {"protocol": 1, "endpoint": "grpc://fake:1", "instance": "lean"}))
check("FAKE_UNREACHABLE makes hello unreachable", h3.get("reachable") is False, json.dumps(h3))
check("and it gives a reason", bool(h3.get("reason")), json.dumps(h3))
b3.close()

# --- a nonzero exit is a result, and the fake stores no failure of an action that declares no outputs
b4 = Bridge()
result(b4.call("hello", {"protocol": 1}))
freq = dict(req, argv=["/bin/sh", "-c", "echo bad >&2; exit 3"], outputs=[], inputs=[], mnemonic="SelfTestBad")
f1 = result(b4.call("run", freq))
check("a failing action returns its exit code", f1["exitCode"] == 3 and f1["cached"] is False, json.dumps(f1))
f2 = result(b4.call("run", freq))
check("a failure of an action that declares no outputs is not stored", f2["cached"] is False, json.dumps(f2))
b4.close()

# --- the toolchain check (contract C5.1): verified only when the service's Lean is the client's
b5 = Bridge(FAKE_GITHASH="b" * 40)
h5 = result(b5.call("hello", {"protocol": 1, "leanGithash": "a" * 40}))
check("a toolchain with another Lean is not verified",
      h5.get("reachable") is True and h5.get("toolchainVerified") is False, json.dumps(h5))
check("and the service names its Lean", h5.get("toolchainGithash") == "b" * 40, json.dumps(h5))
b5.close()
b6 = Bridge()
h6 = result(b6.call("hello", {"protocol": 1}))
check("a client that names no Lean is not verified, with a reason",
      h6.get("toolchainVerified") is False and bool(h6.get("reason")), json.dumps(h6))
b6.close()

# --- FAKE_CONCURRENT, FAKE_SLEEP_MS, FAKE_INFLIGHT: requests after hello overlap. Each run sleeps and
# then waits at FAKE_INPUT_BARRIER, which the test opens only once both runs are in flight: a fake that
# answers one request at a time never has both in flight.
inflight = os.path.join(work, "inflight"); barrier = os.path.join(work, "barrier")
b7 = Bridge(FAKE_CONCURRENT="1", FAKE_SLEEP_MS="500", FAKE_INFLIGHT=inflight, FAKE_INPUT_BARRIER=barrier)
result(b7.call("hello", {"protocol": 1}))
slow = dict(req, argv=["/bin/sh", "-c", "true"], outputs=[], inputs=[], mnemonic="SelfTestSlow")
t0 = time.monotonic()
for i in (101, 102):
    b7.p.stdin.write(json.dumps({"id": i, "method": "run", "params": slow}) + "\n")
b7.p.stdin.flush()
ready_at = None
for _ in range(1200):
    if ready_at is None and os.path.exists(barrier + ".ready"): ready_at = time.monotonic()
    if ready_at is not None and os.path.exists(inflight) and open(inflight).read() == "2": break
    time.sleep(0.1)
open(barrier + ".go", "w").close()
answers = sorted((json.loads(b7.p.stdout.readline() or "{}") for _ in range(2)), key=lambda a: a.get("id", 0))
most = open(inflight).read() if os.path.exists(inflight) else None
check("concurrent requests are all answered",
      [a.get("id") for a in answers] == [101, 102] and all(a.get("result", {}).get("exitCode") == 0 for a in answers),
      json.dumps(answers))
check("and they overlap", most == "2", f"most in flight {most}")
# The barrier marks `.ready` after the sleep, so the test sees it no earlier
check("FAKE_SLEEP_MS holds a run that long", ready_at is not None and ready_at - t0 >= 0.5, f"ready after {ready_at and ready_at - t0}")
b7.close()

# --- FAKE_PIDFILE, FAKE_DAEMON_S
def holds(pid, path):
    """Whether process `pid` has a descriptor open on `path`."""
    d = f"/proc/{pid}/fd"
    for n in os.listdir(d):
        try:
            if os.readlink(os.path.join(d, n)) == path: return True
        except OSError:
            pass
    return False

pidfile = os.path.join(work, "bridge.pid")
lockfile = os.path.join(work, "inherited.lock"); lockfd = os.open(lockfile, os.O_RDWR | os.O_CREAT)
b8 = Bridge(pass_fds=(lockfd,), FAKE_DAEMON_S="30", FAKE_PIDFILE=pidfile)
result(b8.call("hello", {"protocol": 1}))
dpid = int(open(pidfile + ".daemon").read())
check("FAKE_PIDFILE names the bridge", int(open(pidfile).read()) == b8.p.pid)
check("the bridge keeps a descriptor it inherited", holds(b8.p.pid, lockfile))
check("the FAKE_DAEMON_S child closes every descriptor it inherited", not holds(dpid, lockfile))
b8.close()
os.close(lockfd)
daemon_alive = alive(dpid)
check("the FAKE_DAEMON_S child outlives its bridge", daemon_alive)
if daemon_alive: os.kill(dpid, 9)

# --- FAKE_OMIT_VERIFIED: a hello without the toolchain check's fields
b9 = Bridge(FAKE_OMIT_VERIFIED="1")
h9 = result(b9.call("hello", {"protocol": 1, "leanGithash": "a" * 40}))
check("FAKE_OMIT_VERIFIED leaves out toolchainVerified and toolchainGithash",
      h9.get("reachable") is True and "toolchainVerified" not in h9 and "toolchainGithash" not in h9, json.dumps(h9))
b9.close()

# --- FAKE_TIMEOUT_TARGET, FAKE_UNAVAILABLE_TARGET: that target's run fails so, another runs
for var, code in (("FAKE_TIMEOUT_TARGET", "TIMEOUT"), ("FAKE_UNAVAILABLE_TARGET", "UNAVAILABLE")):
    b10 = Bridge(**{var: "selftest-fail"})
    result(b10.call("hello", {"protocol": 1}))
    t1 = b10.call("run", dict(req, target="selftest-fail"))
    check(f"{var} answers {code} for that target", t1.get("error", {}).get("code") == code, json.dumps(t1))
    t2 = b10.call("run", req)
    check("and another target runs", t2.get("result", {}).get("exitCode") == 0, json.dumps(t2))
    b10.close()

# --- FAKE_UNREACHABLE_LATER: the first connection's hello is reachable, every later one is not
later = os.path.join(work, "later.state")
answers = []
for _ in range(3):
    bl = Bridge(FAKE_UNREACHABLE_LATER=later)
    answers.append(result(bl.call("hello", {"protocol": 1})).get("reachable"))
    bl.close()
check("FAKE_UNREACHABLE_LATER makes every connection after the first unreachable",
      answers == [True, False, False], str(answers))

# --- FAKE_UNVERIFIED_LATER: every later connection answers, but with another Lean's toolchain
later2 = os.path.join(work, "later2.state")
answers = []
for _ in range(2):
    bl = Bridge(FAKE_UNVERIFIED_LATER=later2)
    h = result(bl.call("hello", {"protocol": 1, "leanGithash": "a" * 40}))
    answers.append((h.get("reachable"), h.get("toolchainVerified"), h.get("toolchainGithash")))
    bl.close()
check("FAKE_UNVERIFIED_LATER makes every later connection verify another Lean",
      answers == [(True, True, "a" * 40), (True, False, "0" * 40)], str(answers))

# --- end of input means the client is gone: the request in flight is cancelled and the bridge exits
# at once, without waiting out the run's 600 s sleep
inflight11 = os.path.join(work, "inflight11")
b11 = Bridge(FAKE_SLEEP_MS="600000", FAKE_INFLIGHT=inflight11)
result(b11.call("hello", {"protocol": 1}))
b11.p.stdin.write(json.dumps({"id": 201, "method": "run", "params": slow}) + "\n"); b11.p.stdin.flush()
for _ in range(1200):
    in_flight = os.path.exists(inflight11) and open(inflight11).read() == "1"
    if in_flight: break
    time.sleep(0.1)
b11.p.stdin.close()
try:
    rc11 = b11.p.wait(timeout=10)
except subprocess.TimeoutExpired:
    b11.p.kill(); b11.p.wait(); rc11 = None
r11 = json.loads(b11.p.stdout.readline() or "{}")
check("end of input cancels the run in flight",
      in_flight and r11.get("error", {}).get("code") == "UNAVAILABLE" and "cancelled" in r11["error"].get("message", ""),
      f"in flight: {in_flight}, {json.dumps(r11)}")
check("and the bridge exits at once", rc11 == 0, f"exit {rc11}")

# --- a write in progress at end of input finishes; no write starts after it
slowdir = os.path.join(work, "slow"); os.makedirs(slowdir)
slowgo = os.path.join(work, "slow.go")
b12 = Bridge(FAKE_SLOW_WRITE="slow.out", FAKE_SLOW_WRITE_GO=slowgo)
result(b12.call("hello", {"protocol": 1}))
mat = {"files": [{"digest": want, "path": os.path.join(slowdir, "slow.out")},
                 {"digest": want, "path": os.path.join(slowdir, "after.out")}]}
b12.p.stdin.write(json.dumps({"id": 301, "method": "materialize", "params": mat}) + "\n"); b12.p.stdin.flush()
for _ in range(3000):
    if any(n.startswith("slow.out.fake-") for n in os.listdir(slowdir)): break
    time.sleep(0.02)
b12.p.stdin.close()
open(slowgo, "w").close()
r12 = json.loads(b12.p.stdout.readline() or "{}")
b12.p.wait(timeout=10)
slow_out = os.path.join(slowdir, "slow.out")
check("a write in progress at end of input finishes",
      os.path.exists(slow_out) and digest_of(slow_out) == want, str(os.listdir(slowdir)))
check("no write starts after end of input",
      not os.path.exists(os.path.join(slowdir, "after.out")) and r12.get("error", {}).get("code") == "UNAVAILABLE",
      json.dumps(r12))

# --- like a connected bridge, the fake ignores SIGINT, SIGHUP and SIGTERM; only end of input ends it
exitlog = os.path.join(work, "exit.log")
b13 = Bridge(FAKE_EXIT_LOG=exitlog)
result(b13.call("hello", {"protocol": 1}))
for s in (signal.SIGINT, signal.SIGHUP, signal.SIGTERM): b13.p.send_signal(s)
time.sleep(0.2)
check("the bridge ignores SIGINT, SIGHUP and SIGTERM", b13.p.poll() is None)
check("and exits on end of input", b13.close() == 0)
check("FAKE_EXIT_LOG records the exit on end of input, with the fake's id",
      open(exitlog).read().splitlines() == [json.dumps(f"end of input {b13.p.pid}")], open(exitlog).read())
b14 = Bridge(FAKE_EXIT_LOG=exitlog)
result(b14.call("hello", {"protocol": 1}))
b14.p.kill(); b14.p.wait()
check("and records nothing for a killed fake", open(exitlog).read().count("end of input") == 1)

# --- FAKE_IGNORE_EOF_S: the fake stays that long after end of input, then exits
b15 = Bridge(FAKE_IGNORE_EOF_S="1")
result(b15.call("hello", {"protocol": 1}))
t0 = time.monotonic(); b15.p.stdin.close()
rc15 = b15.p.wait(timeout=10); dt15 = time.monotonic() - t0
check("FAKE_IGNORE_EOF_S keeps the fake after end of input", rc15 == 0 and dt15 >= 1, f"exit {rc15} after {dt15:.2f} s")

# --- FAKE_IGNORE_EOF_HELLO_ONLY_S: the stay of a fake that got no request but hello; one that got a
# request stays FAKE_IGNORE_EOF_S
b16 = Bridge(FAKE_IGNORE_EOF_S="0", FAKE_IGNORE_EOF_HELLO_ONLY_S="1")
result(b16.call("hello", {"protocol": 1}))
t0 = time.monotonic(); rc16 = b16.close(); dt16 = time.monotonic() - t0
check("FAKE_IGNORE_EOF_HELLO_ONLY_S keeps a fake that got only hello", rc16 == 0 and dt16 >= 1,
      f"exit {rc16} after {dt16:.2f} s")
b17 = Bridge(FAKE_IGNORE_EOF_S="0", FAKE_IGNORE_EOF_HELLO_ONLY_S="600")
result(b17.call("hello", {"protocol": 1}))
result(b17.call("digest", {"paths": [src]}))
try:
    rc17 = b17.close()
except subprocess.TimeoutExpired:
    rc17 = None; b17.p.kill(); b17.p.wait()
check("and not one that got a request", rc17 == 0, f"exit {rc17}")

# --- FAKE_DOWN_FILE: while the file exists, hello is unreachable and run and materialize are UNAVAILABLE
downfile = os.path.join(work, "down")
open(downfile, "w").close()
bd = Bridge(FAKE_DOWN_FILE=downfile)
hd = result(bd.call("hello", {"protocol": 1, "leanGithash": "a" * 40}))
check("FAKE_DOWN_FILE makes hello unreachable, with a reason",
      hd.get("reachable") is False and "down" in hd.get("reason", ""), json.dumps(hd))
rd = bd.call("run", req)
check("and run UNAVAILABLE", rd.get("error", {}).get("code") == "UNAVAILABLE", json.dumps(rd))
md = bd.call("materialize", {"files": [{"digest": want, "path": os.path.join(work, "down-out")}]})
check("and materialize UNAVAILABLE, writing nothing",
      md.get("error", {}).get("code") == "UNAVAILABLE" and not os.path.exists(os.path.join(work, "down-out")), json.dumps(md))
os.remove(downfile)
rd2 = bd.call("run", req)
check("a run after the file is gone runs", rd2.get("result", {}).get("exitCode") == 0, json.dumps(rd2))
bd.close()

# --- FAKE_DOWN_AT_TARGET: that target's first run takes the service down, once
downfile2 = os.path.join(work, "down2")
bt = Bridge(FAKE_DOWN_FILE=downfile2, FAKE_DOWN_AT_TARGET="selftest-trip")
result(bt.call("hello", {"protocol": 1}))
t0r = bt.call("run", req)
check("another target's run does not take the service down",
      t0r.get("result", {}).get("exitCode") == 0 and not os.path.exists(downfile2), json.dumps(t0r))
t1r = bt.call("run", dict(req, target="selftest-trip"))
check("FAKE_DOWN_AT_TARGET's run creates the file and answers UNAVAILABLE",
      os.path.exists(downfile2) and t1r.get("error", {}).get("code") == "UNAVAILABLE", json.dumps(t1r))
os.remove(downfile2)
t2r = bt.call("run", dict(req, target="selftest-trip"))
check("and only its first run does", not os.path.exists(downfile2) and t2r.get("result", {}).get("exitCode") == 0,
      json.dumps(t2r))
bt.close()

# --- FAKE_MATERIALIZE_FAIL: a materialize naming a path with that suffix answers that code, writing nothing
for code in ("UNAVAILABLE", "NOT_FOUND"):
    bm = Bridge(FAKE_MATERIALIZE_FAIL=f"{code}:/mat/B.olean")
    result(bm.call("hello", {"protocol": 1}))
    other = os.path.join(work, code, "mat", "A.olean")
    mf = bm.call("materialize", {"files": [{"digest": want, "path": other},
                                           {"digest": want, "path": os.path.join(work, code, "mat", "B.olean")}]})
    check(f"FAKE_MATERIALIZE_FAIL answers {code} for that suffix, writing none of the files",
          mf.get("error", {}).get("code") == code and not os.path.exists(other), json.dumps(mf))
    mo = bm.call("materialize", {"files": [{"digest": want, "path": other}]})
    check("and another materialize writes", mo.get("result", {}).get("written") == 1, json.dumps(mo))
    bm.close()

# Each case below runs on its own: an exception fails that case, not the rest of the self-test.
def case(fn):
    try:
        fn()
    except Exception as e:
        check(f"{fn.__name__} runs to its end", False, f"{type(e).__name__}: {e}")

def greeted(**env):
    """A bridge that has said hello."""
    b = Bridge(**env)
    result(b.call("hello", {"protocol": 1}))
    return b

def sh(script, **kw):
    """The `run` request of `/bin/sh -c script`, with no inputs and no outputs unless `kw` gives them."""
    return dict(req, **{"argv": ["/bin/sh", "-c", script], "inputs": [], "outputs": [], **kw})

def recorded_answer(name):
    with open(os.path.join(recorded, name)) as f:
        return json.load(f)

# --- the action key covers timeoutSecs and each input's executable bit (by path the file's mode, by digest
# the request's `executable`), as the REAPI action and its input root do; not the mnemonic or the target
@case
def action_key():
    b = greeted()
    cat = sh("test -x in.txt && echo x; cat in.txt > out/out.txt", inputs=[{"rel": "in.txt", "path": src}],
             outputs=["out/out.txt"])
    k1 = result(b.call("run", cat))
    k2 = result(b.call("run", dict(cat, mnemonic="SelfTestOther", target="selftest-other")))
    check("the action key leaves out the mnemonic and the target",
          k2["cached"] is True and k2["action"] == k1["action"], json.dumps([k1, k2]))
    k3 = result(b.call("run", dict(cat, timeoutSecs=3601)))
    check("the action key covers timeoutSecs", k3["cached"] is False and k3["action"] != k1["action"], json.dumps(k3))
    exe = os.path.join(work, "in-exe.txt")
    shutil.copyfile(src, exe)
    os.chmod(exe, 0o755)
    k4 = result(b.call("run", dict(cat, inputs=[{"rel": "in.txt", "path": exe}])))
    check("the action key covers an input's executable bit, by path its file's mode, and the input has it",
          k4["cached"] is False and k4["action"] != k1["action"] and k1["stdout"] == "" and k4["stdout"] == "x\n",
          json.dumps([k1, k4]))
    k5 = result(b.call("run", dict(cat, inputs=[{"rel": "in.txt", "digest": want}])))
    k6 = result(b.call("run", dict(cat, inputs=[{"rel": "in.txt", "digest": want, "executable": True}],
                                   skipCacheLookup=True)))
    check("and by digest the request's `executable`: the same actions as by path, and the input has it",
          k5["action"] == k1["action"] and k6["action"] == k4["action"] != k5["action"] and k6["stdout"] == "x\n",
          json.dumps([k5, k6]))
    actions = [json.loads(l) for l in open(os.path.join(work, "fake.log.actions"))][-6:]
    check("FAKE_LOG.actions gives each action's timeoutSecs and its inputs' executable bits",
          [(a.get("timeoutSecs"), a["inputs"][0][2:]) for a in actions] ==
          [(3600, [False]), (3600, [False]), (3601, [False]), (3600, [True]), (3600, [False]), (3600, [True])],
          json.dumps(actions))
    b.close()

# --- a result has the fields of the bridge's (recorded/fail-basic.json): no digest of an empty stream,
# `outputs: null` when the action wrote no declared output, and the times of the execution in `metadata`
@case
def result_fields():
    rec = recorded_answer("fail-basic.json")["result"]
    b = greeted()
    f = result(b.call("run", sh("printf failed >&2; exit 1", outputs=["out.olean"])))
    check("a result has the fields of the bridge's", sorted(f) == sorted(rec), json.dumps(f))
    check("a stream with bytes has a digest, an empty one has none",
          f.get("stderrDigest") == digest_of(b"failed") and "stdoutDigest" not in f, json.dumps(f))
    check("`outputs` is null when the action wrote no declared output", f.get("outputs", []) is None, json.dumps(f))
    check("`metadata` has the times of the execution's steps and the worker",
          sorted(f.get("metadata") or {}) == sorted(rec["metadata"]), json.dumps(f.get("metadata")))
    b.close()

# --- the fake stores a failure of an action that declares outputs (a compile failure), as the service does,
# and never a result that a signal ended
@case
def stored_failures():
    b = greeted()
    bad = sh("printf bad; exit 1", outputs=["out.olean"])
    s1 = result(b.call("run", bad))
    s2 = result(b.call("run", bad))
    check("a failure of an action that declares outputs is stored, and served as cached",
          s1["cached"] is False and s1["exitCode"] == 1 and s2["cached"] is True and s2["exitCode"] == 1
          and s2["stdout"] == "bad" and s2["action"] == s1["action"], json.dumps([s1, s2]))
    sig = sh("kill -9 $$", outputs=["out.olean"])
    g1 = result(b.call("run", sig))
    g2 = result(b.call("run", sig))
    check("a result that a signal ended is not stored", g1["exitCode"] < 0 and g2["cached"] is False,
          json.dumps([g1, g2]))
    b.close()

# --- FAKE_OOM_TARGET, FAKE_DISK_TARGET: that target's run answers a result with exit code -1 and no outputs,
# with the fields of recorded/oom.json and recorded/disk-limit.json; with FAKE_FIELDS=new, also the signal
# and the limits
@case
def killed_results():
    for var, name, oom_kills, disk in (("FAKE_OOM_TARGET", "oom.json", 1, False),
                                       ("FAKE_DISK_TARGET", "disk-limit.json", 0, True)):
        rec = recorded_answer(name)["result"]
        b = greeted(**{var: "selftest-killed"})
        k = b.call("run", dict(req, target="selftest-killed")).get("result", {})
        check(f"{var} answers the result of a killed action, with the fields of {name}",
              sorted(k) == sorted(rec) and sorted(k.get("metadata") or {}) == sorted(rec["metadata"])
              and all(k.get(f) == rec[f] for f in ("cached", "exitCode", "stdout", "stderr", "outputs"))
              and "/" in k.get("action", ""), json.dumps(k))
        o = b.call("run", req)
        check("and another target runs", o.get("result", {}).get("exitCode") == 0, json.dumps(o))
        b.close()
        b = greeted(FAKE_FIELDS="new", **{var: "selftest-killed"})
        k = b.call("run", dict(req, target="selftest-killed")).get("result", {})
        lim = k.get("limits") or {}
        check(f"with FAKE_FIELDS=new, {var} also gives the signal and the limits",
              k.get("exitCode") == -1 and k.get("outputs", []) is None and k.get("terminationSignal") == "KILL"
              and lim.get("oomKills") == oom_kills and lim.get("diskLimitExceeded") is disk
              and isinstance(lim.get("writtenBytes"), int), json.dumps(k))
        b.close()

# --- FAKE_TIMEOUT_TARGET: a TIMEOUT with the fields of recorded/timeout.json; with FAKE_FIELDS=new, also the
# action, the signal and the limits, and no digest of an empty stream
@case
def timeout_errors():
    rec = recorded_answer("timeout.json")["error"]
    b = greeted(FAKE_TIMEOUT_TARGET="selftest-slow")
    t = b.call("run", dict(req, target="selftest-slow")).get("error", {})
    check("FAKE_TIMEOUT_TARGET answers TIMEOUT with the fields of timeout.json",
          t.get("code") == "TIMEOUT" and sorted(t) == sorted(rec), json.dumps(t))
    b.close()
    b = greeted(FAKE_FIELDS="new", FAKE_TIMEOUT_TARGET="selftest-slow")
    t = b.call("run", dict(req, target="selftest-slow")).get("error", {})
    check("with FAKE_FIELDS=new, the TIMEOUT also names the action, the signal and the limits",
          t.get("code") == "TIMEOUT" and t.get("action") == r1["action"] and t.get("terminationSignal") == "KILL"
          and (t.get("limits") or {}).get("oomKills") == 0 and "stdoutDigest" not in t and "stderrDigest" not in t,
          json.dumps(t))
    b.close()

# --- FAKE_ENFORCE_TIMEOUT: the named targets' actions are killed at their timeoutSecs and answer TIMEOUT;
# any other action runs to its end
@case
def enforced_timeouts():
    pidfile = os.path.join(work, "enforced.pid")
    slow = sh(f"printf early; echo $$ > {pidfile}; exec sleep 10", timeoutSecs=1, target="selftest-enforced")
    b = greeted(FAKE_ENFORCE_TIMEOUT="selftest-other,selftest-enforced", FAKE_FIELDS="new")
    t0 = time.monotonic()
    e = b.call("run", slow).get("error", {})
    dt = time.monotonic() - t0
    pid = int(open(pidfile).read())
    check("FAKE_ENFORCE_TIMEOUT kills that target's action at its timeoutSecs, and it answers TIMEOUT",
          e.get("code") == "TIMEOUT" and 1 <= dt < 8 and not alive(pid), f"after {dt:.2f} s: {json.dumps(e)}")
    check("with FAKE_FIELDS=new, with the digest of the stream it wrote",
          e.get("stdoutDigest") == digest_of(b"early") and "stderrDigest" not in e
          and e.get("terminationSignal") == "KILL" and "/" in e.get("action", ""), json.dumps(e))
    o = b.call("run", sh("sleep 2", timeoutSecs=1, target="selftest-free")).get("result", {})
    check("and another target's action runs past its timeoutSecs to its end", o.get("exitCode") == 0, json.dumps(o))
    b.close()
    b = greeted(FAKE_ENFORCE_TIMEOUT="*")
    e = b.call("run", sh("exec sleep 10", timeoutSecs=1, target="selftest-any")).get("error", {})
    c = b.call("run", req).get("result", {})
    check("`*` names every target, and a result in the action cache is served",
          e.get("code") == "TIMEOUT" and sorted(e) == ["code", "message"] and c.get("cached") is True,
          json.dumps([e, c]))
    b.close()

# --- FAKE_REPLAY_TARGET, FAKE_REPLAY_FILE: that target's run answers the recorded answer as it is
@case
def replays():
    for name in ("fail-basic.json", "oom.json", "disk-limit.json", "timeout.json"):
        rec = recorded_answer(name)
        b = greeted(FAKE_REPLAY_TARGET="selftest-replay", FAKE_REPLAY_FILE=os.path.join(recorded, name))
        r = b.call("run", dict(req, target="selftest-replay")) or {}
        check(f"FAKE_REPLAY_FILE={name} answers the recorded answer",
              {k: v for k, v in r.items() if k != "id"} == {k: v for k, v in rec.items() if k != "id"}, json.dumps(r))
        b.close()
    bare = os.path.join(work, "bare.json")
    for body, key in (({"code": "SOMETHING_NEW", "message": "a recorded error"}, "error"),
                      (recorded_answer("oom.json")["result"], "result")):
        with open(bare, "w") as f:
            json.dump(body, f)
        b = greeted(FAKE_REPLAY_TARGET="selftest-replay", FAKE_REPLAY_FILE=bare)
        r = b.call("run", dict(req, target="selftest-replay")) or {}
        check(f"a file that holds only the {key} answers it", r.get(key) == body, json.dumps(r))
        o = b.call("run", req)
        check("and another target runs", o.get("result", {}).get("exitCode") == 0, json.dumps(o))
        b.close()

# --- FAKE_ERROR_TARGET=TARGET:CODE: that target's run answers an error with that code, whatever its text
@case
def error_codes():
    for spec, target, code in (("selftest-err:SOMETHING_NEW", "selftest-err", "SOMETHING_NEW"),
                               ("Nat0.Tac:c.o.export:INTERNAL", "Nat0.Tac:c.o.export", "INTERNAL")):
        b = greeted(FAKE_ERROR_TARGET=spec)
        e = b.call("run", dict(req, target=target))
        check(f"FAKE_ERROR_TARGET={spec} answers {code} for {target}", e.get("error", {}).get("code") == code,
              json.dumps(e))
        o = b.call("run", req)
        check("and another target runs", o.get("result", {}).get("exitCode") == 0, json.dumps(o))
        b.close()

# --- FAKE_EXTRA_OUTPUT_TARGET: that target's result also names an output that the request did not declare
@case
def extra_output():
    b = greeted(FAKE_EXTRA_OUTPUT_TARGET="selftest-extra")
    r = b.call("run", dict(req, target="selftest-extra")).get("result", {})
    extra = [o for o in r.get("outputs") or [] if o["rel"] not in req["outputs"]]
    m = b.call("materialize", {"files": [{"digest": extra[0]["digest"], "path": os.path.join(work, "extra.out")}]}) \
        if extra else {}
    check("FAKE_EXTRA_OUTPUT_TARGET's result also names an output the request did not declare, in the CAS",
          r.get("exitCode") == 0 and len(extra) == 1 and m.get("result", {}).get("written") == 1, json.dumps([r, m]))
    o = b.call("run", req).get("result", {})
    check("and another target's result names only the declared outputs",
          [x["rel"] for x in o.get("outputs") or []] == req["outputs"], json.dumps(o))
    b.close()

# --- FAKE_MALFORMED_TARGET: that target's result has an exitCode that is not a number
@case
def malformed_result():
    b = greeted(FAKE_MALFORMED_TARGET="selftest-bad")
    r = b.call("run", dict(req, target="selftest-bad")).get("result", {})
    check("FAKE_MALFORMED_TARGET's result has an exitCode that is not a number", isinstance(r.get("exitCode"), str),
          json.dumps(r))
    o = b.call("run", req).get("result", {})
    check("and another target's has a number", o.get("exitCode") == 0, json.dumps(o))
    b.close()

# --- an input given only by digest that the CAS lacks answers UNAVAILABLE with `missing`, as the bridge's
# check of such inputs does; FAKE_DROP_ONCE: so does the first run that gives that digest, once
@case
def digest_inputs():
    lost = hashlib.sha256(b"a blob that no one stored").hexdigest() + "/25"
    b = greeted()
    u = b.call("run", sh("true", inputs=[{"rel": "lost", "digest": lost}]))
    check("an input by digest that the CAS lacks answers UNAVAILABLE, naming it in `missing`",
          u.get("error", {}).get("code") == "UNAVAILABLE" and u["error"].get("missing") == [lost], json.dumps(u))
    b.close()
    drop = sh("cat in.txt > out/out.txt # dropped", inputs=[{"rel": "in.txt", "digest": want}], outputs=["out/out.txt"])
    b = greeted(FAKE_DROP_ONCE=want)
    d1 = b.call("run", drop)
    d2 = b.call("run", drop)
    check("FAKE_DROP_ONCE: the first run that gives that digest answers as if the CAS lacked it",
          d1.get("error", {}).get("code") == "UNAVAILABLE" and d1["error"].get("missing") == [want], json.dumps(d1))
    check("and the next one runs", d2.get("result", {}).get("exitCode") == 0, json.dumps(d2))
    b.close()
    b = greeted(FAKE_DROP_ONCE=want)
    d3 = b.call("run", dict(drop, skipCacheLookup=True)).get("result", {})
    check("also on a later connection", d3.get("exitCode") == 0 and d3.get("cached") is False, json.dumps(d3))
    b.close()

# --- FAKE_HELLO_DELAY_S: hello answers that much later
@case
def hello_delay():
    b = Bridge(FAKE_HELLO_DELAY_S="1")
    t0 = time.monotonic()
    h = result(b.call("hello", {"protocol": 1}))
    dt = time.monotonic() - t0
    check("FAKE_HELLO_DELAY_S makes hello answer that much later", h.get("reachable") is True and dt >= 1,
          f"after {dt:.2f} s")
    b.close()

# --- FAKE_FIELDS takes only `today` and `new`
@case
def fields_values():
    env = dict(os.environ, FAKE_CAS=os.path.join(work, "cas"), FAKE_FIELDS="tomorrow")
    p = subprocess.run([fake, "bridge"], input="", env=env, capture_output=True, text=True, timeout=30)
    check("a FAKE_FIELDS other than today and new stops the fake", p.returncode == 2 and "FAKE_FIELDS" in p.stderr,
          f"exit {p.returncode}: {p.stderr}")

print(f"\n{len(failures)} failed")
sys.exit(1 if failures else 0)
PY
