#!/usr/bin/env python3
"""probe_check.py: checks of the re-probe of the build service under the fallback `local`, on the fake's log
(FAKE_LOG) and Lake's per-target log (LAKE_REMOTE_EXEC_LOG) of one build.

  probe_check.py --fake FAKE_LOG [--lake LAKE_LOG] [--failure hello|run:TARGET] [--until PID] CHECK...
  probe_check.py --self-test

The fake's log has a line for each request (`method`, `params`, `t`: seconds since the epoch) and, after each
`hello`, its answer (`{"answer": "hello", "reachable": …, "t": …}`). Lake's lines have `startMs` (milliseconds
since the epoch when the job's work started) and `wallMs` (from then to the line). The failure is the first
`hello` answer that said unreachable (`hello`, the default) or TARGET's first `run` (`run:TARGET`). The probes
are the `hello`s asked after the failure, in order; each answer after the failure goes to the oldest of them
not yet answered. The reachable answer is the first answer after the failure that said reachable. The build's
end is the latest `startMs + wallMs` of Lake's lines. A module is a target of a `lean` line of Lake's log.

  probes=N        at least N probes; the first at most 60 s after the failure; probe k asked at least its
                  delay (1, 2, 4, 8, 16, 30, 30 … s, less 0.1 s) after the failure (k = 1) or probe k-1's answer
  hellos=N        exactly N `hello`s asked after the failure
  down            every `hello` answer after the failure said unreachable
  up              a `hello` answer after the failure said reachable
  answered        a probe was asked, and every probe was asked and answered before the build's end (none was in
                  flight then)
  held            the last probe was asked before the build's end and has no answer
  in-flight=T     a probe was in flight (asked, not yet answered) when module T's job started
  runs=T:N        T has exactly N `run`s
  resent=T        T has exactly two `run`s, one before the reachable answer and one after it
  reconnect[=S]   after the reachable answer exactly one `hello` was asked (a new bridge; no probe follows),
                  after S (seconds since the epoch) if given, and a `run` came after it
  service         a module has a `run` after the reachable answer
  after           a module's job started more than 1 s after the reachable answer, and every such module is
                  `executed` or `cached`
  no-wait         no `local` module started more than 5 s after the latest end of the modules that started
                  before it (a module that waited for a probe would)
  promoted=I:L,…  each pair is a module I and a module L it imports; for each pair whose L is `local` and whose I
                  has a `run`, L has a `run` before I's first one (its promotion), and at least one pair is so
  inputs=DIR      an action of the fake (FAKE_LOG.actions) takes an input that is not a source file (`.lean`), and
                  each such input has the digest of an output of a `run` that the fake executed (its action cache
                  DIR/ac): no output of a compile on this machine is an input of a service action
  exit=MS         Lake exited (MS, milliseconds since the epoch) at most 3 s after the build's end: the 1 s that
                  the timer may add, and 2 s for what follows the last line under load (the end-of-build line,
                  Lake's exit, the caller's clock read)

With --until PID the logs are read again every 0.1 s until the checks pass, PID has exited, or 120 s passed.
Exits 1 with each failure when a check fails.
"""
import argparse, json, os, sys, tempfile, time

SCHEDULE = (1, 2, 4, 8, 16, 30)
FIRST_MAX_S = 60
SLACK_S = 0.1
AFTER_S = 1
NO_WAIT_MS = 5000
EXIT_MAX_S = 3
UNTIL_S = 120
LAKE_CHECKS = ("answered", "held", "in-flight", "service", "after", "no-wait", "promoted", "exit")


class Fail(Exception):
    pass


class Usage(Exception):
    pass


def read_jsonl(path):
    if not path or not os.path.exists(path):
        return []
    with open(path) as f:
        return [json.loads(l) for l in f if l.strip()]


def delay(k):
    """The delay before probe k (from 1), in seconds."""
    return SCHEDULE[min(k, len(SCHEDULE)) - 1]


def is_hello(e):
    return e.get("method") == "hello"


def is_answer(e):
    return e.get("answer") == "hello"


def is_run(e, target=None):
    return e.get("method") == "run" and (target is None or e.get("params", {}).get("target") == target)


