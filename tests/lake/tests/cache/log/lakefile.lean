import Lake
open System Lake DSL

package log

lean_lib Log

/-- A file whose build logs a warning, cached through `buildArtifactUnlessUpToDate`. -/
target warnArt pkg : FilePath := withCurrPackage pkg <| Job.async do
  addPureTrace "warnArt"
  let file := pkg.buildDir / "warn.txt"
  let art ← buildArtifactUnlessUpToDate file do
    logInfo "warn.txt: an info message logged by its build"
    logWarning "warn.txt: a warning logged by its build"
    createParentDirs file
    IO.FS.writeFile file "warn"
  return art.path
