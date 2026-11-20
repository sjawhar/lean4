#!/usr/bin/env python3
"""capture.py: records what the live build service answers, through `lean-remote bridge`, for four
actions, as the recorded inputs `fake_lean_remote.py` replays (README.md beside this file).

  capture.py --endpoint grpcs://HOST:PORT --audience AUDIENCE --ca CA.pem --config-dir DIR \
      --socket PATH --toolchain sha256:<64 hex> --sysroot DIR --package DIR --fake FAKE \
      --work DIR --out DIR [--instance lean] [--lean-remote lean-remote] \
      [--probe /usr/local/bin/lean-build-probe]

Each option can come from the environment instead: CAPTURE_ENDPOINT, CAPTURE_AUDIENCE, CAPTURE_CA,
LEAN_REMOTE_CONFIG_DIR, LAKE_REMOTE_EXEC_SOCKET, LAKE_REMOTE_EXEC_TOOLCHAIN, LAKE_REMOTE_EXEC_SYSROOT,
CAPTURE_PACKAGE, CAPTURE_FAKE, CAPTURE_WORK, CAPTURE_OUT, LAKE_REMOTE_EXEC_INSTANCE,
LAKE_REMOTE_EXEC_CLIENT and CAPTURE_PROBE.

It runs on a machine whose identity the service admits (the token comes from the metadata server)
and that holds the toolchain at --sysroot, `lean-remote` and `lean-build-probe`:

1. It builds --package, a package of one module `T` (`#eval IO.sleep 5000`, no import but Init),
   with `<sysroot>/bin/lake` in service mode through --fake, and takes the `run` request Lake sent
   from the fake's log. A fresh comment is appended to a copy of T.lean first, so the action is new.
2. It writes config.json into --config-dir (`auth: metadata`, `queueGraceSecs: 300`, because the
   service's pools can start from zero), starts `lean-remote bridge --socket PATH` and says `hello`.
3. It sends four `run` requests, one at a time, each with `skipCacheLookup` and a fresh salt:
   `fail-basic`, `oom` and `disk-limit` (lean-build-probe's `child` actions of the same names on
   the Lean platform, the probe sent by path as the input `lean-build-probe`), and `timeout` (step
   1's request with `timeoutSecs` 1).
4. It saves each answer whole, the response line the bridge wrote (`id` and `result` or `error`), as
   <out>/<case>.json. Only `metadata.worker` and the time stamps of `metadata` are replaced, by
   fixed text, because they name the service's pods and nodes. It prints each file between
   `=== BEGIN <case>.json` and `=== END <case>.json`, then `=== SHA256 <case>.json <hex>`.

It exits 0 once all four answers are saved, whatever they say; 1 when the service cannot be used.
"""
import argparse, hashlib, json, os, queue, re, shutil, subprocess, sys, threading, uuid

FIXED_WORKER = "recorded-worker"
FIXED_TIME = "2026-11-20T00:00:00Z"
STAMP = re.compile(r"^\d{4}-\d{2}-\d{2}T\d{2}:\d{2}:\d{2}(\.\d+)?(Z|[+-]\d{2}:\d{2})$")
PROBE_REL = "lean-build-probe"
PROBE_TIMEOUT_SECS = 600  # lean-build-probe's childTimeout
ANSWER_TIMEOUT_SECS = 1800
PROBE_CASES = (
    ("fail-basic", ["fail", "--code", "1", "--stderr", None]),  # None: the salt
    ("oom", ["alloc", "--gib", "40"]),
    ("disk-limit", ["fill", "--gib", "101"]),
)
OPTIONS = (  # option, environment variable, default
    ("endpoint", "CAPTURE_ENDPOINT", None),
    ("audience", "CAPTURE_AUDIENCE", None),
    ("ca", "CAPTURE_CA", None),
    ("config-dir", "LEAN_REMOTE_CONFIG_DIR", None),
    ("socket", "LAKE_REMOTE_EXEC_SOCKET", None),
    ("toolchain", "LAKE_REMOTE_EXEC_TOOLCHAIN", None),
    ("sysroot", "LAKE_REMOTE_EXEC_SYSROOT", None),
    ("package", "CAPTURE_PACKAGE", None),
    ("fake", "CAPTURE_FAKE", None),
    ("work", "CAPTURE_WORK", None),
    ("out", "CAPTURE_OUT", None),
    ("instance", "LAKE_REMOTE_EXEC_INSTANCE", "lean"),
    ("lean-remote", "LAKE_REMOTE_EXEC_CLIENT", "lean-remote"),
    ("probe", "CAPTURE_PROBE", "/usr/local/bin/lean-build-probe"),
)


