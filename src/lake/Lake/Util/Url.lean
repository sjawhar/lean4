/-
Copyright (c) 2022 Mac Malone. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Mac Malone
-/
module

prelude
public import Lake.Util.Log
import Lake.Util.JsonObject
import Lake.Util.Proc
public import Lake.Util.CacheToken
import Init.Data.String.TakeDrop
import Init.Data.String.Search
import Init.Data.String.Modify
import Init.TacticsExtra  -- shake: keep (out-of-line macro_rules def, fix)

open Lean

namespace Lake

public def hexEncodeByte (b : UInt8) : Char :=
  if b = 0 then '0' else
  if b = 1 then '1' else
  if b = 2 then '2' else
  if b = 3 then '3' else
  if b = 4 then '4' else
  if b = 5 then '5' else
  if b = 6 then '6' else
  if b = 7 then '7' else
  if b = 8 then '8' else
  if b = 9 then '9' else
  if b = 0xa then 'A' else
  if b = 0xb then 'B' else
  if b = 0xc then 'C' else
  if b = 0xd then 'D' else
  if b = 0xe then 'E' else
  if b = 0xf then 'F' else
  '*'

/-- Encode a byte as a URI escape code (e.g., `%20`). -/
public def uriEscapeByte (b : UInt8) (s := "") : String :=
  s.push '%' |>.push (hexEncodeByte <| b >>> 4) |>.push (hexEncodeByte <| b &&& 0xF)

/-- Folds a monadic function over the UTF-8 bytes of `Char` from most significant to least significant. -/
@[specialize] public def foldlUtf8M [Monad m] (c : Char) (f : σ → UInt8 → m σ) (init : σ) : m σ := do
  let s := init
  let v := c.val
  if v ≤ 0x7f then
    f s v.toUInt8
  else if v ≤ 0x7ff then
    let s ← f s <| (v >>>  6).toUInt8 &&& 0x1f ||| 0xc0
    let s ← f s <| v.toUInt8 &&& 0x3f ||| 0x80
    return s
  else if v ≤ 0xffff then
    let s ← f s <| (v >>> 12).toUInt8 &&& 0x0f ||| 0xe0
    let s ← f s <| (v >>>  6).toUInt8 &&& 0x3f ||| 0x80
    let s ← f s <| v.toUInt8 &&& 0x3f ||| 0x80
    return s
  else
    let s ← f s <| (v >>> 18).toUInt8 &&& 0x07 ||| 0xf0
    let s ← f s <| (v >>> 12).toUInt8 &&& 0x3f ||| 0x80
    let s ← f s <| (v >>>  6).toUInt8 &&& 0x3f ||| 0x80
    let s ← f s <| v.toUInt8 &&& 0x3f ||| 0x80
    return s

public abbrev foldlUtf8 (c : Char) (f : σ → UInt8 → σ) (init : σ) : σ :=
  Id.run <| foldlUtf8M c (pure <| f · ·) init

example : foldlUtf8 c (fun l b => b::l) List.nil = (String.utf8EncodeChar c).reverse := by
  simp only [foldlUtf8, foldlUtf8M]
  simp only [String.utf8EncodeChar_eq_utf8EncodeCharFast, String.utf8EncodeCharFast]
  if h1 : c.val ≤ 0x7f then simp [h1]
  else if h2 : c.val ≤ 0x7ff then simp [h1, h2]
  else if h3 : c.val ≤ 0xffff then simp [h1, h2, h3]
  else simp [h1, h2, h3]

/-- Encode a character as a sequence of URI escape codes representing its UTF8 encoding. -/
public def uriEscapeChar (c : Char) (s := "") : String :=
  foldlUtf8 c (init := s) fun s b => uriEscapeByte b s

/--
A URI unreserved mark as specified in [RFC3986][2].
Unlike the older [RFC2396][1], RFC2396 also reserves `!`, `*`, `'`, `(`, and `)`.

Lake uses RFC3986 here because the `curl` implementation of AWS Sigv4
that Lake uses to upload artifacts requires these additional characters to be escaped.

