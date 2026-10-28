#!/usr/bin/env python3
"""fake_lean_remote.py bridge [--socket S]: answers protocol 1 (contract C5.1) on stdio itself, running
each action locally in a scratch input root, for Lake's tests of service mode.

It stands in for `lean-remote bridge` and the daemon behind it, with their lifetime: end of input
means the client is gone, so the requests in flight are cancelled (answered UNAVAILABLE), no write
into the workspace starts after it, a write in progress finishes, and the fake exits once they have
returned. Like a connected bridge, it ignores SIGINT, SIGHUP, SIGTERM and SIGPIPE, so that it
outlives a client killed with its process group.

Knobs, all through the environment:
  FAKE_CAS            directory of the content store and the action cache; persists across Lake runs
  FAKE_LOG            file taking one JSON line per request; `<FAKE_LOG>.actions` takes each `run`'s
                      action, which names no path of this machine, so a test can check that the
                      action a client sends is the same on every machine
  FAKE_UNREACHABLE    `1`: `hello` answers `reachable: false`, as a build service that does not answer
  FAKE_UNREACHABLE_LATER  a file counting connections: `hello` answers `reachable: false` on every
                      connection after the first, as a service that stops answering mid-build
  FAKE_UNVERIFIED_LATER   the same, but every later `hello` answers with the toolchain of another
                      Lean (`toolchainGithash` 000…0, `toolchainVerified: false`)
  FAKE_GITHASH        the Lean githash the service's toolchain reports (default: the client's own
                      `leanGithash`); `toolchainVerified` is true only when it is the client's, as the
                      daemon's toolchain probe decides
  FAKE_OMIT_VERIFIED  `1`: `hello` answers without `toolchainVerified` and `toolchainGithash`
  FAKE_TIMEOUT_TARGET a target name: its `run` answers TIMEOUT, as an action that ran past its timeout
  FAKE_OOM_TARGET     a target name: its `run` answers OOM, as an action that ran out of memory
  FAKE_DISK_TARGET    a target name: its `run` answers DISK_LIMIT, as an action that filled its disk
  FAKE_UNAVAILABLE_TARGET a target name: its `run` answers UNAVAILABLE, as a service that did not answer
  FAKE_SLEEP_MS       sleep this long in every `run`, standing in for the service's latency
  FAKE_CONCURRENT     `1`: answer each request after `hello` on a thread of its own, as the daemon
                      does, so requests overlap (default: one at a time, in order)
  FAKE_INFLIGHT       file taking the most `run` requests that were in progress at once
  FAKE_SLOW_WRITE     a path suffix: a `materialize` write of a file whose path ends with it takes
  FAKE_SLOW_WRITE_MS  this long; its temporary file exists for that time
  FAKE_PIDFILE        file taking this process's id
  FAKE_DAEMON_S       start a detached child that lives this many seconds and closes every descriptor
                      it inherited, as the daemon `lean-remote bridge` starts; its id goes to
                      `<FAKE_PIDFILE>.daemon`
  FAKE_HELLO_STAMP    file taking the time (seconds since the epoch) at which `hello` arrived
  FAKE_EXIT_LOG       file taking a line `end of input` when the fake exits after its input ended
                      (a fake that is killed writes none)
  FAKE_IGNORE_EOF_S   stay this many seconds after end of input before exiting, as a bridge whose
                      daemon does not close the connection
"""
import hashlib, json, os, queue, shutil, signal, subprocess, sys, tempfile, threading, time

CAS = os.environ["FAKE_CAS"]
LOG = os.environ.get("FAKE_LOG")
SLEEP = float(os.environ.get("FAKE_SLEEP_MS") or 0) / 1000.0
INFLIGHT_FILE = os.environ.get("FAKE_INFLIGHT")
SLOW_WRITE = os.environ.get("FAKE_SLOW_WRITE")
SLOW_WRITE_S = float(os.environ.get("FAKE_SLOW_WRITE_MS") or 0) / 1000.0
CANCELLED = "cancelled, because the client closed its connection"

_lock = threading.Lock()   # the in-flight counters, the log files and the CAS
_out = threading.Lock()    # whole response lines on stdout
_inflight = 0
_max_inflight = 0
_gone = threading.Event()  # end of input: the client is gone


class Err(Exception):
    def __init__(self, code, msg, missing=()):
        self.code, self.msg, self.missing = code, msg, list(missing)


def check_gone():
    if _gone.is_set(): raise Err("UNAVAILABLE", CANCELLED)


def file_digest(p):
    h, n = hashlib.sha256(), 0
    with open(p, "rb") as f:
        for chunk in iter(lambda: f.read(1 << 20), b""):
            h.update(chunk); n += len(chunk)
    return f"{h.hexdigest()}/{n}"


def tmp_name(path):
    return f"{path}.fake-{os.getpid()}-{threading.get_ident()}.tmp"


def put(path):
    d = file_digest(path); dst = os.path.join(CAS, d.split("/")[0])
    if not os.path.exists(dst):
        tmp = tmp_name(dst); shutil.copyfile(path, tmp); os.replace(tmp, dst)
    return d


