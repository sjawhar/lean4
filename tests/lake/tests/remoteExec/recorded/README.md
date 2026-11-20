# Recorded answers of the build service

These four files are what the live build service answered, through `lean-remote bridge`, for four
`run` requests. `fake_lean_remote.py` replays them (`FAKE_REPLAY_FILE`), so Lake's tests of service
mode see the service's real answers instead of answers the fake makes up.

| File | Request | Answer |
| --- | --- | --- |
| `fail-basic.json` | `./lean-build-probe child fail --code 1 --stderr <uuid>`, output `out.olean` | a result: `exitCode` 1, the uuid on `stderr` with its `stderrDigest`, no `stdoutDigest` |
| `oom.json` | `./lean-build-probe child alloc --gib 40`, output `out.olean` | a result: `exitCode` -1, no stream digest, no `terminationSignal` |
| `disk-limit.json` | `./lean-build-probe child fill --gib 101`, output `out.olean` | a result: `exitCode` -1, no stream digest, no `terminationSignal` |
| `timeout.json` | Lake's `LeanModule` request for module `T` (`#eval IO.sleep 5000`), `timeoutSecs` 1 | an error: `TIMEOUT` |

Each file is the whole response line the bridge wrote: its `id`, and its `result` or its `error`.
Only `metadata.worker` (now `recorded-worker`) and the time stamps of `metadata` (now
`2026-11-20T00:00:00Z`) were replaced, because they name the service's pods and nodes. Every other
field is as the bridge sent it.

## How they were captured

`capture.py` beside this file made them. It ran in Kubernetes Job `linux-1735-k0-capture-tsqgx`
(namespace `builds-linux`, service account `build-service-client`, whose identity the service
admits) on 2026-11-20: the Job ran from 21:17:14 to 21:20:47 UTC, and the service answered between
21:19:56 and 21:20:44 UTC. The client image was

    us-west1-docker.pkg.dev/theorem-agent-infra/lean-build/lean-build-client-r19@sha256:b4c4c472b3994a5ceca6e6953e066f225d12dbe25fb9d0e3adf0ba4557242f31

with that image's `lean-remote` (`lean-remote 1.0.0`) and `lean-build-probe`, on instance `lean`,
for the r19 toolchain: service digest
`sha256:0021cdd2ea341dc5061af5fef6aa563bdeb9c53a30eb0b9cb0ce2c2acdcd8fbd`, sysroot
`/theorem/lean4-release-0ae1324747`, Lean githash `0ae13247475aa336660a3b57a75f7f630050ece9`.

The Job ran:

    python3 capture.py --endpoint <cluster endpoint> --audience <ID-token audience> --ca ca.pem \
      --config-dir <dir> --socket <dir>/socket/daemon.sock \
      --toolchain sha256:0021cdd2ea341dc5061af5fef6aa563bdeb9c53a30eb0b9cb0ce2c2acdcd8fbd \
      --sysroot /theorem/lean4-release-0ae1324747 --package pkg \
      --fake fake_lean_remote.py --work <dir> --out <dir>

`fake_lean_remote.py` was this directory's parent's, at commit
`2128b84f1eb39265af37b082aa97b55431e26a27`. `pkg` is a package of one module, `lakefile.toml`:

    name = "t"

    [[lean_lib]]
    name = "T"

and `T.lean`:

    -- LINUX-1735 k0: a module that runs past a 1 s timeout.
    #eval IO.sleep 5000

`capture.py` takes the `timeout` request from the fake's log of `lake build T` in service mode,
run by the image's own `lake`, and sets its `timeoutSecs` to 1. Every request has
`skipCacheLookup` and a fresh salt (`LEAN_BUILD_PROBE_SALT` in the probe's environment, a comment
appended to `T.lean`), so the service ran each action and served none from its cache. The Job
manifest, with the endpoint, the audience and the CA, is an artifact of LINUX-1735
(`k0-capture-job.yaml`); `capture.py`'s docstring lists its steps.
