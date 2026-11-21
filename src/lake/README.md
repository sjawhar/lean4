# Lake

Lake (Lean Make) is the new build system and package manager for Lean 4.
Lake configurations can be written in Lean or TOML and are conventionally stored in a `lakefile` in the root directory of package.

A Lake configuration file defines the package's basic configuration. It also typically includes build configurations for different targets (e.g., Lean libraries and binary executables) and Lean scripts to run on the command line (via `lake script run`).

***This README provides information about Lake relative to the current commit. If you are looking for documentation for the Lake version shipped with a given Lean release, you should look at the README of that version.***

## Table of Contents

* [Getting Lake](#getting-lake)
* [Creating and Building a Package](#creating-and-building-a-package)
* [Glossary of Terms](#glossary-of-terms)
* [Package Configuration Options](#package-configuration-options)
  + [Metadata](#metadata)
  + [Layout](#layout)
  + [Build & Run](#build--run)
  + [Test & Lint](#test--lint)
  + [Cloud Releases](#cloud-releases)
* [Specifying Targets](#specifying-targets)
* [Defining Targets](#defining-targets)
  + [Lean Libraries](#lean-libraries)
  + [Binary Executables](#binary-executables)
  + [External Libraries](#external-libraries)
  + [Custom Targets](#custom-targets)
* [Defining New Facets](#defining-new-facets)
* [Adding Dependencies](#adding-dependencies)
  + [Lean `require`](#lean-require)
  + [Supported Sources](#supported-sources)
  + [TOML `require`](#toml-require)
* [GitHub Release Builds](#github-release-builds)
* [Writing and Running Scripts](#writing-and-running-scripts)
* [Build-Service Mode](#build-service-mode)
  + [Native Code on the Service](#native-code-on-the-service)
  + [Inputs of Service Actions](#inputs-of-service-actions)
  + [The Timeout](#the-timeout)
  + [When the Service Does Not Answer](#when-the-service-does-not-answer)
  + [Another Lean on the Service](#another-lean-on-the-service)
  + [The Log](#the-log)
  + [Local Cache in Build-Service Mode](#local-cache-in-build-service-mode)
* [Building and Running Lake from the Source](#building-and-running-lake-from-the-source)
  + [Building with Nix Flakes](#building-with-nix-flakes)
  + [Augmenting Lake's Search Path](#augmenting-lakes-search-path)

## Getting Lake

Lake is part of the [lean4](https://github.com/leanprover/lean4) repository and is distributed along with its official releases (e.g., as part of the [elan](https://github.com/leanprover/elan) toolchain). So if you have installed a semi-recent Lean 4 nightly, you should already have it! If you want to build the latest version from the source yourself, check out the [build instructions](#building-and-running-lake-from-the-source) at the bottom of this README.

## Creating and Building a Package

To create a new package, either run `lake init` to setup the package in the current directory or `lake new` to create it in a new directory. For example, we could create the package `hello` like so:

```
$ mkdir hello
$ cd hello
$ lake init hello
```

or like so:

```
$ lake new hello
$ cd hello
```

Either way, Lake will create the following template directory structure and initialize a Git repository for the package.

```
.lake/         # Lake output directory
Hello/         # library source files; accessible via `import Hello.*`
  Basic.lean   # an example library module file
  ...          # additional files should be added here
Hello.lean     # library root; imports standard modules from Hello
Main.lean      # main file of the executable (contains `def main`)
lakefile.toml  # Lake package configuration
lean-toolchain # the Lean version used by the package
.gitignore     # excludes system-specific files (e.g. `build`) from Git
```

The example modules files contain the following dummy "Hello World" program.

**Hello/Basic.lean**
```lean
def hello := "world"
```

**Hello.lean**
```lean
-- This module serves as the root of the `Hello` library.
-- Import modules here that should be built as part of the library.
import «Hello».Basic
```

**Main.lean**
```lean
import «Hello»

def main : IO Unit :=
  IO.println s!"Hello, {hello}!"
```

Lake also creates a basic `lakefile.toml` for the package along with a `lean-toolchain` file that contains the name of the Lean toolchain Lake belongs to, which tells [`elan`](https://github.com/leanprover/elan) to use that Lean toolchain for the package.


**lakefile.toml**
```toml
name = "hello"
version = "0.1.0"
defaultTargets = ["hello"]

[[lean_lib]]
name = "Hello"

[[lean_exe]]
name = "hello"
root = "Main"
```

The command `lake build` is used to build the package (and its [dependencies](#adding-dependencies), if it has them) into a native executable. The result will be placed in `.lake/build/bin`. The command `lake clean` deletes `build`.

```
$ lake build
...
$ ./.lake/build/bin/hello
Hello, world!
```

Examples of different package configurations can be found in the [`examples`](examples) folder of this repository. You can also pass a package template tp `lake init` or `lake new` to control what files Lake creates. For example, instead of using a Lean configuration file for this package, one could produce a TOML version via `lake new hello .toml`.

**lakefile.toml**
```toml
name = "hello"
defaultTargets = ["hello"]

[[lean_lib]]
name = "Hello"

[[lean_exe]]
name = "hello"
root = "Main"
```

See `lake help init` or `lake help new` for more details on other template options.

## Glossary of Terms

Lake uses a lot of terms common in software development -- like workspace, package, library, executable, target, etc. -- and some more esoteric ones -- like facet. However, whether common or not, these terms mean different things to different people, so it is important to elucidate how Lake defines these terms:

* A **package** is the **fundamental unit of code distribution in Lake**.  Packages can be sourced from the local file system or downloaded from the web (e.g., via Git). The `package` declaration in package's lakefile names it and [defines its basic properties](#package-configuration-options).

* A **lakefile** is the Lean file that configures a package. It defines how to view, edit, build, and run the code within it, and it specifies what other packages it may require in order to do so.

* If package `B` requires package `A`, then package `A` is a **dependency** of package B and package `B` is its **dependent**. Package `A` is **upstream** of package `B` and package `B` is reversely **downstream** of package `A`. See the [Adding Dependencies section](#adding-dependencies) for details on how to specify dependencies.

* A **workspace** is the **broadest organizational unit in Lake**. It bundles together a package (termed the **root**), its transitive dependencies, and Lake's environment. Every package can operate as the root of a workspace and the workspace will derive its configuration from this root.

* A **module** is the **smallest unit of code visible to Lake's build system**. It is generally represented by a Lean source file and a set of binary libraries (i.e., a Lean `olean` and `ilean` plus a system shared library if `precompileModules` is turned on). Modules can import one another in order to use each other's code and Lake exists primarily to facilitate this process.

* A **Lean library** is a collection of modules that share a single configuration. Its configuration defines a set of **module roots** that determines which modules are part of the library, and a set of **module globs** that selects which modules to build on a `lake build` of the library.  See the [Lean Libraries section](#lean-libraries) for more details.

* A **Lean binary executable** is a binary executable (i.e., a program a user can run on their computer without Lean installed) built from a Lean module termed its **root** (which should have a `main` definition). See the [Binary Executables section](#binary-executables) for more details.

* An **external library** is a native (static) library built from foreign code (e.g., C) that is required by a package's Lean code in order to function (e.g., because it uses `@[extern]` to invoke code written in a foreign language). An `extern_lib` target is used to inform Lake of such a requirement and instruct Lake on how to build requisite library. Lake then automatically links the external library when appropriate to give the Lean code access to the foreign functions (or, more technically, the foreign symbols) it needs. See the [External Libraries section](#external-libraries) for more details.

* A **target** is the **fundamental build unit of Lake**. A package can defining any number of targets. Each target has a name, which is used to instruct Lake to build the target (e.g., through `lake build <target>`) and to keep track internally of a target's build status.  Lake defines a set of builtin target types -- [Lean libraries](#lean-libraries), [binary executables](#binary-executables), and [external libraries](#external-libraries) -- but a user can [define their own custom targets as well](#custom-targets). Complex types (e.g., packages, libraries, modules) have multiple facets, each of which count as separate buildable targets. See the [Defining Build Targets section](#defining-build-targets) for more details.

* A **facet** is an element built from another organizational unit (e.g., a package, module, library, etc.). For instance, Lake produces `olean`, `ilean`, `c`, and `o` files all from a single module. Each of these components are thus termed a *facet* of the module. Similarly, Lake can build both static and shared binaries from a library. Thus, libraries have both `static` and `shared` facets. Lake also allows users to define their own custom facets to build from modules and packages, but this feature is currently experimental and not yet documented.

* A **trace** is a piece of data (generally a hash) which is used to verify whether a given target is up-to-date (i.e., does not need to be rebuilt). If the trace stored with a built target matches the trace computed during build, then a target is considered up-to-date. A target's trace is derived from its various **inputs** (e.g., source file, Lean toolchain, imports, etc.).

## Package Configuration Options

Lake provides a large assortment of configuration options for packages.

### Metadata

These options describe the package. They are used by Lake's package registry, [Reservoir](https://reservoir.lean-lang.org/), to index and display packages. If a field is left out, Reservoir may use information from the package's GitHub repository to fill in details.

* `name`: The name of the package. Set by `package <name>` in Lean configuration files.
* `version`: The version of the package. A 3-point version identifier with an optional `-` suffix.
* `versionTags`: Git tags of this package's repository that should be treated as versions.  Reservoir makes use of this information to determine the Git revisions corresponding to released versions. Defaults to tags that are "version-like". That is, start with a `v` followed by a digit.
* `description`: A short description for the package.
* `keywords`: An `Array` of custom keywords that identify key aspects of the package. Reservoir can make use of these to group packages and make it easier for potential users to discover them.  For example, Lake's keywords could be `devtool`, `cli`, `dsl`,  `package-manager`, and `build-system`.
* `homepage`: A URL to information about the package. Reservoir will already include a link to the package's GitHub repository. Thus, users are advised to specify something else for this.
* `license`: An [SPFX license identifier](https://spdx.org/licenses/) for the package's license. For example, `Apache-2.0` or `MIT`.
* `licenseFiles`: An `Array` of  files that contain license information. For example, `#["LICENSE", "NOTICE"]` for Apache 2.0. Defaults to `#["LICENSE"]`,
* `readmeFile`: The relative path to the package's README. It should be a Markdown file containing an overview of the package. A nonstandard location can be used to provide a different README for Reservoir and GitHub. Defaults to `README.md`.
* `reservoir`:  Whether Reservoir should index the package. Defaults to `true`. Set this to `false` to have Reservoir exclude the package from its index.


### Layout

These options control the top-level directory layout of the package and its build directory. Further paths specified by libraries, executables, and targets within the package are relative to these directories.

* `packagesDir`: The directory to which Lake should download remote dependencies. Defaults to `.lake/packages`.
* `srcDir`: The directory containing the package's Lean source files. Defaults to the package's directory.
* `buildDir`: The directory to which Lake should output the package's build results. Defaults to `build`.
* `leanLibDir`: The build subdirectory to which Lake should output the package's binary Lean libraries (e.g., `.olean`, `.ilean` files). Defaults to `lib`.
* `nativeLibDir`: The build subdirectory to which Lake should output the package's native libraries (e.g., `.a`, `.so`, `.dll` files). Defaults to `lib`.
* `binDir`: The build subdirectory to which Lake should output the package's binary executables. Defaults to `bin`.
* `irDir`: The build subdirectory to which Lake should output the package's intermediary results (e.g., `.c`, `.o` files). Defaults to `ir`.

### Build & Run

These options configure how code is built and run in the package. Libraries, executables, and other targets within a package can further add to parts of this configuration.

* `platformIndependent`: Asserts whether Lake should assume Lean modules are platform-independent. That is, whether lake should include the platform and platform-dependent elements in a module's trace. See the docstring of `Lake.LeanConfig.platformIndependent` for more details. Defaults to `none`.
* `precompileModules`:  Whether to compile each module into a native shared library that is loaded whenever the module is imported. This speeds up the evaluation of metaprograms and enables the interpreter to run functions marked `@[extern]`. Defaults to `false`.
* `moreServerOptions`: An `Array` of additional options to pass to the Lean language server (i.e., `lean --server`) launched by `lake serve`.
* `moreGlobalServerArgs`: An `Array` of additional arguments to pass to `lean --server` which apply both to this package and anything else in the same server session (e.g. when browsing other packages from the same session via go-to-definition)
* `buildType`: The `BuildType` of targets in the package (see [`CMAKE_BUILD_TYPE`](https://stackoverflow.com/a/59314670)). One of `debug`, `relWithDebInfo`, `minSizeRel`, or `release`. Defaults to `release`.
* `leanOptions`: Additional options to pass to both the Lean language server (i.e., `lean --server`) launched by `lake serve` and to `lean` while compiling Lean source files.
* `dynlibs`: An `Array` of `Dynlib` shared library [targets](#specifying-targets) to load during elaboration (e.g., via `lean --load-dynlib`).
* `plugins`: An `Array` of `Dynlib` shared library [targets](#specifying-targets) to load as plugins during elaboration (e.g., via `lean --plugin`). Plugins, unlike `dynlibs`, have an initializer which is executed upon loading the shared library. The initialization function follows the naming convention of a Lean module initializaiter.
* `moreLeanArgs`: An `Array` of additional arguments to pass to `lean` while compiling Lean source files.
* `weakLeanArgs`: An `Array` of additional arguments to pass to `lean` while compiling Lean source files. Unlike `moreLeanArgs`, these arguments do not affect the trace of the build result, so they can be changed without triggering a rebuild. They come *before* `moreLeanArgs`.
* `moreLeancArgs`: An `Array` of additional arguments to pass to `leanc` while compiling the C source files generated by `lean`. Lake already passes some flags based on the `buildType`, but you can change this by, for example, adding `-O0` and `-UNDEBUG`.
* `weakLeancArgs`: An `Array` of additional arguments to pass to `leanc` while compiling the C source files generated by `lean`. Unlike `moreLeancArgs`, these arguments do not affect the trace of the build result, so they can be changed without triggering a rebuild. They come *before* `moreLeancArgs`.
* `moreLinkArgs`: An `Array` of additional arguments to pass to `leanc` when linking (e.g., binary executables or shared libraries). These will come *after* the paths of `extern_lib` targets.
* `weakLinkArgs`: An `Array` of additional arguments to pass to `leanc` when linking (e.g., binary executables or shared libraries) Unlike `moreLinkArgs`, these arguments do not affect the trace of the build result, so they can be changed without triggering a rebuild. They come *before* `moreLinkArgs`.
* `moreLinkObjs`: An `Array` of `FilePath` [targets](#specifying-targets) producing additional native objects (e.g., static libraries or `.o` object files) to statically link to the library.
* `moreLinkLibs`: An `Array` of `Dynlib` [targets](#specifying-targets) to dynamically link to the library.

### Test & Lint

The CLI commands `lake test` and `lake lint` use definitions configured by the workspace's root package to perform testing and linting (this referred to as the test or lint *driver*). In Lean configuration files, these can be specified by applying the `@[test_driver]` or `@[lint_driver]` to a `script`, `lean_exe`, or `lean_lb`. They can also be configured (in Lean or TOML format) via the following options on the package.

* `testDriver`: The name of the script, executable, or library to drive `lake test`.
* `testDriverArgs`: An `Array` of arguments to pass to the package's test driver.
* `lintDriver`: The name of the script or executable used by `lake lint`. Libraries cannot be lint drivers.
* `lintDriverArgs`: An `Array` of arguments to pass to the package's lint driver.

You can specify definition from a dependency as a package's test or lint driver by using the syntax `<pkg>/<name>`. An executable driver will be built and then run, a script driver will just be run, and a library driver will just be built. A script or executable driver is run with any arguments configured by package (e.g., via `testDriverArgs`) followed by any specified on the CLI (e.g., via `lake lint -- <args>...`).

### Cloud Releases

These options define a cloud release for the package. See the section on [GitHub Release Builds](#github-release-builds) for more information.

* `releaseRepo`: The URL of the GitHub repository to upload and download releases of this package.  If `none` (the default), for downloads, Lake uses the URL the package was download from (if it is a dependency) and for uploads, uses `gh`'s default.
* `buildArchive`: The name of the build archive for the GitHub cloud release.
Defaults to `{(pkg-)name}-{System.Platform.target}.tar.gz`.
* `preferReleaseBuild`: Whether to prefer downloading a prebuilt release (from GitHub) rather than building this package from the source when this package is used as a dependency.

## Specifying Targets

Some Lake CLI commands take targets (e.g., `lake build`, `lake query`) and certain Lake configuration options (e.g., `needs`, `plugins`, `moreLinkObjs`) accept targets. In general, targets can be specified with the following syntax.

```
[@[<package>]/][<target>|[+]<module>][:<facet>]
```

| Example     | What It Specifies                                             |
| ------------| --------------------------------------------------------------|
| `a`         | The default facet(s) of target `a`                            |
| `@a`        | the default target(s) of package `a`                          |
| `+A`        | The default facets(s) of module `A`                           |
| `:foo`      | The facet `foo` of the root package                           |
| `@/a`       | The default facet(s) of target `a` of the root package        |
| `@a/b`      | The default facet(s) of target `b` of package `a`             |
| `@a/+A`     | The default facet(s) of module `A` of package `a`             |
| `@a/+A:c`   | The facet `c` of module `A` of package `a` (e.g., its C file) |

On the command line or in a TOML configuration file, targets are specified as strings.

**lakefile.toml**
```toml
name = "example"

[[lean_lib]]
name = "Plugin"

[[lean_exe]]
name = "exe"
plugins = ["Plugin:shared"] # i.e., @example/Plugin:shared
```

```
$ lake build @example/exe
```

In a Lean configuration file, target specifiers are literals that start with
either `` `@ `` or `` `+ ``.

**lakefile.lean**
```lean
package "example"

input_file foo where
  path := "inputs/foo.txt"
  text := true

@[default_target]
lean_exe exe where
  needs := #[`@/foo] -- i.e., `@examole/foo
```

The full literal syntax is:

```
`@[<package>]/[<target>|[+]<module>][:<facet>]
`+<module>[:<facet>]
```

In Lean, targets defined in the same configuration can also be specified by their identifier.

**lakefile.lean**
```lean
input_file foo where
  path := "inputs/foo.txt"
  text := true

lean_exe exe where
  needs := #[foo]
```

## Defining Targets

A Lake package can have many targets, such as different Lean libraries and multiple binary executables. Any number of these declarations can be marked with the `@[default_target]` attribute to tell Lake to build them on a bare `lake build` of the package.

### Lean Libraries

A Lean library target defines a set of Lean modules available to `import` and how to build them.

**Syntax**

```lean
lean_lib «target-name» where
  -- configuration options go here
```

```toml
[[lean_lib]]
name = "«target-name»"
# more configuration options go here
```

**Configuration Options**

* `needs`: An `Array` of [targets](#specifying-targets) to build before the library's modules.
* `srcDir`: The subdirectory of the package's source directory containing the library's source files. Defaults to the package's `srcDir`. (This will be passed to `lean` as the `-R` option.)
* `roots`: An `Array` of root module `Name`(s) of the library. Submodules of these roots (e.g., `Lib.Foo` of `Lib`) are considered part of the library. Defaults to a single root of the target's name.
* `globs`: An `Array` of module `Glob`(s) to build for the library. The term `glob` comes from [file globs](https://en.wikipedia.org/wiki/Glob_(programming)) (e.g., `foo/*`) on Unix. A submodule glob builds every Lean source file within the module's directory (i.e., ``Glob.submodules `Foo`` is essentially equivalent to a theoretical `import Foo.*`). Local imports of glob'ed files (i.e., fellow modules of the workspace) are also recursively built. Defaults to a `Glob.one` of each of the library's  `roots`.
* `libName`: The `String` name of the library. Used as a base for the file names of its static and dynamic binaries. Defaults to the name of the target.
* `defaultFacets`: An `Array` of library facets to build on a bare `lake build` of the library. For example, setting this to `#[LeanLib.sharedFacet]` will build the shared library facet.
* `nativeFacets`: A function `(shouldExport : Bool) → Array` determining the [module facets](#defining-new-facets) to build and combine into the library's static and shared libraries. If `shouldExport` is true, the module facets should export any symbols a user may expect to lookup in the library. For example, the Lean interpreter will use exported symbols in linked libraries. Defaults to a singleton of `Module.oExportFacet` (if `shouldExport`) or `Module.oFacet`. That is, the object files compiled from the Lean sources, potentially with exported Lean symbols.

The following options augment the package's corresponding configuration option.

* `buildType`: Minimum of the two settings — lowest is `debug`, highest is `release`.
* `precompileModules`: `true` if either are `true`.
* `platformIndependent`: Falls back to the package's setting on `none`.
* `leanOptions`, `moreServerOptions`: Merges them and the library's takes precedence.
* `<more|weak><Lean|Leanc|Link><Args|Objs|Libs>`: Appends them after the package's.

### Binary Executables

A Lean executable target builds a binary executable from a Lean module with a `main` function.

**Syntax**

```lean
lean_exe «target-name» where
  -- configuration options go here
```

```toml
[[lean_exe]]
name = "«target-name»"
# more configuration options go here
```

**Configuration Options**

* `needs`: An `Array` of [targets](#specifying-targets) to build before the executable's module.
* `srcDir`: The subdirectory of the package's source directory containing the executable's source file. Defaults to the package's `srcDir`. (This will be passed to `lean` as the `-R` option.)
* `root`: The root module `Name` of the binary executable. Should include a `main` definition that will serve as the entry point of the program. The root is built by recursively building its local imports (i.e., fellow modules of the workspace). Defaults to the name of the target.
* `exeName`: The `String` name of the binary executable. Defaults to the target name with any `.` replaced with a `-`.
* `nativeFacets`: A function `(shouldExport : Bool) → Array` determining the [module facets](#defining-new-facets) to build and link into the executable. If `shouldExport` is true, the module facets should export any symbols a user may expect to lookup in the library. For example, the Lean interpreter will use exported symbols in linked libraries. Defaults to a singleton of `Module.oExportFacet` (if `shouldExport`) or `Module.oFacet`. That is, the object file compiled from the Lean source, potentially with exported Lean symbols.
* `supportInterpreter`: Whether to expose symbols within the executable to the Lean interpreter. This allows the executable to interpret Lean files (e.g., via `Lean.Elab.runFrontend`). Implementation-wise, on Windows, the Lean shared libraries are linked to the executable and, on other systems, the executable is linked with `-rdynamic`. This increases the size of the binary on Linux and, on Windows, requires `libInit_shared.dll` and `libleanshared.dll` to be co-located with the executable or part of `PATH` (e.g., via `lake exe`). Thus, this feature should only be enabled when necessary. Defaults to `false`.

The following options augment the package's corresponding configuration option.

* `buildType`: Minimum of the two settings — lowest is `debug`, highest is `release`.
* `precompileModules`: `true` if either are `true`.
* `platformIndependent`: Falls back to the package's setting on `none`.
* `leanOptions`, `moreServerOptions`: Merges them and the executable's takes precedence.
* `<more|weak><Lean|Leanc|Link><Args|Objs|Libs>`: Appends them after the package's.

### External Libraries

**NOTE: `extern_lib` targets are deprecated. Use a [custom `target`](#custom-targets) in conjunction with `moreLinkObjs` / `moreLinkLibs` instead.**

A external library target is a non-Lean **static** library that will be linked to the binaries of the package and its dependents (e.g., their shared libraries and executables).

**Important:** For the external library to link properly when `precompileModules` is on, the static library produced by an `extern_lib` target must following the platform's naming conventions for libraries (i.e., be named `foo.a` on Windows and `libfoo.a` on Unix). To make this easy, there is the `Lake.nameToStaticLib` utility function to convert a library name into its proper file name for the platform.

**Syntax**

```lean
extern_lib «target-name» (pkg : NPackage _package.name) :=
  -- a build function that produces its static library
```

The declaration is essentially a wrapper around a `System.FilePath` [target](#custom-targets). Like such a target, the `pkg` parameter and its type specifier are optional and body should be a term of type `FetchM (Job System.FilePath)` function that builds the static library. The `pkg` parameter is of type `NPackage _package.name` to provably demonstrate that it is the package in which the external library is defined.

### Custom Targets

A arbitrary target that can be built via `lake build <target-name>`.

**Syntax**

```lean
target «target-name» (pkg : NPackage _package.name) : α :=
  -- a build function that produces a `Job α`
```

The `pkg` parameter and its type specifier are optional and the body should be a term of type `FetchM (Job α)`. The `pkg` parameter is of type `NPackage _package.name` to provably demonstrate that it is the package in which the target is defined.

## Defining New Facets

A Lake package can also define new *facets* for packages, modules, and libraries. Once defined, the new facet (e.g., `facet`) can be built on any current or future object of its type (e.g., through `lake build pkg:facet` for a package facet). Module facets can also be provided to [`LeanLib.nativeFacets`](#lean-libraries) to have Lake build and use them automatically when producing shared libraries.

**Syntax**

```lean
package_facet «facet-name» (pkg : Package) : α :=
  -- a build function that produces a `Job α`

module_facet «facet-name» (mod : Module) : α :=
  -- a build function that produces a `Job α`

library_facet «facet-name» (lib : LeanLib) : α :=
  -- a build function that produces a `Job α`
```

In all of these, the object parameter and its type specifier are optional and the body should be a term of type `FetchM (Job α)`.

## Adding Dependencies

Lake packages can have dependencies. Dependencies are other Lake packages the current package needs in order to function. They can be sourced directly from a local folder (e.g., a subdirectory of the package) or come from remote Git repositories. For example, one can depend on [mathlib](https://reservoir.lean-lang.org/@leanprover-community/mathlib) like so:

```lean
package hello

require "leanprover-community" / "mathlib"
```

The next run of `lake build` (or refreshing dependencies in an editor like VSCode) will clone the mathlib repository and build it. Information on the specific revision cloned will then be saved to `lake-manifest.json` to enable reproducibility (i.e., ensure the same version of mathlib is used by future builds). To update `mathlib` after this, you will need to run `lake update` -- other commands do not update resolved dependencies.

For theorem proving packages which depend on `mathlib`, you can also run `lake new <package-name> math` to generate a package configuration file that already has the `mathlib` dependency (and no binary executable target).

**NOTE:** For mathlib in particular, you should run `lake exe cache get` prior to a `lake build` after adding or updating a mathlib dependency. Otherwise, it will be rebuilt from scratch (which can take hours). For more information, see mathlib's [wiki page](https://github.com/leanprover-community/mathlib4/wiki/Using-mathlib4-as-a-dependency) on using it as a dependency.

### Lean `require`

The `require` command in Lean Lake configuration follows the general syntax:

```lean
require ["<scope>" /] <pkg-name> [@ <version>]
  [from <source>] [with <options>]
```

The `from` clause tells Lake where to locate the dependency.
Without a `from` clause, Lake will lookup the package in the default registry (i.e., [Reservoir](https://reservoir.lean-lang.org)) and use the information there to download the package at the requested `version`. To specify a Git revision, use the syntax `@ git <rev>`.

The `scope` is used to disambiguate between packages in the registry with the same `pkg-name`. In Reservoir, this scope is the package owner (e.g., `leanprover` of [@leanprover/doc-gen4](https://reservoir.lean-lang.org/@leanprover/doc-gen4)).


The `with` clause specifies a `NameMap String` of Lake options used to configure the dependency. This is equivalent to passing `-K` options to the dependency on the command line.

### Supported Sources

Lake supports the following types of dependencies as sources in a `from` clause.

#### Path Dependencies

```
from <path>
```

Lake loads the package located a fixed `path` relative to the requiring package's directory.

#### Git Dependencies

```
from git <url> [@ <rev>] [/ <subDir>]
```

Lake clones the Git repository available at the specified fixed Git `url`, and checks out the specified revision `rev`. The revision can be a commit hash, branch, or tag. If none is provided, Lake defaults to `master`. After checkout, Lake loads the package located in `subDir` (or the repository root if no subdirectory is specified).

### TOML `require`

To `require` a package in a TOML configuration, the parallel syntax for the above examples is:

```toml
# A Reservoir dependency
[[require]]
name = "<pkg-name>"
scope = "<scope>"
version = "<version>"
options = {<options>}

# A Reservoir Git dependency
[[require]]
name = "<pkg-name>"
scope = "<scope>"
rev = "<rev>"

# A path dependency
[[require]]
name = "<pkg-name>"
path = "<path>"

# A Git dependency
[[require]]
name = "<pkg-name>"
git = "<url>"
rev = "<rev>"
subDir = "<subDir>"
```

## GitHub Release Builds

Lake supports uploading and downloading build artifacts (i.e., the archived build directory) to/from the GitHub releases of packages. This enables end users to fetch pre-built artifacts from the cloud without needed to rebuild the package from the source themselves.

### Downloading

To download artifacts, one should configure the package [options](#cloud-releases) `releaseRepo?` and `buildArchive?` as necessary to point to the GitHub repository hosting the release and the correct artifact name within it (if the defaults are not sufficient). Then, set `preferReleaseBuild := true` to tell Lake to fetch and unpack it as an extra package dependency.

Lake will only fetch release builds as part of its standard build process if the package wanting it is a dependency (as the root package is expected to modified and thus not often compatible with this scheme). However, should one wish to fetch a release for a root package (e.g., after cloning the release's source but before editing), one can manually do so via `lake build :release`.

Lake internally uses `curl` to download the release and `tar` to unpack it, so the end user must have both tools installed to use this feature. If Lake fails to fetch a release for any reason, it will move on to building from the source. Also note that this mechanism is not technically limited to GitHub, any Git host that uses the same URL scheme works as well.

### Uploading

To upload a built package as an artifact to a GitHub release, Lake provides the `lake upload <tag>` command as a convenient shorthand. This command uses `tar` to pack the package's build directory into an archive and uses `gh release upload` to attach it to a pre-existing GitHub release for `tag`. Thus, in order to use it, the package uploader (but not the downloader) needs to have `gh`, the [GitHub CLI](https://cli.github.com/), installed and in `PATH`.

## Writing and Running Scripts

A configuration file can also contain a number of `scripts` declaration. A script is an arbitrary `(args : List String) → ScriptM UInt32` definition that can be run by `lake script run`. For example, given the following `lakefile.lean`:

```lean
import Lake
open Lake DSL

package scripts

/--
Display a greeting

USAGE:
  lake run greet [name]

Greet the entity with the given name. Otherwise, greet the whole world.
-/
script greet (args) do
  if h : 0 < args.length then
    IO.println s!"Hello, {args[0]'h}!"
  else
    IO.println "Hello, world!"
  return 0
```

The script `greet` can be run like so:

```
$ lake script run greet
Hello, world!
$ lake script run greet me
Hello, me!
```

You can print the docstring of a script with `lake script doc`:

```
$ lake script doc greet
Display a greeting

USAGE:
  lake run greet [name]

Greet the entity with the given name. Otherwise, greet the whole world.
```

## Build-Service Mode

With `LAKE_REMOTE_EXEC` set, Lake sends the compile of each Lean module to a build service through `lean-remote bridge`. The service also compiles the C code of the modules and links their shared libraries. Lake writes the outputs of each action into the build directory when the action ends. These variables configure service mode:

| Variable | Value |
| --- | --- |
| `LAKE_REMOTE_EXEC` | The service endpoint, `grpc://host:port` or `grpcs://host:port`. It turns service mode on. |
| `LAKE_REMOTE_EXEC_TOOLCHAIN` | `sha256:<hex>` of the toolchain image. Service mode requires it. |
| `LAKE_REMOTE_EXEC_SYSROOT` | The Lean sysroot inside the image. The default is the sysroot of the local Lean. |
| `LAKE_REMOTE_EXEC_CC` | The C compiler and linker of the native actions on the service. The default is `/usr/bin/cc`. |
| `LAKE_REMOTE_EXEC_PATH` | The `PATH` of the native actions. The default is `/theorem/llvm-bin:/usr/local/bin:/usr/bin:/bin`. |
| `LAKE_REMOTE_EXEC_TIMEOUT` | The longest time that one action can run on the service, in seconds, from 1 to 21600. The default is 3600. |
| `LAKE_REMOTE_EXEC_INSTANCE` | The service instance name. The default is `lean`. |
| `LAKE_REMOTE_EXEC_CLIENT` | The `lean-remote` executable. The default is `lean-remote`. |
| `LAKE_REMOTE_EXEC_SOCKET` | The daemon socket that Lake passes to the bridge. |
| `LAKE_REMOTE_EXEC_FALLBACK` | `local` (the default), `wait` or `fail`: what Lake does when the service does not answer. |
| `LAKE_REMOTE_EXEC_LOG` | A file. Lake appends one JSON line to it for each module, C object and shared library of the build. |
| `LEAN_REMOTE_CLIENT_LABEL` | The client label that Lake reports to the service. |

In service mode, Lake queues nothing for `LAKE_REMOTE_CACHE`, and the fallback `local` publishes nothing.

### Native Code on the Service

Besides the action of each Lean module, the service runs three native actions:

* `CCompile` compiles the C file of a module to an object (the facets `c.o.export` and `c.o.noexport`).
* `LinkShared` links the shared library of a module (the facet `dynlib`, which Lean loads as a plugin).
* `LinkSharedLibrary` links the shared library of a library (the facet `shared`).

These actions run `LAKE_REMOTE_EXEC_CC` with `LAKE_REMOTE_EXEC_PATH` as `PATH`, and with the headers and libraries of `LAKE_REMOTE_EXEC_SYSROOT`. Lake starts no C compiler or linker of this machine for them. A C object or shared library whose trace is up to date and has the service's record is used as it is, and its line has the result `local-cache`. A C object or shared library that a local build made has no record. While its trace is up to date, Lake uses it as it is under `--no-build` and while the build does not use the service (the service does not answer, is refused, or runs another Lean): its line has the result `local-cache`, with `action` and `outputs` `null`, and Lake runs its action on the service later only when an action on the service takes the file as an input (see [Inputs of Service Actions](#inputs-of-service-actions)). When the build uses the service, the job of such a file sends its action to the service and writes the service's file over the local one, so that the other jobs of the build take the service's file; its line has the result of that run, `executed` or `cached`. From the Lake cache, Lake takes a C object or shared library only together with the service's record of the file. Otherwise it sends the action to the service. When the service does not answer, the fallback `local` builds the file with the local compiler, as outside service mode.

These targets stay on this machine, as outside service mode, and write no line to `LAKE_REMOTE_EXEC_LOG`:

* executables (`lean_exe`) and static libraries
* `extern_lib` targets, and other targets with build code of their own
* objects of the LLVM backend (`bc.o`), and the shared libraries that link them
* `leanir`, the separate code generation of a module with `postponeCompile`
* the shared library of a library that has `moreLinkObjs`, or whose package has an `extern_lib`

### Inputs of Service Actions

No file that this machine compiled is an input of an action on the service, with two exceptions: a shared library that stays on this machine (see the list above), and the files that `leanir` writes. Lake sends the imports of a module by path, and their files hold the outputs of the service. Lake sends each other plugin and shared library of the workspace by the digest and the executable bit of the service's output, not as a local file.

A module, C object or shared library that this machine built has no service record. The fallback `local`, an earlier build and a build with service mode off all make such outputs. Before an action on the service takes such an output as an input, Lake promotes it:

1. Lake promotes the inputs of that output first.
2. Lake runs the output's own action on the service. The service can answer from its cache when another machine ran the same action.
3. Lake writes the service's files over the local files.
4. Lake writes the service's record into the trace and into the Lake cache entry.

One promotion serves every job of the build that needs the output. A promotion writes no line to `LAKE_REMOTE_EXEC_LOG`, and the end-of-build line does not count it. The promoted target keeps the one line that its job wrote, for example `local` or `local-cache`. A C object or shared library whose trace is up to date is promoted by its own job instead, when the build uses the service, before the other jobs take its file (see [Native Code on the Service](#native-code-on-the-service)).

So is a module with no service record whose trace is up to date in a build with `LAKE_USAGE_CUTOFF` on. Its outputs are not what the service compiles: a local compile with the cutoff passes `--usage`, which writes usage digests into the `.olean`, and the cutoff keeps or skips outputs of an older compile. When the build uses the service, the job of such a module sends its action to the service, and its line has the result of that run; the service compiles the current source, and its outputs replace the local ones, kept outputs included, before the importers of the module take them. Under `--no-build`, and while the build does not use the service, Lake uses such a module as it is.

With the cutoff off, Lake uses a module whose trace is up to date as it is, with the result `local-cache`, and promotes it only when a service action takes it as an input. This relies on one assumption: a local compile with the same toolchain writes the bytes that the service writes. If a toolchain breaks it, the modules that hashed the local outputs build once more on the service in the next build; no result is wrong.

Lake promotes under every fallback when the service answers. A promotion that gets no answer from the service has the same effect as a request of the target that needs it: `local` builds that target on this machine, `fail` fails it with the code `UNAVAILABLE`, and `wait` waits. Under `--no-build`, Lake sends no request and promotes nothing.

The actions of one commit have the same digests on two machines when these values are the same on both: `LAKE_REMOTE_EXEC_SYSROOT` (without it, the path of the local sysroot), `LAKE_REMOTE_EXEC_TOOLCHAIN`, `LAKE_REMOTE_EXEC_CC`, `LAKE_REMOTE_EXEC_PATH` and `LAKE_REMOTE_EXEC_TIMEOUT`. An action names its files by their paths in its input root, and it does not use the local C compiler or linker.

### The Timeout

`LAKE_REMOTE_EXEC_TIMEOUT` sets the longest time that one action can run on the service, in seconds. Lake reads it only when `LAKE_REMOTE_EXEC` is set. The value is a whole number from 1 to 21600, written with the digits 0 to 9 only. An empty value gives the default, 3600. Any other value stops Lake with an error when it reads its environment, before it builds anything.

Each request carries the value, so the value is part of the digest of the action. A value other than 3600 is also part of the trace of each module, C object and shared library. So a change of the value makes each of them out of date, as a change of its source does. With the default, the traces are the same as outside service mode.

### When the Service Does Not Answer

The service does not answer when its `hello` finds it unreachable, or when a request still answers `UNAVAILABLE` after the daemon's own retries. Then `LAKE_REMOTE_EXEC_FALLBACK` decides what happens to the module. C objects and shared libraries follow the same rules.

| Fallback | What Lake does |
| --- | --- |
| `local` (the default) | Lake builds the module on this machine and publishes nothing. Until the service answers again, each later module also builds here, at once and with no request. |
| `wait` | Lake builds nothing on this machine. It asks the service again after 1, 2, 4 … 30 s. When its first new try fails, and then once a minute, it prints `waiting for the build service at <endpoint> since <time>` on standard error. |
| `fail` | The module fails with the code `UNAVAILABLE`. The build exits with code 75 when each of its failures is of this kind or a toolchain mismatch (below). |

Under `local`, Lake asks the service again with a `hello` on a bridge of its own: 1 s after the failure, then after 2, 4, 8 and 16 s, and then every 30 s. A module that is ready to build does not wait for these `hello` requests. When the service answers:

* Each module that starts after the answer goes to the service.
* A module that the fallback built, and that one of these modules imports, is promoted first (see [Inputs of Service Actions](#inputs-of-service-actions)).
* If the service runs another Lean, the later modules build on this machine with the result `toolchain-mismatch`, and Lake stops asking.
* If the service refuses, nothing changes, and Lake asks again.

Lake stops asking when the build ends: it waits at most 1 s for a `hello` still in flight, and then goes on, or exits, without its answer. A compile that failed on the service, and the answers `OOM`, `TIMEOUT` and `DISK_LIMIT`, are the result of the module, never a reason to fall back.

### Another Lean on the Service

When Lake and the service report different, nonempty Lean githashes, only `LAKE_REMOTE_EXEC_FALLBACK=local` permits local compilation. Lake warns once with both githashes, and each module that it then builds on this machine has the result `toolchain-mismatch`. Under `wait` and `fail`, each module that needs a build fails with the code `toolchain-mismatch`, and Lake exits with code 75. Lake does not retry a confirmed mismatch.

Under every fallback, Lake refuses a service that does not verify that its toolchain runs this Lake's Lean. Each module that needs a build then fails with the code `toolchain-unverified`, and Lake exits with code 1.

In these cases Lake still runs the build, so that each module writes its line. A module that is up to date writes `local-cache`, and a module whose import failed writes `import-failed`. Lake prints the message of the service once. When `lake build` finds the refusal or the mismatch at its start, it exits with code 1 or 75 also when no module needed a build.

### The Log

With `LAKE_REMOTE_EXEC_LOG` set, the job of each module, C object and shared library appends one line to that file when the job ends, also when it fails. Each line is one JSON object with all of the fields below. A field with no value is `null`. Lines of jobs that end at the same time do not mix.

| Field | Value |
| --- | --- |
| `kind` | `lean`, `c` or `shared` |
| `target` | For `lean`, the module name, for example `Foo.Bar`. For `c`, `<module>:c.o.export` or `<module>:c.o.noexport`. For `shared`, `<module>:dynlib` or `<package>/<library>:shared`. |
| `result` | One of the results below |
| `action` | The digest of the service action |
| `outputs` | The digest of each output, by its extension: `olean`, `olean.server`, `olean.private`, `ilean`, `ir.sig`, `ir`, `c` and `bc` for `lean`, `o` for `c`, and `so` for `shared` |
| `exitCode` | The exit code of the action, or `0` for a local build that succeeded |
| `terminationSignal` | The signal that ended the action, as the service sends it, for example `KILL` |
| `stdoutDigest`, `stderrDigest` | The digest of the standard output and of the standard error of the action. An empty stream has no digest. |
| `code` | For the result `error` only: the cause (below) |
| `limits` | The use of the sandbox's limits, as the service sends it: `oomKills`, `writtenBytes` and `diskLimitExceeded` |
| `wallMs` | The milliseconds from the start of the job's work to the line |
| `startMs` | The start of the job's work, in milliseconds since the Unix epoch |

| Result | Meaning |
| --- | --- |
| `executed` | The service ran the action for this build. A compile that failed there has an `exitCode` other than 0. |
| `cached` | The cache of the service gave the result of the same action. `exitCode` is as for `executed`. |
| `oom` | The service answered `OOM`, or its `limits` say that the sandbox killed a process for its memory. |
| `disk-limit` | The service answered `DISK_LIMIT`, or its `limits` say that the action filled its disk. |
| `timeout` | The service answered `TIMEOUT`: the action ran longer than `LAKE_REMOTE_EXEC_TIMEOUT`. |
| `local-cache` | Lake found the outputs on this machine and sent no request: an up-to-date trace, the Lake cache, an archive, or a usage-cutoff skip. `action` and `outputs` give the service's record of the outputs, or `null` when no service action made them. |
| `local` | The fallback built the target on this machine. |
| `toolchain-mismatch` | The fallback built the target on this machine, and the service runs another Lean. |
| `bucket` | The fallback restored the module from the `LAKE_REMOTE_CACHE` service. |
| `import-failed` | The job of a direct import of the module failed. All other fields are `null`. |
| `error` | The job failed for the cause in `code`. |

When both `oom` and `disk-limit` apply, the result is `oom`. A result with `limits` still succeeds or fails by its exit code: an action that exits with 0 gives its outputs. The lines `local`, `toolchain-mismatch` and `bucket` have `null` for `action` and `outputs`.

The `code` of an `error` line is the code of the service as it sent it (for example `INTERNAL`, `NOT_FOUND`, `INVALID`, `PERMISSION_DENIED`, `UNAUTHENTICATED`, or any other text), or one of these codes:

| Code | Cause |
| --- | --- |
| `UNAVAILABLE` | The service did not answer, and the fallback is `fail`. |
| `toolchain-mismatch` | The service runs another Lean, and the fallback is `wait` or `fail`. |
| `toolchain-unverified` | The service is refused. |
| `undeclared-output` | The service gave an output that the action did not declare. |
| `materialize` | Lake could not write the outputs into the build directory, or could not hash them there. |
| `malformed-result` | Lake could not read the result of the `run` request. |
| `request` | Lake could not make the request, for example for a plugin outside the workspace, or the promotion of an input failed. |
| `setup` | The setup of the module failed for a cause other than an import: its header, its source, a `needs` target, or a native dependency. |
| `no-build` | The target needs a build, and `--no-build` is set. |
| `canceled` | `--fail-fast` stopped the job. |
| `source-changed` | The source of the module changed during the build. |

These write no line:

* a bad `LAKE_REMOTE_EXEC_TIMEOUT`, which stops Lake before the build
* the file that `lake lean` runs, because it is not a module of the build (its imports write their lines)
* a C object or shared library whose input failed (the line of the module gives the cause)
* the targets that stay on this machine (see [Native Code on the Service](#native-code-on-the-service))
* the promotion of an input (the promoted target keeps its one line)

At the end of the build, Lake prints a line of this form:

```
lake: remote: <state>; <c> cached (<m> from manifest), <e> executed, <l> local; other actions: <c> cached, <e> executed, <l> local
```

The first counts are for Lean modules. The other actions are the C objects and shared libraries. `executed` counts each action that the service ran for this build, compiles that failed there included. `local` counts what the fallback built on this machine. Lake does not count the outputs that it found on this machine (`local-cache`), or the promotions of inputs. `<state>` is `ok`, `unreachable`, `off: <reason>` or `idle`.

### Local Cache in Build-Service Mode

With `LAKE_REMOTE_EXEC` set, Lake restores matching outputs from its local artifact cache before it sends a module to the build service. This includes read-only caches and cached archives. A local restore sends no build request. Its line in `LAKE_REMOTE_EXEC_LOG` has the result `local-cache`, and the end-of-build line does not count it.

If the package writes the artifact cache, Lake also saves successful service outputs there, with the service's record of the outputs. If artifact insertion is skipped, Lake keeps the build outputs without writing an input-to-output mapping. A cache write error warns and keeps the build outputs. Kept-output checks and lineage apply to these restores just as they do to a local build.

Lake keeps the service's record of a target's outputs in the field `remote` of its trace file and of its Lake cache entry. The record holds the action digest, and the digest and the executable bit of each output. An `.ltar` archive does not keep the record. So a module that Lake restores from an archive only has `null` for `action` and `outputs`.

Before Lake sends a module to the service, it reads no shared cache service: a retained cache mapping that names one does not download its artifacts. Only the fallback `local` reads the `LAKE_REMOTE_CACHE` service, as a build outside service mode does. A module that it restores from there has the result `bucket`. In service mode, Lake never takes C objects or shared libraries from a shared cache service.

## Building and Running Lake from the Source

If you already have a Lean installation with `lake` packaged with it, you can build a new `lake` by just running `lake build`.

Otherwise, there is a pre-packaged `build.sh` shell script that can be used to build Lake. It passes it arguments down to a `make` command. So, if you have more than one core, you will probably want to use a `-jX` option to specify how many build tasks you want it to run in parallel. For example:

```shell
$ ./build.sh -j4
```

After building, the `lake` binary will be located at `.lake/build/bin/lake` and the library's `.olean` files will be located in `.lake/build/lib`.

### Building with Nix Flakes

Lake is built as part of the main Lean 4 flake at the repository root.

### Augmenting Lake's Search Path

The `lake` executable needs to know where to find the Lean library files (e.g., `.olean`, `.ilean`) for the modules used in the package configuration file (and their source files for go-to-definition support in the editor). Lake will intelligently setup an initial search path based on the location of its own executable and `lean`.

Specifically, if Lake is co-located with `lean` (i.e., there is `lean` executable in the same directory as itself), it will assume it was installed with Lean and that both Lean and Lake are located under their shared sysroot. In particular, their binaries are located in `<sysroot>/bin`, their Lean libraries in `<sysroot>/lib/lean`, Lean's source files in `<sysroot>/src/lean`, and Lake's source files in `<sysroot>/src/lean/lake`. Otherwise, it will run `lean --print-prefix` to find Lean's sysroot and assume that Lean's files are located as aforementioned, but that `lake` is at `<lake-home>/.lake/build/bin/lake` with its Lean libraries at `<lake-home>/.lake/build/lib` and its sources directly in `<lake-home>`.

This search path can be augmented by including other directories of Lean libraries in the `LEAN_PATH` environment variable (and their sources in `LEAN_SRC_PATH`). This can allow the user to correct Lake's search when the files for Lean (or Lake itself) are in non-standard locations. However, such directories will *not* take precedence over the initial search path. This is important during development, as this prevents the Lake version used to build Lake from using the Lake version being built's Lean libraries (instead of its own) to elaborate Lake's `lakefile.lean` (which can lead to all kinds of errors).
