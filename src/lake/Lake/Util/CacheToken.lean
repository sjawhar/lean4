/-
Copyright (c) 2026 Lean FRO. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Sami Jawhar
-/
module

prelude
public import Lake.Util.Log
import Std.Sync.Mutex
import Init.Data.String.TakeDrop

/-! # Cache Token

An OAuth bearer token for a remote cache service that accepts no other credential
(e.g., a Cloud Storage bucket without HMAC keys). The shell command in `LAKE_CACHE_TOKEN_CMD`
prints the token, in the manner of Git credential helpers or the AWS `credential_process`.

Lake runs the command only when a request that needs the token is about to be sent, never at
startup, and reuses its token for at most 45 minutes (a Google access token lasts an hour). The
token reaches `curl` only through a configuration file that only the user can read, which is
removed after the request. It is never on a command line, in a log, or in the environment of a
process that Lake starts.
-/

open System

namespace Lake.CacheToken

/-- The environment variable with the shell command that prints the token. -/
public def cmdVar : String := "LAKE_CACHE_TOKEN_CMD"

/-- How long Lake reuses a token: 45 minutes, in milliseconds. -/
def maxAgeMs : Nat := 45 * 60 * 1000

/-- How long Lake reports a failure of the command again without running it: 60 s, in milliseconds. -/
def failureAgeMs : Nat := 60 * 1000

structure Cached where
  token : String
  /-- The monotonic time (in milliseconds) at which the command that printed the token started. -/
  startedAt : Nat

structure State where
  /-- The token of this Lake process, if any has been obtained. -/
  token? : Option Cached := none
  /-- The error of the last run of the command and the time it started, if that run failed. -/
  failure? : Option (String × Nat) := none
  deriving Inhabited

/-- The token or the last failure of this Lake process. -/
builtin_initialize cached : Std.Mutex State ← Std.Mutex.new {}

/--
Whether `c` may appear in a bearer token, as RFC 6750 defines its syntax (`b64token`).
Such a token has no quote, backslash, or whitespace, so it is safe in a `curl` configuration line.
-/
def isTokenChar (c : Char) : Bool :=
  c.isAlphanum || c matches '-' | '.' | '_' | '~' | '+' | '/' | '='

/--
Runs the token command `cmd` with `sh -c` and returns the token it printed
(its standard output, trimmed). Its standard error goes to Lake's standard error,
and it reads no standard input, so a command that asks a question fails instead of waiting.
Errors name `cmdVar`, but never include what the command printed.
-/
def run (cmd : String) : BaseIO (Except String String) := do
  let act : IO (String × UInt32) := do
    let child ← IO.Process.spawn {
      cmd := "sh", args := #["-c", cmd]
      stdin := .null, stdout := .piped, stderr := .inherit
    }
    let out ← child.stdout.readToEnd
    return (out, ← child.wait)
  match (← act.toBaseIO) with
  | .error e => return .error s!"failed to run `{cmdVar}`: {e}"
  | .ok (out, rc) =>
    if rc != 0 then
      return .error s!"`{cmdVar}` exited with code {rc}"
    let token := out.trimAscii.copy
    if token.isEmpty then
      return .error s!"`{cmdVar}` printed no token"
    unless token.all isTokenChar do
      return .error s!"`{cmdVar}` printed something that is not a bearer token"
    return .ok token

/--
Returns the token of this Lake process, or `none` if `LAKE_CACHE_TOKEN_CMD` is unset or empty.

The first call runs the command; later calls reuse its token until it is 45 minutes old.
Concurrent calls run the command at most once. If the command fails, calls in the next
60 seconds report its error without running it again, so that a build whose many downloads
all need the token fails once instead of waiting for the command once per download.
-/
public def get? : LogIO (Option String) := do
  let some cmd ← IO.getEnv cmdVar
    | return none
  if cmd.trimAscii.isEmpty then
    return none
  let r : Except String String ← cached.atomically do
    let now ← IO.monoMsNow
    let s : State ← get
    if let some c := s.token? then
      if now - c.startedAt < maxAgeMs then
        return .ok c.token
    if let some (msg, failedAt) := s.failure? then
      if now - failedAt < failureAgeMs then
        return .error msg
    let r ← run cmd
    match r with
    | .ok token => set ({token? := some {token, startedAt := now}} : State)
    | .error msg => set ({failure? := some (msg, now)} : State)
    return r
  match r with
  | .ok token => return some token
  | .error msg => error msg

/--
Forgets `token`, a token that a service refused (HTTP 401), if it is still the token of
this process. Then the next `get?` runs the command again. A token that another request
has already replaced is kept, so that requests refused at the same time replace it only once.
-/
public def invalidate (token : String) : BaseIO Unit :=
  cached.atomically do
    let s : State ← get
    if s.token?.any (·.token == token) then
      set ({s with token? := none} : State)

/--
Records that a service refused `token` (HTTP 401) on the retry after `renew`, so that a new token
did not help either. If `token` is still the token of this process (or another such refusal has
already forgotten it), the next `get?` calls in 60 seconds report the refusal without running the
command, as for a command that fails. Otherwise a service that accepts no token of the command
would make Lake run it once per request.
-/
public def refused (token : String) : BaseIO Unit :=
  cached.atomically do
    let s : State ← get
    if s.token?.all (·.token == token) then
      let msg := s!"the service refused a new token from `{cmdVar}` (HTTP 401)"
      set ({failure? := some (msg, ← IO.monoMsNow)} : State)

/--
Returns the token to retry a request with after a service refused `token` (HTTP 401):
a new one, or the one that another refused request already obtained.
-/
public def renew (token : String) : LogIO (Option String) := do
  invalidate token
  get?

/-- The `curl` configuration line that sends `token` as an `Authorization` header. -/
public def curlHeaderLine (token : String) : String :=
  s!"header = \"Authorization: Bearer {token}\""

/--
Runs `act` with the `curl` arguments that send `token?` (if any) as
`Authorization: Bearer <token>`. The header is in a temporary configuration file
that is readable by its owner only (it is created by `mkstemp`) and that is removed
once `act` is done. With no token, the arguments are empty.
-/
@[inline] public def withCurlArgs
  [Monad m] [MonadFinally m] [MonadLiftT IO m]
  (token? : Option String) (act : Array String → m α)
: m α := do
  let some token := token?
    | act #[]
  IO.FS.withTempFile fun h path => do
    h.putStrLn (curlHeaderLine token)
    h.flush
    act #["--config", path.toString]

end Lake.CacheToken
