#!/usr/bin/env python3
"""lines_check.py: checks a LAKE_REMOTE_EXEC_LOG file against the lines a test expects.

  lines_check.py LOG [--modules M,...] [--expect 'TARGETS:RULES']... [--same-as 'OTHER:FIELD,...']...
  lines_check.py --self-test

Every line of LOG is a JSON object with every field of the log line, each of its type: `kind`, `target`,
`result`, `action` (a digest `<64 hex>/<size>` or null), `outputs` (a non-empty object of digests or
null), `exitCode`, `terminationSignal`, `stdoutDigest`, `stderrDigest`, `code`, `limits`, `wallMs` and
`startMs` (milliseconds since the epoch). `code` is set on `error` lines and null on every other line.

  --modules M,...     exactly one line of kind `lean` for each module M, and no other `lean` line
  --expect T:RULES    every line whose target is T follows RULES, and T has at least one line. T is a
                      target, `A|B` (both), or `*` (every line). RULES are comma-separated: FIELD=VALUES
                      (`|` separates alternatives), FIELD!=VALUES, FIELD>=N or FIELD>N, where FIELD may
                      name a field of an object field (`limits.oomKills`). A value is `null`, `true`,
                      `false`, an integer, `digest`, `digests` (a non-empty object of digests), `object`,
                      or else the text itself. `rest=null`: every field that no other rule names is null,
                      but `kind`, `target`, `result`, `wallMs` and `startMs`.
  --same-as O:F,...   every line has one line of the same kind and target in the log O, with the same
                      fields F,...
"""
import argparse, json, os, re, sys, tempfile

DIGEST = re.compile(r"[0-9a-f]{64}/[0-9]+")
KINDS = ("lean", "c", "shared")
RESULTS = ("cached", "executed", "local-cache", "local", "toolchain-mismatch", "bucket", "import-failed",
           "timeout", "oom", "disk-limit", "error")
LIMITS = {"oomKills": int, "writtenBytes": int, "diskLimitExceeded": bool}
# Not covered by `rest=null`: they have a value on every line
ALWAYS = ("kind", "target", "result", "wallMs", "startMs")
RULE = re.compile(r"([A-Za-z][A-Za-z0-9.]*)(!=|>=|>|=)(.*)")
MISSING = object()


def is_int(v):
    return isinstance(v, int) and not isinstance(v, bool)


def is_digest(v):
    return isinstance(v, str) and DIGEST.fullmatch(v) is not None


def is_digests(v):
    return isinstance(v, dict) and bool(v) and all(isinstance(k, str) and is_digest(d) for k, d in v.items())


def is_limits(v):
    return isinstance(v, dict) and all(k not in v or (is_int(v[k]) if t is int else isinstance(v[k], t))
                                       for k, t in LIMITS.items())


def text(v):
    return isinstance(v, str) and v != ""


def nullable(p):
    return lambda v: v is None or p(v)


# Each field of the log line: its type, and how a failure names it
FIELDS = {
    "kind": (lambda v: v in KINDS, "one of " + ", ".join(KINDS)),
    "target": (text, "a non-empty string"),
    "result": (lambda v: v in RESULTS, "one of " + ", ".join(RESULTS)),
    "action": (nullable(is_digest), "a digest or null"),
    "outputs": (nullable(is_digests), "a non-empty object of digests or null"),
    "exitCode": (nullable(is_int), "an integer or null"),
    "terminationSignal": (nullable(text), "a non-empty string or null"),
    "stdoutDigest": (nullable(is_digest), "a digest or null"),
    "stderrDigest": (nullable(is_digest), "a digest or null"),
    "code": (nullable(text), "a non-empty string or null"),
    "limits": (nullable(is_limits), "a limits object or null"),
    "wallMs": (lambda v: is_int(v) and v >= 0, "a whole number"),
    "startMs": (lambda v: is_int(v) and v >= 10 ** 12, "milliseconds since the epoch"),
}


class Usage(Exception):
    pass


def show(line):
    return json.dumps(line, sort_keys=True)


