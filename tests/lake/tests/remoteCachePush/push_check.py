#!/usr/bin/env python3
# Copyright (c) 2026 Lean FRO. All rights reserved.
# Released under Apache 2.0 license as described in the file LICENSE.

"""Helpers for the `lake cache push` cases of `test.sh`.

The queue is `<cache>/push.jsonl` and its lock `<cache>/push.jsonl.lock`
(an exclusive `flock`), as Lake writes them.
"""

import argparse
import fcntl
import json
import os
import re
import sys
import time
from urllib.parse import unquote


def queue_entries(queue):
    if not os.path.exists(queue):
        return []
    with open(queue) as f:
        return [json.loads(line) for line in f if line.strip()]


def puts(log):
    """The PUT requests in a mock server log, in order, as (path, status)."""
    requests = []
    with open(log) as f:
        for line in f:
            m = re.match(r"PUT (\S+) -> (\S+) ", line)
            if m:
                requests.append((m.group(1), m.group(2)))
    return requests


def order(args):
    """Checks that each mapping was uploaded after the artifacts it names, and
    prints the number of mappings uploaded (or already present)."""
    artifacts = set()
    mappings = 0
    for path, status in puts(args.log):
        if status not in ("200", "412"):
            continue
        if "/a/" in path:
            artifacts.add(path.rsplit("/a/", 1)[1])
        elif "/in/" in path:
            # `/<fault mode>/<store path>`
            stored = os.path.join(args.store, *unquote(path).split("/")[2:])
            with open(stored) as f:
                mapping = json.load(f)
            for digest in mapping["sha256"].values():
                if digest + ".art" not in artifacts:
                    sys.exit(f"{path} was uploaded before its artifact {digest}.art")
            mappings += 1
    print(mappings)


def duplicates(args):
    """Prints the number of objects that were uploaded more than once."""
    paths = [path for path, _ in puts(args.log)]
    print(sum(1 for path in set(paths) if paths.count(path) > 1))


def same_inputs(args):
    """Checks that the queue names exactly the input hashes of the local mappings."""
    queued = sorted(e["inputHash"] for e in queue_entries(args.queue))
    mapped = sorted(n[: -len(".json")] for n in os.listdir(args.outputs) if n.endswith(".json"))
    if queued != mapped:
        sys.exit(f"queued inputs {queued} differ from the cached mappings {mapped}")


def entry(args):
    """Prints a field of the queue's only entry."""
    entries = queue_entries(args.queue)
    if len(entries) != 1:
        sys.exit(f"expected one queue entry, found {len(entries)}")
    value = entries[0][args.field]
    print(value if isinstance(value, str) else json.dumps(value))


def data(args):
    """Prints the `data` of the queue's only entry for a target."""
    entries = [e for e in queue_entries(args.queue) if e["target"] == args.target]
    if len(entries) != 1:
        sys.exit(f"expected one queue entry for {args.target}, found {len(entries)}")
    print(entries[0]["data"])


def artifacts(args):
    """Prints each cache artifact that the queue's only entry for a target names."""
    entries = [e for e in queue_entries(args.queue) if e["target"] == args.target]
    if len(entries) != 1:
        sys.exit(f"expected one queue entry for {args.target}, found {len(entries)}")

    def names(value):
        if isinstance(value, str):
            yield value
        elif isinstance(value, list):
            for v in value:
                yield from names(v)
        elif isinstance(value, dict):
            for v in value.values():
                yield from names(v)

    for name in names(entries[0]["data"]):
        print(name)


def inputs(args):
    """Prints the input hash of each queue entry for a target."""
    for e in queue_entries(args.queue):
        if e["target"] == args.target:
            print(e["inputHash"])


def status(args):
    """Checks the counts of `remote-status-push.json`."""
    with open(args.file) as f:
        got = json.load(f)
    want = {
        "pushed": args.pushed,
        "failed": args.failed,
        "dropped": args.dropped,
        "queued": args.queued,
        "rc": 0 if args.queued == 0 else 1,
    }
    if {k: got[k] for k in want} != want:
        sys.exit(f"push status {got}, expected {want}")
    # `at` is the wall-clock time of the push, in seconds since the Unix epoch
    if not isinstance(got.get("at"), int) or abs(got["at"] - time.time()) > 600:
        sys.exit(f"push status {got} has no current wall-clock time in `at`")


def dropped(args):
    """Prints the number of records in `push-dropped.jsonl` with a reason."""
    n = 0
    if os.path.exists(args.file):
        with open(args.file) as f:
            for line in f:
                if line.strip() and json.loads(line)["reason"] == args.reason:
                    n += 1
    print(n)


def wait_text(args):
    """Waits until one of the files contains a text, and prints that file."""
    deadline = time.time() + args.timeout
    while time.time() < deadline:
        for path in args.files:
            if os.path.exists(path):
                with open(path, errors="replace") as f:
                    if args.text in f.read():
                        print(path)
                        return
        time.sleep(0.05)
    sys.exit(f"none of {args.files} contains {args.text!r} after {args.timeout} s")


def locked(cache, update):
    """Runs `update` on the queue's lines (bytes, each with its line feed) under the
    queue's lock, as Lake does."""
    with open(os.path.join(cache, "push.jsonl.lock"), "a") as lock:
        fcntl.flock(lock, fcntl.LOCK_EX)
        try:
            queue = os.path.join(cache, "push.jsonl")
            if os.path.exists(queue):
                with open(queue, "rb") as f:
                    lines = f.read().splitlines(keepends=True)
            else:
                lines = []
            lines = update(lines)
            if lines is not None:
                with open(queue, "wb") as f:
                    f.writelines(lines)
        finally:
            fcntl.flock(lock, fcntl.LOCK_UN)


