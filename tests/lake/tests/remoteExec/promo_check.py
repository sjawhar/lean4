#!/usr/bin/env python3
"""promo_check.py: checks that no file of a tree describes a promoted artifact as it was before its promotion, after
`lake build -o OUTPUTS` in service mode. A promoted artifact is a module, C object or shared library that this machine
built and whose own action a later service request ran (its promotion).

  promo_check.py --tree DIR --cache DIR --outputs OUTPUTS --lake LAKE_LOG --fake FAKE_LOG ARTIFACT...

An ARTIFACT is a module `M`, whose files are in DIR/.lake/build, or a native target `TARGET=PATH`, PATH relative to
DIR. For each one:

  promoted  its line in LAKE_LOG has the result `local`, and FAKE_LOG has a `run` of its target
  trace     its trace has the service's record, whose digest of each output is the file's (SHA-256 and size), and it
            describes each output as the file: the Lake cache's artifact of that description holds the file's bytes,
            and the file's `.hash`, if there is one, is the description's hash
  files     there is no `.trace.nobuild` beside the trace, and a module has no usage-cutoff record (its pack `.usepack`,
            or `.usage`, `.resolved`, `.usekey`) and its trace no kept lineage (`kf`)
  entry     the Lake cache's entry under the trace's `depHash` has the trace's record and describes the same outputs
  outputs   OUTPUTS maps the trace's `depHash` to the outputs: a native target's to its trace's description; a module's
            to an archive with no `kf`, the tree's `.ltar` (as its `.hash` says), which unpacks (`leantar`) to the
            module's files

Also, each key of OUTPUTS is the `depHash` of a trace file of the tree. Exits 1 with each failure.
"""
import argparse, glob, hashlib, json, os, subprocess, sys, tempfile

# The keys of a module's trace outputs that describe a file, and the usage-cutoff records
MODULE_KEYS = ("o", "i", "rs", "r", "c", "b")
SIDECARS = ("usepack", "usage", "resolved", "usekey")
IR_EXTS = ("c", "bc")


def read_json(path):
    with open(path) as f:
        return json.load(f)


def read_jsonl(path):
    with open(path) as f:
        return [json.loads(l) for l in f if l.strip()]


def digest(path):
    data = open(path, "rb").read()
    return "%s/%d" % (hashlib.sha256(data).hexdigest(), len(data))


def same_bytes(a, b):
    return open(a, "rb").read() == open(b, "rb").read()


def split_descr(descr):
    h, _, ext = descr.partition(".")
    return h, ext


def module_descrs(outs):
    """The descriptions of the files that a module's outputs (a trace's or a cache entry's) name."""
    return list(outs.get("o") or []) + [outs[k] for k in MODULE_KEYS[1:] if outs.get(k)]