def read_log(path):
    """The lines of the log at `path` as objects, and the errors of those that are not."""
    if not os.path.exists(path):
        return [], [f"{path} does not exist (no line was written)"]
    lines, errors = [], []
    with open(path) as f:
        for n, raw in enumerate(f, 1):
            if not raw.strip():
                continue
            try:
                line = json.loads(raw)
            except ValueError as e:
                errors.append(f"line {n} is not JSON ({e}): {raw.rstrip()}")
                continue
            if isinstance(line, dict):
                lines.append(line)
            else:
                errors.append(f"line {n} is not an object: {raw.rstrip()}")
    return lines, errors


def schema_errors(line):
    errors = []
    for field, (ok, kind) in FIELDS.items():
        if field not in line:
            errors.append(f"has no `{field}`")
        elif not ok(line[field]):
            errors.append(f"`{field}` is {json.dumps(line[field])}, not {kind}")
    code, result = line.get("code"), line.get("result")
    if result == "error" and code is None:
        errors.append("is an `error` line with no `code`")
    if result != "error" and code is not None:
        errors.append(f"has `code` {json.dumps(code)} on a `{result}` line")
    return errors


def lookup(line, path):
    v = line
    for part in path.split("."):
        if not isinstance(v, dict) or part not in v:
            return MISSING
        v = v[part]
    return v


def value_matches(v, want):
    if want == "null": return v is None
    if want == "true": return v is True
    if want == "false": return v is False
    if want == "digest": return is_digest(v)
    if want == "digests": return is_digests(v)
    if want == "object": return isinstance(v, dict)
    if re.fullmatch(r"-?[0-9]+", want): return is_int(v) and v == int(want)
    return v == want


def parse_rules(spec):
    rules = []
    for part in spec.split(","):
        m = RULE.fullmatch(part.strip())
        if not m:
            raise Usage(f"bad rule {part!r} in {spec!r}")
        field, op, value = m.groups()
        if op in (">=", ">") and not re.fullmatch(r"-?[0-9]+", value):
            raise Usage(f"rule {part!r} needs an integer")
        rules.append((field, op, value))
    return rules


def rule_errors(line, rules):
    errors = []
    named = {f.split(".")[0] for f, _, _ in rules}
    for field, op, value in rules:
        if (field, op, value) == ("rest", "=", "null"):
            for f in FIELDS:
                if f not in ALWAYS and f not in named and line.get(f) is not None:
                    errors.append(f"`{f}` is {json.dumps(line.get(f))}, not null (rest=null)")
            continue
        v = lookup(line, field)
        if v is MISSING:
            errors.append(f"has no `{field}` (rule {field}{op}{value})")
        elif op == "=" and not any(value_matches(v, w) for w in value.split("|")):
            errors.append(f"`{field}` is {json.dumps(v)}, not {value}")
        elif op == "!=" and any(value_matches(v, w) for w in value.split("|")):
            errors.append(f"`{field}` is {json.dumps(v)}, which rule {field}!={value} excludes")
        elif op in (">=", ">") and not (is_int(v) and (v >= int(value) if op == ">=" else v > int(value))):
            errors.append(f"`{field}` is {json.dumps(v)}, not {op} {value}")
    return errors