def take_last(args):
    """Moves the queue's last non-empty line into a file."""

    def update(lines):
        i = max(i for i, line in enumerate(lines) if line.strip())
        with open(args.out, "wb") as f:
            f.write(lines[i])
        return lines[:i] + lines[i + 1 :]

    locked(args.cache, update)


def append(args):
    """Appends the bytes of a file to the queue, as they are."""
    with open(args.line, "rb") as f:
        line = f.read()
    locked(args.cache, lambda lines: lines + [line])


def repeat(args):
    """Repeats each non-empty line of the queue `n` times."""
    locked(args.cache, lambda lines: [line for line in lines if line.strip() for _ in range(args.n)])


def spread(args):
    """Replaces each non-empty line of the queue with `n` copies, each for an input hash of its own,
    so that each copy uploads a mapping of its own (and the artifacts that the copies share)."""

    def update(lines):
        out = []
        for line in lines:
            if not line.strip():
                continue
            for i in range(args.n):
                e = json.loads(line)
                e["inputHash"] = "%08x%08x" % (i, int(e["inputHash"][:8], 16))
                out.append((json.dumps(e, separators=(",", ":")) + "\n").encode())
        return out

    locked(args.cache, update)


def wait_fewer(args):
    """Waits until the queue has fewer than `n` entries, and prints how many it has then."""
    deadline = time.time() + args.timeout
    while time.time() < deadline:
        if len(queue_entries(args.queue)) < args.n:
            break
        time.sleep(0.1)
    print(len(queue_entries(args.queue)))


def wait_puts(args):
    """Waits until a mock server log holds `n` successful `PUT`s of objects whose path contains
    `text`, and prints how many it holds then."""
    deadline = time.time() + args.timeout
    n = 0
    while time.time() < deadline:
        n = sum(1 for path, status in puts(args.log) if args.text in path and status == "200")
        if n >= args.n:
            break
        time.sleep(0.1)
    print(n)


def flip(args):
    """Changes the last byte of a file in place, through any hard link to it."""
    os.chmod(args.file, 0o644)
    with open(args.file, "r+b") as f:
        f.seek(-1, os.SEEK_END)
        byte = f.read(1)[0]
        f.seek(-1, os.SEEK_END)
        f.write(bytes([byte ^ 0xFF]))


def mappings(args):
    """Checks that every mapping of a cache parses as JSON, and prints how many there are."""
    n = 0
    for root, _, files in os.walk(os.path.join(args.cache, "outputs")):
        for name in files:
            path = os.path.join(root, name)
            try:
                with open(path) as f:
                    json.load(f)
            except Exception as e:
                sys.exit(f"{path} is not whole JSON: {e}")
            n += 1
    if n == 0:
        sys.exit(f"{args.cache} holds no mapping")
    print(n)


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    sub = parser.add_subparsers(required=True)
    p = sub.add_parser("mappings")
    p.add_argument("cache")
    p.set_defaults(run=mappings)
    p = sub.add_parser("order")
    p.add_argument("log")
    p.add_argument("store")
    p.set_defaults(run=order)
    p = sub.add_parser("same-inputs")
    p.add_argument("queue")
    p.add_argument("outputs")
    p.set_defaults(run=same_inputs)
    p = sub.add_parser("duplicates")
    p.add_argument("log")
    p.set_defaults(run=duplicates)
    p = sub.add_parser("entry")
    p.add_argument("queue")
    p.add_argument("field")
    p.set_defaults(run=entry)
    p = sub.add_parser("data")
    p.add_argument("queue")
    p.add_argument("target")
    p.set_defaults(run=data)
    p = sub.add_parser("artifacts")
    p.add_argument("queue")
    p.add_argument("target")
    p.set_defaults(run=artifacts)
    p = sub.add_parser("inputs")
    p.add_argument("queue")
    p.add_argument("target")
    p.set_defaults(run=inputs)
    p = sub.add_parser("status")
    p.add_argument("file")
    for count in ("pushed", "failed", "dropped", "queued"):
        p.add_argument(count, type=int)
    p.set_defaults(run=status)
    p = sub.add_parser("dropped")
    p.add_argument("file")
    p.add_argument("reason")
    p.set_defaults(run=dropped)
    p = sub.add_parser("wait-text")
    p.add_argument("timeout", type=float)
    p.add_argument("text")
    p.add_argument("files", nargs="+")
    p.set_defaults(run=wait_text)
    p = sub.add_parser("take-last")
    p.add_argument("cache")
    p.add_argument("out")
    p.set_defaults(run=take_last)
    p = sub.add_parser("append")
    p.add_argument("cache")
    p.add_argument("line")
    p.set_defaults(run=append)
    p = sub.add_parser("repeat")
    p.add_argument("cache")
    p.add_argument("n", type=int)
    p.set_defaults(run=repeat)
    p = sub.add_parser("spread")
    p.add_argument("cache")
    p.add_argument("n", type=int)
    p.set_defaults(run=spread)
    p = sub.add_parser("wait-fewer")
    p.add_argument("timeout", type=float)
    p.add_argument("queue")
    p.add_argument("n", type=int)
    p.set_defaults(run=wait_fewer)
    p = sub.add_parser("wait-puts")
    p.add_argument("timeout", type=float)
    p.add_argument("log")
    p.add_argument("text")
    p.add_argument("n", type=int)
    p.set_defaults(run=wait_puts)
    p = sub.add_parser("flip")
    p.add_argument("file")
    p.set_defaults(run=flip)
    args = parser.parse_args()
    args.run(args)


if __name__ == "__main__":
    main()
