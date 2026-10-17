cmake_minimum_required(VERSION 3.21)
include(ExternalProject)
include(FetchContent)

if(NOT CMAKE_GENERATOR MATCHES "Makefiles")
  message(FATAL_ERROR "Only makefile generators are supported")
endif()

option(USE_MIMALLOC "use mimalloc" ON)

# store all variables passed on the command line into CL_ARGS so we can pass them to the stage builds
# MUST be done before call to 'project'
# Use standard release build (discarding LEAN_EXTRA_CXX_FLAGS etc.) for stage0 by default since it is assumed to be "good", but still pass through CMake platform arguments (compiler, toolchain file, ..).
# Use `STAGE0_` prefix to pass variables to stage0 explicitly.
get_cmake_property(vars CACHE_VARIABLES)
foreach(var ${vars})
  get_property(currentType CACHE "${var}" PROPERTY TYPE)
  if(var MATCHES "STAGE0_(.*)")
    list(APPEND STAGE0_ARGS "-D${CMAKE_MATCH_1}=${${var}}")
  elseif(var MATCHES "STAGE1_(.*)")
    list(APPEND STAGE1_ARGS "-D${CMAKE_MATCH_1}=${${var}}")
  # NOTE: does not catch `-DFOO:BAR=` typed uses
  elseif(currentType STREQUAL "UNINITIALIZED")
    list(APPEND CL_ARGS "-D${var}=${${var}}")
    if(var MATCHES "USE_GMP|CHECK_OLEAN_VERSION")
      # must forward options that generate incompatible .olean format
      list(APPEND STAGE0_ARGS "-D${var}=${${var}}")
    elseif(var MATCHES "LLVM*|PKG_CONFIG|USE_LAKE|USE_MIMALLOC|FORCE_GMP")
      list(APPEND STAGE0_ARGS "-D${var}=${${var}}")
    endif()
  elseif(var MATCHES "USE_MIMALLOC")
    list(APPEND CL_ARGS "-D${var}=${${var}}")
    list(APPEND STAGE0_ARGS "-D${var}=${${var}}")
  elseif((var MATCHES "CMAKE_.*") AND NOT (var MATCHES "CMAKE_BUILD_TYPE") AND NOT (var MATCHES "CMAKE_HOME_DIRECTORY"))
    list(APPEND PLATFORM_ARGS "-D${var}=${${var}}")
  endif()
endforeach()

project(LEAN CXX C)

if(NOT (DEFINED STAGE0_CMAKE_EXECUTABLE_SUFFIX))
  set(STAGE0_CMAKE_EXECUTABLE_SUFFIX "${CMAKE_EXECUTABLE_SUFFIX}")
endif()

