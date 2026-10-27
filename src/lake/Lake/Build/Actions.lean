/-
Copyright (c) 2017 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Gabriel Ebner, Sebastian Ullrich, Mac Malone, Siddharth Bhat
-/
module

prelude
public import Lake.Util.Log
import Lake.Util.Proc
import Lake.Util.FilePath
import Lake.Util.IO
import Lake.Util.BuildSlots
public import Lake.Util.Url
import Lake.Util.CacheToken
import Init.Data.String.Search
import Init.Data.String.TakeDrop
import Init.System.Platform
import Lean.CoreM
import Lean.Compiler.Options

/-! # Common Build Actions
Low level actions to build common Lean artifacts via the Lean toolchain.
-/

open System
open Lean hiding SearchPath

namespace Lake

public def compileLeanIR
  (setupFile irFile cFile : FilePath)
  (leanPath : SearchPath := [])
  (leanir : FilePath := "leanir")
: LogIO Unit := do
  createParentDirs irFile
  createParentDirs cFile
  withBuildSlot do
  proc (lend := true) {
    cmd := leanir.toString
    args := #[setupFile.toString, irFile.toString, cFile.toString]
    env := #[("LEAN_PATH", leanPath.toString)]
  }

/--
Compiles a Lean module with `lean`, in a build slot (`withBuildSlot`), unless `takeSlot` is false:
then the caller holds one for it (`withJobBuildSlot`).
-/
public def compileLeanModule
  (leanFile relLeanFile : FilePath)
  (setup : ModuleSetup) (setupFile : FilePath)
  (arts : ModuleArtifacts)
  (leanArgs : Array String := #[])
  (leanPath : SearchPath := [])
  (lean : FilePath := "lean")
  (takeSlot := true)
: LogIO Unit := do
  let mut args := leanArgs.push leanFile.toString
  if let some oleanFile := arts.olean? then
    createParentDirs oleanFile
    args := args ++ #["-o", oleanFile.toString]
  if let some ileanFile := arts.ilean? then
    createParentDirs ileanFile
    args := args ++ #["-i", ileanFile.toString]
  let opts := setup.options.toOptions
  let postponeCompile := setup.isModule && Compiler.compiler.postponeCompile.get opts
  if !postponeCompile then
    if let some cFile := arts.c? then
      createParentDirs cFile
      args := args ++ #["-c", cFile.toString]
  if let some bcFile := arts.bc? then
    createParentDirs bcFile
    args := args ++ #["-b", bcFile.toString]
  createParentDirs setupFile
  IO.FS.writeFile setupFile (toJson setup).pretty
  args := args ++ #["--setup", setupFile.toString]
  args := args.push "--json"
  withLogErrorPos do
  let run := rawProc (lend := true) {
    args
    cmd := lean.toString
    env := #[
      ("LEAN_PATH", leanPath.toString)
    ]
  }
  let out ← if takeSlot then withBuildSlot run else run
  let outLogPos ← getLogPos
  unless out.stdout.isEmpty do
    let txt ← out.stdout.split '\n' |>.foldM (init := "") fun (txt : String) ln => do
      let ln := ln.copy
      if let .ok (msg : SerialMessage) := Json.parse ln >>= fromJson? then
        unless txt.isEmpty do
          logInfo s!"stdout:\n{txt}"
        let msg := {msg with fileName := mkRelPathString relLeanFile}
        logSerialMessage msg
        return txt
      else if txt.isEmpty && ln.isEmpty then
        return txt
      else
        return txt ++ ln ++ "\n"
    unless txt.isEmpty do
      logInfo s!"stdout:\n{txt}"
  unless out.stderr.isEmpty do
    logInfo s!"stderr:\n{out.stderr.trimAscii}"
  -- Elide the generic "Lean exited with code 1" when Lean already
  -- reported errors (the usual compiler-failure case). Keep it for other
  -- nonzero codes, for code 1 without diagnostics, and for the anomalous
  -- case where Lean logs errors but exits successfully.
  -- See https://github.com/leanprover/lean4/issues/10825
  let hasErrors := (← getLog).takeFrom outLogPos |>.any (·.level matches .error)
  if out.exitCode = 1 && hasErrors then
    failure
  else if out.exitCode ≠ 0 || hasErrors then
    error s!"Lean exited with code {out.exitCode}"