def check(log, modules=None, expects=(), same_as=()):
    """The failures of the log at `log` against the options, each `(line, message)` (`line` None for one of
    the whole log); none when it passes."""
    lines, read_errors = read_log(log)
    errors = [(None, e) for e in read_errors]
    for line in lines:
        errors += [(line, e) for e in schema_errors(line)]
    if modules is not None:
        want = [m for m in modules.split(",") if m]
        lean = [l.get("target") for l in lines if l.get("kind") == "lean"]
        for m in want:
            if lean.count(m) != 1:
                errors.append((None, f"module {m} has {lean.count(m)} lines of kind lean, not 1"))
        for t in sorted(set(lean) - set(want)):
            errors.append((None, f"target {t} has a line of kind lean, but it is not a module of the build"))
    for spec in expects:
        if ":" not in spec:
            raise Usage(f"--expect {spec!r} has no `:`")
        targets, rule_text = spec.rsplit(":", 1)
        rules = parse_rules(rule_text)
        if targets == "*":
            chosen = lines
        else:
            names = targets.split("|")
            chosen = [l for l in lines if l.get("target") in names]
            for t in names:
                if not any(l.get("target") == t for l in lines):
                    errors.append((None, f"target {t} has no line (--expect {spec})"))
        for line in chosen:
            errors += [(line, e) for e in rule_errors(line, rules)]
    for spec in same_as:
        if ":" not in spec:
            raise Usage(f"--same-as {spec!r} has no `:`")
        other, fields = spec.rsplit(":", 1)
        others, other_errors = read_log(other)
        errors += [(None, f"{other}: {e}") for e in other_errors]
        for line in lines:
            key = (line.get("kind"), line.get("target"))
            match = [o for o in others if (o.get("kind"), o.get("target")) == key]
            if len(match) != 1:
                errors.append((line, f"has {len(match)} lines of the same kind and target in {other}, not 1"))
                continue
            for f in fields.split(","):
                if lookup(line, f) != lookup(match[0], f):
                    errors.append((line, f"`{f}` differs from {other}'s line {show(match[0])}"))
    return errors


def main(argv):
    p = argparse.ArgumentParser(description="checks a LAKE_REMOTE_EXEC_LOG file (see the module docstring)")
    p.add_argument("log", nargs="?")
    p.add_argument("--modules")
    p.add_argument("--expect", action="append", default=[])
    p.add_argument("--same-as", action="append", default=[])
    p.add_argument("--self-test", action="store_true")
    a = p.parse_args(argv)
    if a.self_test:
        return self_test()
    if not a.log:
        p.error("LOG is required")
    try:
        errors = check(a.log, a.modules, a.expect, a.same_as)
    except Usage as e:
        p.error(str(e))
    if errors:
        print(f"lines_check: {a.log}: {len(errors)} failure(s):")
        for e in [e for l, e in errors if l is None]:
            print(f"  {e}")
        # Each failing line once, with its failures
        by_line = {}
        for l, e in errors:
            if l is not None:
                by_line.setdefault(show(l), []).append(e)
        for l, es in by_line.items():
            print(f"  {l}")
            for e in es:
                print(f"    - {e}")
        return 1
    print(f"lines_check: {a.log}: {len(read_log(a.log)[0])} lines pass")
    return 0


D1 = "a" * 64 + "/100"
D2 = "b" * 64 + "/200"


def line(target, result="executed", **fields):
    """A line that passes the schema, with `fields` replacing its own."""
    l = {"kind": "lean", "target": target, "result": result, "action": D1, "outputs": {"olean": D2},
         "exitCode": 0, "terminationSignal": None, "stdoutDigest": None, "stderrDigest": None, "code": None,
         "limits": None, "wallMs": 12, "startMs": 1763600000000}
    l.update(fields)
    return l


