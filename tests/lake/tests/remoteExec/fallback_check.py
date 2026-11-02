#!/usr/bin/env python3
"""fallback_check.py: checks of the fake's log (FAKE_LOG) for the `wait` fallback cases of test.sh.

  fallback_check.py probes LOG SKIP
      After the first SKIP lines of LOG: at least three `hello` answers said unreachable; one job probed
      at a time, waiting at least 1 s and then 2 s before its probes (the gaps between the first, second
      and third unreachable answers); and no `run` was sent before a `hello` answered reachable again.
  fallback_check.py retry LOG SKIP TARGET
      After the first SKIP lines of LOG: TARGET was run exactly twice; between the two runs at least one
      `hello` answered unreachable (a new connection probed the service), and the last answer before the
      second run was reachable.
Exits 1 with the reason when a check fails.
"""
import json, sys


def entries(log, skip):
    with open(log) as f:
        return [json.loads(l) for l in f.read().splitlines()[skip:] if l.strip()]


def fail(why, es):
    print(f"FAILED: {why}")
    for e in es:
        print("  " + json.dumps(e, sort_keys=True)[:200])
    sys.exit(1)


def probes(es):
    down = [e["t"] for e in es if e.get("answer") == "hello" and not e["reachable"]]
    if len(down) < 3:
        fail(f"{len(down)} unreachable hello answers, expected at least 3", es)
    gaps = [b - a for a, b in zip(down, down[1:])]
    if gaps[0] < 0.9 or gaps[1] < 1.9:
        fail(f"the probes did not wait 1 s and then 2 s: gaps {[round(g, 2) for g in gaps]}", es)
    first_up = next((i for i, e in enumerate(es) if e.get("answer") == "hello" and e["reachable"]), None)
    if first_up is None:
        fail("no hello answered reachable", es)
    early = [e for e in es[:first_up] if e.get("method") == "run"]
    if early:
        fail(f"{len(early)} run(s) sent before the service answered again", es)
    print(f"ok: {len(down)} unreachable probes, gaps {[round(g, 2) for g in gaps]}, no run before the service answered")


def retry(es, target):
    runs = [i for i, e in enumerate(es) if e.get("method") == "run" and e["params"].get("target") == target]
    if len(runs) != 2:
        fail(f"{target} was run {len(runs)} times, expected 2", es)
    between = [e for e in es[runs[0] + 1:runs[1]] if e.get("answer") == "hello"]
    if not any(not e["reachable"] for e in between):
        fail(f"no hello answered unreachable between the two runs of {target}", es)
    if not between[-1]["reachable"]:
        fail(f"the last hello before the second run of {target} was unreachable", es)
    print(f"ok: {target} run twice, with {len(between)} hello(s) between, the last reachable")


if __name__ == "__main__":
    cmd, log, skip = sys.argv[1], sys.argv[2], int(sys.argv[3])
    es = entries(log, skip)
    if cmd == "probes":
        probes(es)
    elif cmd == "retry":
        retry(es, sys.argv[4])
    else:
        sys.exit(f"unknown check {cmd}")