[1]: https://datatracker.ietf.org/doc/html/rfc2396#section-2.3
[2]: https://datatracker.ietf.org/doc/html/rfc3986#section-2.3
-/
public def isUriUnreservedMark (c : Char)  : Bool :=
  c matches '-' | '_' | '.' | '~'

/-- Encodes anything but a URI unreserved character as a URI escape sequences. -/
public def uriEncodeChar (c : Char) (s := "") : String :=
  if c.isAlphanum || isUriUnreservedMark c then
    s.push c
  else
    uriEscapeChar c s

/-- Encodes a string as an ASCII URI component, escaping special characters (and unicode). -/
public def uriEncode (s : String) (init := "") : String :=
  s.foldl (init := init) fun s c => uriEncodeChar c s

/-- **For internal use only.** -/
-- Currently only for test use.
-- TODO: Move tracking to `Lake.Env` when feasible
@[inline] public def Internal.getCurl : BaseIO String := do
  -- Need to use a different `curl` on Windows where the system will
  -- otherwise always prefer the OS-provided version over that in `PATH`.
  return (← IO.getEnv "CURL").getD "curl"

/--
How long a transfer may take to connect (the TCP and TLS handshakes), in seconds: 3 s. Measured on
2026-10-26 from an Azure VM to Cloud Storage with 15,000 new connections at 75 and 200 a second:
the handshakes took 25 ms at the 99.9th percentile, and the slowest 0.04% took about 1.05 s, as
one retransmission of a lost SYN does (Linux sends it after 1 s). A connection that is not up
after 3 s lost two or more: the transfer gives up, and a retry connects afresh.
-/
public def transferConnectSecs : Nat := 3

/--
The `curl` arguments that make a transfer give up when it stalls: one that has not connected
within `transferConnectSecs`, or that has moved less than 1 KiB per second for `stallSecs`
seconds. For an upload, the time it waits for the server's answer counts as well.
-/
public def transferTimeoutArgs (stallSecs : Nat := 30) : Array String :=
  #["--connect-timeout", toString transferConnectSecs, "--speed-limit", "1024",
    "--speed-time", toString stallSecs]

/--
The longest that one try of a transfer of at most `bytes` bytes may take, in seconds
(`curl --max-time`): 60 s, and one more second for each MiB. That is a rate of 1 MiB per second,
a hundredth of what a download of a 134 MB artifact of the shared remote cache reached from an
Azure VM on 2026-10-26 (100 to 165 MB per second). It bounds a transfer that keeps moving, but
too slowly; one that stops moving gives up sooner (see `transferTimeoutArgs`).
-/
public def transferMaxSecs (bytes : Nat) : Nat := 60 + bytes / 1048576

/--
The `curl` arguments that try a transfer again up to `retries` times after a transient failure
(a timeout, a host that could not be resolved, or HTTP 408, 429, 500, 502, 503, 504, 522 or 524),
after 1 s and then twice as long each time, but never once `retryMaxSecs` have passed since the
first try: so a long `Retry-After` of the server ends the retries instead of making the transfer
wait. With no retries, none.

Only for a `curl` run of one transfer: in a parallel run (`-Z`), `curl` 8.17.0 to 8.19.x never
starts a retry that waits while no other transfer of the run is running, and the run then never
ends (curl issue 20669, fixed in 8.20.0). `transferFiles` retries the transfers of such a run.
-/
public def transferRetryArgs (retries retryMaxSecs : Nat) : Array String :=
  if retries == 0 then #[] else
    #["--retry", toString retries, "--retry-max-time", toString retryMaxSecs]

/-- How a `curl` run of one transfer gives up and tries again (see `TransferLimits.args`). -/
public structure TransferLimits where
  /-- The seconds after which a try that moves less than 1 KiB per second gives up. -/
  stallSecs : Nat := 30
  /-- How many times a transient failure is tried again (see `transferRetryArgs`). -/
  retries : Nat := 3
  /-- The seconds after the first try after which no retry starts (see `transferRetryArgs`). -/
  retryMaxSecs : Nat := 60

