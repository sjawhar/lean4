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
  # LEANTAR names one, leantar is built here from the pinned leangz source with the fix in `script/leantar`; any
  # leantar must then reproduce `script/leantar/probe.olean` through an `.ltar` round trip.
  find_program(LEANTAR leantar)
  if(NOT LEANTAR)
    set(LEANGZ_REPO https://github.com/digama0/leangz)
    set(LEANGZ_TAG v0.1.21)
    set(LEANGZ_COMMIT ae32f35b8c1bee986bc8d8cad4bcc5a9788fc7bc)
    set(LEANGZ_DIR ${CMAKE_BINARY_DIR}/leangz)
    set(LEANTAR ${LEANGZ_DIR}/target/release/leantar${CMAKE_EXECUTABLE_SUFFIX})
    if(NOT EXISTS "${LEANTAR}")
      find_package(Git REQUIRED)
      find_program(CARGO cargo)
      if(NOT CARGO)
        message(
          FATAL_ERROR
          "Building leantar needs cargo. Install it, or pass -DLEANTAR=<leantar built with script/leantar/leangz-sarray-elem-size.patch>."
        )
      endif()
      file(REMOVE_RECURSE ${LEANGZ_DIR})
      execute_process(
        COMMAND ${GIT_EXECUTABLE} clone --quiet --depth 1 --branch ${LEANGZ_TAG} ${LEANGZ_REPO} ${LEANGZ_DIR}
        COMMAND_ERROR_IS_FATAL ANY
      )
      execute_process(
        COMMAND ${GIT_EXECUTABLE} -C ${LEANGZ_DIR} rev-parse HEAD
        OUTPUT_VARIABLE LEANGZ_HEAD
        OUTPUT_STRIP_TRAILING_WHITESPACE
        COMMAND_ERROR_IS_FATAL ANY
      )
      if(NOT LEANGZ_HEAD STREQUAL LEANGZ_COMMIT)
        message(FATAL_ERROR "${LEANGZ_REPO} tag ${LEANGZ_TAG} is at ${LEANGZ_HEAD}, expected ${LEANGZ_COMMIT}")
      endif()
      execute_process(
        COMMAND ${GIT_EXECUTABLE} -C ${LEANGZ_DIR} apply ${CMAKE_SOURCE_DIR}/script/leantar/leangz-sarray-elem-size.patch
        COMMAND_ERROR_IS_FATAL ANY
      )
      execute_process(
        COMMAND ${CARGO} build --release --locked --manifest-path ${LEANGZ_DIR}/Cargo.toml --bin leantar
        COMMAND_ERROR_IS_FATAL ANY
      )
    endif()
  endif()
  set(LEANTAR_PROBE ${CMAKE_BINARY_DIR}/leantar-probe)
  file(REMOVE_RECURSE ${LEANTAR_PROBE})
  file(MAKE_DIRECTORY ${LEANTAR_PROBE}/out)
  execute_process(
    COMMAND ${LEANTAR} ${LEANTAR_PROBE}/probe.ltar probe.trace probe.olean
    WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}/script/leantar
    RESULT_VARIABLE LEANTAR_PACK_RESULT
    OUTPUT_QUIET
    ERROR_QUIET
  )
  execute_process(
    COMMAND ${LEANTAR} -C ${LEANTAR_PROBE}/out -x ${LEANTAR_PROBE}/probe.ltar
    RESULT_VARIABLE LEANTAR_UNPACK_RESULT
    OUTPUT_QUIET
    ERROR_QUIET
  )
  file(SHA256 ${CMAKE_SOURCE_DIR}/script/leantar/probe.olean LEANTAR_PROBE_WANT)
  set(LEANTAR_PROBE_GOT "")
  if(EXISTS ${LEANTAR_PROBE}/out/probe.olean)
    file(SHA256 ${LEANTAR_PROBE}/out/probe.olean LEANTAR_PROBE_GOT)
  endif()
  if(NOT (LEANTAR_PACK_RESULT EQUAL 0 AND LEANTAR_UNPACK_RESULT EQUAL 0 AND LEANTAR_PROBE_GOT STREQUAL LEANTAR_PROBE_WANT))
    message(
      FATAL_ERROR
      "leantar ${LEANTAR} does not reproduce script/leantar/probe.olean through an .ltar round trip (pack exit ${LEANTAR_PACK_RESULT}, unpack exit ${LEANTAR_UNPACK_RESULT}); it would corrupt .olean files holding ByteArrays. Pass -DLEANTAR=<leantar built with script/leantar/leangz-sarray-elem-size.patch>, or remove it from PATH and unset LEANTAR to build one."
    )
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
