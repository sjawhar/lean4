#!/usr/bin/env python3
"""fake_lean_remote.py bridge [--socket S]: answers protocol 1 (contract C5.1) on stdio itself, running
each action locally in a scratch input root, for Lake's tests of service mode.

It stands in for `lean-remote bridge` and the daemon behind it, with their lifetime: end of input
means the client is gone, so the requests in flight are cancelled (answered UNAVAILABLE), no write
into the workspace starts after it, a write in progress finishes, and the fake exits once they have
returned. Like a connected bridge, it ignores SIGINT, SIGHUP, SIGTERM and SIGPIPE, so that it
outlives a client killed with its process group.

Its answers have the shapes of the live bridge's (see `recorded/`). A result names its action by a
key over the argv, environment, inline files, declared outputs, platform, working directory,
`timeoutSecs` and each input's digest and executable bit (an input by path: its file's mode, as the
bridge reads it; by digest: the request's `executable`), but not the mnemonic or the target. A stream
that is empty has no digest; `outputs` is null when the action wrote no declared output; `metadata`
has the execution's times. The action cache stores a result that exited 0, and one that exited
nonzero when the request declares outputs (a compile failure), never one that a signal ended. An
input given only by digest that the CAS lacks answers UNAVAILABLE with `missing`, as the bridge does
before it executes an action.

Knobs, all through the environment:
  FAKE_CAS            directory of the content store and the action cache; persists across Lake runs
  FAKE_LOG            file taking one JSON line per request, with the time it came as `t` (seconds
                      since the epoch), and after each `hello` its answer as a line
                      `{"answer": "hello", "reachable": …, "t": …}`; `<FAKE_LOG>.actions` takes the
                      action of each `run` that gets one: the fields of its key, each input as
                      `[rel, digest, executable]`. It names no path of this machine, so a test can
                      check that the action a client sends is the same on every machine
  FAKE_UNREACHABLE    `1`: `hello` answers `reachable: false`, as a build service that does not answer
  FAKE_UNREACHABLE_LATER  a file counting connections: `hello` answers `reachable: false` on every
                      connection after the first, as a service that stops answering mid-build
  FAKE_UNVERIFIED_LATER   the same, but every later `hello` answers with the toolchain of another
                      Lean (`toolchainGithash` 000…0, `toolchainVerified: false`)
  FAKE_GITHASH        the Lean githash the service's toolchain reports (default: the client's own
                      `leanGithash`); `toolchainVerified` is true only when it is the client's, as the
                      daemon's toolchain probe decides
  FAKE_OMIT_VERIFIED  `1`: `hello` answers without `toolchainVerified` and `toolchainGithash`
  FAKE_UNVERIFIED    `1`: `hello` reports the client's githash but toolchainVerified is false
  FAKE_HELLO_SEQUENCE `refused-later` or `mismatch-after-outage`: capabilities across connections
  FAKE_HELLO_STATE    the counter file for FAKE_HELLO_SEQUENCE
  FAKE_HELLO_DELAY_S  every `hello` answers this many seconds late
  FAKE_FIELDS         `today` (the default: the fields the live bridge sends today) or `new` (also the
                      fields of contract C5.1 v7, `terminationSignal` and `limits`), for the answers
                      of the three knobs below and of FAKE_ENFORCE_TIMEOUT
  FAKE_TIMEOUT_TARGET a target name: its `run` answers TIMEOUT, as an action that ran past its timeout
                      (`new`: the error also has `action`, `terminationSignal` and `limits`)
  FAKE_OOM_TARGET     a target name: its `run` answers a result with exit code -1 and no outputs, as an
                      action that the service killed for its memory (`new`: also `terminationSignal`
                      KILL and `limits` with `oomKills` 1)
  FAKE_DISK_TARGET    the same, as an action that filled its disk (`new`: `limits` with
                      `diskLimitExceeded` true)
  FAKE_ENFORCE_TIMEOUT targets, comma-separated, or `*` for every target: their action is killed at
                      its `timeoutSecs` and answers TIMEOUT as above (`new`: with the digests of the
                      streams it wrote); any other action runs to its end
  FAKE_UNAVAILABLE_TARGET a target name: its `run` answers UNAVAILABLE, as a service that did not answer
  FAKE_ERROR_TARGET   `TARGET:CODE`: TARGET's `run` answers an error with code CODE, any text without `:`
  FAKE_REPLAY_TARGET  a target name: its `run` answers what FAKE_REPLAY_FILE holds, as it is: a
  FAKE_REPLAY_FILE    recorded response line (`recorded/*.json`), or the `result` or `error` of one
  FAKE_EXTRA_OUTPUT_TARGET a target name: its result also names an output that the request did not
                      declare, whose blob is in the CAS
  FAKE_MALFORMED_TARGET a target name: its result's `exitCode` is a string, not a number
  FAKE_DROP_ONCE      a digest: the first `run` that gives it as an input by digest answers as if the
                      CAS lacked it, once (the marker `<FAKE_CAS>.dropped-<hash>` records it), as a
                      service that lost a blob
  FAKE_DOWN_FILE      a path: while it exists, the service is down: `hello` answers `reachable: false`
                      and every `run` and `materialize` answers UNAVAILABLE; a test removes it to
                      bring the service back
  FAKE_DOWN_AT_TARGET a target name: its first `run` creates FAKE_DOWN_FILE (once: the marker
                      `<FAKE_DOWN_FILE>.tripped` records it), as a service that stops answering mid-build
  FAKE_MATERIALIZE_FAIL `CODE:SUFFIX`: a `materialize` that names a path ending with SUFFIX answers
                      CODE (UNAVAILABLE, NOT_FOUND, INTERNAL) and writes none of its files
  FAKE_SLEEP_MS       sleep this long in every `run`, standing in for the service's latency
  FAKE_INPUT_BARRIER  file prefix: mark <prefix>.ready before reading inputs, wait for <prefix>.go
  FAKE_CONCURRENT     `1`: answer each request after `hello` on a thread of its own, as the daemon
                      does, so requests overlap (default: one at a time, in order)
  FAKE_INFLIGHT       file taking the most `run` requests that were in progress at once
  FAKE_SLOW_WRITE     a path suffix: a `materialize` write of a file whose path ends with it creates its
  FAKE_SLOW_WRITE_GO  temporary file and finishes only once the input has ended and this file exists
                      (at most 10 min later), as a write in progress when the client goes
  FAKE_PIDFILE        file taking this process's id
  FAKE_DAEMON_S       start a detached child that lives this many seconds and closes every descriptor
                      it inherited, as the daemon `lean-remote bridge` starts; its id goes to
                      `<FAKE_PIDFILE>.daemon`
  FAKE_EXIT_LOG       file taking a line `"end of input <pid>"` (a JSON string, with this process's id)
                      when the fake exits after its input ended (a fake that is killed writes none)
  FAKE_IGNORE_EOF_S   stay this many seconds after end of input before exiting, as a bridge whose
                      daemon does not close the connection
  FAKE_IGNORE_EOF_HELLO_ONLY_S  the same, for a fake that got no request but `hello` (as the bridge
                      of Lake's decision); default FAKE_IGNORE_EOF_S
"""
import datetime, hashlib, json, os, queue, shutil, signal, subprocess, sys, tempfile, threading, time

