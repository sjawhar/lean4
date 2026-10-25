#!/usr/bin/env python3
# Copyright (c) 2026 Lean FRO. All rights reserved.
# Released under Apache 2.0 license as described in the file LICENSE.
# Authors: Mac Malone, Claude Code

"""A mock remote artifact cache for `test.sh` and the tests of `../remoteCache/lib.sh`.

Serves an S3-style bucket (`GET`/`PUT` of `<store>/<path>`) and the part of the
Reservoir API that Lake uses. Faults are selected by the first path segment, so
a test picks one by pointing an endpoint at it (e.g. `.../corrupt/a0`):

  ok        serve and store normally
  deny      403 with an S3-style XML error body
  corrupt   200 with the right length but mutated bytes
  truncate  200 with a full `Content-Length` but half a body, then disconnect
  reset     disconnect without a response (curl writes no output file)
  empty     200 and a `Content-Length` but no body, for an object that is not
            in the store, so that curl leaves no output file to read
  badcount  Reservoir artifact URL lookup returns too few URLs
  apierror  Reservoir requests return an API error object
  bearer    401 unless the request carries `Authorization: Bearer <token>`
            for a token listed in the `--tokens` file (read on each request,
            so a test can change it), and otherwise as `ok`
  redirect  302 to the same object path under the `--redirect` URL
  slow      as `ok`, but each `GET` is answered after 2 seconds
  slowput   as `ok`, but each `PUT` is answered after 2 seconds
  oversize  mappings are normal; an artifact advertises 119596321 bytes and no body
  denyart   403 for a `GET` of an object in an `a/` directory (an artifact of the
            shared remote cache), and otherwise as `ok`
  stallput  as `ok`, but each `PUT` reads its body and then sends no answer for
            15 minutes
  slowobj   as `ok`, but each `PUT` of an object outside a `claim` directory
            (an artifact or a mapping, not a claim of the shared remote cache)
            is answered after 4 seconds

A fault that does not apply to a request kind (e.g. `badcount` on a `GET`)
behaves as `ok`. Like Cloud Storage, each object has a generation, which a new
write of the object changes and which responses to a `GET`, a `HEAD` or a
`PUT` report in `x-goog-generation` (`GET` and `HEAD` also report
`Last-Modified`). A `PUT` with the header `x-goog-if-generation-match: 0`
only creates an object: if the object exists, it is left untouched and the
response is 412. A `PUT` with `x-goog-if-generation-match: <generation>`
replaces the object only if it has that generation, and is otherwise answered
with 412.

Each request is logged to stdout as
`<method> <path> -> <status> auth=<bearer|none|other> gen=<value|->`, where
`auth` is the scheme of the `Authorization` header (`other` for any scheme but
`Bearer`, e.g. AWS Signature Version 4) and `gen` is the value of the
`x-goog-if-generation-match` header.

This is Python rather than `Std.Http` because `truncate` and `reset` are
transport-level faults: a body cut short of its declared `Content-Length` and a
closed connection with no response at all. A conforming response writer cannot
emit either, so a Lean server would have to hand-roll HTTP/1.1 over `Std.Net.TCP`.
Revisit if `Std.Http` gains a way to abort a response mid-body.
"""

import argparse
import json
import os
import sys
import threading
import time
from email.utils import formatdate
from enum import StrEnum
from http.server import BaseHTTPRequestHandler, ThreadingHTTPServer
from urllib.parse import parse_qs, unquote, urlparse

ARTIFACT_TYPE = "application/vnd.reservoir.artifact"
MAP_TYPE = "application/vnd.reservoir.outputs+json-lines"

DENY_BODY = (
    b'<?xml version="1.0" encoding="UTF-8"?>\n'
    b"<Error><Code>AccessDenied</Code><Message>mock denial</Message></Error>\n"
)

UNAUTHORIZED_BODY = (
    b'<?xml version="1.0" encoding="UTF-8"?>\n'
    b"<Error><Code>AuthenticationRequired</Code>"
    b"<Message>mock authentication required</Message></Error>\n"
)

PRECONDITION_BODY = (
    b'<?xml version="1.0" encoding="UTF-8"?>\n'
    b"<Error><Code>PreconditionFailed</Code>"
    b"<Message>mock object already exists</Message></Error>\n"
)

STORE = "."

# The file listing the bearer tokens that `bearer` mode accepts, one per line
TOKENS = None

# The URL that `redirect` mode sends every request to, followed by the object path
REDIRECT = None

# Serializes the request records that the handler threads write to stdout
LOG_LOCK = threading.Lock()

