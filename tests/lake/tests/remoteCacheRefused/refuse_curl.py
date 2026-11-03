"""The `curl` for `CURL` (through a wrapper that runs it with `$PYTHON`) that sends some of the read
broker's runs (`curl ... --config FILE`) to a remote it cannot reach: by default a port of 127.0.0.1
on which nothing listens, so that each connection of the run is refused (`curl` exit code 7); with
`REFUSE_HOST`, that host name, which must not resolve (exit code 6); with `REFUSE_SILENT=1`, the
`silent` store of the same mock server, which reads each request and never answers.

`REFUSE` says which runs, counting from 1 in the order they start:
  all          every run
  from:N       the Nth run and every later one
  only:N       the Nth run alone
  until:FILE:N every run that starts while FILE has fewer than N lines
  for:SECS     every run that starts less than SECS seconds after the first run started

Each run appends a line `<number> <transfers> <start> refused|sent` to `REFUSE_LOG`, where `<start>`
is the time it started, in seconds of the monotonic clock. Every other `curl` command (one without
`--config`) runs unchanged. `REAL_CURL` is the `curl` to run, and `REFUSED_PORT` a port of 127.0.0.1
on which nothing listens.
"""

import fcntl
import os
import re
import sys
import time


def refuse(n: int, plan: str, now: float, first: float) -> bool:
    kind, _, arg = plan.partition(":")
    if kind == "all":
        return True
    if kind == "from":
        return n >= int(arg)
    if kind == "only":
        return n == int(arg)
    if kind == "until":
        path, _, count = arg.rpartition(":")
        try:
            with open(path) as f:
                lines = sum(1 for _ in f)
        except FileNotFoundError:
            lines = 0
        return lines < int(count)
    if kind == "for":
        return now - first < float(arg)
    raise SystemExit(f"refuse_curl.py: unknown REFUSE plan {plan!r}")


def main() -> None:
    args = sys.argv[1:]
    curl = os.environ["REAL_CURL"]
    if "--config" in args:
        cfg = args[args.index("--config") + 1]
        with open(os.environ["REFUSE_LOG"], "a+") as log:
            # The runs of a build can start together: number them under a lock
            fcntl.flock(log, fcntl.LOCK_EX)
            now = time.monotonic()
            log.seek(0)
            starts = [float(line.split()[2]) for line in log if line.strip()]
            n = len(starts) + 1
            with open(cfg) as f:
                text = f.read()
            refused = refuse(n, os.environ.get("REFUSE", "all"), now, starts[0] if starts else now)
            if refused:
                if os.environ.get("REFUSE_SILENT") == "1":
                    text = re.sub(
                        r'(url = "https?://127\.0\.0\.1:\d+/)[a-z]+/', r"\g<1>silent/", text
                    )
                else:
                    host = os.environ.get("REFUSE_HOST")
                    remote = host if host else f"127.0.0.1:{os.environ['REFUSED_PORT']}"
                    text = re.sub(r'(url = "https?://)127\.0\.0\.1:\d+', rf"\g<1>{remote}", text)
                with open(cfg, "w") as f:
                    f.write(text)
            transfers = len(re.findall(r"^url = ", text, re.MULTILINE))
            log.write(f"{n} {transfers} {now:.3f} {'refused' if refused else 'sent'}\n")
    os.execv(curl, [curl] + args)


if __name__ == "__main__":
    main()