CAS = os.environ["FAKE_CAS"]
LOG = os.environ.get("FAKE_LOG")
SLEEP = float(os.environ.get("FAKE_SLEEP_MS") or 0) / 1000.0
INFLIGHT_FILE = os.environ.get("FAKE_INFLIGHT")
SLOW_WRITE = os.environ.get("FAKE_SLOW_WRITE")
SLOW_WRITE_GO = os.environ.get("FAKE_SLOW_WRITE_GO")
CANCELLED = "cancelled, because the client closed its connection"
DOWN_FILE = os.environ.get("FAKE_DOWN_FILE")
FIELDS = os.environ.get("FAKE_FIELDS") or "today"
# The `timeoutSecs` of a request that gives none
DEFAULT_TIMEOUT_S = 3600
# FAKE_DISK_TARGET's `writtenBytes`: the 101 GiB that the recorded disk-limit action (`fill --gib 101`) writes
DISK_FILL_BYTES = 101 << 30

_lock = threading.Lock()   # the in-flight counters, the log files and the CAS
_out = threading.Lock()    # whole response lines on stdout
_inflight = 0
_max_inflight = 0
_gone = threading.Event()  # end of input: the client is gone


class Err(Exception):
    """An error answer; `error` is its object, with `missing` only when it names digests (as the bridge's)."""
    def __init__(self, code, message, missing=(), **fields):
        self.error = {"code": code, "message": message, **({"missing": list(missing)} if missing else {}), **fields}


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