def die(msg):
    print(f"capture.py: {msg}", flush=True)
    sys.exit(1)


def parse_args():
    ap = argparse.ArgumentParser(description=__doc__.split("\n\n")[0])
    for name, var, default in OPTIONS:
        ap.add_argument("--" + name, default=os.environ.get(var) or default, help=f"(env {var})")
    args = ap.parse_args()
    missing = [n for n, _, _ in OPTIONS if not getattr(args, n.replace("-", "_"))]
    if missing:
        ap.error("missing " + ", ".join("--" + n for n in missing))
    if not re.fullmatch(r"sha256:[0-9a-f]{64}", args.toolchain):
        ap.error("--toolchain must be sha256:<64 hex>, the toolchain's digest")
    return args


def lean_platform(toolchain):
    """lean-build-probe's `leanPlatform(toolchain, "std")` (build-service/cmd/probe/action.go)."""
    return {"arch": "x86_64", "memory": "std", "os": "linux", "toolchain": toolchain}


def probe_request(args, case, child_args):
    salt = str(uuid.uuid4())
    argv = ["./" + PROBE_REL, "child"] + [salt if a is None else a for a in child_args]
    return {
        "argv": argv,
        "env": {"LEAN_BUILD_PROBE_SALT": salt},
        "inputs": [{"rel": PROBE_REL, "path": os.path.realpath(args.probe), "executable": True}],
        "outputs": ["out.olean"],
        "platform": lean_platform(args.toolchain),
        "timeoutSecs": PROBE_TIMEOUT_SECS,
        "mnemonic": case,
        "target": case,
        "skipCacheLookup": True,
    }


def timeout_request(args):
    """Lake's `run` request for module T, taken from the fake's log of a service-mode build."""
    work = os.path.abspath(args.work)
    pkg, cas, log = os.path.join(work, "pkg"), os.path.join(work, "cas"), os.path.join(work, "fake.log")
    shutil.copytree(args.package, pkg)
    with open(os.path.join(pkg, "T.lean"), "a") as f:
        f.write(f"-- capture salt {uuid.uuid4()}\n")
    env = dict(os.environ)
    for var in ("LEAN_REMOTE_CONFIG_DIR", "LAKE_REMOTE_EXEC_SOCKET", "LAKE_REMOTE_EXEC_INSTANCE"):
        env.pop(var, None)
    env.update(
        PATH=os.path.join(args.sysroot, "bin") + os.pathsep + env.get("PATH", ""),
        LAKE_REMOTE_EXEC="grpc://fake:1",
        LAKE_REMOTE_EXEC_CLIENT=os.path.abspath(args.fake),
        LAKE_REMOTE_EXEC_TOOLCHAIN=args.toolchain,
        LAKE_REMOTE_EXEC_SYSROOT=args.sysroot,
        LAKE_CACHE_DIR=os.path.join(work, "lake-cache"),
        FAKE_CAS=cas,
        FAKE_LOG=log,
    )
    lake = os.path.join(args.sysroot, "bin", "lake")
    print(f"=== FAKE BUILD: {lake} build T in {pkg}", flush=True)
    proc = subprocess.run([lake, "build", "T"], cwd=pkg, env=env, stdout=subprocess.PIPE,
                          stderr=subprocess.STDOUT, text=True, timeout=900)
    print(proc.stdout, flush=True)
    if proc.returncode != 0:
        die(f"the service-mode build through the fake exited {proc.returncode}")
    runs = [r for r in map(json.loads, open(log).read().splitlines())
            if r.get("method") == "run" and r.get("params", {}).get("target") == "T"]
    if not runs:
        die(f"the fake's log {log} holds no `run` request of T")
    print("=== FAKE ACTION (FAKE_LOG.actions)\n" + open(log + ".actions").read(), flush=True)
    params = runs[-1]["params"]
    params["timeoutSecs"] = 1
    params["skipCacheLookup"] = True
    return params


def write_config(args):
    os.makedirs(args.config_dir, mode=0o700, exist_ok=True)
    cfg = {"endpoint": args.endpoint, "audience": args.audience, "caFile": os.path.abspath(args.ca),
           "auth": {"kind": "metadata"}, "queueGraceSecs": 300}
    with open(os.path.join(args.config_dir, "config.json"), "w") as f:
        json.dump(cfg, f, indent=2)
    sock_dir = os.path.dirname(os.path.abspath(args.socket))
    os.makedirs(sock_dir, mode=0o700, exist_ok=True)
    os.chmod(sock_dir, 0o700)