/--
The `curl` arguments of one transfer with the limits `limits`: it gives up when it stalls (see
`transferTimeoutArgs`) and tries again after a transient failure (see `transferRetryArgs`). With
`maxBytes?`, the transfer of at most that many bytes, each try may take at most
`transferMaxSecs maxBytes` seconds, and the transfer fails if it has more bytes.
-/
public def TransferLimits.args (limits : TransferLimits) (maxBytes? : Option Nat := none) : Array String :=
  let args := transferTimeoutArgs limits.stallSecs ++ transferRetryArgs limits.retries limits.retryMaxSecs
  maxBytes?.elim args fun bytes =>
    args ++ #["--max-filesize", toString bytes, "--max-time", toString (transferMaxSecs bytes)]

/--
The scheme and authority of an HTTP(S) URL, lowercased (e.g., `https://storage.googleapis.com`),
which identify the host (and port) that a request to the URL goes to.
Returns `none` for a URL of another scheme or with user information in its authority.
-/
public def urlOrigin? (url : String) : Option String := do
  let url := url.toLower
  let (scheme, rest) ←
    if let some rest := url.dropPrefix? "https://" then some ("https", rest)
    else if let some rest := url.dropPrefix? "http://" then some ("http", rest)
    else none
  let authority := (rest.takeWhile fun c => c != '/' && c != '?' && c != '#').copy
  guard (!authority.isEmpty && !authority.any fun c => c == '@' || c == '\\')
  return s!"{scheme}://{authority}"

/--
Whether a request to `url` may carry a credential: it uses HTTPS, or HTTP to a loopback host
(`localhost`, `127.x.x.x` or `[::1]`), whose traffic does not leave the machine.
-/
public def isCredentialSafe (url : String) : Bool := Id.run do
  let some origin := urlOrigin? url
    | return false
  if origin.startsWith "https://" then
    return true
  let some authority := origin.dropPrefix? "http://"
    | return false
  let authority := authority.copy
  let host :=
    if authority.startsWith "[" then
      (authority.takeWhile (· != ']')).copy ++ "]"
    else
      (authority.takeWhile (· != ':')).copy
  return host == "localhost" || host == "[::1]" ||
    (host.startsWith "127." && host.all fun c => c.isDigit || c == '.')

/--
Returns the cache token (see `CacheToken.get?`) for a request to `url`. Errors, without running
the token command, if the request would send the token over unencrypted HTTP to a host that is
not a loopback one (see `isCredentialSafe`).
-/
public def cacheTokenFor? (url : String) : LogIO (Option String) := do
  unless isCredentialSafe url do
    error s!"refusing to send the token of `{CacheToken.cmdVar}` to \
      {(urlOrigin? url).getD url} over unencrypted HTTP; the artifact endpoint of the service \
      that `LAKE_REMOTE_CACHE` names must use HTTPS (or a loopback host)"
  CacheToken.get?

/--
The `curl` arguments that start a request: with a token, `-q`, so that no `.curlrc` of the user
applies (it could make `curl` follow redirects, and thus send the token to another host);
without one, none. `-q` must be the first argument.
-/
public def curlLeadArgs (token? : Option String) : Array String :=
  if token?.isSome then #["-q"] else #[]

/--
The `curl` arguments that make a request follow redirects (`-L`): only without a token, so that a
request with the token goes only to the host of its URL.
-/
public def curlFollowArgs (token? : Option String) : Array String :=
  if token?.isSome then #[] else #["-L"]

/--
Retries a request whose token the service refused (HTTP 401): runs `retry` with a new token
(see `CacheToken.renew`). If `retry` reports that the service refused that token as well (its
`Bool`), records the refusal (see `CacheToken.refused`), so that the next requests report it
without running the token command again.
-/
public def retryWithNewToken
  [Monad m] [MonadLiftT LogIO m] [MonadLiftT BaseIO m]
  (token : String) (retry : Option String → m (α × Bool))
: m α := do
  let token? ← CacheToken.renew token
  let (a, refused) ← retry token?
  if refused then if let some token := token? then CacheToken.refused token
  return a

/--
Runs `request`, a `curl` request to `url`, with the cache token if `cacheToken` (see
`cacheTokenFor?`). This is the policy of every single request that may carry the token.