def append(name, obj):
    if name:
        with _lock, open(name, "a") as f: f.write(json.dumps(obj, sort_keys=True) + "\n")


def run(p):
    global _inflight, _max_inflight
    check_gone()
    for var, code, what in (("FAKE_TIMEOUT_TARGET", "TIMEOUT", "the action ran past its timeout"),
                            ("FAKE_OOM_TARGET", "OOM", "the action ran out of memory"),
                            ("FAKE_DISK_TARGET", "DISK_LIMIT", "the action filled its disk"),
                            ("FAKE_UNAVAILABLE_TARGET", "UNAVAILABLE", "the service did not answer")):
        target = os.environ.get(var)
        if target and p.get("target") == target:
            raise Err(code, f"{target}: {what}")
    with _lock:
        _inflight += 1
        if _inflight > _max_inflight:
            _max_inflight = _inflight
            if INFLIGHT_FILE:
                with open(INFLIGHT_FILE, "w") as f: f.write(str(_max_inflight))
    try:
        if SLEEP and _gone.wait(SLEEP): check_gone()
        return run_action(p)
    finally:
        with _lock:
            _inflight -= 1


def run_action(p):
    act = {k: p.get(k) for k in ("argv", "env", "files", "outputs", "platform", "workingDirectory")}
    act["inputs"] = sorted([i["rel"], i.get("digest") or file_digest(i["path"])] for i in p["inputs"])
    key = hashlib.sha256(json.dumps(act, sort_keys=True).encode()).hexdigest()
    append(LOG and LOG + ".actions", act)
    ac = os.path.join(CAS, "ac", key)
    if os.path.exists(ac) and not p.get("skipCacheLookup"):
        res = json.load(open(ac)); res["cached"] = True; return res
    if p.get("noExecute"): raise Err("NOT_FOUND", "no cached result")
    root = tempfile.mkdtemp(prefix="fake-root-")
    try:
        for i in p["inputs"]:
            dst = os.path.join(root, i["rel"]); os.makedirs(os.path.dirname(dst), exist_ok=True)
            src = i.get("path") or os.path.join(CAS, i["digest"].split("/")[0])
            if not os.path.exists(src): raise Err("NOT_FOUND", "missing input", [i["digest"]])
            shutil.copyfile(src, dst)
            if i.get("executable"): os.chmod(dst, 0o755)
        for f in p.get("files", []):
            dst = os.path.join(root, f["rel"]); os.makedirs(os.path.dirname(dst), exist_ok=True)
            with open(dst, "w") as h: h.write(f["contents"])
        for o in p["outputs"]: os.makedirs(os.path.join(root, os.path.dirname(o)), exist_ok=True)
        check_gone()
        proc = subprocess.Popen(p["argv"], cwd=root, env=dict(p.get("env") or {}),
                                stdout=subprocess.PIPE, stderr=subprocess.PIPE)
        while True:
            try:
                out, err = proc.communicate(timeout=0.05); break
            except subprocess.TimeoutExpired:
                if _gone.is_set():
                    proc.kill(); proc.communicate(); check_gone()
        outs = [{"rel": o, "digest": put(os.path.join(root, o)), "executable": False}
                for o in p["outputs"] if os.path.exists(os.path.join(root, o))]
        res = {"action": f"{key}/0", "cached": False, "exitCode": proc.returncode,
               "stdout": out.decode(), "stderr": err.decode(),
               "stdoutDigest": f"{hashlib.sha256(out).hexdigest()}/{len(out)}",
               "stderrDigest": f"{hashlib.sha256(err).hexdigest()}/{len(err)}",
               "outputs": outs, "metadata": {"worker": "fake"}}
        if proc.returncode == 0:
            os.makedirs(os.path.dirname(ac), exist_ok=True)
            tmp = tmp_name(ac)
            with open(tmp, "w") as h: json.dump(res, h)
            os.replace(tmp, ac)
        return res
    finally:
        shutil.rmtree(root, ignore_errors=True)


def materialize(p):
    written = present = nbytes = 0
    for f in p["files"]:
        check_gone()                    # no write into the workspace starts after end of input
        h = f["digest"].split("/")[0]; src = os.path.join(CAS, h)
        if os.path.exists(f["path"]) and file_digest(f["path"]) == f["digest"]:
            present += 1; continue
        if not os.path.exists(src): raise Err("NOT_FOUND", "blob not in the CAS", [f["digest"]])
        os.makedirs(os.path.dirname(f["path"]), exist_ok=True)
        tmp = tmp_name(f["path"])
        if SLOW_WRITE and f["path"].endswith(SLOW_WRITE):
            open(tmp, "wb").close()     # the write has started, and it finishes
            time.sleep(SLOW_WRITE_S)
        shutil.copyfile(src, tmp)
        if file_digest(tmp) != f["digest"]: os.remove(tmp); raise Err("INTERNAL", "digest mismatch")
        os.chmod(tmp, 0o555 if f.get("executable") else 0o444); os.replace(tmp, f["path"])
        written += 1; nbytes += int(f["digest"].split("/")[1])
    return {"written": written, "present": present, "bytes": nbytes}