class Bridge:
    def __init__(self, args):
        env = dict(os.environ, LEAN_REMOTE_CONFIG_DIR=os.path.abspath(args.config_dir))
        self.daemon_log = os.path.join(os.path.dirname(os.path.abspath(args.socket)), "daemon.log")
        self.proc = subprocess.Popen([args.lean_remote, "bridge", "--socket", args.socket], env=env,
                                     stdin=subprocess.PIPE, stdout=subprocess.PIPE, text=True)
        self.lines = queue.Queue()
        threading.Thread(target=self._read, daemon=True).start()
        self.answers = {}

    def _read(self):
        for line in self.proc.stdout:
            if line.strip():
                self.lines.put(line)
        self.lines.put(None)

    def call(self, rid, method, params):
        self.proc.stdin.write(json.dumps({"id": rid, "method": method, "params": params}) + "\n")
        self.proc.stdin.flush()
        while rid not in self.answers:
            try:
                line = self.lines.get(timeout=ANSWER_TIMEOUT_SECS)
            except queue.Empty:
                self.fail(f"no answer to request {rid} ({method}) in {ANSWER_TIMEOUT_SECS} s")
            if line is None:
                self.fail(f"the bridge closed its output before answering request {rid} ({method})")
            resp = json.loads(line)
            self.answers[resp["id"]] = resp
        return self.answers.pop(rid)

    def fail(self, msg):
        print(f"=== DAEMON LOG (last lines of {self.daemon_log})", flush=True)
        if os.path.exists(self.daemon_log):
            print("".join(open(self.daemon_log, errors="replace").readlines()[-60:]), flush=True)
        die(msg)

    def close(self):
        self.proc.stdin.close()
        try:
            self.proc.wait(timeout=120)
        except subprocess.TimeoutExpired:
            self.proc.kill()


def scrub(resp):
    """The answer with `metadata.worker` and `metadata`'s time stamps replaced by fixed text."""
    md = resp.get("result", {}).get("metadata") if isinstance(resp.get("result"), dict) else None
    if isinstance(md, dict):
        for k, v in md.items():
            if k == "worker":
                md[k] = FIXED_WORKER
            elif isinstance(v, str) and STAMP.match(v):
                md[k] = FIXED_TIME
    return resp


def save(out, case, resp):
    text = json.dumps(scrub(resp), indent=2, ensure_ascii=False) + "\n"
    with open(os.path.join(out, f"{case}.json"), "w") as f:
        f.write(text)
    digest = hashlib.sha256(text.encode()).hexdigest()
    sys.stdout.write(f"=== BEGIN {case}.json\n{text}=== END {case}.json\n=== SHA256 {case}.json {digest}\n")
    sys.stdout.flush()


def summary(resp):
    if "error" in resp:
        return f"error {resp['error'].get('code')}: {resp['error'].get('message')}"
    r = resp["result"]
    keys = sorted((r.get("metadata") or {}).keys())
    return (f"exitCode {r.get('exitCode')}, terminationSignal {r.get('terminationSignal')}, cached "
            f"{r.get('cached')}, stdoutDigest {r.get('stdoutDigest')}, stderrDigest {r.get('stderrDigest')}, "
            f"outputs {len(r.get('outputs') or [])}, metadata keys {keys}")


def main():
    args = parse_args()
    os.makedirs(args.out, exist_ok=True)
    os.makedirs(args.work, exist_ok=True)
    githash = subprocess.run([os.path.join(args.sysroot, "bin", "lean"), "--githash"], check=True,
                             stdout=subprocess.PIPE, text=True).stdout.strip()
    print(f"=== TOOLCHAIN {args.toolchain}, sysroot {args.sysroot}, githash {githash}", flush=True)
    requests = [(case, probe_request(args, case, child)) for case, child in PROBE_CASES]
    requests.append(("timeout", timeout_request(args)))

    write_config(args)
    bridge = Bridge(args)
    hello = {"protocol": 1, "endpoint": args.endpoint, "instance": args.instance,
             "toolchain": args.toolchain, "sysroot": args.sysroot, "leanGithash": githash,
             "client": {"tool": "capture.py", "version": "1"}, "invocationId": str(uuid.uuid4())}
    resp = bridge.call(0, "hello", hello)
    print("=== HELLO " + json.dumps(resp), flush=True)
    res = resp.get("result") or {}
    if "error" in resp or not res.get("reachable") or not res.get("toolchainVerified"):
        bridge.fail("the service did not accept the hello")

    for rid, (case, params) in enumerate(requests, start=1):
        print(f"=== REQUEST {case} " + json.dumps(params), flush=True)
        resp = bridge.call(rid, "run", params)
        save(args.out, case, resp)
        print(f"=== ANSWER {case}: {summary(resp)}", flush=True)
    bridge.close()
    return 0


if __name__ == "__main__":
    sys.exit(main())