`request` gets whether it carries the token and the arguments that must start its `curl`
command line: `-q` (see `curlLeadArgs`), the temporary configuration file that sends the token
(see `CacheToken.withCurlArgs`), and, with `follow`, `-L` for a request without the token (see
`curlFollowArgs`). It returns the HTTP status code of the response and its result. If the service
refuses the token (HTTP 401), the request runs once more with a new token (see
`retryWithNewToken`).

Returns the status code and the result of the last request, and whether the request carried the
token.
-/
public def withCacheTokenRequest
  (url : String) (cacheToken : Bool)
  (request : (token : Bool) → (args : Array String) → LogIO (Nat × α)) (follow := true)
: LogIO (Nat × α × Bool) := do
  let send (token? : Option String) : LogIO (Nat × α) :=
    CacheToken.withCurlArgs token? fun authArgs => do
      let followArgs := if follow then curlFollowArgs token? else #[]
      request token?.isSome (curlLeadArgs token? ++ authArgs ++ followArgs)
  let token? ← if cacheToken then cacheTokenFor? url else pure none
  let (code, a) ← send token?
  let some token := token?
    | return (code, a, false)
  if code != 401 then
    return (code, a, true)
  let (code, a) ← retryWithNewToken token fun token? => do
    let (code, a) ← send token?
    return ((code, a), code == 401)
  return (code, a, true)

/--
Returns the HTTP status code in the JSON that `curl -w "%{json}"` wrote to `stderr`.
-/
public def curlResponseCode (stderr : String) : LogIO Nat := do
  match Json.parse stderr >>= JsonObject.fromJson? with
  | .ok data =>
    match (data.get? "response_code" <|> data.get? "http_code") with
    | .ok (some code) => return code
    | .ok none => error s!"curl's JSON output did not contain a response code; JSON received:\n{stderr}"
    | .error e => error s!"curl's JSON output contained an invalid JSON response code: {e}; JSON received:\n{stderr}"
  | .error e =>
    error s!"curl produced invalid JSON output: {e}; received:\n{stderr}"

/--
Performs a HTTP `GET` request of a URL (using `curl` with JSON output) and, if successful,
return the body.  Otherwise, returns `none` on a 404 and errors on anything else.

With `cacheToken`, the request carries the cache token, ignores the user's `.curlrc` and does not
follow redirects (see `withCacheTokenRequest`). The request gives up and tries again as `limits`
says (see `TransferLimits.args`); with `maxFileSize?`, a larger body fails, and each try is bounded
by the time such a body may take. The body goes to a temporary file, which `curl` empties before
a retry, so that the body of a failed try (e.g., an HTTP 503) is not part of the result.
-/
public def getUrl?
  (url : String) (headers : Array String := #[]) (cacheToken := false)
  (maxFileSize? : Option Nat := none) (limits : TransferLimits := {})
: LogIO (Option String) := withLogErrorPos <| IO.FS.withTempFile fun _ bodyFile => do
  let (code, _, _) ← withCacheTokenRequest url cacheToken fun _ args => do
    let args := args ++ #["-s", "-w", "%{stderr}%{json}\n", "-o", bodyFile.toString] ++
      limits.args maxFileSize?
    let args := headers.foldl (init := args) (· ++ #["-H", ·])
    let out ← captureProc' {cmd := ← Internal.getCurl, args := args.push url}
    return (← curlResponseCode out.stderr, ())
  let body ← IO.FS.readFile bodyFile
  if code == 200 then
    return some body.trimAscii.copy
  else if code == 404 then
    return none
  else
    error s!"failed to GET URL, error {code}; received:\n{body}"

/-- Perform a HTTP `GET` request of a URL (using `curl`) and return the body. -/
public def getUrl (url : String) (headers : Array String := #[]) : LogIO String := do
  let args := #[
      "-s", "-L",
      "--retry", "3" -- intermittent network errors can occur
  ]
  let args := headers.foldl (init := args) (· ++ #["-H", ·])
  captureProc {cmd := ← Internal.getCurl, args := args.push url}