def blob_path(digest):
    """The CAS file of the blob with `digest`."""
    return os.path.join(CAS, digest.split("/")[0])


def put(path):
    d = file_digest(path); dst = blob_path(d)
    if not os.path.exists(dst):
        tmp = tmp_name(dst); shutil.copyfile(path, tmp); os.replace(tmp, dst)
    return d


def append_line(name, line):
    if name:
        with _lock, open(name, "a") as f: f.write(line + "\n")


def append(name, obj):
    append_line(name, json.dumps(obj, sort_keys=True))


def down():
    """Whether the service is down (FAKE_DOWN_FILE exists)."""
    return bool(DOWN_FILE) and os.path.exists(DOWN_FILE)


def check_down():
    if down(): raise Err("UNAVAILABLE", "fake: the service is down")


def named(var, target):
    """Whether the knob `var` names `target`."""
    v = os.environ.get(var)
    return bool(v) and v == target


def enforced(target):
    """Whether FAKE_ENFORCE_TIMEOUT names `target`."""
    v = os.environ.get("FAKE_ENFORCE_TIMEOUT")
    return bool(v) and (v == "*" or target in v.split(","))


def stream_digests(out, err):
    """The digests of an action's streams, as the bridge gives them: none for an empty stream."""
    return {k: f"{hashlib.sha256(b).hexdigest()}/{len(b)}" for k, b in (("stdoutDigest", out), ("stderrDigest", err))
            if b}


def metadata(queued, started, ended, done):
    """A result's `metadata`: the times (seconds since the epoch) of the execution's steps, and the worker."""
    t = lambda s: datetime.datetime.fromtimestamp(s, datetime.timezone.utc).strftime("%Y-%m-%dT%H:%M:%S.%fZ")
    return {"queued": t(queued), "workerStart": t(queued), "inputFetchStart": t(queued),
            "inputFetchCompleted": t(started), "executionStart": t(started), "executionCompleted": t(ended),
            "outputUploadStart": t(ended), "outputUploadCompleted": t(done), "workerCompleted": t(done),
            "worker": "fake"}


def limits(oom_kills, written, disk):
    return {"oomKills": oom_kills, "writtenBytes": written, "diskLimitExceeded": disk}


def timeout_error(p, action, out=b"", err=b"", written=0):
    """The TIMEOUT answer of an action that ran past its timeout."""
    msg = f"{p.get('target')}: the action ran past its timeout"
    if FIELDS != "new": return Err("TIMEOUT", msg)
    return Err("TIMEOUT", msg, action=action, **stream_digests(out, err), terminationSignal="KILL",
               limits=limits(0, written, False))


def killed(action, disk):
    """The result of an action that the service killed for its memory or, if `disk`, for filling its disk."""
    now = time.time()
    res = {"action": action, "cached": False, "exitCode": -1, "stdout": "", "stderr": "", "outputs": None,
           "metadata": metadata(now, now, now, now)}
    if FIELDS == "new":
        res["terminationSignal"] = "KILL"
        res["limits"] = limits(0, DISK_FILL_BYTES, True) if disk else limits(1, 0, False)
    return res


def replayed():
    """The answer FAKE_REPLAY_FILE holds: a whole response line, or its result or error object."""
    with open(os.environ["FAKE_REPLAY_FILE"]) as f: rec = json.load(f)
    if "error" in rec or "code" in rec: raise Err(**rec.get("error", rec))
    return rec.get("result", rec)


