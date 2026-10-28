"""Reads and forges the objects of one remote-cache scope of the mock store.

  store.py inputs ROOT MOD             the input hashes of MOD's `in/` mappings, one per line
  store.py archive ROOT MOD            every `in/` mapping of MOD names one `.ltar` (its data is the descriptor
                                       string) and has one SHA-256 entry, for it, whose artifact is in the store
  store.py art ROOT MOD INPUT          the store path of the archive that MOD's mapping for INPUT names
  store.py src ROOT MOD INPUT          the `srcHash` of MOD's mapping for INPUT
  store.py kept ROOT MOD HNEW HK       `kept/HNEW.json` exists, names MOD and `compiledFor` HK
  store.py kepts ROOT                  the number of `kept/` objects
  store.py forge ROOT MOD HNEW HK SRC  writes `kept/HNEW.json` naming MOD's compile of input HK

ROOT is the scope's directory, e.g. `<store>/a0/v1/<githash>/<platform>/test`.
"""

import json
import os
import sys


def fail(msg):
    print(f"FAILURE: {msg}")
    sys.exit(1)


def mappings(root, mod):
    d = os.path.join(root, "in")
    found = []
    if os.path.isdir(d):
        for name in sorted(os.listdir(d)):
            if name.endswith(".json"):
                with open(os.path.join(d, name)) as f:
                    m = json.load(f)
                if m.get("target") == mod:
                    found.append(m)
    return found


def mapping(root, mod, inp):
    for m in mappings(root, mod):
        if m.get("inputHash") == inp:
            return m
    fail(f"no in/ mapping of {mod} for input {inp} under {root}")


def archive(root, m):
    """The store path of the archive that mapping `m` names, checked to be its only artifact."""
    data = m.get("data")
    if not (isinstance(data, str) and data.endswith(".ltar")):
        fail(f"{m['target']}'s mapping {m['inputHash']} has data {data!r}, not an archive")
    sha = m.get("sha256", {})
    if list(sha) != [data]:
        fail(f"{m['target']}'s mapping {m['inputHash']} has SHA-256 entries {sorted(sha)}, not one for {data}")
    path = os.path.join(root, "a", f"{sha[data]}.art")
    if not os.path.isfile(path):
        fail(f"the store has no artifact a/{sha[data]}.art ({data} of {m['target']})")
    return path


def main():
    cmd, root, *args = sys.argv[1:]
    if cmd == "inputs":
        for m in mappings(root, args[0]):
            print(m["inputHash"])
    elif cmd == "archive":
        mod = args[0]
        ms = mappings(root, mod)
        if not ms:
            fail(f"no in/ mapping of {mod} under {root}")
        for m in ms:
            archive(root, m)
        print(f"{mod}: {len(ms)} mapping(s), each naming one archive")
    elif cmd == "art":
        mod, inp = args
        print(archive(root, mapping(root, mod, inp)))
    elif cmd == "src":
        mod, inp = args
        print(json.dumps(mapping(root, mod, inp)["srcHash"]))
    elif cmd == "kept":
        mod, hnew, hk = args
        path = os.path.join(root, "kept", f"{hnew}.json")
        if not os.path.isfile(path):
            fail(f"no kept/{hnew}.json for {mod}")
        with open(path) as f:
            k = json.load(f)
        for field, want in (("target", mod), ("inputHash", hnew), ("compiledFor", hk)):
            if k.get(field) != want:
                fail(f"kept/{hnew}.json has {field} {k.get(field)!r}, not {want!r}")
        print(f"{mod}: kept/{hnew}.json names the compile of {hk}")
    elif cmd == "kepts":
        d = os.path.join(root, "kept")
        print(len(os.listdir(d)) if os.path.isdir(d) else 0)
    elif cmd == "forge":
        mod, hnew, hk, src = args
        # The schema version of the scope's mappings, which a kept object shares
        version = "lake-remote-2026-10-24"
        for m in mappings(root, mod):
            version = m["schemaVersion"]
        os.makedirs(os.path.join(root, "kept"), exist_ok=True)
        with open(os.path.join(root, "kept", f"{hnew}.json"), "w") as f:
            json.dump({"schemaVersion": version, "inputHash": hnew, "target": mod,
                       "srcHash": json.loads(src), "compiledFor": hk}, f)
    else:
        fail(f"unknown command {cmd}")


main()
