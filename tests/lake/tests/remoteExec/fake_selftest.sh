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
import hashlib, json, os, signal, subprocess, sys, time

fake = os.environ["FAKE"]
work = os.environ["WORK"]
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

def digest_of(path):
    data = open(path, "rb").read()
    return f"{hashlib.sha256(data).hexdigest()}/{len(data)}"

# --- the exchange a module compile makes: hello, digest, run, run again, materialize
src = os.path.join(work, "in.txt")
with open(src, "w") as f:
    f.write("the fake daemon runs the action locally\n")
want = digest_of(src)

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
check("FAKE_LOG holds one line per request", [x["method"] for x in log] ==
      ["hello", "digest", "run", "run", "materialize", "materialize", "materialize", "frobnicate"],
      json.dumps([x["method"] for x in log]))
actions = [json.loads(l) for l in open(os.path.join(work, "fake.log.actions"))]
check("FAKE_LOG.actions holds one line per run", len(actions) == 2, str(len(actions)))
check("an action names no local path", work not in json.dumps(actions), json.dumps(actions))
check("an action names its inputs by digest", actions[0]["inputs"] == [["in.txt", want]], json.dumps(actions[0]["inputs"]))

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

# --- a nonzero exit is a result, and the fake stores no failure
b4 = Bridge()
result(b4.call("hello", {"protocol": 1}))
freq = dict(req, argv=["/bin/sh", "-c", "echo bad >&2; exit 3"], outputs=[], inputs=[], mnemonic="SelfTestBad")
f1 = result(b4.call("run", freq))
check("a failing action returns its exit code", f1["exitCode"] == 3 and f1["cached"] is False, json.dumps(f1))
f2 = result(b4.call("run", freq))
check("the fake stores no failure (slice 1)", f2["cached"] is False, json.dumps(f2))
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

# --- FAKE_CONCURRENT, FAKE_SLEEP_MS, FAKE_INFLIGHT: requests after hello overlap
inflight = os.path.join(work, "inflight")
b7 = Bridge(FAKE_CONCURRENT="1", FAKE_SLEEP_MS="500", FAKE_INFLIGHT=inflight)
result(b7.call("hello", {"protocol": 1}))
slow = dict(req, argv=["/bin/sh", "-c", "true"], outputs=[], inputs=[], mnemonic="SelfTestSlow")
t0 = time.time()
for i in (101, 102):
    b7.p.stdin.write(json.dumps({"id": i, "method": "run", "params": slow}) + "\n")
b7.p.stdin.flush()
ids = sorted(json.loads(b7.p.stdout.readline())["id"] for _ in range(2))
elapsed = time.time() - t0
most = open(inflight).read() if os.path.exists(inflight) else None
check("concurrent requests are all answered", ids == [101, 102], str(ids))
check("and they overlap", elapsed < 0.95 and most == "2", f"{elapsed:.2f} s, most in flight {most}")
b7.close()

# --- FAKE_PIDFILE, FAKE_HELLO_STAMP, FAKE_DAEMON_S
def holds(pid, path):
    """Whether process `pid` has a descriptor open on `path`."""
    d = f"/proc/{pid}/fd"
    for n in os.listdir(d):
        try:
            if os.readlink(os.path.join(d, n)) == path: return True
        except OSError:
            pass
    return False

pidfile = os.path.join(work, "bridge.pid"); stamp = os.path.join(work, "hello.stamp")
lockfile = os.path.join(work, "inherited.lock"); lockfd = os.open(lockfile, os.O_RDWR | os.O_CREAT)
before = time.time()
b8 = Bridge(pass_fds=(lockfd,), FAKE_DAEMON_S="30", FAKE_PIDFILE=pidfile, FAKE_HELLO_STAMP=stamp)
result(b8.call("hello", {"protocol": 1}))
dpid = int(open(pidfile + ".daemon").read())
check("FAKE_PIDFILE names the bridge", int(open(pidfile).read()) == b8.p.pid)
check("FAKE_HELLO_STAMP holds the time of hello", before <= float(open(stamp).read()) <= time.time())
check("the bridge keeps a descriptor it inherited", holds(b8.p.pid, lockfile))
check("the FAKE_DAEMON_S child closes every descriptor it inherited", not holds(dpid, lockfile))
b8.close()
os.close(lockfd)
try:
    os.kill(dpid, 0); alive = True
except ProcessLookupError:
    alive = False