def undeclared():
    """An output that no request declares, with its blob in the CAS."""
    fd, tmp = tempfile.mkstemp(prefix="fake-undeclared-")
    try:
        with os.fdopen(fd, "wb") as f: f.write(b"fake: an output the request did not declare\n")
        return {"rel": "fake/undeclared.out", "digest": put(tmp), "executable": False}
    finally:
        os.remove(tmp)


def run(p):
    global _inflight, _max_inflight
    check_gone()
    target = p.get("target")
    if DOWN_FILE and named("FAKE_DOWN_AT_TARGET", target):
        with _lock:
            if not os.path.exists(DOWN_FILE + ".tripped"):
                open(DOWN_FILE + ".tripped", "w").close(); open(DOWN_FILE, "w").close()
    check_down()
    if named("FAKE_UNAVAILABLE_TARGET", target): raise Err("UNAVAILABLE", f"{target}: the service did not answer")
    error_target, sep, code = (os.environ.get("FAKE_ERROR_TARGET") or "").rpartition(":")
    if sep and error_target == target: raise Err(code, f"{target}: the service answered {code}")
    if named("FAKE_REPLAY_TARGET", target): return replayed()
    if named("FAKE_TIMEOUT_TARGET", target): raise timeout_error(p, action_digest(action_key(p)))
    if named("FAKE_OOM_TARGET", target): return killed(action_digest(action_key(p)), disk=False)
    if named("FAKE_DISK_TARGET", target): return killed(action_digest(action_key(p)), disk=True)
    with _lock:
        _inflight += 1
        if _inflight > _max_inflight:
            _max_inflight = _inflight
            if INFLIGHT_FILE:
                with open(INFLIGHT_FILE, "w") as f: f.write(str(_max_inflight))
    try:
        if SLEEP and _gone.wait(SLEEP): check_gone()
        barrier = os.environ.get("FAKE_INPUT_BARRIER")
        if barrier:
            open(barrier + ".ready", "w").close()
            deadline = time.monotonic() + 30
            while not os.path.exists(barrier + ".go"):
                if time.monotonic() >= deadline:
                    raise Err("TIMEOUT", "test input barrier was not released")
                if _gone.wait(0.01): check_gone()
        res = run_action(p)
        if named("FAKE_EXTRA_OUTPUT_TARGET", target): res = dict(res, outputs=(res["outputs"] or []) + [undeclared()])
        if named("FAKE_MALFORMED_TARGET", target): res = dict(res, exitCode=str(res["exitCode"]))
        return res
    finally:
        with _lock:
            _inflight -= 1


def executable(i):
    """An input's executable bit: by path its file's mode, as the bridge reads it; by digest the request's."""
    return os.stat(i["path"]).st_mode & 0o111 != 0 if i.get("path") else bool(i.get("executable"))


def action_key(p):
    """The key of `p`'s action in the action cache: the SHA-256 of the line it logs to FAKE_LOG.actions."""
    act = {k: p.get(k) for k in ("argv", "env", "files", "outputs", "platform", "workingDirectory")}
    act["timeoutSecs"] = p.get("timeoutSecs", DEFAULT_TIMEOUT_S)
    act["inputs"] = sorted([i["rel"], file_digest(i["path"]) if i.get("path") else i["digest"], executable(i)]
                           for i in p["inputs"])
    line = json.dumps(act, sort_keys=True)
    append_line(LOG and LOG + ".actions", line)
    return hashlib.sha256(line.encode()).hexdigest()


def action_digest(key):
    """The digest that names the action with `key` in an answer, as the bridge's."""
    return f"{key}/0"


def check_digest_inputs(p):
    """Every input given only by digest is in the CAS, or the answer is UNAVAILABLE naming those it lacks."""
    drop = os.environ.get("FAKE_DROP_ONCE")
    missing = []
    for i in p["inputs"]:
        if i.get("path") or not i.get("digest"): continue
        blob = blob_path(i["digest"])
        if not os.path.exists(blob) or (i["digest"] == drop and first_drop(blob)):
            missing.append(i["digest"])
    if missing:
        raise Err("UNAVAILABLE", f"the build service lacks {len(missing)} input blob(s) given only by digest", missing)