class Logs:
    def __init__(self, fake, lake, failure):
        self.fake_path, self.lake_path = fake, lake
        self.fake = read_jsonl(fake)
        self.lake = read_jsonl(lake)
        if failure == "hello":
            found = [i for i, e in enumerate(self.fake) if is_answer(e) and not e.get("reachable")]
            self.failure_text = "the first unreachable hello answer"
        elif failure.startswith("run:"):
            found = [i for i, e in enumerate(self.fake) if is_run(e, failure[4:])]
            self.failure_text = f"{failure[4:]}'s first run"
        else:
            raise Usage(f"--failure must be hello or run:TARGET, not {failure!r}")
        self.fail_i = found[0] if found else None
        self.after = self.fake[self.fail_i + 1:] if found else []
        self.fail_t = self.fake[self.fail_i]["t"] if found else None
        self.probes, pending = [], []
        for e in self.after:
            if is_hello(e):
                p = {"t": e["t"], "answer": None, "reachable": None}
                self.probes.append(p); pending.append(p)
            elif is_answer(e) and pending:
                p = pending.pop(0)
                p["answer"], p["reachable"] = e["t"], e.get("reachable")
        up = [i for i, e in enumerate(self.after) if is_answer(e) and e.get("reachable")]
        self.up_t = self.after[up[0]]["t"] if up else None
        self.after_up = self.after[up[0] + 1:] if up else []

    def need_failure(self):
        if self.fail_i is None:
            raise Fail(f"the fake's log has no failure ({self.failure_text})")

    def need_up(self):
        self.need_failure()
        if self.up_t is None:
            raise Fail("no hello answer after the failure said reachable")

    def lean(self):
        return [l for l in self.lake if l.get("kind") == "lean"]

    def line(self, target):
        ls = [l for l in self.lean() if l.get("target") == target]
        if len(ls) != 1:
            raise Fail(f"Lake's log has {len(ls)} lean lines of {target}, not 1")
        return ls[0]

    def times(self, l):
        """A line's start and end, in seconds since the epoch."""
        s, w = l.get("startMs"), l.get("wallMs")
        if not isinstance(s, int) or not isinstance(w, int):
            raise Fail(f"a line has no whole startMs and wallMs: {json.dumps(l, sort_keys=True)}")
        return s / 1000, (s + w) / 1000

    def build_end(self):
        if not self.lake:
            raise Fail(f"Lake's log {self.lake_path} has no line")
        return max(self.times(l)[1] for l in self.lake)

    def runs(self, target):
        return [e for e in self.fake if is_run(e, target)]

    def rel(self, t):
        """`t` as seconds after the failure, for messages."""
        return "none" if t is None else f"{t - self.fail_t:+.2f} s"

    def summary(self):
        if self.fail_i is None:
            return f"no failure ({self.failure_text})"
        ps = ", ".join(f"asked {self.rel(p['t'])}, answered {self.rel(p['answer'])}"
                       + ("" if p["answer"] is None else f" ({'reachable' if p['reachable'] else 'unreachable'})")
                       for p in self.probes)
        return f"failure ({self.failure_text}); probes: {ps or 'none'}"


def check_probes(L, n):
    L.need_failure()
    ps = L.probes
    if len(ps) < n:
        raise Fail(f"{len(ps)} probe(s) after the failure, not at least {n}")
    if ps[0]["t"] - L.fail_t > FIRST_MAX_S:
        raise Fail(f"the first probe was asked {L.rel(ps[0]['t'])} after the failure, not within {FIRST_MAX_S} s")
    prev, what = L.fail_t, "the failure"
    for k, p in enumerate(ps[:n], 1):
        if p["t"] - prev < delay(k) - SLACK_S:
            raise Fail(f"probe {k} was asked {p['t'] - prev:.2f} s after {what}, not at least {delay(k)} s")
        if k < n:
            if p["answer"] is None:
                raise Fail(f"probe {k} has no answer")
            prev, what = p["answer"], f"probe {k}'s answer"


def check_hellos(L, n):
    L.need_failure()
    if len(L.probes) != n:
        raise Fail(f"{len(L.probes)} hello(s) asked after the failure, not {n}")