# The generation of each object of the store that a request has seen, by path
GENERATIONS = {}
# Serializes the generations, and each check of a precondition with its write
STORE_LOCK = threading.Lock()
# The last generation given out, of the size of Cloud Storage's generations
LAST_GENERATION = [1792925620545348]


def new_generation(path):
    """Gives the object at `path` a new generation; the caller holds `STORE_LOCK`."""
    LAST_GENERATION[0] += 1
    GENERATIONS[path] = LAST_GENERATION[0]
    return LAST_GENERATION[0]


def generation(path):
    """The generation of the object at `path`, or `None` if there is none.

    An object that a test put into the store directly gets one when it is first
    seen. The caller holds `STORE_LOCK`.
    """
    if not os.path.isfile(path):
        GENERATIONS.pop(path, None)
        return None
    return GENERATIONS.get(path) or new_generation(path)


def object_headers(path):
    """The headers of a `GET` or `HEAD` response for the object at `path`."""
    with STORE_LOCK:
        gen = generation(path)
    headers = {"Last-Modified": formatdate(os.path.getmtime(path), usegmt=True)}
    if gen is not None:
        headers["x-goog-generation"] = str(gen)
    return headers


class Mode(StrEnum):
    """A fault mode, named by the first segment of a request path."""

    OK = "ok"
    DENY = "deny"
    CORRUPT = "corrupt"
    TRUNCATE = "truncate"
    RESET = "reset"
    EMPTY = "empty"
    BAD_COUNT = "badcount"
    API_ERROR = "apierror"
    BEARER = "bearer"
    REDIRECT = "redirect"
    SLOW = "slow"
    OVERSIZE = "oversize"
    SLOW_PUT = "slowput"
    DENY_ART = "denyart"
    STALL_PUT = "stallput"
    SLOW_OBJ = "slowobj"


def content_type(path):
    if path.endswith(".art"):
        return ARTIFACT_TYPE
    elif path.endswith(".jsonl"):
        return MAP_TYPE
    else:
        return "application/octet-stream"