check("the FAKE_DAEMON_S child outlives its bridge", alive)
if alive: os.kill(dpid, 9)

# --- FAKE_OMIT_VERIFIED: a hello without the toolchain check's fields
b9 = Bridge(FAKE_OMIT_VERIFIED="1")
h9 = result(b9.call("hello", {"protocol": 1, "leanGithash": "a" * 40}))
check("FAKE_OMIT_VERIFIED leaves out toolchainVerified and toolchainGithash",
      h9.get("reachable") is True and "toolchainVerified" not in h9 and "toolchainGithash" not in h9, json.dumps(h9))
b9.close()

# --- FAKE_TIMEOUT_TARGET: that target's run answers TIMEOUT, another target's runs
b10 = Bridge(FAKE_TIMEOUT_TARGET="selftest-timeout")
result(b10.call("hello", {"protocol": 1}))
t1 = b10.call("run", dict(req, target="selftest-timeout"))
check("FAKE_TIMEOUT_TARGET answers TIMEOUT for that target", t1.get("error", {}).get("code") == "TIMEOUT", json.dumps(t1))
t2 = b10.call("run", req)
check("and another target runs", t2.get("result", {}).get("exitCode") == 0, json.dumps(t2))
b10.close()

# --- end of input means the client is gone: the request in flight is cancelled and the bridge exits
b11 = Bridge(FAKE_SLEEP_MS="30000")
result(b11.call("hello", {"protocol": 1}))
b11.p.stdin.write(json.dumps({"id": 201, "method": "run", "params": slow}) + "\n"); b11.p.stdin.flush()
time.sleep(0.3)
t0 = time.time(); b11.p.stdin.close()
r11 = json.loads(b11.p.stdout.readline() or "{}")
rc11 = b11.p.wait(timeout=10); dt11 = time.time() - t0
check("end of input cancels the run in flight",
      r11.get("error", {}).get("code") == "UNAVAILABLE" and "cancelled" in r11["error"].get("message", ""), json.dumps(r11))
check("and the bridge exits at once", rc11 == 0 and dt11 < 2, f"exit {rc11} after {dt11:.2f} s")

# --- a write in progress at end of input finishes; no write starts after it
slowdir = os.path.join(work, "slow"); os.makedirs(slowdir)
b12 = Bridge(FAKE_SLOW_WRITE="slow.out", FAKE_SLOW_WRITE_MS="1000")
result(b12.call("hello", {"protocol": 1}))
mat = {"files": [{"digest": want, "path": os.path.join(slowdir, "slow.out")},
                 {"digest": want, "path": os.path.join(slowdir, "after.out")}]}
b12.p.stdin.write(json.dumps({"id": 301, "method": "materialize", "params": mat}) + "\n"); b12.p.stdin.flush()
for _ in range(250):
    if any(n.startswith("slow.out.fake-") for n in os.listdir(slowdir)): break
    time.sleep(0.02)
b12.p.stdin.close()
r12 = json.loads(b12.p.stdout.readline() or "{}")
b12.p.wait(timeout=10)
slow_out = os.path.join(slowdir, "slow.out")
check("a write in progress at end of input finishes",
      os.path.exists(slow_out) and digest_of(slow_out) == want, str(os.listdir(slowdir)))
check("no write starts after end of input",
      not os.path.exists(os.path.join(slowdir, "after.out")) and r12.get("error", {}).get("code") == "UNAVAILABLE",
      json.dumps(r12))

# --- like the bridge, the fake ignores SIGINT and SIGHUP; only end of input ends it (FAKE_EXIT_LOG)
exitlog = os.path.join(work, "exit.log")
b13 = Bridge(FAKE_EXIT_LOG=exitlog)
result(b13.call("hello", {"protocol": 1}))
b13.p.send_signal(signal.SIGINT); b13.p.send_signal(signal.SIGHUP); time.sleep(0.2)
check("the bridge ignores SIGINT and SIGHUP", b13.p.poll() is None)
check("and exits on end of input", b13.close() == 0)
check("FAKE_EXIT_LOG records the exit on end of input", open(exitlog).read().count("end of input") == 1)
b14 = Bridge(FAKE_EXIT_LOG=exitlog)
result(b14.call("hello", {"protocol": 1}))
b14.p.kill(); b14.p.wait()
check("and records nothing for a killed fake", open(exitlog).read().count("end of input") == 1)

print(f"\n{len(failures)} failed")
sys.exit(1 if failures else 0)
PY