def check_down(L):
    L.need_failure()
    up = [e for e in L.after if is_answer(e) and e.get("reachable")]
    if up:
        raise Fail(f"{len(up)} hello answer(s) after the failure said reachable")


def check_answered(L):
    L.need_failure()
    if not L.probes:
        raise Fail("no probe after the failure")
    end = L.build_end()
    for k, p in enumerate(L.probes, 1):
        if p["answer"] is None or p["answer"] > end:
            raise Fail(f"probe {k} (asked {L.rel(p['t'])}) was not answered before the build's end "
                       f"({L.rel(end)}): answered {L.rel(p['answer'])}")


def check_held(L):
    L.need_failure()
    if not L.probes:
        raise Fail("no probe after the failure")
    p, end = L.probes[-1], L.build_end()
    if p["t"] > end:
        raise Fail(f"the last probe was asked {L.rel(p['t'])}, after the build's end ({L.rel(end)})")
    if p["answer"] is not None:
        raise Fail(f"the last probe (asked {L.rel(p['t'])}) was answered {L.rel(p['answer'])}")


def check_in_flight(L, target):
    L.need_failure()
    if not L.probes:
        raise Fail("no probe after the failure")
    s = L.times(L.line(target))[0]
    if not any(p["t"] <= s and (p["answer"] is None or p["answer"] > s) for p in L.probes):
        raise Fail(f"no probe was in flight when {target}'s job started ({L.rel(s)})")


def check_runs(L, spec):
    target, sep, n = spec.rpartition(":")
    if not sep or not n.isdigit():
        raise Usage(f"runs needs TARGET:N, not {spec!r}")
    got = len(L.runs(target))
    if got != int(n):
        raise Fail(f"{target} has {got} run(s), not {n}")


def check_resent(L, target):
    L.need_up()
    rs = L.runs(target)
    if len(rs) != 2:
        raise Fail(f"{target} has {len(rs)} run(s), not 2")
    if not rs[0]["t"] < L.up_t < rs[1]["t"]:
        raise Fail(f"{target}'s runs at {L.rel(rs[0]['t'])} and {L.rel(rs[1]['t'])} are not on both sides of "
                   f"the reachable answer ({L.rel(L.up_t)})")


def check_reconnect(L, since):
    L.need_up()
    hs = [i for i, e in enumerate(L.after_up) if is_hello(e)]
    if len(hs) != 1:
        raise Fail(f"{len(hs)} hello(s) asked after the reachable answer, not 1")
    h = L.after_up[hs[0]]
    if since is not None and h["t"] <= float(since):
        raise Fail(f"the new bridge's hello ({L.rel(h['t'])}) came before {L.rel(float(since))}")
    if not any(is_run(e) for e in L.after_up[hs[0] + 1:]):
        raise Fail("no run after the new bridge's hello")


def check_service(L):
    L.need_up()
    mods = {l.get("target") for l in L.lean()}
    if not any(is_run(e) and e["params"].get("target") in mods and e["t"] > L.up_t for e in L.fake):
        raise Fail(f"no module has a run after the reachable answer ({L.rel(L.up_t)})")


def check_after(L):
    L.need_up()
    late = [l for l in L.lean() if L.times(l)[0] > L.up_t + AFTER_S]
    if not late:
        raise Fail(f"no module started more than {AFTER_S} s after the reachable answer ({L.rel(L.up_t)})")
    bad = [l for l in late if l.get("result") not in ("executed", "cached")]
    if bad:
        raise Fail("module(s) that started more than 1 s after the reachable answer "
                   f"({L.rel(L.up_t)}) are not executed or cached: "
                   + ", ".join(f"{l['target']} {l.get('result')} (started {L.rel(L.times(l)[0])})" for l in bad))


def check_no_wait(L):
    ls = sorted(L.lean(), key=lambda l: L.times(l)[0])
    for i, l in enumerate(ls):
        if l.get("result") != "local" or i == 0:
            continue
        start = L.times(l)[0]
        before = [L.times(o)[1] for o in ls[:i] if L.times(o)[0] < start]
        if before and (start - max(before)) * 1000 > NO_WAIT_MS:
            raise Fail(f"{l['target']} started {start - max(before):.2f} s after the module before it ended")