class Handler(BaseHTTPRequestHandler):
    protocol_version = "HTTP/1.1"

    # Requests are logged by the handlers below, which also know about the
    # faults that never send a response.
    def log_request(self, code="-", size="-"):
        pass

    def log_message(self, format, *args):
        pass

    def log(self, status):
        auth = self.headers.get("Authorization")
        if auth is None:
            scheme = "none"
        elif auth.startswith("Bearer "):
            scheme = "bearer"
        else:
            scheme = "other"
        gen = self.headers.get("x-goog-if-generation-match", "-")
        record = "%s %s -> %s auth=%s gen=%s\n" % (self.command, self.path, status, scheme, gen)
        # One record per line: requests on other threads log their records whole
        with LOG_LOCK:
            sys.stdout.write(record)
            sys.stdout.flush()

    def authorized(self):
        """Whether the request carries a bearer token that `--tokens` lists."""
        auth = self.headers.get("Authorization", "")
        if TOKENS is None or not auth.startswith("Bearer "):
            return False
        try:
            with open(TOKENS) as f:
                accepted = set(f.read().split())
        except FileNotFoundError:
            return False
        return auth[len("Bearer ") :] in accepted

    def parse(self):
        """Split a path into its fault mode and the object path under it.

        Returns no mode for a path that names no fault mode, which is a
        misconfigured endpoint rather than a cache miss.
        """
        url = urlparse(self.path)
        parts = [unquote(p) for p in url.path.split("/") if p]
        if any(p in (os.curdir, os.pardir) or os.path.isabs(p) for p in parts):
            return None, [], {}
        try:
            mode = Mode(parts[0]) if parts else None
        except ValueError:
            mode = None
        if mode is None:
            return None, [], {}
        return mode, parts[1:], parse_qs(url.query)

    def respond(self, status, body, ctype, headers=None):
        # Logged before the response is sent, so that a request the client sends
        # after it has the response is always logged after this one
        self.log(status)
        self.send_response(status)
        self.send_header("Content-Type", ctype)
        self.send_header("Content-Length", str(len(body)))
        for name, value in (headers or {}).items():
            self.send_header(name, value)
        self.end_headers()
        self.wfile.write(body)

    def not_found(self, message):
        body = json.dumps({"error": {"status": 404, "message": message}})
        self.respond(404, body.encode(), "application/json")

    def deny(self):
        self.respond(403, DENY_BODY, "application/xml")

    def unauthorized(self):
        self.respond(401, UNAUTHORIZED_BODY, "application/xml")

    def redirect(self, parts):
        self.send_response(302)
        self.send_header("Location", "%s/%s" % (REDIRECT, "/".join(parts)))
        self.send_header("Content-Length", "0")
        self.end_headers()
        self.log(302)

    def reset(self):
        # Neither a response nor a body: `curl` reports an empty reply and,
        # importantly, does not create its output file.
        self.close_connection = True
        self.log("reset")

    def serve(self, mode, path, ctype=None):
        if mode == Mode.OVERSIZE and f"{os.sep}a{os.sep}" in path:
            # curl checks --max-filesize against the header before receiving the
            # body, so this exercises the reader's bound without allocating it.
            self.send_response(200)
            self.send_header("Content-Type", ctype or content_type(path))
            self.send_header("Content-Length", "119596321")
            self.end_headers()
            self.close_connection = True
            self.log("oversize")
            return
        if mode == Mode.SLOW:
            time.sleep(2)
        try:
            with open(path, "rb") as f:
                data = f.read()
        except FileNotFoundError:
            if mode == Mode.EMPTY:
                # Announcing a body that never arrives: curl reports HTTP 200
                # yet never creates its output file
                self.send_response(200)
                self.send_header("Content-Type", ctype or content_type(path))
                self.send_header("Content-Length", "100")
                self.end_headers()
                self.close_connection = True
                self.log("no body")
            else:
                self.not_found("no such object: %s" % self.path)
            return
        ctype = ctype or content_type(path)
        headers = object_headers(path)
        if mode == Mode.CORRUPT:
            data = data[:-1] + bytes([data[-1] ^ 0xFF]) if data else b"corrupt"
            self.respond(200, data, ctype, headers)
        elif mode == Mode.TRUNCATE:
            self.send_response(200)
            self.send_header("Content-Type", ctype)
            self.send_header("Content-Length", str(len(data)))
            self.end_headers()
            self.wfile.write(data[: len(data) // 2])
            self.close_connection = True
            self.log("truncated")
        else:
            self.respond(200, data, ctype, headers)

    def find_revision(self, scope, rev):
        """Locate a revision's outputs, ignoring any platform/toolchain path."""
        root = os.path.join(STORE, "r0", *scope)
        for dir, _, files in os.walk(root):
            if rev + ".jsonl" in files:
                return os.path.join(dir, rev + ".jsonl")
        return None

    def reservoir_get(self, mode, parts, query):
        # `parts` is `<packages|repositories>/<owner>/<name>/<endpoint>`
        scope, endpoint = parts[1:3], parts[3:]
        if endpoint[:1] == ["build-outputs"]:
            rev = query.get("rev", [""])[0]
            path = self.find_revision(scope, rev)
            if path is None:
                self.not_found("no outputs for revision %s" % rev)
            else:
                self.serve(mode, path)
        elif endpoint[:1] == ["artifacts"] and len(endpoint) == 2:
            self.serve(mode, os.path.join(STORE, "a0", *(scope + endpoint[1:])))
        else:
            self.not_found("no such endpoint: %s" % self.path)

    def reservoir_post(self, mode, parts):
        # Lake fetches the storage URLs of a batch of artifacts in one request
        scope, endpoint = parts[1:3], parts[3:]
        if endpoint != ["artifacts"]:
            self.not_found("no such endpoint: %s" % self.path)
            return
        length = int(self.headers.get("Content-Length", 0))
        hashes = json.loads(self.rfile.read(length).decode())
        if mode == Mode.API_ERROR:
            body = {"error": {"status": 503, "message": "mock API error"}}
        else:
            host = self.headers.get("Host")
            urls = [
                "http://%s/%s/a0/%s/%s.art" % (host, mode, "/".join(scope), hash)
                for hash in hashes
            ]
            if mode == Mode.BAD_COUNT:
                urls = urls[:-1]
            body = {"data": urls}
        self.respond(200, json.dumps(body).encode(), "application/json")

    def do_GET(self):
        mode, parts, query = self.parse()
        if mode is None:
            self.not_found("no fault mode in path: %s" % self.path)
        elif mode == Mode.BEARER and not self.authorized():
            self.unauthorized()
        elif mode == Mode.REDIRECT:
            self.redirect(parts)
        elif mode == Mode.RESET:
            self.reset()
        elif mode == Mode.DENY or (mode == Mode.DENY_ART and parts[-2:-1] == ["a"]):
            self.deny()
        elif parts[:2] == ["api", "v1"]:
            self.reservoir_get(mode, parts[2:], query)
        else:
            self.serve(mode, os.path.join(STORE, *parts))

    def do_POST(self):
        mode, parts, _ = self.parse()
        if mode is None:
            self.not_found("no fault mode in path: %s" % self.path)
        elif mode == Mode.BEARER and not self.authorized():
            self.unauthorized()
        elif mode == Mode.RESET:
            self.reset()
        elif mode == Mode.DENY:
            self.deny()
        elif parts[:2] == ["api", "v1"]:
            self.reservoir_post(mode, parts[2:])
        else:
            self.not_found("no such endpoint: %s" % self.path)

    def do_HEAD(self):
        mode, parts, _ = self.parse()
        if mode is None:
            self.not_found("no fault mode in path: %s" % self.path)
        elif mode == Mode.BEARER and not self.authorized():
            self.unauthorized()
        elif mode == Mode.RESET:
            self.reset()
        elif mode == Mode.DENY:
            self.deny()
        else:
            path = os.path.join(STORE, *parts)
            if not os.path.isfile(path):
                self.not_found("no such object: %s" % self.path)
                return
            size = os.path.getsize(path)
            self.log(200)
            self.send_response(200)
            self.send_header("Content-Type", content_type(path))
            self.send_header("Content-Length", str(size))
            for name, value in object_headers(path).items():
                self.send_header(name, value)
            self.end_headers()

    def do_PUT(self):
        mode, parts, _ = self.parse()
        # The body is always consumed so that `curl` sees a complete exchange
        length = int(self.headers.get("Content-Length", 0))
        body = self.rfile.read(length)
        if mode is None:
            self.not_found("no fault mode in path: %s" % self.path)
        elif mode == Mode.BEARER and not self.authorized():
            self.unauthorized()
        elif mode == Mode.REDIRECT:
            self.redirect(parts)
        elif mode == Mode.RESET:
            self.reset()
        elif mode == Mode.DENY:
            self.deny()
        else:
            if mode == Mode.SLOW_PUT:
                time.sleep(2)
            elif mode == Mode.STALL_PUT:
                time.sleep(900)
            # A claim is `<endpoint>/claim/...`; any `claim` deeper in the path is a package
            elif mode == Mode.SLOW_OBJ and parts[1:2] != ["claim"]:
                time.sleep(4)
            path = os.path.join(STORE, *parts)
            os.makedirs(os.path.dirname(path), exist_ok=True)
            want = self.headers.get("x-goog-if-generation-match")
            # The precondition and the write are one step, as Cloud Storage makes them
            with STORE_LOCK:
                if want == "0":
                    # Create only: an existing object, even one being written by
                    # another request, keeps its bytes and its modification time
                    try:
                        f = open(path, "xb")
                    except FileExistsError:
                        self.respond(412, PRECONDITION_BODY, "application/xml")
                        return
                elif want is not None:
                    # Replace only the generation the request names
                    if str(generation(path) or 0) != want:
                        self.respond(412, PRECONDITION_BODY, "application/xml")
                        return
                    f = open(path, "wb")
                else:
                    f = open(path, "wb")
                with f:
                    f.write(body)
                gen = new_generation(path)
            self.respond(200, b"", "application/xml", {"x-goog-generation": str(gen)})


class Server(ThreadingHTTPServer):
    daemon_threads = True

    # Lake aborts transfers on error, which is not a server failure
    def handle_error(self, request, client_address):
        if not isinstance(sys.exception(), ConnectionError):
            super().handle_error(request, client_address)


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--store", required=True, help="directory to serve")
    parser.add_argument(
        "--port-file", required=True, help="where to write the bound port"
    )
    parser.add_argument("--host", default="127.0.0.1")
    parser.add_argument(
        "--tokens", help="file listing the bearer tokens that `bearer` mode accepts"
    )
    parser.add_argument("--redirect", help="the URL that `redirect` mode redirects to")
    args = parser.parse_args()

    global STORE, TOKENS, REDIRECT
    STORE = args.store
    TOKENS = args.tokens
    REDIRECT = args.redirect
    os.makedirs(STORE, exist_ok=True)

    # Port 0 lets the OS pick a free port, so parallel tests cannot collide
    server = Server((args.host, 0), Handler)
    port = server.server_address[1]
    # Written atomically so that a test can wait on the file to know the
    # server is accepting connections
    with open(args.port_file + ".tmp", "w") as f:
        f.write("%s\n" % port)
    os.replace(args.port_file + ".tmp", args.port_file)
    print("serving %s on %s:%s" % (STORE, args.host, port), flush=True)
    server.serve_forever()


if __name__ == "__main__":
    main()
