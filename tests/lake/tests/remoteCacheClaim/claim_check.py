#!/usr/bin/env python3
# Copyright (c) 2026 Lean FRO. All rights reserved.
# Released under Apache 2.0 license as described in the file LICENSE.

"""Helpers for the claim cases of `test.sh`.

Each subcommand either prints a value that the test compares, or exits non-zero
with the reason, so that a failure names what differed.
"""

import argparse
import json
import os
import re
import sys
import time

BUILT = re.compile(r"\bBuilt ([^ \n]+)")


def built_targets(logs):
    """Every target that the builds in `logs` compiled, in order, with its log."""
    targets = []
    for path in logs:
        with open(path, errors="replace") as f:
            for line in f:
                for target in BUILT.findall(line):
                    targets.append((target, path))
    return targets


def once(args):
    """Checks that the builds compiled `expect` targets, each exactly once."""
    targets = built_targets(args.logs)
    names = [t for t, _ in targets]
    repeated = {t for t in names if names.count(t) > 1}
    if repeated:
        for target, log in targets:
            if target in repeated:
                print(f"{target} compiled by {log}", file=sys.stderr)
        sys.exit(f"compiled more than once: {sorted(repeated)}")
    if args.expect is not None and len(targets) != args.expect:
        sys.exit(f"compiled {sorted(names)}, expected {args.expect} targets")
    print(len(targets))


def built_by(args):
    """Prints the number of targets that the build in `log` compiled."""
    print(len(built_targets([args.log])))


def state(args):
    """Checks the state of a claim object (one of `expect`, separated by commas), and that its
    holder and time are well-formed."""
    with open(args.file) as f:
        claim = json.load(f)
    if claim.get("state") not in args.expect.split(","):
        sys.exit(f"claim {claim}, expected state {args.expect!r}")
    if not re.fullmatch(r"[^\s:]+:[0-9]+", claim.get("holder", "")):
        sys.exit(f"claim {claim} has no `<host>:<pid>` holder")
    if not isinstance(claim.get("at"), int) or abs(claim["at"] - time.time()) > 600:
        sys.exit(f"claim {claim} has no current wall-clock time in `at`")


def wait_text(args):
    """Waits until a file contains a text."""
    deadline = time.time() + args.timeout
    while time.time() < deadline:
        if os.path.exists(args.file):
            with open(args.file, errors="replace") as f:
                if args.text in f.read():
                    return
        time.sleep(0.05)
    sys.exit(f"{args.file} does not contain {args.text!r} after {args.timeout} s")


def wait_entries(args):
    """Waits until a directory holds at least a number of entries."""
    deadline = time.time() + args.timeout
    n = 0
    while time.time() < deadline:
        n = len(os.listdir(args.dir)) if os.path.isdir(args.dir) else 0
        if n >= args.n:
            return
        time.sleep(0.05)
    sys.exit(f"{args.dir} holds {n} entries after {args.timeout} s, expected {args.n}")


def wait_file(args):
    """Waits until a path exists."""
    deadline = time.time() + args.timeout
    while time.time() < deadline:
        if os.path.exists(args.file):
            return
        time.sleep(0.05)
    sys.exit(f"{args.file} does not exist after {args.timeout} s")


def count_files(args):
    """Prints how many entries a directory holds (0 if it does not exist)."""
    print(len(os.listdir(args.dir)) if os.path.isdir(args.dir) else 0)


def fds(args):
    """Prints the open descriptors above 2 of a process that are files it did not open itself.

    Left out: the descriptors that the Lean runtime opens for itself (its event
    loop's `anon_inode` and `io_uring` handles, its pipes and sockets) and the
    files under an `--allow` prefix (the push's own cache and temporary files).
    What matters is that no file of the build, such as a lock that a wrapper
    holds, passed to the process.
    """
    dir = f"/proc/{args.pid}/fd"
    if not os.path.isdir(dir):
        sys.exit(f"{dir} does not exist; the process is gone")
    for name in sorted(os.listdir(dir), key=int):
        if int(name) <= 2:
            continue
        try:
            target = os.readlink(os.path.join(dir, name))
        except OSError:
            # The descriptor of this `listdir` itself, which is gone by now
            continue
        if not target.startswith("/") or target.startswith(("/dev/", "/proc/")):
            continue
        if any(target.startswith(prefix) for prefix in args.allow):
            continue
        print(name, target)


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    sub = parser.add_subparsers(required=True)

    p = sub.add_parser("once", help=once.__doc__)
    p.add_argument("logs", nargs="+")
    p.add_argument("--expect", type=int)
    p.set_defaults(run=once)

    p = sub.add_parser("built-by", help=built_by.__doc__)
    p.add_argument("log")
    p.set_defaults(run=built_by)

    p = sub.add_parser("state", help=state.__doc__)
    p.add_argument("file")
    p.add_argument("expect")
    p.set_defaults(run=state)

    p = sub.add_parser("wait-text", help=wait_text.__doc__)
    p.add_argument("file")
    p.add_argument("text")
    p.add_argument("--timeout", type=float, default=60)
    p.set_defaults(run=wait_text)

    p = sub.add_parser("wait-entries", help=wait_entries.__doc__)
    p.add_argument("dir")
    p.add_argument("n", type=int)
    p.add_argument("--timeout", type=float, default=60)
    p.set_defaults(run=wait_entries)

    p = sub.add_parser("wait-file", help=wait_file.__doc__)
    p.add_argument("file")
    p.add_argument("--timeout", type=float, default=60)
    p.set_defaults(run=wait_file)

    p = sub.add_parser("count-files", help=count_files.__doc__)
    p.add_argument("dir")
    p.set_defaults(run=count_files)

    p = sub.add_parser("fds", help=fds.__doc__)
    p.add_argument("pid", type=int)
    p.add_argument("--allow", action="append", default=["/tmp/"])
    p.set_defaults(run=fds)

    args = parser.parse_args()
    args.run(args)


if __name__ == "__main__":
    main()