def check_promoted(L, spec):
    pairs = [p.split(":", 1) for p in spec.split(",") if p]
    if not pairs or any(len(p) != 2 for p in pairs):
        raise Usage(f"promoted needs I:L,…, not {spec!r}")
    applied = 0
    for imp, dep in pairs:
        if L.line(dep).get("result") != "local":
            continue
        irs = L.runs(imp)
        if not irs:
            continue
        applied += 1
        if not any(e["t"] < irs[0]["t"] for e in L.runs(dep)):
            raise Fail(f"{dep} compiled locally and {imp}, which imports it, has a run, but {dep} has no run "
                       "before it (no promotion)")
    if not applied:
        raise Fail("no local module is imported by a module that has a run")


def check_inputs(L, d):
    ac = os.path.join(d, "ac")
    made = set()
    for name in sorted(os.listdir(ac)) if os.path.isdir(ac) else []:
        if not name.endswith(".tmp"):
            with open(os.path.join(ac, name)) as f:
                made |= {o.get("digest") for o in json.load(f).get("outputs") or []}
    taken = [(rel, digest) for a in read_jsonl(L.fake_path + ".actions") for rel, digest, _ in a.get("inputs") or []
             if not rel.endswith(".lean")]
    if not taken:
        raise Fail("no action of the fake's log takes an input that is not a source file")
    bad = sorted({rel for rel, digest in taken if digest not in made})
    if bad:
        raise Fail("the fake's actions take files that no run of the fake made: " + ", ".join(bad))


def check_exit(L, ms):
    if not ms.isdigit():
        raise Usage(f"exit needs milliseconds, not {ms!r}")
    end = L.build_end()
    if int(ms) / 1000 - end > EXIT_MAX_S:
        raise Fail(f"Lake exited {int(ms) / 1000 - end:.2f} s after the build's end, not within {EXIT_MAX_S} s")


CHECKS = {
    "probes": lambda L, a: check_probes(L, int(a or 1)),
    "hellos": lambda L, a: check_hellos(L, int(a)),
    "down": lambda L, a: check_down(L),
    "up": lambda L, a: L.need_up(),
    "answered": lambda L, a: check_answered(L),
    "held": lambda L, a: check_held(L),
    "in-flight": check_in_flight,
    "runs": check_runs,
    "resent": check_resent,
    "reconnect": check_reconnect,
    "service": lambda L, a: check_service(L),
    "after": lambda L, a: check_after(L),
    "no-wait": lambda L, a: check_no_wait(L),
    "promoted": check_promoted,
    "inputs": check_inputs,
    "exit": check_exit,
}
NEEDS_ARG = ("hellos", "in-flight", "runs", "resent", "promoted", "inputs", "exit")


def parse_checks(checks, lake):
    out = []
    for c in checks:
        name, _, arg = c.partition("=")
        if name not in CHECKS:
            raise Usage(f"unknown check {name!r}")
        if name in NEEDS_ARG and not arg:
            raise Usage(f"check {name} needs a value")
        if name in LAKE_CHECKS and not lake:
            raise Usage(f"check {name} needs --lake")
        out.append((c, name, arg or None))
    return out


def failures(fake, lake, failure, checks):
    """Each failed check `(check, why)`, and the logs' summary."""
    L = Logs(fake, lake, failure)
    out = []
    for c, name, arg in checks:
        try:
            CHECKS[name](L, arg)
        except Fail as e:
            out.append((c, str(e)))
    return out, L.summary()


def alive(pid):
    try:
        os.kill(pid, 0)
    except ProcessLookupError:
        return False
    except PermissionError:
        pass
    return True


def main(argv):
    p = argparse.ArgumentParser(description="checks of the re-probe (see the module docstring)")
    p.add_argument("--fake")
    p.add_argument("--lake")
    p.add_argument("--failure", default="hello")
    p.add_argument("--until", type=int)
    p.add_argument("--self-test", action="store_true")
    p.add_argument("checks", nargs="*")
    a = p.parse_args(argv)
    if a.self_test:
        return self_test()
    if not a.fake or not a.checks:
        p.error("--fake and at least one CHECK are required")
    try:
        checks = parse_checks(a.checks, a.lake)
        deadline = time.monotonic() + UNTIL_S
        while True:
            try:
                errs, summary = failures(a.fake, a.lake, a.failure, checks)
            except ValueError as e:
                # A line the fake or Lake is writing now; read again
                if a.until is None:
                    raise
                errs, summary = [("read", f"a log is not JSON yet: {e}")], ""
            if not errs or a.until is None or not alive(a.until) or time.monotonic() > deadline:
                break
            time.sleep(0.1)
    except Usage as e:
        p.error(str(e))
    if errs:
        for c, why in errs:
            print(f"probe_check: FAILED {c}: {why}")
        print(f"  {summary}")
        return 1
    print(f"probe_check: pass: {' '.join(a.checks)}; {summary}")
    return 0