class Checker:
    def __init__(self, args):
        self.tree, self.cache = args.tree, args.cache
        self.lib = os.path.join(args.tree, ".lake/build/lib/lean")
        self.ir = os.path.join(args.tree, ".lake/build/ir")
        self.lines = read_jsonl(args.lake)
        self.runs = {e["params"].get("target") for e in read_jsonl(args.fake) if e.get("method") == "run"}
        rows = read_jsonl(args.outputs)[1:]
        self.outputs = {k: v for k, v in rows}
        self.failures = []

    def fail(self, what, why):
        self.failures.append("%s: %s" % (what, why))

    def promoted(self, what, target):
        results = [l["result"] for l in self.lines if l.get("target") == target]
        if results != ["local"]:
            self.fail(what, "its lines' results are %s, not one `local`" % results)
        if target not in self.runs:
            self.fail(what, "the fake has no `run` of it: it was not promoted")

    def described(self, what, descr, path):
        """`descr` (`<hash>.<ext>`) describes the file `path`."""
        h, _ = split_descr(descr)
        art = os.path.join(self.cache, "artifacts", descr)
        if not os.path.isfile(path):
            return self.fail(what, "%s is missing" % path)
        if not os.path.isfile(art) or not same_bytes(art, path):
            self.fail(what, "%s does not hold the bytes of the cache's artifact %s" % (path, descr))
        if os.path.exists(path + ".hash") and open(path + ".hash").read().strip() != h:
            self.fail(what, "%s.hash is %s, not %s" % (path, open(path + ".hash").read().strip(), h))

    def record(self, what, remote, files):
        """The service record `remote` gives each file of `files` (by output name) its digest."""
        if not isinstance(remote, dict):
            return self.fail(what, "its trace has no service record")
        outs = remote.get("outputs") or {}
        for name, path in files.items():
            got = (outs.get(name) or {}).get("digest")
            if os.path.isfile(path) and got != digest(path):
                self.fail(what, "the record's digest of %s is %s, the file's %s" % (name, got, digest(path)))

    def entry(self, what, dep_hash):
        found = glob.glob(os.path.join(self.cache, "outputs", "*", dep_hash + ".json"))
        if len(found) != 1:
            self.fail(what, "the Lake cache has %d entries under its trace's hash %s" % (len(found), dep_hash))
            return None
        return read_json(found[0])

    def trace_common(self, what, trace_file):
        if not os.path.isfile(trace_file):
            self.fail(what, "%s is missing" % trace_file)
            return None
        if os.path.exists(trace_file + ".nobuild"):
            self.fail(what, "%s.nobuild exists" % trace_file)
        return read_json(trace_file)

    def native(self, target, rel):
        what, path = target, os.path.join(self.tree, rel)
        self.promoted(what, target)
        trace = self.trace_common(what, path + ".trace")
        if trace is None:
            return
        descr, dep = trace.get("outputs"), trace["depHash"]
        self.described(what, descr, path)
        name = "o" if split_descr(descr)[1] == "o" else "so"
        self.record(what, trace.get("remote"), {name: path})
        e = self.entry(what, dep)
        if e is not None and (e.get("data") != descr or e.get("remote") != trace.get("remote")):
            self.fail(what, "the Lake cache's entry under %s is %s with record %s"
                      % (dep, e.get("data"), e.get("remote")))
        if self.outputs.get(dep) != descr:
            self.fail(what, "OUTPUTS maps its trace's hash %s to %s, not %s" % (dep, self.outputs.get(dep), descr))

    def module_file(self, rel, ext):
        return os.path.join(self.ir if ext in IR_EXTS else self.lib, rel + "." + ext)

    def module(self, mod):
        what, rel = mod, mod.replace(".", "/")
        self.promoted(what, mod)
        trace = self.trace_common(what, os.path.join(self.lib, rel + ".trace"))
        if trace is None:
            return
        outs, dep = trace.get("outputs") or {}, trace["depHash"]
        descrs = module_descrs(outs)
        files = {split_descr(d)[1]: self.module_file(rel, split_descr(d)[1]) for d in descrs}
        for d in descrs:
            self.described(what, d, files[split_descr(d)[1]])
        self.record(what, trace.get("remote"), files)
        for k in ("kf", "p", "u", "v", "k"):
            if k in outs:
                self.fail(what, "its trace's outputs have `%s`" % k)
        for ext in SIDECARS:
            if os.path.exists(os.path.join(self.lib, rel + "." + ext)):
                self.fail(what, "its .%s exists" % ext)
        e = self.entry(what, dep)
        if e is not None:
            data = e.get("data") or {}
            if sorted(module_descrs(data)) != sorted(descrs) or e.get("remote") != trace.get("remote") or "kf" in data:
                self.fail(what, "the Lake cache's entry under %s is %s with record %s"
                          % (dep, json.dumps(data, sort_keys=True), e.get("remote")))
        self.archive(what, rel, dep, files)

    def archive(self, what, rel, dep, files):
        ltar = self.outputs.get(dep)
        if not isinstance(ltar, str) or split_descr(ltar)[1] != "ltar":
            return self.fail(what, "OUTPUTS maps its trace's hash %s to %s, not an archive" % (dep, ltar))
        self.described(what, ltar, os.path.join(self.ir, rel + ".ltar"))
        leantar = os.path.join(subprocess.check_output(["lean", "--print-prefix"], text=True).strip(), "bin", "leantar")
        with tempfile.TemporaryDirectory() as d:
            lib, ir = os.path.join(d, "lib"), os.path.join(d, "ir")
            os.makedirs(lib); os.makedirs(ir)
            spec = json.dumps([{"file": os.path.join(self.cache, "artifacts", ltar), "hash": dep}])
            subprocess.run([leantar, "-C", lib, "-C", ir, "-x", "-j", "-"], input=spec, text=True, check=True)
            base = rel.rsplit("/", 1)[-1]
            for ext, path in files.items():
                got = os.path.join(ir if ext in IR_EXTS else lib, base + "." + ext)
                if not os.path.isfile(got) or not same_bytes(got, path):
                    self.fail(what, "the archive %s does not hold the bytes of %s" % (ltar, path))

    def keys(self):
        deps = set()
        for d, _, fs in os.walk(os.path.join(self.tree, ".lake/build")):
            for f in fs:
                if f.endswith(".trace"):
                    try:
                        deps.add(read_json(os.path.join(d, f)).get("depHash"))
                    except (ValueError, AttributeError):
                        pass
        for k in sorted(set(self.outputs) - deps):
            self.fail("OUTPUTS", "its key %s (to %s) is the hash of no trace of the tree" % (k, self.outputs[k]))


def main():
    ap = argparse.ArgumentParser()
    for a in ("--tree", "--cache", "--outputs", "--lake", "--fake"):
        ap.add_argument(a, required=True)
    ap.add_argument("artifacts", nargs="+")
    args = ap.parse_args()
    c = Checker(args)
    for a in args.artifacts:
        target, sep, rel = a.partition("=")
        if sep:
            c.native(target, rel)
        else:
            c.module(a)
    c.keys()
    if c.failures:
        print("\n".join("FAILED: " + f for f in c.failures))
        sys.exit(1)
    print("ok: %d promoted artifacts, %d mappings" % (len(args.artifacts), len(c.outputs)))


if __name__ == "__main__":
    main()