# Don't do anything with cadical/leantar on wasm
if(NOT CMAKE_SYSTEM_NAME MATCHES "Emscripten")
  find_program(CADICAL cadical)
  # `libcadical.a` is linked into the Lean libraries, so it has to be built with matching flags
  # (position-independent, hidden visibility). Packagers can point these at their own build to
  # avoid the source fetch below, but then have to provide all three.
  set(CADICAL_LIB "" CACHE FILEPATH "Path to a static libcadical to link into the Lean libraries")
  set(CADICAL_INCLUDE_DIR "" CACHE PATH "Directory containing cadical.hpp")
  if(NOT (CADICAL AND CADICAL_LIB AND CADICAL_INCLUDE_DIR))
    set(CADICAL_CXX ${CMAKE_CXX_COMPILER})
    set(CADICAL_EXTRA_CXX_FLAGS "" CACHE STRING "Additional flags used to compile cadical")
    set(CADICAL_CXXFLAGS "${CMAKE_CXX_FLAGS} ${CADICAL_EXTRA_CXX_FLAGS}")
    option(CADICAL_USE_LEANC_LINKER_FLAGS "Link the cadical executable with the leanc linker flags" OFF)
    set(CADICAL_LDFLAGS "")
    if(CADICAL_USE_LEANC_LINKER_FLAGS)
      string(REPLACE "ROOT" "${CMAKE_BINARY_DIR}/stage1" CADICAL_LDFLAGS "${LEANC_INTERNAL_LINKER_FLAGS}")
      if(CMAKE_SYSTEM_NAME MATCHES "Linux")
        # find the bundled `libc++.so`
        string(APPEND CADICAL_LDFLAGS " -Wl,-rpath=\\$$ORIGIN/../lib")
      endif()
    endif()
    find_program(CCACHE ccache)
    if(CCACHE)
      set(CADICAL_CXX "${CCACHE} ${CADICAL_CXX}")
    endif()
    # missing stdio locking API on Windows
    if(CMAKE_SYSTEM_NAME MATCHES "Windows")
      string(APPEND CADICAL_CXXFLAGS " -DNUNLOCKED")
    endif()
    string(APPEND CADICAL_CXXFLAGS " -DNCLOSEFROM")
    if(CMAKE_SYSTEM_NAME MATCHES "Linux")
      string(APPEND CADICAL_CXXFLAGS " -fPIC")
    endif()
    if(NOT CMAKE_SYSTEM_NAME MATCHES "Windows")
      # do not re-export cadical from `libleanshared`
      string(APPEND CADICAL_CXXFLAGS " -fvisibility=hidden")
    endif()
    ExternalProject_Add(
      cadical
      PREFIX cadical
      GIT_REPOSITORY https://github.com/arminbiere/cadical
      GIT_TAG rel-2.1.2
      CONFIGURE_COMMAND ""
      BUILD_COMMAND
        $(MAKE) -f ${CMAKE_SOURCE_DIR}/src/cadical.mk CMAKE_EXECUTABLE_SUFFIX=${CMAKE_EXECUTABLE_SUFFIX}
        CXX=${CADICAL_CXX} CXXFLAGS=${CADICAL_CXXFLAGS} LDFLAGS=${CADICAL_LDFLAGS} AR=${CMAKE_AR}
      BUILD_IN_SOURCE ON
      INSTALL_COMMAND ""
      BUILD_BYPRODUCTS
        ${CMAKE_BINARY_DIR}/cadical/cadical${CMAKE_EXECUTABLE_SUFFIX} ${CMAKE_BINARY_DIR}/cadical/libcadical.a
    )
    if(NOT CADICAL)
      set(CADICAL ${CMAKE_BINARY_DIR}/cadical/cadical${CMAKE_EXECUTABLE_SUFFIX})
    endif()
    if(NOT CADICAL_LIB)
      set(CADICAL_LIB ${CMAKE_BINARY_DIR}/cadical/libcadical.a)
    endif()
    if(NOT CADICAL_INCLUDE_DIR)
      set(CADICAL_INCLUDE_DIR ${CMAKE_BINARY_DIR}/cadical/src/cadical/src)
    endif()
    list(APPEND EXTRA_DEPENDS cadical)
  endif()
  # Lake packs and unpacks `.ltar` artifacts with leantar. leantar releases up to at least v0.1.21 unpack every
  # ByteArray of an `.olean` with element size 0, which corrupts `.olean` files holding constant prefix trees. Unless
  # LEANTAR names one, leantar is built here from the pinned leangz source with the fix in `script/leantar`, before
  # stage 0, whose Lake builds stage 1 with the artifact cache. Either leantar must pass `script/leantar/probe.cmake`.
  set(LEANTAR "" CACHE FILEPATH "leantar to use instead of building one")
  set(LEANTAR_PROBE -DWORK=${CMAKE_BINARY_DIR}/leantar-probe -P ${CMAKE_SOURCE_DIR}/script/leantar/probe.cmake)
  if(LEANTAR)
    execute_process(COMMAND ${CMAKE_COMMAND} -DLEANTAR=${LEANTAR} ${LEANTAR_PROBE} RESULT_VARIABLE LEANTAR_PROBE_RESULT)
    if(NOT LEANTAR_PROBE_RESULT EQUAL 0)
      message(FATAL_ERROR "LEANTAR=${LEANTAR} failed the round-trip probe")
    endif()
  else()
    find_program(CARGO cargo)
    if(NOT CARGO)
      message(
        FATAL_ERROR
        "Building leantar needs cargo. Install it, or pass -DLEANTAR=<leantar built with script/leantar/leangz-sarray-elem-size.patch>."
      )
    endif()
    # As for the bundled Rust checkers (src/CMakeLists.txt), cargo and the `cc` crate use the host toolchain, except in
    # a standalone Linux build, which builds leantar against the bundled sysroot like every other shipped binary.
    set(LEANTAR_ENV)
    if(LEAN_STANDALONE AND CMAKE_SYSTEM_NAME MATCHES "Linux")
      # Compile leantar's C dependencies like cadical.
      set(LEANTAR_CFLAGS "${CMAKE_CXX_FLAGS}")
      # Stage 1 carries only some of the bundled clang's builtin headers; zstd also needs the intrinsics headers, which
      # the resource directory of CMAKE_CXX_COMPILER, from the same LLVM, has.
      execute_process(
        COMMAND ${CMAKE_CXX_COMPILER} -print-resource-dir
        OUTPUT_VARIABLE LEANTAR_RESOURCE_DIR
        OUTPUT_STRIP_TRAILING_WHITESPACE
        COMMAND_ERROR_IS_FATAL ANY
      )
      string(APPEND LEANTAR_CFLAGS " -resource-dir ${LEANTAR_RESOURCE_DIR}")
      # Link like leanc does for every other shipped binary: against the bundled glibc in stage 1 and with the default
      # ELF interpreter, not the build host's glibc.
      string(REPLACE "ROOT" "${CMAKE_BINARY_DIR}/stage1" LEANTAR_LDFLAGS "${LEANC_INTERNAL_LINKER_FLAGS}")
      separate_arguments(LEANTAR_LDFLAGS UNIX_COMMAND "${LEANTAR_LDFLAGS}")
      list(TRANSFORM LEANTAR_LDFLAGS PREPEND "-Clink-arg=")
      list(JOIN LEANTAR_LDFLAGS " " LEANTAR_RUSTFLAGS)
      string(TOUPPER "${CMAKE_SYSTEM_PROCESSOR}_unknown_linux_gnu" LEANTAR_RUST_TARGET)
      list(
        APPEND
        LEANTAR_ENV
        "CARGO_TARGET_${LEANTAR_RUST_TARGET}_LINKER=${CMAKE_C_COMPILER}"
        "CARGO_TARGET_${LEANTAR_RUST_TARGET}_RUSTFLAGS=${LEANTAR_RUSTFLAGS}"
        "CC=${CMAKE_C_COMPILER}"
        "CFLAGS=${LEANTAR_CFLAGS}"
      )
    elseif(CMAKE_SYSTEM_NAME MATCHES "Windows")
      # The runner's cargo targets MSVC, so the `cc` crate has to find `cl.exe` itself rather than take MSYS2's `CC`.
      list(APPEND LEANTAR_ENV --unset=CC --unset=CXX)
    endif()
    set(LEANTAR ${CMAKE_BINARY_DIR}/leangz/src/leantar/target/release/leantar${CMAKE_EXECUTABLE_SUFFIX})
    ExternalProject_Add(
      leantar
      PREFIX leangz
      GIT_REPOSITORY https://github.com/digama0/leangz
      # v0.1.21
      GIT_TAG ae32f35b8c1bee986bc8d8cad4bcc5a9788fc7bc
      # The source is a fixed commit, so there is nothing to update. The patch step resets the source before applying
      # the patch, so that it can re-run when the patch changes.
      UPDATE_COMMAND ""
      PATCH_COMMAND git checkout -q -- . COMMAND git apply ${CMAKE_SOURCE_DIR}/script/leantar/leangz-sarray-elem-size.patch
      CONFIGURE_COMMAND ""
      BUILD_COMMAND ${CMAKE_COMMAND} -E env ${LEANTAR_ENV} ${CARGO} build --release --locked --bin leantar
      BUILD_IN_SOURCE ON
      INSTALL_COMMAND ${CMAKE_COMMAND} -DLEANTAR=${LEANTAR} ${LEANTAR_PROBE}
      BUILD_BYPRODUCTS ${LEANTAR}
    )
    ExternalProject_Add_StepDependencies(leantar patch ${CMAKE_SOURCE_DIR}/script/leantar/leangz-sarray-elem-size.patch)
    ExternalProject_Add_StepDependencies(
      leantar
      install
      ${CMAKE_SOURCE_DIR}/script/leantar/probe.cmake
      ${CMAKE_SOURCE_DIR}/script/leantar/probe.olean
      ${CMAKE_SOURCE_DIR}/script/leantar/probe.trace
    )
    list(APPEND EXTRA_DEPENDS leantar)
  endif()
  set(
    CADICAL_ARGS
    -DCADICAL=${CADICAL} -DCADICAL_LIB=${CADICAL_LIB} -DCADICAL_INCLUDE_DIR=${CADICAL_INCLUDE_DIR}
  )
  # stage0 never runs cadical so no need to link against it there.
  list(APPEND STAGE0_ARGS -DLEANTAR=${LEANTAR})
  list(APPEND CL_ARGS ${CADICAL_ARGS} -DLEANTAR=${LEANTAR})