T0 = 1763600000.0


def self_test():
    """Each check on small logs: a log that holds passes, and each one that breaks it fails with its reason."""
    bad = []
    with tempfile.TemporaryDirectory() as d:
        n = [0]

        def write(rows):
            n[0] += 1
            path = os.path.join(d, f"{n[0]}.jsonl")
            with open(path, "w") as f:
                for r in rows:
                    f.write(json.dumps(r, sort_keys=True) + "\n")
            return path

        def hello(t):
            return {"id": 0, "method": "hello", "params": {}, "t": T0 + t}

        def answer(t, reachable):
            return {"answer": "hello", "reachable": reachable, "t": T0 + t}

        def run(t, target):
            return {"id": 1, "method": "run", "params": {"target": target}, "t": T0 + t}

        def line(target, result, start, wall, kind="lean"):
            return {"kind": kind, "target": target, "result": result, "startMs": int((T0 + start) * 1000),
                    "wallMs": int(wall * 1000)}

        def case(name, fake, lake, checks, needle=None, failure="hello"):
            try:
                errs, _ = failures(fake, lake, failure, parse_checks(checks, lake))
                errs = [f"{c}: {w}" for c, w in errs]
            except Usage as e:
                errs = [f"usage: {e}"]
            if needle is None and errs:
                bad.append(f"{name}: expected to pass, got {errs}")
            elif needle is not None and not any(needle in e for e in errs):
                bad.append(f"{name}: expected a failure with {needle!r}, got {errs}")

        # The decision finds the service down at 0; probes at 1, 3 (answers at +0.1), the service again at 7
        k5 = write([hello(-0.1), answer(0, False), hello(1.0), answer(1.1, False), hello(3.1), answer(3.2, False),
                    hello(7.2), answer(7.3, True), hello(12.0), answer(12.1, True), run(12.2, "C2"),
                    run(14, "C3")])
        lake = write([line("C1", "local", 0.2, 11.0), line("C2", "executed", 11.3, 2.5),
                      line("C3", "executed", 13.9, 1.0)])
        case("k5's checks", k5, lake, ["probes=3", "up", "service", "after", "no-wait", f"reconnect={T0 + 7.0}"])
        case("the new bridge's hello is no probe of the schedule", k5, lake, ["probes=4"],
             "probe 4 was asked 4.70 s after probe 3's answer, not at least 8 s")
        case("no failure", write([hello(0), answer(0.1, True)]), lake, ["probes"], "has no failure")
        case("no probe", write([hello(0), answer(0.1, False)]), lake, ["probes=1"], "0 probe(s)")
        case("a first probe too late", write([answer(0, False), hello(61)]), lake, ["probes"], "not within 60 s")
        case("a first probe too soon", write([answer(0, False), hello(0.5)]), lake, ["probes"], "not at least 1 s")
        case("a second probe too soon", write([answer(0, False), hello(1), answer(1.1, False), hello(2.0)]), lake,
             ["probes=2"], "probe 2 was asked 0.90 s after probe 1's answer, not at least 2 s")
        case("an unanswered probe before the next", write([answer(0, False), hello(1), hello(3.5)]), lake,
             ["probes=2"], "probe 1 has no answer")
        case("the hellos after the failure", k5, lake, ["hellos=4"])
        case("one hello too many", k5, lake, ["hellos=3"], "4 hello(s) asked after the failure, not 3")
        case("down", k5, lake, ["down"], "said reachable")
        case("down holds", write([answer(0, False), hello(1), answer(1.1, False)]), lake, ["down"])
        case("never up", write([answer(0, False), hello(1), answer(1.1, False)]), lake, ["up"], "said reachable")
        case("a failure that is a run", write([hello(0), answer(0.1, True), run(1, "B"), hello(2.1),
                                               answer(2.2, False)]), lake, ["probes"], failure="run:B")
        case("a run failure whose probe is too soon", write([run(1, "B"), hello(1.5)]), lake, ["probes"],
             "not at least 1 s", failure="run:B")
        case("a bad failure", k5, lake, ["probes"], "usage: --failure", failure="nope")

        # S9 and S10: the build ends at 11.2
        end_lake = write([line("A", "local", 0.2, 2.0), line("S", "local", 0.2, 11.0)])
        answered = write([answer(0, False), hello(1), answer(1.1, False), hello(3.1), answer(3.2, False),
                          hello(7.2), answer(7.3, False)])
        held = write([answer(0, False), hello(1)])
        case("every probe answered", answered, end_lake, ["answered", "exit=%d" % int((T0 + 12.5) * 1000)])
        case("a probe in flight at the end", held, end_lake, ["answered"], "was not answered before the build's end")
        case("a probe after the end", write([answer(0, False), hello(12), answer(12.1, False)]), end_lake,
             ["answered"], "was not answered before the build's end")
        case("no probe to answer", write([answer(0, False)]), end_lake, ["answered"], "no probe after the failure")
        case("held", held, end_lake, ["held"])
        case("held, but answered", answered, end_lake, ["held"], "was answered")
        case("held, but asked after the end", write([answer(0, False), hello(12)]), end_lake, ["held"],
             "after the build's end")
        case("a late exit", answered, end_lake, ["exit=%d" % int((T0 + 14.5) * 1000)], "not within 3 s")
        case("exit needs --lake", answered, None, ["exit=1"], "usage: check exit needs --lake")
        case("a log line with no times", answered, write([{"kind": "lean", "target": "A", "result": "local",
                                                           "wallMs": 10}]), ["answered"], "no whole startMs")

        # S8: Q2 starts at 3.5 while the probe asked at 1 is held
        q_lake = write([line("Q1", "local", 0.2, 3.2), line("Q2", "local", 3.5, 3.1), line("Q3", "local", 6.7, 0.4)])
        case("in flight", held, q_lake, ["in-flight=Q2", "no-wait"])
        case("not in flight", answered, q_lake, ["in-flight=Q2"], "no probe was in flight when Q2's job started")
        case("no probe at all", write([answer(0, False)]), write([{"kind": "lean", "target": "Q2", "result": "local"}]),
             ["in-flight=Q2"], "no probe after the failure")
        case("a module that waited", answered, write([line("Q1", "local", 0.2, 3.2), line("Q2", "local", 9.0, 1.0)]),
             ["no-wait"], "Q2 started 5.60 s after the module before it ended")
        case("a module with no line", held, q_lake, ["in-flight=Q9"], "0 lean lines of Q9")

        # S3: Sl's request in flight across the probe's reachable answer, sent once more after it
        s3 = write([hello(-1), answer(-0.9, True), run(-0.5, "Sl"), run(0, "U"), hello(1.0), answer(1.1, True),
                    hello(1.5), answer(1.6, True), run(1.7, "Sl")])
        case("resent", s3, lake, ["resent=Sl", "runs=Sl:2", "runs=U:1"], failure="run:U")
        case("not resent", s3, lake, ["resent=U"], "U has 1 run(s), not 2", failure="run:U")
        case("runs counted", s3, lake, ["runs=Sl:1"], "Sl has 2 run(s), not 1", failure="run:U")
        case("resent before the answer", write([run(-0.5, "Sl"), run(0, "U"), run(0.5, "Sl"), hello(1.0),
                                                answer(1.1, True)]), lake, ["resent=Sl"],
             "are not on both sides", failure="run:U")

        # S5: the old bridge exited at 1.15; the new one says hello at 1.5
        case("reconnect", s3, lake, [f"reconnect={T0 + 1.15}"], failure="run:U")
        case("reconnect before the old bridge's exit", s3, lake, [f"reconnect={T0 + 1.55}"], "came before",
             failure="run:U")
        case("a probe after the reachable answer", write([answer(0, False), hello(1), answer(1.1, True), hello(1.5),
                                                         answer(1.6, True), hello(3.5), answer(3.6, True),
                                                         run(4, "C2")]), lake, ["reconnect"],
             "2 hello(s) asked after the reachable answer, not 1")
        case("no run after the new hello", write([answer(0, False), hello(1), answer(1.1, True), hello(2)]), lake,
             ["reconnect"], "no run after the new bridge's hello")

        # S12 and k5: the modules after the service answered again
        case("no run after the answer", write([answer(0, False), hello(1), answer(1.1, True)]), lake, ["service"],
             "no module has a run after")
        case("a run of no module", write([answer(0, False), hello(1), answer(1.1, True), run(2, "X")]), lake,
             ["service"], "no module has a run after")
        case("a local module after the answer", k5, write([line("C1", "local", 0.2, 11.0),
                                                          line("C2", "local", 11.3, 2.5)]), ["after"],
             "C2 local (started +11.30 s)")
        case("a local module within 1 s of the answer", k5, write([line("C1", "local", 0.2, 7.8),
                                                                  line("C2", "local", 8.1, 1.0),
                                                                  line("C3", "executed", 9.5, 1.0)]), ["after"])
        case("no module after the answer", k5, write([line("C1", "local", 0.2, 7.8)]), ["after"],
             "no module started more than 1 s after the reachable answer")

        # k5's promotion order: C1 local, imported by C2, which ran on the service
        chain = "C2:C1,C3:C2"
        promo = write([answer(0, False), hello(1), answer(1.1, True), run(12.0, "C1"), run(12.5, "C2"),
                       run(14, "C3")])
        case("promoted", promo, lake, [f"promoted={chain}"])
        case("not promoted", k5, lake, [f"promoted={chain}"], "C1 compiled locally and C2")
        case("promoted after its importer", write([answer(0, False), run(12.5, "C2"), run(13, "C1")]), lake,
             [f"promoted={chain}"], "no run before it")
        case("nothing to promote", k5, write([line("C1", "executed", 0.2, 1.0), line("C2", "executed", 1.3, 1.0),
                                              line("C3", "executed", 2.4, 1.0)]), [f"promoted={chain}"],
             "no local module is imported")
        case("a bad pair", k5, lake, ["promoted=C2"], "usage: promoted needs")

        # The inputs of the fake's actions: a source file, and C1's olean as the fake's run made it or as this
        # machine compiled it
        cas = os.path.join(d, "cas")
        os.makedirs(os.path.join(cas, "ac"))
        svc, local = "c" * 64 + "/300", "d" * 64 + "/300"
        with open(os.path.join(cas, "ac", "a" * 64), "w") as f:
            json.dump({"action": "a" * 64 + "/0",
                       "outputs": [{"rel": "lib/chain/Chain/C1.olean", "digest": svc, "executable": False}]}, f)
        src = ["src/Chain/C2.lean", "e" * 64 + "/40", False]

        def acted(*inputs):
            fake = write([answer(0, False)])
            with open(fake + ".actions", "w") as f:
                f.write(json.dumps({"argv": ["lean"], "inputs": list(inputs), "timeoutSecs": 3600}, sort_keys=True)
                        + "\n")
            return fake

        fake = acted(src, ["lib/chain/Chain/C1.olean", svc, False])
        case("inputs that the fake's runs made", fake, None, [f"inputs={cas}"])
        case("a local olean as an input", acted(src, ["lib/chain/Chain/C1.olean", local, False]), None,
             [f"inputs={cas}"], "no run of the fake made: lib/chain/Chain/C1.olean")
        case("no input but a source file", acted(src), None, [f"inputs={cas}"], "takes an input that is not a source")
        case("no action cache", fake, None, [f"inputs={os.path.join(d, 'none')}"], "no run of the fake made")
        case("an unknown check", fake, None, ["nope"], "usage: unknown check")
        case("a check without its value", fake, None, ["runs"], "usage: check runs needs a value")
    for b in bad:
        print(f"probe_check self-test: FAILED {b}")
    if bad:
        return 1
    print("probe_check self-test: pass")
    return 0


if __name__ == "__main__":
    sys.exit(main(sys.argv[1:]))