def first_drop(blob):
    """Whether this is the first use of FAKE_DROP_ONCE's blob file `blob`, in any fake on this CAS."""
    try:
        os.close(os.open(f"{os.path.normpath(CAS)}.dropped-{os.path.basename(blob)}",
                         os.O_CREAT | os.O_EXCL | os.O_WRONLY))
        return True
    except FileExistsError:
        return False


def kill(proc):
    """Kills an action's process and every process it started (its session)."""
    try:
        os.killpg(proc.pid, signal.SIGKILL)
    except ProcessLookupError:
        pass


def tree_bytes(root):
    return sum(os.lstat(os.path.join(d, f)).st_size for d, _, fs in os.walk(root) for f in fs)


def run_action(p):
    key = action_key(p)
    ac = os.path.join(CAS, "ac", key)
    if os.path.exists(ac) and not p.get("skipCacheLookup"):
        res = json.load(open(ac)); res["cached"] = True; return res
    if p.get("noExecute"): raise Err("NOT_FOUND", "no cached result")
    check_digest_inputs(p)
    queued = time.time()
    root = tempfile.mkdtemp(prefix="fake-root-")
    try:
        for i in p["inputs"]:
            dst = os.path.join(root, i["rel"]); os.makedirs(os.path.dirname(dst), exist_ok=True)
            shutil.copyfile(i.get("path") or blob_path(i["digest"]), dst)
            if executable(i): os.chmod(dst, 0o755)
        for f in p.get("files", []):
            dst = os.path.join(root, f["rel"]); os.makedirs(os.path.dirname(dst), exist_ok=True)
            with open(dst, "w") as h: h.write(f["contents"])
        for o in p["outputs"]: os.makedirs(os.path.join(root, os.path.dirname(o)), exist_ok=True)
        enforce = enforced(p.get("target"))
        staged = tree_bytes(root) if enforce else 0
        check_gone()
        started = time.time()
        proc = subprocess.Popen(p["argv"], cwd=root, env=dict(p.get("env") or {}),
                                stdout=subprocess.PIPE, stderr=subprocess.PIPE, start_new_session=True)
        deadline = time.monotonic() + p.get("timeoutSecs", DEFAULT_TIMEOUT_S) if enforce else None
        while True:
            try:
                out, err = proc.communicate(timeout=0.05); break
            except subprocess.TimeoutExpired:
                if _gone.is_set():
                    kill(proc); proc.communicate(); check_gone()
                if deadline is not None and time.monotonic() >= deadline:
                    kill(proc); out, err = proc.communicate()
                    raise timeout_error(p, action_digest(key), out, err, max(0, tree_bytes(root) - staged))
        ended = time.time()
        outs = [{"rel": o, "digest": put(os.path.join(root, o)), "executable": False}
                for o in p["outputs"] if os.path.exists(os.path.join(root, o))]
        res = {"action": action_digest(key), "cached": False, "exitCode": proc.returncode,
               "stdout": out.decode(), "stderr": err.decode(), **stream_digests(out, err),
               "outputs": outs or None, "metadata": metadata(queued, started, ended, time.time())}
        # As the service: a failure is stored only when the action declares outputs, never a kill.
        if proc.returncode == 0 or (proc.returncode > 0 and p["outputs"]):
            os.makedirs(os.path.dirname(ac), exist_ok=True)
            tmp = tmp_name(ac)
            with open(tmp, "w") as h: json.dump(res, h)
            os.replace(tmp, ac)
        return res
    finally:
        shutil.rmtree(root, ignore_errors=True)