public def compileO
  (oFile srcFile : FilePath)
  (moreArgs : Array String := #[]) (compiler : FilePath := "cc")
: LogIO Unit := do
  createParentDirs oFile
  withBuildSlot do
  proc (lend := true) {
    cmd := compiler.toString
    args := #["-c", "-o", oFile.toString, srcFile.toString] ++ moreArgs
  }

public def mkArgs (basePath : FilePath) (args : Array String) : LogIO (Array String) := do
  -- Use response file to avoid potentially exceeding CLI length limits.
  -- On Windows this is always needed; on macOS/Linux this is needed for large
  -- projects like Mathlib where the number of object files exceeds ARG_MAX.
  let rspFile := basePath.addExtension "rsp"
  let h ← IO.FS.Handle.mk rspFile .write
  args.forM fun arg =>
    -- Escape special characters
    let arg := arg.foldl (init := "") fun s c =>
      if c == '\\' || c == '"' then
        s.push '\\' |>.push c
      else
        s.push c
    h.putStr s!"\"{arg}\"\n"
  return #[s!"@{rspFile}"]

public def compileStaticLib
  (libFile : FilePath) (oFiles : Array FilePath)
  (ar : FilePath := "ar") (thin := false)
: LogIO Unit := do
  createParentDirs libFile
  -- `ar rcs` does not remove old files from the archive, so it must be deleted first
  removeFileIfExists libFile
  let args := #["rcs"]
  let args := if thin then args.push "--thin" else args
  let args := args.push libFile.toString ++ (← mkArgs libFile <| oFiles.map toString)
  withBuildSlot <| proc (lend := true) {cmd := ar.toString, args}

public def compileSharedLib
  (libFile : FilePath) (linkArgs : Array String)
  (linker : FilePath := "cc") (macosxDeploymentTarget? : Option String := none)
: LogIO Unit := do
  createParentDirs libFile
  withBuildSlot do
  proc (lend := true) {
    cmd := linker.toString
    args := #["-shared", "-o", libFile.toString] ++ (← mkArgs libFile linkArgs)
    -- See `BuildConfig.macosxDeploymentTarget?` for details
    env := macosxDeploymentTarget?.elim #[] fun ver => #[("MACOSX_DEPLOYMENT_TARGET", some ver)]
  }

public def compileExe
  (binFile : FilePath) (linkArgs : Array String)
  (linker : FilePath := "cc") (macosxDeploymentTarget? : Option String := none)
: LogIO Unit := do
  createParentDirs binFile
  withBuildSlot do
  proc (lend := true) {
    cmd := linker.toString
    args := #["-o", binFile.toString] ++ (← mkArgs binFile linkArgs)
    -- See `BuildConfig.macosxDeploymentTarget?` for details
    env :=  macosxDeploymentTarget?.elim #[] fun ver => #[("MACOSX_DEPLOYMENT_TARGET", some ver)]
  }

/--
Download a file using `curl`, replacing any existing file.

`curl` writes to a temporary file next to `file`, unique to this download, which `check`
vets before it is renamed into place. Thus, `file` never holds a partial download, and a
failed download (whose temporary file is removed) leaves it as it was. The download gives up and
tries again as `limits` says (see `TransferLimits.args`; by default, it gives up on a stall and is
not tried again); with `maxFileSize?`, a larger file fails, and each try is bounded by the time
such a file may take.

With `cacheToken`, the request carries the cache token, ignores the user's `.curlrc` and does not
follow redirects (see `withCacheTokenRequest`); a redirect is an error that names it.
-/
public def download
  (url : String) (file : FilePath) (headers : Array String := #[])
  (cacheToken := false) (maxFileSize? : Option Nat := none)
  (check : FilePath → LogIO PUnit := fun _ => pure ())
  (limits : TransferLimits := {retries := 0})
: LogIO PUnit := do
  createParentDirs file
  let tmp ← uniqueTmpPath file
  try
    let (code, out, token) ← withCacheTokenRequest url cacheToken fun _ args => do
      let args := args ++ #["-s", "-S", "-f", "-o", tmp.toString, "-w", "%{http_code}"]
      let args := args ++ limits.args maxFileSize?
      let args := headers.foldl (init := args) (· ++ #["-H", ·])
      let out ← rawProc {cmd := ← Internal.getCurl, args := args.push url}
      return (out.stdout.trimAscii.toNat?.getD 0, out)
    -- The standard output is the status code that `-w` reports
    let out := {out with stdout := ""}
    if out.exitCode = 0 then
      logOutput out logVerbose
    else
      logOutput out logInfo
      -- With `-f`, `curl` fails on an HTTP error status, which its exit code does not name
      let status := if code == 0 then "" else s!" (HTTP {code})"
      error s!"external command '{← Internal.getCurl}' exited with code {out.exitCode}{status}"
    -- Without `-L`, `curl` succeeds on a redirect, having written the redirect's body
    if 300 ≤ code && code < 400 then
      if token then
        error s!"{url}: the server redirected the download (status {code}), and a request \
          that carries the token of `{CacheToken.cmdVar}` does not follow redirects"
      else
        error s!"{url}: the server answered the download with a redirect (status {code}) \
          that `curl` could not follow"
    check tmp
    IO.FS.rename tmp file
  finally
    -- After a successful download, the temporary file is already gone
    discard <| (removeFileIfExists tmp).toBaseIO

/-- Unpack an archive `file` using `tar` into the directory `dir`. -/
public def untar (file : FilePath) (dir : FilePath) (gzip := true) : LogIO PUnit := do
  IO.FS.createDirAll dir
  let mut opts := "-xvv"
  if gzip then
    opts := opts.push 'z'
  withBuildSlot do
  proc (quiet := true) (lend := true) {
    cmd := "tar",
    args := #[opts, "-f", file.toString, "-C", dir.toString]
  }

/-- Pack a directory `dir` using `tar` into the archive `file`. -/
public def tar
  (dir : FilePath) (file : FilePath)
  (gzip := true) (excludePaths : Array FilePath := #[])
: LogIO PUnit := do
  createParentDirs file
  let mut args := #["-cvv"]
  if gzip then
    args := args.push "-z"
  for path in excludePaths do
    args := args.push s!"--exclude={path}"
  proc (quiet := true) {
    cmd := "tar"
    args := args ++ #["-f", file.toString, "-C", dir.toString, "."]
    -- don't pack `._` files on MacOS
    env := if Platform.isOSX then #[("COPYFILE_DISABLE", "true")] else #[]
  }
