#!/usr/bin/env python3
# Copyright (c) 2026 Lean FRO. All rights reserved.
# Released under Apache 2.0 license as described in the file LICENSE.

"""Seed input-hash remote cache mappings from a local Lake build.

With `--bad FIELD --bad-target TARGET`, the mapping of the target named TARGET (e.g. the module
`Test.Basic`) is corrupted in FIELD, and the names of its artifacts are printed, one per line.
The target is chosen by name because the order of the outputs file follows the input hashes.
"""

import argparse
import glob
import hashlib
import json
import os
import shutil

SCHEMA_VERSION = "lake-remote-2026-10-24"


def artifact_names(data):
    if isinstance(data, str):
        yield data
    elif isinstance(data, list):
        for value in data:
            yield from artifact_names(value)
    elif isinstance(data, dict):
        for value in data.values():
            yield from artifact_names(value)


def source_hash(trace):
    def visit(value):
        if isinstance(value, list):
            if (
                len(value) == 2
                and isinstance(value[0], str)
                and value[0].endswith(".lean")
                and isinstance(value[1], str)
            ):
                return value[1]
            for child in value:
                found = visit(child)
                if found is not None:
                    return found
        return None

    found = visit(trace["inputs"])
    if found is None:
        raise ValueError("module trace does not name a source hash")
    return found


def module_traces(build_dir):
    traces = {}
    root = os.path.join(build_dir, "lib", "lean")
    for path in glob.glob(os.path.join(root, "**", "*.trace"), recursive=True):
        with open(path) as file:
            trace = json.load(file)
        dep_hash = trace.get("depHash")
        if dep_hash is None:
            continue
        rel = os.path.relpath(path, root)
        module = os.path.splitext(rel)[0].replace(os.sep, ".")
        traces[dep_hash] = (module, trace)
    return traces


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--store", required=True)
    parser.add_argument("--scope", required=True)
    parser.add_argument("--outputs", required=True)
    parser.add_argument("--cache", required=True)
    parser.add_argument("--build", required=True)
    parser.add_argument(
        "--bad", choices=("srcHash", "target", "inputHash", "sha256", "ext")
    )
    parser.add_argument("--bad-target", help="the target whose mapping `--bad` corrupts")
    args = parser.parse_args()
    if (args.bad is None) != (args.bad_target is None):
        parser.error("--bad and --bad-target go together")

    traces = module_traces(args.build)
    with open(args.outputs) as file:
        lines = [json.loads(line) for line in file if line.strip()]
    if not lines or not isinstance(lines[0], str):
        raise ValueError("outputs file does not begin with its schema version")

    root = os.path.join(args.store, *args.scope.split("/"))
    corrupted = False
    for input_hash, data in lines[1:]:
        if input_hash in traces:
            target, trace = traces[input_hash]
            src_hash = source_hash(trace)
            log = trace["log"]
        else:
            target = "test/+Native:c.o.export" if data.endswith(".o") else "test/native:exe"
            src_hash = None
            log = []
        sha256 = {}
        for name in artifact_names(data):
            source = os.path.join(args.cache, "artifacts", name)
            if not os.path.isfile(source):
                raise ValueError("output descriptor does not name a cache artifact: " + name)
            with open(source, "rb") as file:
                digest = hashlib.sha256(file.read()).hexdigest()
            sha256[name] = digest
            destination = os.path.join(root, "a", digest + ".art")
            os.makedirs(os.path.dirname(destination), exist_ok=True)
            shutil.copyfile(source, destination)
        mapping = {
            "schemaVersion": SCHEMA_VERSION,
            "inputHash": input_hash,
            "target": target,
            "srcHash": src_hash,
            "data": data,
            "sha256": sha256,
            "log": log,
        }
        if args.bad and target == args.bad_target:
            corrupted = True
            print("\n".join(sha256))
            if args.bad == "srcHash":
                mapping["srcHash"] = "0000000000000000"
            elif args.bad == "target":
                mapping["target"] = "wrong-target"
            elif args.bad == "inputHash":
                mapping["inputHash"] = "0000000000000000"
            elif args.bad == "sha256":
                digest = "0" * 64
                mapping["sha256"] = {name: digest for name in sha256}
                for name in sha256:
                    source = os.path.join(args.cache, "artifacts", name)
                    destination = os.path.join(root, "a", digest + ".art")
                    shutil.copyfile(source, destination)
            else:
                name, digest = next(iter(sha256.items()))
                malformed = name.split(".", 1)[0] + ".olean/../../x"
                mapping["data"] = malformed
                mapping["sha256"] = {malformed: digest}
        destination = os.path.join(root, "in", input_hash + ".json")
        os.makedirs(os.path.dirname(destination), exist_ok=True)
        with open(destination, "w") as file:
            json.dump(mapping, file, separators=(",", ":"))
    if args.bad and not corrupted:
        raise ValueError("no mapping has the target " + args.bad_target)


if __name__ == "__main__":
    main()