def materialize(p):
    written = present = nbytes = 0
    check_down()
    fail = os.environ.get("FAKE_MATERIALIZE_FAIL")
    if fail:
        code, suffix = fail.split(":", 1)
        if any(f["path"].endswith(suffix) for f in p["files"]):
            raise Err(code, f"fake: a materialize of *{suffix} answers {code}")
    for f in p["files"]:
        check_gone()                    # no write into the workspace starts after end of input
        src = blob_path(f["digest"])
        if os.path.exists(f["path"]) and file_digest(f["path"]) == f["digest"]:
            present += 1; continue
        if not os.path.exists(src): raise Err("NOT_FOUND", "blob not in the CAS", [f["digest"]])
        os.makedirs(os.path.dirname(f["path"]), exist_ok=True)
        tmp = tmp_name(f["path"])
        if SLOW_WRITE and f["path"].endswith(SLOW_WRITE):
            open(tmp, "wb").close()     # the write has started, and it finishes
            deadline = time.monotonic() + 600
            while not (_gone.is_set() and os.path.exists(SLOW_WRITE_GO)) and time.monotonic() < deadline:
                time.sleep(0.01)
        shutil.copyfile(src, tmp)
        if file_digest(tmp) != f["digest"]: os.remove(tmp); raise Err("INTERNAL", "digest mismatch")
        os.chmod(tmp, 0o555 if f.get("executable") else 0o444); os.replace(tmp, f["path"])
        written += 1; nbytes += int(f["digest"].split("/")[1])
    return {"written": written, "present": present, "bytes": nbytes}


def hello(p):
    time.sleep(float(os.environ.get("FAKE_HELLO_DELAY_S") or 0))
    res = hello_answer(p)
    # The answer too, with its time, so a test can tell when the service answered again
    append(LOG, {"answer": "hello", "reachable": res["reachable"], "t": time.time()})
    return res


def hello_answer(p):
    sequence = os.environ.get("FAKE_HELLO_SEQUENCE")
    later = (os.environ.get("FAKE_UNREACHABLE_LATER") or os.environ.get("FAKE_UNVERIFIED_LATER")
             or os.environ.get("FAKE_HELLO_STATE"))
    nth = 1
    if later:
        with _lock, open(later, "a+") as f:
            f.seek(0); nth = len(f.read().splitlines()) + 1; f.write("hello\n")
    if down():
        return {"daemonVersion": "fake", "daemonPid": os.getpid(), "reachable": False,
                "reason": "fake: the service is down", "toolchainVerified": False}
    if (os.environ.get("FAKE_UNREACHABLE") == "1" or (nth > 1 and os.environ.get("FAKE_UNREACHABLE_LATER"))
            or (sequence == "mismatch-after-outage" and nth == 1)):
        return {"daemonVersion": "fake", "daemonPid": os.getpid(), "reachable": False,
                "reason": "fake: unreachable", "toolchainVerified": False}
    client = p.get("leanGithash") or ""
    mismatch = nth > 1 and (os.environ.get("FAKE_UNVERIFIED_LATER") or sequence == "mismatch-after-outage")
    githash = "0" * 40 if mismatch else (os.environ.get("FAKE_GITHASH") or client)
    res = {"daemonVersion": "fake", "daemonPid": os.getpid(), "reachable": True,
           "toolchainVerified": bool(githash) and githash == client}
    if githash:
        res["toolchainGithash"] = githash
    else:
        res["reason"] = "fake: no githash to verify the toolchain against"
    if os.environ.get("FAKE_OMIT_VERIFIED") == "1":
        res.pop("toolchainVerified", None); res.pop("toolchainGithash", None)
    if os.environ.get("FAKE_UNVERIFIED") == "1" or (sequence == "refused-later" and nth > 1):
        res["toolchainVerified"] = False
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
        return {"id": req["id"], "error": e.error}
    except Exception as e:                                  # never leave a client waiting
        return {"id": req["id"], "error": {"code": "INTERNAL", "message": f"{type(e).__name__}: {e}"}}


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
    if FIELDS not in ("today", "new"):
        sys.stderr.write(f"FAKE_FIELDS must be today or new, not {FIELDS}\n"); return 2
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

    greeted, requests = False, 0
    for line in sys.stdin:
        if not line.strip(): continue
        req = json.loads(line); append(LOG, dict(req, t=time.time())); requests += 1
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
    stay = os.environ.get("FAKE_IGNORE_EOF_S")
    if requests <= 1: stay = os.environ.get("FAKE_IGNORE_EOF_HELLO_ONLY_S") or stay
    time.sleep(float(stay or 0))
    append(os.environ.get("FAKE_EXIT_LOG"), f"end of input {os.getpid()}")
    return 0


if __name__ == "__main__":
    sys.exit(main())