def hello(p):
    if os.environ.get("FAKE_HELLO_STAMP"):
        with open(os.environ["FAKE_HELLO_STAMP"], "w") as f: f.write(repr(time.time()))
    later = os.environ.get("FAKE_UNREACHABLE_LATER") or os.environ.get("FAKE_UNVERIFIED_LATER")
    nth = 1
    if later:
        with _lock, open(later, "a+") as f:
            f.seek(0); nth = len(f.read().splitlines()) + 1; f.write("hello\n")
    if os.environ.get("FAKE_UNREACHABLE") == "1" or (nth > 1 and os.environ.get("FAKE_UNREACHABLE_LATER")):
        return {"daemonVersion": "fake", "daemonPid": os.getpid(), "reachable": False,
                "reason": "fake: unreachable", "toolchainVerified": False}
    client = p.get("leanGithash") or ""
    githash = "0" * 40 if nth > 1 else (os.environ.get("FAKE_GITHASH") or client)
    res = {"daemonVersion": "fake", "daemonPid": os.getpid(), "reachable": True,
           "toolchainVerified": bool(githash) and githash == client}
    if githash:
        res["toolchainGithash"] = githash
    else:
        res["reason"] = "fake: no githash to verify the toolchain against"
    if os.environ.get("FAKE_OMIT_VERIFIED") == "1":
        res.pop("toolchainVerified", None); res.pop("toolchainGithash", None)
    return res


def answer(req, greeted):
    """The result of one request, or `Err`. `greeted`: a `hello` came before it (contract C5.1)."""
    m, p = req["method"], req.get("params", {})
    if m == "hello": return hello(p)
    if not greeted: raise Err("INVALID", f"the first request of a connection must be hello, got {m}")
    if m == "digest":
        for x in p["paths"]:
            if not os.path.exists(x): raise Err("INVALID", f"no such file: {x}")
        return {"digests": [file_digest(x) for x in p["paths"]]}
    if m == "run": return run(p)
    if m == "materialize": return materialize(p)
    raise Err("INVALID", f"unknown method {m}")


def respond(req, greeted):
    try:
        return {"id": req["id"], "result": answer(req, greeted)}
    except Err as e:
        return {"id": req["id"], "error": {"code": e.code, "message": e.msg, "missing": e.missing}}
    except Exception as e:                                  # never leave a client waiting
        return {"id": req["id"], "error": {"code": "INTERNAL", "message": f"{type(e).__name__}: {e}", "missing": []}}


def write(resp):
    with _out:
        try:
            sys.stdout.write(json.dumps(resp) + "\n"); sys.stdout.flush()
        except OSError:                 # the client is gone; answers after that go nowhere
            os.dup2(os.open(os.devnull, os.O_WRONLY), sys.stdout.fileno())


def main():
    args = sys.argv[1:]
    if not args or args[0] != "bridge":
        sys.stderr.write(f"usage: {sys.argv[0]} bridge [--socket S]\n"); return 2
    for s in (signal.SIGINT, signal.SIGHUP, signal.SIGTERM, signal.SIGPIPE): signal.signal(s, signal.SIG_IGN)
    pidfile = os.environ.get("FAKE_PIDFILE")
    if pidfile:
        with open(pidfile, "w") as f: f.write(str(os.getpid()))
    if os.environ.get("FAKE_DAEMON_S"):
        daemon = subprocess.Popen(
            [sys.executable, "-c", "import sys, time; time.sleep(float(sys.argv[1]))", os.environ["FAKE_DAEMON_S"]],
            stdin=subprocess.DEVNULL, stdout=subprocess.DEVNULL, stderr=subprocess.DEVNULL,
            close_fds=True, start_new_session=True)
        if pidfile:
            with open(pidfile + ".daemon", "w") as f: f.write(str(daemon.pid))
    os.makedirs(CAS, exist_ok=True)
    concurrent = os.environ.get("FAKE_CONCURRENT") == "1"
    work = queue.Queue()                # requests answered in order (not FAKE_CONCURRENT)
    threads = []

    def in_order():
        while (req := work.get()) is not None:
            write(respond(req, True))

    greeted = False
    for line in sys.stdin:
        if not line.strip(): continue
        req = json.loads(line); append(LOG, req)
        if not greeted:
            write(respond(req, False))
            # C5.1: a connection whose first request is not `hello` gets INVALID and closes.
            if req["method"] != "hello": return 0
            greeted = True
            if not concurrent:
                threads.append(threading.Thread(target=in_order)); threads[-1].start()
        elif concurrent:
            threads.append(threading.Thread(target=lambda r=req: write(respond(r, True))))
            threads[-1].start()
        else:
            work.put(req)
    _gone.set()
    work.put(None)
    for t in threads: t.join()
    time.sleep(float(os.environ.get("FAKE_IGNORE_EOF_S") or 0))
    append(os.environ.get("FAKE_EXIT_LOG"), "end of input")
    return 0


if __name__ == "__main__":
    sys.exit(main())