endif()

if(USE_MIMALLOC)
  FetchContent_Declare(
    mimalloc
    GIT_REPOSITORY https://github.com/microsoft/mimalloc
    GIT_BRANCH dev3
    GIT_TAG v3.4.5
    # Unnecessarily deep directory structure, but it saves us from a complicated
    # stage0 update for now. If we ever update the other dependencies like
    # cadical, it might be worth reorganizing the directory structure.
    SOURCE_DIR
    "${CMAKE_BINARY_DIR}/mimalloc/src/mimalloc"
    EXCLUDE_FROM_ALL
  )
  FetchContent_MakeAvailable(mimalloc)
endif()

if(NOT STAGE1_PREV_STAGE)
  ExternalProject_Add(
    stage0
    SOURCE_DIR "${LEAN_SOURCE_DIR}/stage0"
    SOURCE_SUBDIR src
    BINARY_DIR stage0
    # do not rebuild stage0 when git hash changes; it's not from this commit anyway
    # (however, CI will override this as we need to embed the githash into the stage 1 library built
    # by stage 0)
    CMAKE_ARGS -DSTAGE=0 -DUSE_GITHASH=OFF ${PLATFORM_ARGS} ${STAGE0_ARGS}
    BUILD_ALWAYS
      ON # cmake doesn't auto-detect changes without a download method
    INSTALL_COMMAND
      "" # skip install
    DEPENDS ${EXTRA_DEPENDS}
  )
  list(APPEND EXTRA_DEPENDS stage0)