def self_test():
    """Each check on small logs: a log that holds passes, and each one that breaks a rule fails with it."""
    failures = []
    with tempfile.TemporaryDirectory() as d:
        n = [0]

        def log(*ls):
            n[0] += 1
            path = os.path.join(d, f"{n[0]}.jsonl")
            with open(path, "w") as f:
                for l in ls:
                    f.write((l if isinstance(l, str) else json.dumps(l)) + "\n")
            return path

        def case(name, path, needle=None, **opts):
            try:
                errors = [e if l is None else f"{show(l)} {e}" for l, e in check(path, **opts)]
            except Usage as e:
                errors = [f"usage: {e}"]
            if needle is None and errors:
                failures.append(f"{name}: expected to pass, got {errors}")
            elif needle is not None and not any(needle in e for e in errors):
                failures.append(f"{name}: expected a failure with {needle!r}, got {errors}")

        good = log(line("A"), line("B", stdoutDigest=D2))
        case("a good log", good, modules="A,B",
             expects=["*:result=executed,action=digest,outputs=digests,exitCode=0,code=null"])
        case("a module with no line", good, "module C has 0 lines", modules="A,B,C")
        case("a lean line of no module", good, "target B has a line of kind lean, but", modules="A")
        case("two lines of a module", log(line("A"), line("A")), "module A has 2 lines", modules="A")
        case("a native line is no module", log(line("A"), line("A:c.o.export", kind="c")), modules="A")
        case("a missing log", os.path.join(d, "none.jsonl"), "does not exist", modules="A")
        case("two lines mixed into one", log(json.dumps(line("A"))[:40] + json.dumps(line("B"))), "is not JSON")
        no_code = line("A"); del no_code["code"]
        case("a missing field", log(no_code), "has no `code`")
        case("an empty action", log(line("A", action="")), "`action` is \"\", not a digest")
        case("an empty outputs object", log(line("A", outputs={})), "`outputs` is {}")
        case("a bad stream digest", log(line("A", stderrDigest="e3b0")), "`stderrDigest` is")
        case("an exit code that is text", log(line("A", exitCode="1")), "`exitCode` is \"1\"")
        case("a monotonic start", log(line("A", startMs=12345)), "milliseconds since the epoch")
        case("an unknown result", log(line("A", result="remote")), "`result` is \"remote\"")
        case("bad limits", log(line("A", limits={"oomKills": "1"})), "`limits` is")
        case("a code on a non-error line", log(line("A", code="INTERNAL")), "has `code` \"INTERNAL\"")
        case("an error line without a code", log(line("A", result="error")), "with no `code`")
        case("an error line with its code", log(line("A", result="error", code="SOMETHING_NEW")),
             expects=["A:result=error,code=SOMETHING_NEW"])
        case("a value that differs", good, "`exitCode` is 0, not 1", expects=["A:exitCode=1"])
        case("alternatives", log(line("A"), line("B", result="cached")), expects=["*:result=cached|executed"])
        case("targets joined by |", good, "`stdoutDigest` is", expects=["A|B:stdoutDigest=null"])
        case("a target with no line", good, "target C has no line", expects=["C:result=executed"])
        case("a native target", log(line("N.T:c.o.export", kind="c")), expects=["N.T:c.o.export:kind=c"])
        case("a negative exit code", log(line("A", exitCode=-1)), expects=["A:exitCode=-1"])
        case("text is not a number", log(line("A", exitCode="-1")), "`exitCode` is", expects=["A:exitCode=-1"])
        case("!=", good, "excludes", expects=["A:result!=executed"])
        oom = {"oomKills": 1, "writtenBytes": 0, "diskLimitExceeded": False}
        case("a limit at least", log(line("A", result="oom", limits=oom)),
             expects=["A:result=oom,limits.oomKills>=1,limits.diskLimitExceeded=false,limits=object"])
        case("a limit below", log(line("A", limits=dict(oom, oomKills=0))), "not >= 1",
             expects=["A:limits.oomKills>=1"])
        case("no limits", good, "has no `limits.oomKills`", expects=["A:limits.oomKills>=1"])
        failed = line("C", "import-failed", action=None, outputs=None, exitCode=None)
        case("rest=null", log(failed), expects=["C:result=import-failed,rest=null"])
        case("rest=null with a value", log(dict(failed, stdoutDigest=D1)), "`stdoutDigest` is",
             expects=["C:result=import-failed,rest=null"])
        case("rest=null spares named fields", log(dict(failed, exitCode=1)),
             expects=["C:result=import-failed,exitCode=1,rest=null"])
        case("the same as another log", log(line("A", result="local-cache"), line("B", result="local-cache")),
             expects=["*:result=local-cache"], same_as=[f"{good}:action,outputs"])
        case("a field that differs from another log", log(line("A", action=D2)), "`action` differs",
             same_as=[f"{good}:action,outputs"])
        case("a target that another log lacks", log(line("C")), "has 0 lines of the same kind",
             same_as=[f"{good}:action"])
        case("a bad rule", good, "usage: bad rule", expects=["A:exitCode"])
    for f in failures:
        print(f"lines_check self-test: FAILED {f}")
    if failures:
        return 1
    print("lines_check self-test: pass")
    return 0


if __name__ == "__main__":
    sys.exit(main(sys.argv[1:]))
