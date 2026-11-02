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


def states(dir):
    """Each claim file of a directory with its state."""
    for name in sorted(os.listdir(dir)) if os.path.isdir(dir) else []:
        try:
            with open(os.path.join(dir, name)) as f:
                yield name, json.load(f).get("state")
        except Exception:
            continue


def wait_state(args):
    """Waits until a claim of a directory is in a state."""
    deadline = time.time() + args.timeout
    while time.time() < deadline:
        if any(s == args.state for _, s in states(args.dir)):
            return
        time.sleep(0.05)
    sys.exit(f"no claim of {args.dir} is {args.state!r} after {args.timeout} s")


def wait_no_state(args):
    """Waits until no claim of a directory is in a state, and some claim exists."""
    deadline = time.time() + args.timeout
    while time.time() < deadline:
        seen = list(states(args.dir))
        if seen and not any(s == args.state for _, s in seen):
            return
        time.sleep(0.05)
    sys.exit(f"a claim of {args.dir} is still {args.state!r} after {args.timeout} s")


def first_state(args):
    """Prints the name of the first claim of a directory in a state."""
    for name, s in states(args.dir):
        if s == args.state:
            print(name)
            return
    sys.exit(f"no claim of {args.dir} is {args.state!r}")


def count_files(args):
    """Prints how many entries a directory holds (0 if it does not exist)."""
    print(len(os.listdir(args.dir)) if os.path.isdir(args.dir) else 0)


def parity_pair(args):
    """Prints the first of `targets` whose input hash in the queue is even and the first whose
    input hash is odd, or fails if the queue has them of one parity only. Two builds that share
    out inputs give each input to one of them by its hash, so of two such inputs each build owns
    one, whichever of the two sorts first."""
    hashes = {}
    with open(args.queue) as f:
        for line in f:
            if line.strip():
                entry = json.loads(line)
                hashes[entry["target"]] = entry["inputHash"]
    first = {}
    for target in args.targets:
        first.setdefault(int(hashes[target], 16) % 2, target)
    if len(first) < 2:
        sys.exit("the input hashes of %s are all %s" % (args.targets, "odd" if 1 in first else "even"))
    print(first[0], first[1])


def owner(args):
    """Prints which of the holders `holders` owns the input `hash`, as a build that has seen them
    all gives it out: the holders in order, the hash picking one."""
    holders = sorted(args.holders)
    print(holders[int(args.hash, 16) % len(holders)])


def temp_roots(pid):
    """The directories in which a process makes its temporary files: `/tmp`, and the first of
    `TMPDIR`, `TMP`, `TEMP` and `TEMPDIR` that its environment sets to a non-empty value, which
    libuv's `uv_os_tmpdir` (behind Lean's `IO.FS.createTempFile`) takes instead of `/tmp`. A
    descriptor names its file by its real path, so the directory counts by its real path as well."""
    try:
        with open(f"/proc/{pid}/environ", "rb") as f:
            env = dict(var.split(b"=", 1) for var in f.read().split(b"\0") if b"=" in var)
    except OSError:
        env = {}
    roots = ["/tmp/"]
    for name in (b"TMPDIR", b"TMP", b"TEMP", b"TEMPDIR"):
        if env.get(name):
            dir = os.fsdecode(env[name])
            roots += [os.path.join(dir, ""), os.path.join(os.path.realpath(dir), "")]
            break
    return roots


def fds(args):
    """Prints the open descriptors above 2 of a process that are files it did not open itself.

    Left out: the descriptors that the Lean runtime opens for itself (its event
    loop's `anon_inode` and `io_uring` handles, its pipes and sockets), the
    files under an `--allow` prefix (the push's own cache) and those in the
    process's temporary directory (see `temp_roots`), such as `curl`'s
    configuration. What matters is that no file of the build, such as a lock
    that a wrapper holds, passed to the process.
    """
    dir = f"/proc/{args.pid}/fd"
    if not os.path.isdir(dir):
        sys.exit(f"{dir} does not exist; the process is gone")
    allow = args.allow + temp_roots(args.pid)
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
        if any(target.startswith(prefix) for prefix in allow):
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

    p = sub.add_parser("wait-state", help=wait_state.__doc__)
    p.add_argument("dir")
    p.add_argument("state")
    p.add_argument("--timeout", type=float, default=60)
    p.set_defaults(run=wait_state)

    p = sub.add_parser("wait-no-state", help=wait_no_state.__doc__)
    p.add_argument("dir")
    p.add_argument("state")
    p.add_argument("--timeout", type=float, default=60)
    p.set_defaults(run=wait_no_state)

    p = sub.add_parser("first-state", help=first_state.__doc__)
    p.add_argument("dir")
    p.add_argument("state")
    p.set_defaults(run=first_state)

    p = sub.add_parser("parity-pair", help=parity_pair.__doc__)
    p.add_argument("queue")
    p.add_argument("targets", nargs="+")
    p.set_defaults(run=parity_pair)

    p = sub.add_parser("owner", help=owner.__doc__)
    p.add_argument("hash")
    p.add_argument("holders", nargs="+")
    p.set_defaults(run=owner)

    p = sub.add_parser("fds", help=fds.__doc__)
    p.add_argument("pid", type=int)
    p.add_argument("--allow", action="append", default=[])
    p.set_defaults(run=fds)

    args = parser.parse_args()
    args.run(args)


if __name__ == "__main__":
    main()