endif()
ExternalProject_Add(
  stage1
  SOURCE_DIR "${LEAN_SOURCE_DIR}"
  SOURCE_SUBDIR src
  BINARY_DIR stage1
  CMAKE_ARGS
    -DSTAGE=1 -DPREV_STAGE=${CMAKE_BINARY_DIR}/stage0
    -DPREV_STAGE_CMAKE_EXECUTABLE_SUFFIX=${STAGE0_CMAKE_EXECUTABLE_SUFFIX} ${CL_ARGS} ${STAGE1_ARGS}
  BUILD_ALWAYS ON
  INSTALL_COMMAND ""
  DEPENDS ${EXTRA_DEPENDS}
  STEP_TARGETS configure
)
ExternalProject_Add(
  stage2
  SOURCE_DIR "${LEAN_SOURCE_DIR}"
  SOURCE_SUBDIR src
  BINARY_DIR stage2
  CMAKE_ARGS
    -DSTAGE=2 -DPREV_STAGE=${CMAKE_BINARY_DIR}/stage1 -DPREV_STAGE_CMAKE_EXECUTABLE_SUFFIX=${CMAKE_EXECUTABLE_SUFFIX}
    ${CL_ARGS}
  BUILD_ALWAYS ON
  INSTALL_COMMAND ""
  DEPENDS stage1
  EXCLUDE_FROM_ALL ON
  STEP_TARGETS configure
)
ExternalProject_Add(
  stage3
  SOURCE_DIR "${LEAN_SOURCE_DIR}"
  SOURCE_SUBDIR src
  BINARY_DIR stage3
  CMAKE_ARGS
    -DSTAGE=3 -DPREV_STAGE=${CMAKE_BINARY_DIR}/stage2 -DPREV_STAGE_CMAKE_EXECUTABLE_SUFFIX=${CMAKE_EXECUTABLE_SUFFIX}
    ${CL_ARGS}
  BUILD_ALWAYS ON
  INSTALL_COMMAND ""
  DEPENDS stage2
  EXCLUDE_FROM_ALL ON
  STEP_TARGETS configure
)

# targets forwarded to appropriate stages

add_custom_target(update-stage0 COMMAND $(MAKE) -C stage1 update-stage0 DEPENDS stage1)

add_custom_target(update-stage0-commit COMMAND $(MAKE) -C stage1 update-stage0-commit DEPENDS stage1)

add_custom_target(test COMMAND $(MAKE) -C stage1 test DEPENDS stage1)

add_custom_target(
  bench
  COMMAND $(MAKE) -C stage2
  COMMAND $(MAKE) -C stage2 -j1 bench
  DEPENDS stage2
)
add_custom_target(
  bench-part1
  COMMAND $(MAKE) -C stage2
  COMMAND $(MAKE) -C stage2 -j1 bench-part1
  DEPENDS stage2
)
add_custom_target(
  bench-part2
  COMMAND $(MAKE) -C stage2
  COMMAND $(MAKE) -C stage2 -j1 bench-part2
  DEPENDS stage2
)

add_custom_target(clean-stdlib COMMAND $(MAKE) -C stage1 clean-stdlib DEPENDS stage1-configure)

add_custom_target(cache-get COMMAND $(MAKE) -C stage1 cache-get DEPENDS stage1-configure)

install(CODE "execute_process(COMMAND make -C stage1 install)")

add_custom_target(check-stage3 COMMAND diff "stage2/bin/lean" "stage3/bin/lean" DEPENDS stage3)
