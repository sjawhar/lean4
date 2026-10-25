/*
Copyright (c) 2018 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.

Authors: Leonardo de Moura, Sebastian Ullrich
*/
#if defined(LEAN_WINDOWS)
#include <icu.h>
#include <windows.h>
#include <io.h>
#define NOMINMAX // prevent ntdef.h from defining min/max macros
#include <ntdef.h>
#include <bcrypt.h>
#elif defined(__APPLE__)
#include <mach-o/dyld.h>
#include <unistd.h>
#else
#if defined(LEAN_EMSCRIPTEN)
#include <emscripten.h>
#endif
// Linux include files
#include <unistd.h> // NOLINT
#include <sys/mman.h>
#include <sys/file.h>
#ifndef LEAN_EMSCRIPTEN
#include <sys/random.h>
#endif
#endif
#ifndef LEAN_WINDOWS
#include <csignal>
#endif
#include <dirent.h>
#include <fcntl.h>
#include <iostream>
#include <chrono>
#include <sstream>
#include <fstream>
#include <iomanip>
#include <thread>
#include <string>
#include <vector>
#include <algorithm>
#include <atomic>
#include <unordered_map>
#include <unordered_set>
#include <map>
#include <random>
#include <cerrno>
#include <cstdlib>
#include <cctype>
#include <cmath>
#include <sys/stat.h>
#include <uv.h>
#include "util/io.h"
#include "runtime/alloc.h"
#include "runtime/io.h"
#include "runtime/utf8.h"
#include "runtime/object.h"
#include "runtime/thread.h"
#include "runtime/allocprof.h"
#include "runtime/option_ref.h"

#ifdef _MSC_VER
#define S_ISDIR(mode) ((mode & _S_IFDIR) != 0)
#else
#include <dirent.h>
#endif

namespace lean {

extern "C" LEAN_EXPORT void lean_io_result_show_error(b_obj_arg r) {
    object * err = io_result_get_error(r);
    inc_ref(err);
    object * str = lean_io_error_to_string(err);
    std::cerr << "uncaught exception: " << string_cstr(str) << std::endl;
    dec_ref(str);
}

obj_res io_result_mk_error(char const * msg) {
    return io_result_mk_error(lean_mk_io_user_error(mk_string(msg)));
}

obj_res io_result_mk_error(std::string const & msg) {
    return io_result_mk_error(lean_mk_io_user_error(mk_string(msg)));
}

static bool g_initializing = true;
extern "C" LEAN_EXPORT void lean_io_mark_end_initialization() {
    g_initializing = false;
}
extern "C" LEAN_EXPORT uint8_t lean_io_initializing() {
    return g_initializing;
}

static obj_res mk_file_not_found_error(b_obj_arg fname) {
    inc(fname);
    int errnum = ENOENT;
    object * details = mk_string("");
    return io_result_mk_error(lean_mk_io_error_no_file_or_directory(fname, errnum, details));
}

static lean_external_class * g_io_handle_external_class = nullptr;

static void forget_handle(FILE * fp);
static void note_handle_open(FILE * fp);

static void io_handle_finalizer(void * h) {
    forget_handle(static_cast<FILE *>(h));
    // There is no sensible way to handle errors here; in particular, we should
    // not panic as finalizing a handle that already is in an invalid state
    // (broken pipe etc.) should work and not terminate the process. The same
    // decision was made for `std::fs::File` in the Rust stdlib.
    fclose(static_cast<FILE *>(h));
}

static void io_handle_foreach(void * /* mod */, b_obj_arg /* fn */) {
}

// Every handle Lean code gets is made here, so a context owns the handles it opens, also a child process's pipes.
lean_object * io_wrap_handle(FILE *hfile) {
    note_handle_open(hfile);
    return lean_alloc_external(g_io_handle_external_class, hfile);
}

extern "C" obj_res lean_stream_of_handle(obj_arg h);

static object * g_stream_stdin  = nullptr;
static object * g_stream_stdout = nullptr;
static object * g_stream_stderr = nullptr;
MK_THREAD_LOCAL_GET(object_ref, get_stream_current_stdin,  g_stream_stdin);
MK_THREAD_LOCAL_GET(object_ref, get_stream_current_stdout, g_stream_stdout);
MK_THREAD_LOCAL_GET(object_ref, get_stream_current_stderr, g_stream_stderr);

/* getStdin : BaseIO FS.Stream */
extern "C" LEAN_EXPORT obj_res lean_get_stdin() {
    return get_stream_current_stdin().to_obj_arg();
}

/* getStdout : BaseIO FS.Stream */
extern "C" LEAN_EXPORT obj_res lean_get_stdout() {
    return get_stream_current_stdout().to_obj_arg();
}

/* getStderr : BaseIO FS.Stream */
extern "C" LEAN_EXPORT obj_res lean_get_stderr() {
    return get_stream_current_stderr().to_obj_arg();
}

/* setStdin  : FS.Stream -> BaseIO FS.Stream */
extern "C" LEAN_EXPORT obj_res lean_get_set_stdin(obj_arg h) {
    object_ref & x = get_stream_current_stdin();
    object * r = x.steal();
    x = object_ref(h);
    return r;
}

/* setStdout  : FS.Stream -> BaseIO FS.Stream */
extern "C" LEAN_EXPORT obj_res lean_get_set_stdout(obj_arg h) {
    object_ref & x = get_stream_current_stdout();
    object * r = x.steal();
    x = object_ref(h);
    return r;
}

/* setStderr  : FS.Stream -> BaseIO FS.Stream */
extern "C" LEAN_EXPORT obj_res lean_get_set_stderr(obj_arg h) {
    object_ref & x = get_stream_current_stderr();
    object * r = x.steal();
    x = object_ref(h);
    return r;
}

static FILE * io_get_handle(lean_object * hfile) {
    return static_cast<FILE *>(lean_get_external_data(hfile));
}

// effect notes (`lean_io_take_effects`)
static void note_path_use(char const * what, char const * p);
static void note_path_create(char const * what, char const * p, bool dir);
static void note_path_created(char const * p, bool dir);
static void note_path_remove(char const * what, char const * p);
static void note_handle_use(FILE * fp, bool writes = false);
static void note_handle_open(FILE * fp);
static void forget_handle(FILE * fp);

/* Translates a CRT `errno` value into the corresponding libuv error code.
   (`uv_translate_sys_error` is unsuitable for this: on Windows it expects Win32 system error
   codes, not CRT `errno` values.) `errno` values libuv cannot represent are translated to the
   closest libuv error code; unrecognized values are negated, which `decode_uv_error_impl`
   treats as an unknown error. */
static int lean_crt_to_uv_err(int err) {
    switch (err) {
    case E2BIG:           return UV_E2BIG;
    case EACCES:          return UV_EACCES;
    case EADDRINUSE:      return UV_EADDRINUSE;
    case EADDRNOTAVAIL:   return UV_EADDRNOTAVAIL;
    case EAFNOSUPPORT:    return UV_EAFNOSUPPORT;
    case EAGAIN:          return UV_EAGAIN;
    case EBADF:           return UV_EBADF;
    case EBUSY:           return UV_EBUSY;
    case ECONNABORTED:    return UV_ECONNABORTED;
    case ECONNREFUSED:    return UV_ECONNREFUSED;
    case ECONNRESET:      return UV_ECONNRESET;
    case EDESTADDRREQ:    return UV_EDESTADDRREQ;
    case EEXIST:          return UV_EEXIST;
    case EFAULT:          return UV_EFAULT;
    case EFBIG:           return UV_EFBIG;
    case EHOSTUNREACH:    return UV_EHOSTUNREACH;
    case EILSEQ:          return UV_EILSEQ;
    case EINTR:           return UV_EINTR;
    case EINVAL:          return UV_EINVAL;
    case EIO:             return UV_EIO;
    case EISCONN:         return UV_EISCONN;
    case EISDIR:          return UV_EISDIR;
    case ELOOP:           return UV_ELOOP;
    case EMFILE:          return UV_EMFILE;
    case EMLINK:          return UV_EMLINK;
    case EMSGSIZE:        return UV_EMSGSIZE;
    case ENAMETOOLONG:    return UV_ENAMETOOLONG;
    case ENETDOWN:        return UV_ENETDOWN;
    case ENETUNREACH:     return UV_ENETUNREACH;
    case ENFILE:          return UV_ENFILE;
    case ENOBUFS:         return UV_ENOBUFS;
    case ENODEV:          return UV_ENODEV;
    case ENOENT:          return UV_ENOENT;
    case ENOMEM:          return UV_ENOMEM;
    case ENOPROTOOPT:     return UV_ENOPROTOOPT;
    case ENOSPC:          return UV_ENOSPC;
    case ENOSYS:          return UV_ENOSYS;
    case ENOTCONN:        return UV_ENOTCONN;
    case ENOTDIR:         return UV_ENOTDIR;
    case ENOTEMPTY:       return UV_ENOTEMPTY;
    case ENOTSOCK:        return UV_ENOTSOCK;
    case ENOTTY:          return UV_ENOTTY;
    case ENXIO:           return UV_ENXIO;
    case EOPNOTSUPP:      return UV_ENOTSUP;
    case EPERM:           return UV_EPERM;
    case EPIPE:           return UV_EPIPE;
    case EPROTO:          return UV_EPROTO;
    case EPROTONOSUPPORT: return UV_EPROTONOSUPPORT;
    case EPROTOTYPE:      return UV_EPROTOTYPE;
    case ERANGE:          return UV_ERANGE;
    case EROFS:           return UV_EROFS;
    case ESPIPE:          return UV_ESPIPE;
    case ESRCH:           return UV_ESRCH;
    case ETIMEDOUT:       return UV_ETIMEDOUT;
    case ETXTBSY:         return UV_ETXTBSY;
    case EXDEV:           return UV_EXDEV;
#if UV_VERSION_HEX >= 0x012D00 /* libuv maps ENODATA since 1.45.0 */
    case ENODATA:         return UV_ENODATA;
    case ENOMSG:          return UV_ENODATA;
#else
    case ENODATA:         return UV_ENXIO;
    case ENOMSG:          return UV_ENXIO;
#endif
#if UV_VERSION_HEX >= 0x013200 /* libuv maps ENOEXEC since 1.50.0 */
    case ENOEXEC:         return UV_ENOEXEC;
#else
    case ENOEXEC:         return UV_EINVAL;
#endif
    /* approximations for `errno` values libuv cannot represent */
    case EBADMSG:         return UV_EPROTO;
    case ECHILD:          return UV_ESRCH;
    case EDEADLK:         return UV_EBUSY;
    case EDOM:            return UV_EINVAL;
    case EIDRM:           return UV_EPIPE;
    case EINPROGRESS:     return UV_EISCONN;
    case ENETRESET:       return UV_ECONNRESET;
    case ENOLCK:          return UV_EAGAIN;
    case ENOLINK:         return UV_ECONNRESET;
    case ENOSR:           return UV_ENOBUFS;
    case ENOSTR:          return UV_EINVAL;
    case ETIME:           return UV_ETIMEDOUT;
    default:              return -err;
    }
}

/* `errnum` is the libuv error code used for classification and the error message; `posix_errnum`
   is the `errno`-style value stored in the resulting `IO.Error`. */
static obj_res decode_uv_error_impl(int errnum, int posix_errnum, b_lean_obj_arg fname) {
    object * details = mk_string(uv_strerror(errnum));
    switch (errnum) {
    /* `interrupted` and `noFileOrDirectory` require a file name; callers without one get "". */
    case UV_EINTR:
        if (fname == nullptr) {
            return lean_mk_io_error_interrupted(mk_string(""), posix_errnum, details);
        }
        inc_ref(fname);
        return lean_mk_io_error_interrupted(fname, posix_errnum, details);
    /* LibUV does not map EDOM and ENOSTR as of version 1.52.1 */
    case UV_ELOOP: case UV_ENAMETOOLONG: case UV_EDESTADDRREQ:
    case UV_EBADF: case UV_EINVAL: case UV_EILSEQ:
    case UV_ENOTCONN: case UV_ENOTSOCK:
#if UV_VERSION_HEX >= 0x013200 /* libuv maps ENOEXEC since 1.50.0 */
    case UV_ENOEXEC:
#endif
        if (fname == nullptr) {
            return lean_mk_io_error_invalid_argument(posix_errnum, details);
        } else {
            inc_ref(fname);
            return lean_mk_io_error_invalid_argument_file(fname, posix_errnum, details);
        }
    case UV_ENOENT:
        if (fname == nullptr) {
            return lean_mk_io_error_no_file_or_directory(mk_string(""), posix_errnum, details);
        }
        inc_ref(fname);
        return lean_mk_io_error_no_file_or_directory(fname, posix_errnum, details);
    case UV_EACCES: case UV_EROFS: case UV_ECONNABORTED: case UV_EFBIG:
    case UV_EPERM:
        if (fname == nullptr) {
            return lean_mk_io_error_permission_denied(posix_errnum, details);
        } else {
            inc_ref(fname);
            return lean_mk_io_error_permission_denied_file(fname, posix_errnum, details);
        }
    /* LibUV does not map ENOLCK and ENOSR as of version 1.52.1 */
    case UV_EMFILE: case UV_ENFILE: case UV_ENOSPC:
    case UV_E2BIG:  case UV_EAGAIN: case UV_EMLINK:
    case UV_EMSGSIZE: case UV_ENOBUFS:
    case UV_ENOMEM:
        if (fname == nullptr) {
            return lean_mk_io_error_resource_exhausted(posix_errnum, details);
        } else {
            inc_ref(fname);
            return lean_mk_io_error_resource_exhausted_file(fname, posix_errnum, details);
        }
    /* LibUV does not map EBADMSG as of version 1.52.1 */
    case UV_EISDIR: case UV_ENOTDIR:
        if (fname == nullptr) {
            return lean_mk_io_error_inappropriate_type(posix_errnum, details);
        } else {
            inc_ref(fname);
            return lean_mk_io_error_inappropriate_type_file(fname, posix_errnum, details);
        }
    /* LibUV does not map ECHILD as of version 1.52.1 */
    case UV_ENXIO: case UV_EHOSTUNREACH: case UV_ENETUNREACH:
    case UV_ECONNREFUSED:
#if UV_VERSION_HEX >= 0x012D00 /* libuv maps ENODATA since 1.45.0 */
    case UV_ENODATA:
#endif
    case UV_ESRCH:
        if (fname == nullptr) {
            return lean_mk_io_error_no_such_thing(posix_errnum, details);
        } else {
            inc_ref(fname);
            return lean_mk_io_error_no_such_thing_file(fname, posix_errnum, details);
        }
    /* LibUV does not map EINPROGRESS as of version 1.52.1 */
    case UV_EEXIST: case UV_EISCONN:
        if (fname == nullptr) {
            return lean_mk_io_error_already_exists(posix_errnum, details);
        } else {
            inc_ref(fname);
            return lean_mk_io_error_already_exists_file(fname, posix_errnum, details);
        }
    case UV_EIO:
        lean_assert(fname == nullptr);
        return lean_mk_io_error_hardware_fault(posix_errnum, details);
    case UV_ENOTEMPTY:
        lean_assert(fname == nullptr);
        return lean_mk_io_error_unsatisfied_constraints(posix_errnum, details);
    case UV_ENOTTY:
        lean_assert(fname == nullptr);
        return lean_mk_io_error_illegal_operation(posix_errnum, details);
    /* LibUV does not map EIDRM, ENETRESET and ENOLINK as of version 1.52.1 */
    case UV_ECONNRESET: case UV_ENETDOWN:
    case UV_EPIPE:
        lean_assert(fname == nullptr);
        return lean_mk_io_error_resource_vanished(posix_errnum, details);
    case UV_EPROTO: case UV_EPROTONOSUPPORT: case UV_EPROTOTYPE:
        lean_assert(fname == nullptr);
        return lean_mk_io_error_protocol_error(posix_errnum, details);
    /* LibUV does not map ETIME as of version 1.52.1 */
    case UV_ETIMEDOUT:
        lean_assert(fname == nullptr);
        return lean_mk_io_error_time_expired(posix_errnum, details);
    /* LibUV does not map EDEADLK as of version 1.52.1 */
    case UV_EADDRINUSE: case UV_EBUSY: case UV_ETXTBSY:
        lean_assert(fname == nullptr);
        return lean_mk_io_error_resource_busy(posix_errnum, details);
    case UV_EADDRNOTAVAIL: case UV_EAFNOSUPPORT: case UV_ENODEV:
    case UV_ENOPROTOOPT: case UV_ENOSYS: case UV_ENOTSUP:
    case UV_ERANGE: case UV_ESPIPE: case UV_EXDEV:
        lean_assert(fname == nullptr);
        return lean_mk_io_error_unsupported_operation(posix_errnum, details);
    case UV_EFAULT:
    default:
        lean_assert(fname == nullptr);
        return lean_mk_io_error_other_error(posix_errnum, details);
    }
}

extern "C" LEAN_EXPORT obj_res lean_decode_io_error(int errnum, b_lean_obj_arg fname) {
    return decode_uv_error_impl(lean_crt_to_uv_err(errnum), errnum, fname);
}

extern "C" LEAN_EXPORT obj_res lean_decode_uv_error(int errnum, b_lean_obj_arg fname) {
    /* On Unix libuv error codes are negated `errno` values, so this approximately reconstructs
       the value C library calls would report. */
    return decode_uv_error_impl(errnum, -errnum, fname);
}

// Used for when you try to convert a string with NUL bytes into a C string
obj_res mk_embedded_nul_error(b_obj_arg str) {
    lean_inc(str);
    return io_result_mk_error(lean_mk_io_error_invalid_argument_file(str, EINVAL, mk_string("string contains NUL bytes")));
}

/* IO.setAccessRights (filename : @& String) (mode : UInt32) : IO Unit */
extern "C" LEAN_EXPORT obj_res lean_chmod (b_obj_arg filename, uint32_t mode) {
    const char* fname = string_cstr(filename);
    if (strlen(fname) != lean_string_size(filename) - 1) {
        return mk_embedded_nul_error(filename);
    }
    note_path_use("changes the permissions of", fname);
    if (!chmod(fname, mode)) {
        return io_result_mk_ok(box(0));
    } else {
        return io_result_mk_error(decode_io_error(errno, filename));
    }
}

/* Handle.mk (filename : @& String) (mode : FS.Mode) : IO Handle */
extern "C" LEAN_EXPORT obj_res lean_io_prim_handle_mk(b_obj_arg filename, uint8 mode) {
    int flags = 0;
#ifdef LEAN_WINDOWS
    // do not translate line endings
    flags |= O_BINARY;
    // do not inherit across process creation
    flags |= O_NOINHERIT;
#else
    // do not inherit across process creation
    flags |= O_CLOEXEC;
#endif
    switch (mode) {
    case 0: flags |= O_RDONLY; break;  // read
    case 1: flags |= O_WRONLY | O_CREAT | O_TRUNC; break;  // write
    case 2: flags |= O_WRONLY | O_CREAT | O_TRUNC | O_EXCL; break;  // writeNew
    case 3: flags |= O_RDWR; break;  // readWrite
    case 4: flags |= O_WRONLY | O_CREAT | O_APPEND; break;  // append
    }
    const char* fname = string_cstr(filename);
    if (strlen(fname) != lean_string_size(filename) - 1) {
        return mk_embedded_nul_error(filename);
    }
    switch (mode) {
    case 0: note_path_read(fname); break;
    case 3: note_path_use("writes", fname); break;
    default: note_path_create("writes", fname, false); break;
    }
    int fd = open(fname, flags, 0666);
    if (fd == -1) {
        return io_result_mk_error(decode_io_error(errno, filename));
    }
    char const * fp_mode;
    switch (mode) {
    case 0: fp_mode = "r"; break;  // read
    case 1: fp_mode = "w"; break;  // write
    case 2: fp_mode = "w"; break;  // writeNew
    case 3: fp_mode = "r+"; break;  // readWrite
    case 4: fp_mode = "a"; break;  // append
    }
    FILE * fp = fdopen(fd, fp_mode);
    if (!fp) {
        return io_result_mk_error(decode_io_error(errno, filename));
    } else {
        return io_result_mk_ok(io_wrap_handle(fp));
    }
}

#ifdef LEAN_WINDOWS

static inline HANDLE win_handle(FILE * fp) {
    return (HANDLE)_get_osfhandle(_fileno(fp));
}

/* Handle.lock : (@& Handle) → (exclusive : Bool) → IO Unit */
extern "C" LEAN_EXPORT obj_res lean_io_prim_handle_lock(b_obj_arg h, uint8_t x) {
    OVERLAPPED o = {0};
    note_handle_use(io_get_handle(h));
    HANDLE wh = win_handle(io_get_handle(h));
    DWORD flags = x ? LOCKFILE_EXCLUSIVE_LOCK : 0;
    if (LockFileEx(wh, flags, 0, MAXDWORD, MAXDWORD, &o)) {
        return io_result_mk_ok(box(0));
    } else {
        return io_result_mk_error((sstream() << GetLastError()).str());
    }
}

/* Handle.tryLock : (@& Handle) → (exclusive : Bool) → IO Bool */
extern "C" LEAN_EXPORT obj_res lean_io_prim_handle_try_lock(b_obj_arg h, uint8_t x) {
    OVERLAPPED o = {0};
    note_handle_use(io_get_handle(h));
    HANDLE wh = win_handle(io_get_handle(h));
    DWORD flags = (x ? LOCKFILE_EXCLUSIVE_LOCK : 0) | LOCKFILE_FAIL_IMMEDIATELY;
    if (LockFileEx(wh, flags, 0, MAXDWORD, MAXDWORD, &o)) {
        return io_result_mk_ok(box(1));
    } else {
        if (GetLastError() == ERROR_LOCK_VIOLATION) {
            return io_result_mk_ok(box(0));
        } else {
            return io_result_mk_error((sstream() << GetLastError()).str());
        }
    }
}

/* Handle.unlock : (@& Handle) → IO Unit */
extern "C" LEAN_EXPORT obj_res lean_io_prim_handle_unlock(b_obj_arg h) {
    OVERLAPPED o = {0};
    note_handle_use(io_get_handle(h));
    HANDLE wh = win_handle(io_get_handle(h));
    if (UnlockFileEx(wh, 0, MAXDWORD, MAXDWORD, &o)) {
        return io_result_mk_ok(box(0));
    } else {
        if (GetLastError() == ERROR_NOT_LOCKED) {
            // For consistency with Unix
            return io_result_mk_ok(box(0));
        } else {
            return io_result_mk_error((sstream() << GetLastError()).str());
        }
    }
}

/* Handle.setInheritable : (@& Handle) → (inheritable : Bool) → IO Unit */
extern "C" LEAN_EXPORT obj_res lean_io_prim_handle_set_inheritable(b_obj_arg h, uint8_t x) {
    note_handle_use(io_get_handle(h));
    HANDLE wh = win_handle(io_get_handle(h));
    if (SetHandleInformation(wh, HANDLE_FLAG_INHERIT, x ? HANDLE_FLAG_INHERIT : 0)) {
        return io_result_mk_ok(box(0));
    } else {
        return io_result_mk_error((sstream() << GetLastError()).str());
    }
}

#else

/* Handle.lock : (@& Handle) → (exclusive : Bool) → IO Unit */
extern "C" LEAN_EXPORT obj_res lean_io_prim_handle_lock(b_obj_arg h, uint8_t x) {
    FILE * fp = io_get_handle(h);
    note_handle_use(fp);
    if (!flock(fileno(fp), x ? LOCK_EX : LOCK_SH)) {
        return io_result_mk_ok(box(0));
    } else {
        return io_result_mk_error(decode_io_error(errno, nullptr));
    }
}

/* Handle.tryLock : (@& Handle) → (exclusive : Bool) → IO Bool */
extern "C" LEAN_EXPORT obj_res lean_io_prim_handle_try_lock(b_obj_arg h, uint8_t x) {
    FILE * fp = io_get_handle(h);
    note_handle_use(fp);
    if (!flock(fileno(fp), (x ? LOCK_EX : LOCK_SH) | LOCK_NB)) {
        return io_result_mk_ok(box(1));
    } else {
        if (errno == EWOULDBLOCK) {
            return io_result_mk_ok(box(0));
        } else {
            return io_result_mk_error(decode_io_error(errno, nullptr));
        }
    }
}

/* Handle.unlock : (@& Handle) → IO Unit */
extern "C" LEAN_EXPORT obj_res lean_io_prim_handle_unlock(b_obj_arg h) {
    FILE * fp = io_get_handle(h);
    note_handle_use(fp);
    if (!flock(fileno(fp), LOCK_UN)) {
        return io_result_mk_ok(box(0));
    } else {
        return io_result_mk_error(decode_io_error(errno, nullptr));
    }
}

/* Handle.setInheritable : (@& Handle) → (inheritable : Bool) → IO Unit */
extern "C" LEAN_EXPORT obj_res lean_io_prim_handle_set_inheritable(b_obj_arg h, uint8_t x) {
    note_handle_use(io_get_handle(h));
    int fd = fileno(io_get_handle(h));
    int flags = fcntl(fd, F_GETFD);
    if (flags == -1 || fcntl(fd, F_SETFD, x ? (flags & ~FD_CLOEXEC) : (flags | FD_CLOEXEC)) == -1) {
        return io_result_mk_error(decode_io_error(errno, nullptr));
    }
    return io_result_mk_ok(box(0));
}

#endif

/* Handle.isTty : (@& Handle) → BaseIO Bool */
extern "C" LEAN_EXPORT uint8_t lean_io_prim_handle_is_tty(b_obj_arg h) {
    FILE * fp = io_get_handle(h);
    // a property of this process's streams, not a use of the stream
    note_nondeterministic_read();
#ifdef LEAN_WINDOWS
    /*
    On Windows, there are two approaches for detecting a console.
    1)  _isatty(_fileno(fp)) != 0
        This checks whether the file descriptor is a *character device*,
        not just a terminal (unlike Unix's isatty). Thus, it produces a false
        positive in some edge cases (such as NUL).
        https://stackoverflow.com/q/3648711
    2)  GetConsoleMode(win_handle(fp), &mode) != 0
        Errors if the handle is not a console. Unfortunately, this produces
        a false negative for a terminal emulator like MSYS/Cygwin's Mintty,
        which is not implemented as a Windows-recognized console on
        old Windows versions (e.g., pre-Windows 10, pre-ConPTY).
        https://github.com/msys2/MINGW-packages/issues/14087
    We choose to use GetConsoleMode as that seems like the more modern approach,
    and Lean does not support pre-Windows 10.
    */
    DWORD mode;
    return GetConsoleMode(win_handle(fp), &mode) != 0;
#else
    // We ignore errors for consistency with Windows.
    return isatty(fileno(fp));
#endif
}

/* Handle.flush : (@& Handle) → IO Unit */
extern "C" LEAN_EXPORT obj_res lean_io_prim_handle_flush(b_obj_arg h) {
    FILE * fp = io_get_handle(h);
    note_handle_use(fp, true);
    if (!std::fflush(fp)) {
        return io_result_mk_ok(box(0));
    } else {
        return io_result_mk_error(decode_io_error(errno, nullptr));
    }
}

/* Handle.rewind : (@& Handle) → IO Unit */
extern "C" LEAN_EXPORT obj_res lean_io_prim_handle_rewind(b_obj_arg h) {
    FILE * fp = io_get_handle(h);
    note_handle_use(fp);
    if (!std::fseek(fp, 0, SEEK_SET)) {
        return io_result_mk_ok(box(0));
    } else {
        return io_result_mk_error(decode_io_error(errno, nullptr));
    }
}

/* Handle.truncate : (@& Handle) → IO Unit */
extern "C" LEAN_EXPORT obj_res lean_io_prim_handle_truncate(b_obj_arg h) {
    FILE * fp = io_get_handle(h);
    note_handle_use(fp);
#ifdef LEAN_WINDOWS
    if (!_chsize_s(_fileno(fp), _ftelli64(fp))) {
#else
    if (!ftruncate(fileno(fp), ftello(fp))) {
#endif
        return io_result_mk_ok(box(0));
    } else {
        return io_result_mk_error(decode_io_error(errno, nullptr));
    }
}

/* Handle.read : (@& Handle) → USize → IO ByteArray */
extern "C" LEAN_EXPORT obj_res lean_io_prim_handle_read(b_obj_arg h, usize nbytes) {
    FILE * fp = io_get_handle(h);
    note_handle_use(fp);
    if (lean_alloc_sarray_would_overflow(1, nbytes)) {
        return io_result_mk_error(decode_io_error(ENOMEM, NULL));
    }
    obj_res res = lean_alloc_sarray(1, 0, nbytes);
    if (nbytes == 0) {
        // std::fread doesn't handle 0 reads well, see https://github.com/leanprover/lean4/issues/12138
        return io_result_mk_ok(res);
    }
    usize n = std::fread(lean_sarray_cptr(res), 1, nbytes, fp);
    if (n > 0) {
        lean_sarray_set_size(res, n);
        return io_result_mk_ok(res);
    } else if (feof(fp)) {
        clearerr(fp);
        lean_sarray_set_size(res, n);
        return io_result_mk_ok(res);
    } else {
        dec_ref(res);
        return io_result_mk_error(decode_io_error(errno, nullptr));
    }
}

/* Handle.write : (@& Handle) → (@& ByteArray) → IO Unit */
extern "C" LEAN_EXPORT obj_res lean_io_prim_handle_write(b_obj_arg h, b_obj_arg buf) {
    FILE * fp = io_get_handle(h);
    note_handle_use(fp, true);
    usize n = lean_sarray_size(buf);
    usize m = std::fwrite(lean_sarray_cptr(buf), 1, n, fp);
    if (m == n) {
        return io_result_mk_ok(box(0));
    } else {
        return io_result_mk_error(decode_io_error(errno, nullptr));
    }
}

#if defined(LEAN_WINDOWS)

#define LEAN_IO_LOCK_FILE(fp) _lock_file(fp)
#define LEAN_IO_UNLOCK_FILE(fp) _unlock_file(fp)
#define LEAN_IO_GETC_UNLOCKED(fp) _fgetc_nolock(fp)

#else

#define LEAN_IO_LOCK_FILE(fp) flockfile(fp)
#define LEAN_IO_UNLOCK_FILE(fp) funlockfile(fp)
#define LEAN_IO_GETC_UNLOCKED(fp) getc_unlocked(fp)

#endif

/* Handle.getLine : (@& Handle) → IO Unit */
extern "C" LEAN_EXPORT obj_res lean_io_prim_handle_get_line(b_obj_arg h) {
    FILE * fp = io_get_handle(h);
    note_handle_use(fp);

    std::string result;
    int c; // Note: int, not char, required to handle EOF
    LEAN_IO_LOCK_FILE(fp);
    while ((c = LEAN_IO_GETC_UNLOCKED(fp)) != EOF) {
        result.push_back(c);
        if (c == '\n') {
            break;
        }
    }
    LEAN_IO_UNLOCK_FILE(fp);

    if (std::ferror(fp)) {
        return io_result_mk_error(decode_io_error(errno, nullptr));
    } else if (std::feof(fp)) {
        clearerr(fp);
        return io_result_mk_ok(mk_string(result));
    } else {
        obj_res ret = io_result_mk_ok(mk_string(result));
        return ret;
    }
}

/* Handle.putStr : (@& Handle) → (@& String) → IO Unit */
extern "C" LEAN_EXPORT obj_res lean_io_prim_handle_put_str(b_obj_arg h, b_obj_arg s) {
    FILE * fp = io_get_handle(h);
    note_handle_use(fp, true);
    usize n = lean_string_size(s) - 1; // - 1 to ignore the terminal NULL byte.
    usize m = std::fwrite(lean_string_cstr(s), 1, n, fp);
    if (m == n) {
        return io_result_mk_ok(box(0));
    } else {
        return io_result_mk_error(decode_io_error(errno, nullptr));
    }
}

/* Std.Time.Timestamp.now : IO Timestamp */
extern "C" LEAN_EXPORT obj_res lean_get_current_time() {
    note_nondeterministic_read();
    using namespace std::chrono;

    std::chrono::system_clock::time_point now = std::chrono::system_clock::now();
    long long timestamp = std::chrono::duration_cast<std::chrono::nanoseconds>(now.time_since_epoch()).count();

    long long secs = timestamp / 1000000000;
    long long nano = timestamp % 1000000000;

    lean_object *lean_ts = lean_alloc_ctor(0, 2, 0);
    lean_ctor_set(lean_ts, 0, lean_int64_to_int(secs));
    lean_ctor_set(lean_ts, 1, lean_int64_to_int(nano));

    return lean_io_result_mk_ok(lean_ts);
}

/* Std.Time.Database.Windows.getNextTransition : @&String -> Int64 -> Bool -> IO (Option (Int64 × TimeZone)) */
extern "C" LEAN_EXPORT obj_res lean_windows_get_next_transition(b_obj_arg timezone_str, uint64_t tm_obj, uint8 default_time) {
#if defined(LEAN_WINDOWS)
    UErrorCode status = U_ZERO_ERROR;
    const char* dst_name_id = lean_string_cstr(timezone_str);

    UChar tzID[256];
    u_strFromUTF8(tzID, sizeof(tzID) / sizeof(tzID[0]), NULL, dst_name_id, lean_string_size(timezone_str) - 1, &status);

    if (U_FAILURE(status)) {
        return lean_io_result_mk_error(lean_mk_io_error_invalid_argument(EINVAL, mk_string("failed to read identifier")));
    }

    UCalendar *cal = ucal_open(tzID, -1, NULL, UCAL_GREGORIAN, &status);

    if (U_FAILURE(status)) {
        ucal_close(cal);
        return lean_io_result_mk_error(lean_mk_io_error_invalid_argument(EINVAL, mk_string("failed to open calendar")));
    }

    int64_t tm = 0;

    if (!default_time) {
        int64_t timestamp_secs = (int64_t)tm_obj;

        ucal_setMillis(cal, timestamp_secs * 1000, &status);
        if (U_FAILURE(status)) {
            ucal_close(cal);
            return lean_io_result_mk_error(lean_mk_io_error_invalid_argument(EINVAL, mk_string("failed to set calendar time")));
        }

        UDate nextTransition;
        if (!ucal_getTimeZoneTransitionDate(cal, UCAL_TZ_TRANSITION_NEXT, &nextTransition, &status)) {
            ucal_close(cal);
            return io_result_mk_ok(mk_option_none());
        }

        if (U_FAILURE(status)) {
            ucal_close(cal);
            return lean_io_result_mk_error(lean_mk_io_error_invalid_argument(EINVAL, mk_string("failed to get next transition")));
        }

        // Round up to whole seconds: Windows models midnight transitions as 23:59:59.999 on the
        // preceding day, and truncation would move such transitions a full second early.
        tm = (int64_t)std::ceil(nextTransition / 1000.0);
    }

    int32_t dst_offset = ucal_get(cal, UCAL_DST_OFFSET, &status);

    if (U_FAILURE(status)) {
        ucal_close(cal);
        return lean_io_result_mk_error(lean_mk_io_error_invalid_argument(EINVAL, mk_string("failed to get dst_offset")));
    }

    int is_dst = dst_offset != 0;

    int32_t tzIDLength = ucal_getTimeZoneDisplayName(cal, is_dst ? UCAL_DST : UCAL_STANDARD, "en_US", tzID, 32, &status);

    if (U_FAILURE(status)) {
        ucal_close(cal);
        return lean_io_result_mk_error(lean_mk_io_error_invalid_argument(EINVAL, mk_string("failed to timezone identifier")));
    }

    char dst_name[256];
    int32_t dst_name_len;
    u_strToUTF8(dst_name, sizeof(dst_name), &dst_name_len, tzID, tzIDLength, &status);

    if (U_FAILURE(status)) {
        ucal_close(cal);
        return lean_io_result_mk_error(lean_mk_io_error_invalid_argument(EINVAL, mk_string("failed to convert DST name to UTF-8")));
    }

    UChar display_name[32];
    int32_t display_name_len = ucal_getTimeZoneDisplayName(cal, is_dst ? UCAL_SHORT_DST : UCAL_SHORT_STANDARD, "en_US", display_name, 32, &status);

    if (U_FAILURE(status)) {
        ucal_close(cal);
        return lean_io_result_mk_error(lean_mk_io_error_invalid_argument(EINVAL, mk_string("failed to read abbreaviation")));
    }

    char display_name_str[256];
    int32_t display_name_str_len;
    u_strToUTF8(display_name_str, sizeof(display_name_str), &display_name_str_len, display_name, display_name_len, &status);

    if (U_FAILURE(status)) {
        ucal_close(cal);
        return lean_io_result_mk_error(lean_mk_io_error_invalid_argument(EINVAL, mk_string("failed to get abbreviation to cstr")));
    }

    int32_t zone_offset = ucal_get(cal, UCAL_ZONE_OFFSET, &status);
    zone_offset += dst_offset;

    if (U_FAILURE(status)) {
        ucal_close(cal);
        return lean_io_result_mk_error(lean_mk_io_error_invalid_argument(EINVAL, mk_string("failed to get zone_offset")));
    }

    ucal_close(cal);

    int offset_seconds = zone_offset / 1000;

    lean_object *lean_tz = lean_alloc_ctor(0, 3, 1);
    lean_ctor_set(lean_tz, 0, lean_int_to_int(offset_seconds));
    lean_ctor_set(lean_tz, 1, lean_mk_string_from_bytes_unchecked(dst_name, dst_name_len));
    lean_ctor_set(lean_tz, 2, lean_mk_string_from_bytes_unchecked(display_name_str, display_name_str_len));
    lean_ctor_set_uint8(lean_tz, sizeof(void*)*3, is_dst);

    lean_object *lean_pair = lean_alloc_ctor(0, 2, 0);
    lean_ctor_set(lean_pair, 0, lean_box_uint64((uint64_t)tm));
    lean_ctor_set(lean_pair, 1, lean_tz);

    return lean_io_result_mk_ok(mk_option_some(lean_pair));
#else
    return lean_io_result_mk_error(lean_mk_io_error_invalid_argument(EINVAL, mk_string("failed to get timezone, its windows only.")));
#endif
}

/* Std.Time.Database.Windows.getLocalTimeZoneIdentifierAt : Int64 → IO String */
extern "C" LEAN_EXPORT obj_res lean_get_windows_local_timezone_id_at(uint64_t tm_obj) {
#if defined(LEAN_WINDOWS)
    UErrorCode status = U_ZERO_ERROR;
    UCalendar* cal = ucal_open(NULL, -1, NULL, UCAL_GREGORIAN, &status);

    if (U_FAILURE(status)) {
        return lean_io_result_mk_error(lean_mk_io_error_invalid_argument(EINVAL, mk_string("failed to open calendar")));
    }

    int64_t timestamp_secs = (int64_t)tm_obj;
    ucal_setMillis(cal, timestamp_secs * 1000, &status);

    if (U_FAILURE(status)) {
        ucal_close(cal);
        return lean_io_result_mk_error(lean_mk_io_error_invalid_argument(EINVAL, mk_string("failed to set calendar time")));
    }

    UChar tzId[256];
    int32_t tzIdLength = ucal_getTimeZoneID(cal, tzId, sizeof(tzId) / sizeof(tzId[0]), &status);
    ucal_close(cal);

    if (U_FAILURE(status)) {
        return lean_io_result_mk_error(lean_mk_io_error_invalid_argument(EINVAL, mk_string("failed to get timezone ID")));
    }

    char tzIdStr[256];
    u_strToUTF8(tzIdStr, sizeof(tzIdStr), NULL, tzId, tzIdLength, &status);

    if (U_FAILURE(status)) {
        return lean_io_result_mk_error(lean_mk_io_error_invalid_argument(EINVAL, mk_string("failed to convert timezone ID to UTF-8")));
    }

    return lean_io_result_mk_ok(lean_mk_ascii_string_unchecked(tzIdStr));
#else
    return lean_io_result_mk_error(lean_mk_io_error_invalid_argument(EINVAL, mk_string("timezone retrieval is Windows-only")));
#endif
}

/* monoMsNow : BaseIO Nat */
extern "C" LEAN_EXPORT obj_res lean_io_mono_ms_now() {
    note_nondeterministic_read();
    static_assert(sizeof(std::chrono::milliseconds::rep) <= sizeof(uint64), "size of std::chrono::nanoseconds::rep may not exceed 64");
    auto now = std::chrono::steady_clock::now();
    auto tm = std::chrono::duration_cast<std::chrono::milliseconds>(now.time_since_epoch());
    return uint64_to_nat(tm.count());
}

/* monoNanosNow : BaseIO Nat */
extern "C" LEAN_EXPORT obj_res lean_io_mono_nanos_now() {
    note_nondeterministic_read();
    static_assert(sizeof(std::chrono::nanoseconds::rep) <= sizeof(uint64), "size of std::chrono::nanoseconds::rep may not exceed 64");
    auto now = std::chrono::steady_clock::now();
    auto tm = std::chrono::duration_cast<std::chrono::nanoseconds>(now.time_since_epoch());
    return uint64_to_nat(tm.count());
}

/* getRandomBytes (nBytes : USize) : IO ByteArray */
extern "C" LEAN_EXPORT obj_res lean_io_get_random_bytes (size_t nbytes) {
    note_import_nondeterministic_read();
    // Adapted from https://github.com/rust-random/getrandom/blob/30308ae845b0bf3839e5a92120559eaf56048c28/src/

    if (nbytes == 0) return io_result_mk_ok(lean_alloc_sarray(1, 0, 0));

#if !defined(LEAN_WINDOWS)
    int fd_urandom = open("/dev/urandom", O_RDONLY | O_CLOEXEC);
    if (fd_urandom < 0) {
        return io_result_mk_error(decode_io_error(errno, lean_mk_ascii_string_unchecked("/dev/urandom")));
    }
#endif

    if (lean_alloc_sarray_would_overflow(1, nbytes)) {
        return io_result_mk_error(decode_io_error(ENOMEM, NULL));
    }
    obj_res res = lean_alloc_sarray(1, 0, nbytes);
    size_t remain = nbytes;
    uint8_t *dst = lean_sarray_cptr(res);

    while (remain > 0) {
#if defined(LEAN_WINDOWS)
        // Prevent ULONG (32-bit) overflow
        size_t read_sz = std::min(remain, static_cast<size_t>(std::numeric_limits<uint32_t>::max()));
        NTSTATUS status = BCryptGenRandom(
            NULL,
            dst,
            static_cast<ULONG>(read_sz),
            BCRYPT_USE_SYSTEM_PREFERRED_RNG
        );
        if (!NT_SUCCESS(status)) {
            dec_ref(res);
            return io_result_mk_error("BCryptGenRandom failed");
        }
        remain -= read_sz;
        dst += read_sz;
#else
    #if defined(LEAN_EMSCRIPTEN)
        // `Crypto.getRandomValues` documents `dest` should be at most 65536 bytes.
        size_t read_sz = std::min(remain, static_cast<size_t>(65536));
    #else
        size_t read_sz = remain;
    #endif
        ssize_t nread = read(fd_urandom, dst, read_sz);
        if (nread < 0) {
            if (errno != EINTR) {
                close(fd_urandom);
                dec_ref(res);
                return io_result_mk_error(decode_io_error(errno, nullptr));
            }
        } else {
            remain -= nread;
            dst += nread;
        }
#endif
    }

#if !defined(LEAN_WINDOWS)
    close(fd_urandom);
#endif
    lean_sarray_set_size(res, nbytes);
    return io_result_mk_ok(res);
}

/* timeit {α : Type} (msg : @& String) (fn : IO α) : IO α */
extern "C" LEAN_EXPORT obj_res lean_io_timeit(b_obj_arg msg, obj_arg fn) {
    auto start = std::chrono::steady_clock::now();
    obj_arg w = apply_1(fn, lean_io_mk_world());
    auto end   = std::chrono::steady_clock::now();
    auto diff  = std::chrono::duration<double>(end - start);
    sstream out;
    out << std::setprecision(3);
    if (diff < std::chrono::duration<double>(1)) {
        out << string_cstr(msg) << " " << std::chrono::duration<double, std::milli>(diff).count() << "ms";
    } else {
        out << string_cstr(msg) << " " << diff.count() << "s";
    }
    io_eprintln(mk_string(out.str()));
    return w;
}

/* allocprof {α : Type} (msg : @& String) (fn : IO α) : IO α */
extern "C" LEAN_EXPORT obj_res lean_io_allocprof(b_obj_arg msg, obj_arg fn) {
    std::ostringstream out;
    obj_res res;
    {
        allocprof prof(out, string_cstr(msg));
        res = apply_1(fn, lean_io_mk_world());
    }
    io_eprintln(mk_string(out.str()));
    return res;
}

/* getNumHeartbeats : BaseIO Nat */
extern "C" LEAN_EXPORT obj_res lean_io_get_num_heartbeats() {
    return lean_uint64_to_nat(get_num_heartbeats());
}

/* setHeartbeats (count : Nat) : BaseIO Unit */
extern "C" LEAN_EXPORT obj_res lean_io_set_heartbeats(obj_arg count) {
    set_heartbeats(lean_uint64_of_nat(count));
    lean_dec(count);
    return box(0);
}

extern "C" LEAN_EXPORT obj_res lean_io_getenv(b_obj_arg env_var) {
    const char* env_var_str = string_cstr(env_var);
    if (strlen(env_var_str) != lean_string_size(env_var) - 1) {
        return mk_option_none();
    }
#if defined(LEAN_EMSCRIPTEN)
    // HACK(WN): getenv doesn't seem to work in Emscripten even though it should
    // see https://emscripten.org/docs/porting/connecting_cpp_and_javascript/Interacting-with-code.html#interacting-with-code-environment-variables
    char* val = reinterpret_cast<char*>(EM_ASM_INT({
        var envVar = UTF8ToString($0);
        var val = ENV[envVar];
        if (val) {
            var lengthBytes = lengthBytesUTF8(val)+1;
            var valOnWasmHeap = _malloc(lengthBytes);
            stringToUTF8(val, valOnWasmHeap, lengthBytes);
            return valOnWasmHeap;
        } else {
            return 0;
        }
    }, env_var_str));

    if (val) {
        object * valLean = mk_string(val);
        free(val);
        return mk_option_some(valLean);
    } else {
        return mk_option_none();
    }
#else
    char * val = std::getenv(env_var_str);
    note_value_read(std::string("env:") + env_var_str, val);
    if (val) {
        return mk_option_some(mk_string(val));
    } else {
        return mk_option_none();
    }
#endif
}

extern "C" LEAN_EXPORT obj_res lean_io_realpath(obj_arg filename) {
    const char* fname = string_cstr(filename);
    note_path_read(fname);
    if (strlen(fname) != lean_string_size(filename) - 1) {
        obj_res res = mk_embedded_nul_error(filename);
        dec_ref(filename);
        return res;
    }
#if defined(LEAN_WINDOWS)
    constexpr unsigned BufferSize = 8192;
    char buffer[BufferSize];
    HANDLE handle = CreateFile(fname, 0, FILE_SHARE_READ, NULL, OPEN_EXISTING, FILE_FLAG_BACKUP_SEMANTICS, NULL);
    if (handle == INVALID_HANDLE_VALUE) {
        obj_res res = mk_file_not_found_error(filename);
        dec_ref(filename);
        return res;
    }
    DWORD retval = GetFinalPathNameByHandle(handle, buffer, BufferSize, 0);
    CloseHandle(handle);
    if (retval == 0 || retval > BufferSize) {
        return io_result_mk_ok(filename);
    } else {
        dec_ref(filename);
        char * res = buffer;
        if (memcmp(res, "\\\\?\\", 4) == 0) {
            if (memcmp(res + 4, "UNC\\", 4) == 0) {
                // network path: convert "\\\\?\\UNC\\..." to "\\\\..."
                res[6] = '\\';
                res += 6;
            } else {
                // simple path: convert "\\\\?\\C:\\.." to "C:\\..."
                res += 4;
            }
        }
        // Hack for making sure disk is lower case
        // TODO(Leo): more robust solution
        if (strlen(res) >= 2 && res[1] == ':') {
            res[0] = tolower(res[0]);
        }
        return io_result_mk_ok(mk_string(res));
    }
#else
    char buffer[PATH_MAX];
    char * tmp = realpath(fname, buffer);
    if (tmp) {
        obj_res s = mk_string(tmp);
        dec_ref(filename);
        return io_result_mk_ok(s);
    } else {
        obj_res res = mk_file_not_found_error(filename);
        dec_ref(filename);
        return res;
    }
#endif
}

/*
structure DirEntry where
  root     : String
  filename : String

constant readDir : @& FilePath → IO (Array DirEntry)
*/
extern "C" LEAN_EXPORT obj_res lean_io_read_dir(b_obj_arg dirname) {
    const char* dirname_ptr = string_cstr(dirname);
    note_path_read(dirname_ptr);
    if (strlen(dirname_ptr) != lean_string_size(dirname) - 1) {
        return mk_embedded_nul_error(dirname);
    }
    object * arr = array_mk_empty();
    DIR * dp = opendir(dirname_ptr);
    if (!dp) {
        return io_result_mk_error(decode_io_error(errno, dirname));
    }
    while (dirent * entry = readdir(dp)) {
        if (strcmp(entry->d_name, ".") == 0 || strcmp(entry->d_name, "..") == 0) {
            continue;
        }
        object * lentry = alloc_cnstr(0, 2, 0);
        lean_inc(dirname);
        cnstr_set(lentry, 0, dirname);
        cnstr_set(lentry, 1, lean_mk_string(entry->d_name));
        arr = lean_array_push(arr, lentry);
    }
    lean_always_assert(closedir(dp) == 0);
    return io_result_mk_ok(arr);
}

/*
inductive FileType where
  | dir
  | file
  | symlink
  | other

structure SystemTime where
  sec  : Int
  nsec : UInt32

structure Metadata where
  --permissions : ...
  accessed : SystemTime
  modified : SystemTime
  byteSize : UInt64
  type     : FileType

constant metadata : @& FilePath → IO IO.FS.Metadata
*/
static obj_res timespec_to_obj(uv_timespec_t const & ts) {
    object * o = alloc_cnstr(0, 1, sizeof(uint32));
    cnstr_set(o, 0, lean_int64_to_int(ts.tv_sec));
    cnstr_set_uint32(o, sizeof(object *), ts.tv_nsec);
    return o;
}

static obj_res metadata_core(uv_stat_t const & st) {
    object * mdata = alloc_cnstr(0, 2, 2 * sizeof(uint64) + sizeof(uint8));
    cnstr_set(mdata, 0, timespec_to_obj(st.st_atim));
    cnstr_set(mdata, 1, timespec_to_obj(st.st_mtim));
    cnstr_set_uint64(mdata, 2 * sizeof(object *), st.st_size);
    cnstr_set_uint64(mdata, 2 * sizeof(object *) + sizeof(uint64), st.st_nlink);
    cnstr_set_uint8(mdata, 2 * sizeof(object *) + 2 * sizeof(uint64),
                    S_ISDIR(st.st_mode) ? 0 :
                    S_ISREG(st.st_mode) ? 1 :
#ifndef LEAN_WINDOWS
                    S_ISLNK(st.st_mode) ? 2 :
#endif
                    3);
    return io_result_mk_ok(mdata);
}

extern "C" LEAN_EXPORT obj_res lean_io_metadata(b_obj_arg filename) {
    const char* fname = string_cstr(filename);
    if (strlen(fname) != lean_string_size(filename) - 1) {
        return mk_embedded_nul_error(filename);
    }
    note_path_read(fname);
    uv_fs_t req;
    int ret = uv_fs_stat(NULL, &req, fname, NULL);
    if (ret < 0) {
        uv_fs_req_cleanup(&req);
        return io_result_mk_error(decode_uv_error(ret, filename));
    } else {
        object* mdata = metadata_core(req.statbuf);
        uv_fs_req_cleanup(&req);
        return mdata;
    }
}

extern "C" LEAN_EXPORT obj_res lean_io_symlink_metadata(b_obj_arg filename) {
#ifdef LEAN_WINDOWS
    return lean_io_metadata(filename);
#else
    const char* fname = string_cstr(filename);
    if (strlen(fname) != lean_string_size(filename) - 1) {
        return mk_embedded_nul_error(filename);
    }
    note_path_read(fname);
    uv_fs_t req;
    int ret = uv_fs_lstat(NULL, &req, fname, NULL);
    if (ret < 0) {
        uv_fs_req_cleanup(&req);
        return io_result_mk_error(decode_uv_error(ret, filename));
    } else {
        object* mdata = metadata_core(req.statbuf);
        uv_fs_req_cleanup(&req);
        return mdata;
    }
#endif
}

/* System.FilePath.isSameFile : (@& FilePath) → (@& FilePath) → IO Bool */
extern "C" LEAN_EXPORT obj_res lean_io_is_same_file(b_obj_arg p1, b_obj_arg p2) {
    uv_stat_t st[2];
    b_obj_arg ps[2] = {p1, p2};
    for (int i = 0; i < 2; i++) {
        const char* fname = string_cstr(ps[i]);
        if (strlen(fname) != lean_string_size(ps[i]) - 1) {
            return mk_embedded_nul_error(ps[i]);
        }
        note_path_read(fname);
        uv_fs_t req;
        int ret = uv_fs_stat(NULL, &req, fname, NULL);
        if (ret < 0) {
            uv_fs_req_cleanup(&req);
            return io_result_mk_error(decode_uv_error(ret, ps[i]));
        }
        st[i] = req.statbuf;
        uv_fs_req_cleanup(&req);
    }
    return io_result_mk_ok(box(st[0].st_dev == st[1].st_dev && st[0].st_ino == st[1].st_ino));
}

extern "C" LEAN_EXPORT obj_res lean_io_create_dir(b_obj_arg p) {
    const char* str = string_cstr(p);
    if (strlen(str) != lean_string_size(p) - 1) {
        return mk_embedded_nul_error(p);
    }
    note_path_create("creates", str, true);
#ifdef LEAN_WINDOWS
    if (mkdir(str) == 0) {
#else
    if (mkdir(str, 0777) == 0) {
#endif
        return io_result_mk_ok(box(0));
    } else {
        return io_result_mk_error(decode_io_error(errno, p));
    }
}

extern "C" LEAN_EXPORT obj_res lean_io_remove_dir(b_obj_arg p) {
    const char* str = string_cstr(p);
    if (strlen(str) != lean_string_size(p) - 1) {
        return mk_embedded_nul_error(p);
    }
    note_path_remove("removes", str);
    if (rmdir(str) == 0) {
        return io_result_mk_ok(box(0));
    } else {
        return io_result_mk_error(decode_io_error(errno, p));
    }
}

extern "C" LEAN_EXPORT obj_res lean_io_rename(b_obj_arg from, b_obj_arg to) {
    const char* from_str = string_cstr(from);
    if (strlen(from_str) != lean_string_size(from) - 1) {
        return mk_embedded_nul_error(from);
    }
    const char* to_str = string_cstr(to);
    if (strlen(to_str) != lean_string_size(to) - 1) {
        return mk_embedded_nul_error(to);
    }
    {
        struct stat st;
        bool dir = stat(from_str, &st) == 0 && S_ISDIR(st.st_mode);
        note_path_create("replaces", to_str, dir);
        note_path_remove("renames", from_str);
    }
#ifdef LEAN_WINDOWS
    // Note: On windows, std::rename gives an error if the `to` file already exists,
    // so we have to call the underlying windows API directly to get behavior consistent
    // with the unix-like OSs
    bool ok = MoveFileEx(from_str, to_str, MOVEFILE_REPLACE_EXISTING) != 0;
    if (!ok) {
        // TODO: actually produce the right type of IO error
        return io_result_mk_error((sstream()
            << "failed to rename '" << from_str << "' to '" << to_str << "': " << GetLastError()).str());
    }
#else
    bool ok = std::rename(from_str, to_str) == 0;
    if (!ok) {
        std::ostringstream s;
        s << from_str << " and/or " << to_str;
        object_ref out{mk_string(s.str())};
        return io_result_mk_error(decode_io_error(errno, out.raw()));
    }
#endif
    return io_result_mk_ok(box(0));
}

/* hardLink (orig link : @& FilePath) : IO Unit */
extern "C" LEAN_EXPORT obj_res lean_io_hard_link(b_obj_arg orig, b_obj_arg link) {
    const char* orig_str = string_cstr(orig);
    if (strlen(orig_str) != lean_string_size(orig) - 1) {
        return mk_embedded_nul_error(orig);
    }
    const char* link_str = string_cstr(link);
    if (strlen(link_str) != lean_string_size(link) - 1) {
        return mk_embedded_nul_error(link);
    }
    note_path_use("links", orig_str);
    note_path_create("creates", link_str, false);
    uv_fs_t req;
    int ret = uv_fs_link(NULL, &req, orig_str, link_str, NULL);
    uv_fs_req_cleanup(&req);
    if (ret < 0) {
        return io_result_mk_error(decode_uv_error(ret, orig));
    } else {
        return io_result_mk_ok(box(0));
    }
}

/* createTempFile : IO (Handle × FilePath) */
extern "C" LEAN_EXPORT obj_res lean_io_create_tempfile(lean_object * /* w */) {
    note_import_nondeterministic_read();
    char path[PATH_MAX];
    size_t base_len = PATH_MAX;
    int ret = uv_os_tmpdir(path, &base_len);
    if (ret < 0) {
        return io_result_mk_error(decode_uv_error(ret, nullptr));
    } else if (base_len == 0) {
        return lean_io_result_mk_error(decode_uv_error(UV_ENOENT, nullptr));
    }

#if defined(LEAN_WINDOWS)
    // On Windows `GetTempPathW` always returns a path ending in \, but libuv removes it.
    // https://learn.microsoft.com/en-us/windows/win32/fileio/creating-and-using-a-temporary-file
    if (path[base_len - 1] != '\\') {
        lean_always_assert(PATH_MAX >= base_len + 1 + 1);
        strcat(path, "\\");
    }
#else
    // No guarantee that we have a trailing / in TMPDIR.
    if (path[base_len - 1] != '/') {
        lean_always_assert(PATH_MAX >= base_len + 1 + 1);
        strcat(path, "/");
    }
#endif

    const char* file_pattern = "tmp.XXXXXXXX";
    const size_t file_pattern_size = strlen(file_pattern);
    lean_always_assert(PATH_MAX >= strlen(path) + file_pattern_size + 1);
    strcat(path, file_pattern);

    uv_fs_t req;
    // Differences from lean_io_create_tempdir start here
    ret = uv_fs_mkstemp(NULL, &req, path, NULL);
    if (ret < 0) {
        uv_fs_req_cleanup(&req);
        // If mkstemp throws an error we cannot rely on path to contain a proper file name.
        return io_result_mk_error(decode_uv_error(ret, nullptr));
    } else {
        FILE* handle = fdopen(req.result, "r+");
        note_path_created(req.path, false);
        object_ref pair = mk_cnstr(0, io_wrap_handle(handle), mk_string(req.path));
        uv_fs_req_cleanup(&req);
        return lean_io_result_mk_ok(pair.steal());
    }
}

/* createTempDir : IO FilePath */
extern "C" LEAN_EXPORT obj_res lean_io_create_tempdir(lean_object * /* w */) {
    note_import_nondeterministic_read();
    char path[PATH_MAX];
    size_t base_len = PATH_MAX;
    int ret = uv_os_tmpdir(path, &base_len);
    if (ret < 0) {
        return io_result_mk_error(decode_uv_error(ret, nullptr));
    } else if (base_len == 0) {
        return lean_io_result_mk_error(decode_uv_error(UV_ENOENT, nullptr));
    }

#if defined(LEAN_WINDOWS)
    // On Windows `GetTempPathW` always returns a path ending in \, but libuv removes it.
    // https://learn.microsoft.com/en-us/windows/win32/fileio/creating-and-using-a-temporary-file
    if (path[base_len - 1] != '\\') {
        lean_always_assert(PATH_MAX >= base_len + 1 + 1);
        strcat(path, "\\");
    }
#else
    // No guarantee that we have a trailing / in TMPDIR.
    if (path[base_len - 1] != '/') {
        lean_always_assert(PATH_MAX >= base_len + 1 + 1);
        strcat(path, "/");
    }
#endif

    const char* file_pattern = "tmp.XXXXXXXX";
    const size_t file_pattern_size = strlen(file_pattern);
    lean_always_assert(PATH_MAX >= strlen(path) + file_pattern_size + 1);
    strcat(path, file_pattern);

    uv_fs_t req;
    // Differences from lean_io_create_tempfile start here
    ret = uv_fs_mkdtemp(NULL, &req, path, NULL);
    if (ret < 0) {
        uv_fs_req_cleanup(&req);
        // If mkdtemp throws an error we cannot rely on path to contain a proper file name.
        return io_result_mk_error(decode_uv_error(ret, nullptr));
    } else {
        note_path_created(req.path, true);
        obj_res res = lean_io_result_mk_ok(mk_string(req.path));
        uv_fs_req_cleanup(&req);
        return res;
    }
}

extern "C" LEAN_EXPORT obj_res lean_io_remove_file(b_obj_arg filename) {
    const char* fname = string_cstr(filename);
    if (strlen(fname) != lean_string_size(filename) - 1) {
        return mk_embedded_nul_error(filename);
    }
    note_path_remove("removes", fname);
    uv_fs_t req;
    int ret = uv_fs_unlink(NULL, &req, fname, NULL);
    uv_fs_req_cleanup(&req);
    if (ret < 0) {
        return io_result_mk_error(decode_uv_error(ret, filename));
    } else {
        return io_result_mk_ok(box(0));
    }
}

static obj_res app_path_core() {
#if defined(LEAN_WINDOWS)
    HMODULE hModule = GetModuleHandle(NULL);
    char path[MAX_PATH];
    GetModuleFileName(hModule, path, MAX_PATH);
    std::string pathstr(path);
    // Hack for making sure disk is lower case
    // TODO(Leo): more robust solution
    if (pathstr.size() >= 2 && pathstr[1] == ':') {
        pathstr[0] = tolower(pathstr[0]);
    }
    return io_result_mk_ok(mk_string(pathstr));
#elif defined(__APPLE__)
    char buf1[PATH_MAX];
    char buf2[PATH_MAX];
    uint32_t bufsize = PATH_MAX;
    if (_NSGetExecutablePath(buf1, &bufsize) != 0)
        return io_result_mk_error("failed to locate application");
    if (!realpath(buf1, buf2))
        return io_result_mk_error("failed to resolve symbolic links when locating application");
    return io_result_mk_ok(mk_string(buf2));
#elif defined(LEAN_EMSCRIPTEN)
    // See https://emscripten.org/docs/api_reference/emscripten.h.html#c.EM_ASM_INT
    char* appPath = reinterpret_cast<char*>(EM_ASM_INT({
        if ((typeof process === "undefined") || (process.release.name !== "node")) {
            return 0;
        }

        var lengthBytes = lengthBytesUTF8(__filename)+1;
        var pathOnWasmHeap = _malloc(lengthBytes);
        stringToUTF8(__filename, pathOnWasmHeap, lengthBytes);
        return pathOnWasmHeap;
    }));
    if (appPath == nullptr) {
        return io_result_mk_error("no Lean executable file exists in WASM outside of Node.js");
    }

    object * appPathLean = mk_string(appPath);
    free(appPath);
    return io_result_mk_ok(appPathLean);
#else
    // Linux version
    char path[PATH_MAX];
    char dest[PATH_MAX];
    memset(dest, 0, PATH_MAX);
    pid_t pid = getpid();
    snprintf(path, PATH_MAX, "/proc/%d/exe", pid);
    if (readlink(path, dest, PATH_MAX - 1) == -1) {
        return io_result_mk_error("failed to locate application");
    } else {
        return io_result_mk_ok(mk_string(dest));
    }
#endif
}

extern "C" LEAN_EXPORT obj_res lean_io_app_path() {
    obj_res r = app_path_core();
    if (lean_io_result_is_ok(r)) note_value_read("appPath", lean_string_cstr(lean_io_result_get_value(r)));
    return r;
}

extern "C" LEAN_EXPORT obj_res lean_io_current_dir() {
    char buffer[PATH_MAX];
    char * cwd = getcwd(buffer, sizeof(buffer));
    note_value_read("workingDirectory", cwd);
    if (cwd) {
        return io_result_mk_ok(mk_string(cwd));
    } else {
        return io_result_mk_error("failed to retrieve current working directory");
    }
}

// =======================================
// ST ref primitives


/*
Effect notes. While on (`lean_io_set_effect_recording`), the runtime notes, per task context other than 0 (code outside
any command), each effect that context has on state outside it: a write to a reference another context created
(`m_context`), the resolution or cancellation of a task or promise another context created, the use of a mutable
native object (a SAT solver) another context created, and each use of process-wide state through the runtime's
primitives: a file or directory it did not create, a file handle it did not open (the standard streams among them;
writing the standard output or error is noted apart from their other uses), a file it created and left in place, the
working directory changed, a child process, the network, signals, a native library loaded, the process's other
settings (the runtime's maximum heartbeats and memory, exit on panic, thread stack size, debug tags, the event loop,
the process title and priority, the environment written), and host facts (the host name, the user and group database,
the network interfaces). A change of the working directory and a setting of the runtime's maximum heartbeats or memory,
thread stack size or exit on panic carry the value set; a write of an environment variable carries its name and the
value's hash (`hash_str` as `String.hash` computes it), so that no value reaches a record; a removal carries the name.
The import context (`import_context`) notes only the process-wide uses: what imported modules' initializers do inside
the process follows from the imported modules. A context keeps its first `max_effect_notes` distinct notes; the first
distinct note beyond them is appended as `has more effects than were noted`, which stands for it and every later one,
and later notes are dropped. The paths a context created and left in place are noted, sorted, when the notes are taken
(`lean_io_take_effects`).

Not effects: reads of the toolchain's own files (`in_pinned_dirs`), which the Lean githash pins, recorded as a read of
the value `toolchain` (the pinned directories' root), and for the same reason a run of the toolchain's own SAT solver on
files the context created (`note_process_spawn`); reads of values tied to this process or this moment (clocks, process,
thread and child process ids, resource usage, the system's memory and hardware threads, whether a handle is a
terminal), the command contexts and the import context that read one being recorded (`note_nondeterministic_read`);
values with the same range in every run (random bytes, the random generator's numbers (`IO.rand`), task states, which
task finished first, cancellation, heartbeat counts, temporary file names, and the scheduling of a task that runs IO
code), which the import context's reads of are recorded as of the others, since every command may hold what imported
modules' initializers computed (`note_import_nondeterministic_read`, all but heartbeat counts; a task that runs IO code
counts when the import context creates it, `lean_io_as_task`, `lean_io_map_task`, `lean_io_bind_task`);
and the runtime's debugging output (`dbg_trace`, `timeit`, `allocprof`).

Value reads: in every context, the first value of each environment variable, of the running executable's path and of
the working directory read, whether a later read saw another one, and the command and realization contexts that read
it, sorted (not 0 or the import context, whose reads are the module's alone) (`lean_io_take_value_reads`). A later
build compares them with its own (`Lean.ModuleUsage.keepPermit`).

Realizations: a realization runs its `realize` in a task context of its own (`lean_io_new_realization_context`), and
every context that requests it, the one that ran it and those that got the cached result, notes a use of it
(`lean_io_note_context_use`): what a realization's code did and read counts for each context that used it, directly or
through other realizations (`lean_io_context_closure`).
*/
static std::atomic<bool> g_effects_on(false);

struct context_effects {
    std::vector<std::string> notes;
    // paths the context created and did not remove; `dirs` are the directories among them
    std::unordered_set<std::string> created;
    std::unordered_set<std::string> dirs;
};
struct value_read {
    bool present;
    std::string value;
    // a later read saw another value
    bool changed;
    // the command and realization contexts that read it, sorted
    std::vector<uint32> contexts;
};
static mutex * g_effects_mutex = nullptr;
static std::unordered_map<uint32, context_effects> * g_effects = nullptr;
// the file handles opened while effects are noted, with the context that opened them
static std::unordered_map<FILE *, uint32> * g_handle_contexts = nullptr;
// the mutable native objects created while effects are noted, with the context that created them
static std::unordered_map<void const *, uint32> * g_object_contexts = nullptr;
static std::map<std::string, value_read> * g_value_reads = nullptr;
// per command or realization context, the keys of `g_value_reads` it read, each once (`lean_io_context_value_keys`)
static std::unordered_map<uint32, std::vector<std::string>> * g_context_value_keys = nullptr;
// the toolchain directories whose files the Lean githash pins, resolved, each ending in `/`, and their root as given
static std::vector<std::string> * g_pinned_dirs = nullptr;
static std::string * g_pinned_root = nullptr;
// the toolchain's own SAT solver, resolved; empty if it has none
static std::string * g_pinned_solver = nullptr;
static constexpr size_t max_effect_notes = 8;

uint32 effect_context() {
    return g_effects_on.load(std::memory_order_relaxed) ? get_task_context() : 0;
}

std::string describe_context(uint32 ctx) {
    return ctx == 0 ? std::string("no command")
        : ctx == import_context ? std::string("an imported module's initializer")
        : ctx >= realization_context_base ? std::string("a realization")
        : "command " + std::to_string(ctx - 1);
}

// the tasks that run code each command context, realization context and the import context created while effects are
// noted and that are not freed yet: queued, running or waiting for another task (`lean_io_live_tasks`)
static mutex * g_live_tasks_mutex = nullptr;
static std::unordered_map<uint32, int64_t> * g_live_tasks = nullptr;

bool note_task_created(uint32 ctx) {
    if (ctx == 0 || ctx == LEAN_REF_ACCOUNTED || !g_effects_on.load(std::memory_order_relaxed))
        return false;
    lock_guard<mutex> lock(*g_live_tasks_mutex);
    (*g_live_tasks)[ctx]++;
    return true;
}

void note_task_freed(uint32 ctx) {
    lock_guard<mutex> lock(*g_live_tasks_mutex);
    auto it = g_live_tasks->find(ctx);
    if (it != g_live_tasks->end() && --it->second <= 0) g_live_tasks->erase(it);
}

/* liveTasks (ctx : UInt32) : BaseIO UInt32: how many tasks that run code task context `ctx` (a command's, a
   realization's or the import context) created while effects were noted are not finished: while none is, code of the
   context cannot note an effect any more */
extern "C" LEAN_EXPORT uint32 lean_io_live_tasks(uint32 ctx) {
    lock_guard<mutex> lock(*g_live_tasks_mutex);
    auto it = g_live_tasks->find(ctx);
    return it == g_live_tasks->end() ? 0 : static_cast<uint32>(it->second);
}

// The realization contexts handed out so far (`lean_io_new_realization_context`).
static std::atomic<uint64> g_next_realization(0);
// This process's epoch, the upper half of every realization handle it hands out: a handle another process made (a
// realization cache loaded from a snapshot) names no context of this one.
static uint32 g_context_epoch = 1;
static mutex * g_context_uses_mutex = nullptr;
// per task context, the realization contexts its code used (`lean_io_note_context_use`)
static std::unordered_map<uint32, std::unordered_set<uint32>> * g_context_uses = nullptr;
// bumped whenever `g_context_uses` is cleared, invalidating each thread's last noted use
static std::atomic<uint32> g_context_uses_generation(0);
// the use the thread noted last, so that repeated requests of one realization skip the lock
static thread_local uint32 t_use_ctx = 0;
static thread_local uint32 t_use_realization = 0;
static thread_local uint32 t_use_gen = 0;

/* newRealizationContext : BaseIO UInt64: while effects are noted, the handle of a task context no context had before,
   for a realization's `realize` to run in: the epoch, then the context (from `realization_context_base`); else 0 */
extern "C" LEAN_EXPORT uint64 lean_io_new_realization_context() {
    if (!g_effects_on.load(std::memory_order_relaxed)) return 0;
    uint64 k = g_next_realization.fetch_add(1, std::memory_order_relaxed);
    if (k >= import_context - realization_context_base) return 0;
    return (static_cast<uint64>(g_context_epoch) << 32) | (realization_context_base + k);
}

/* realizationContextOf (r : UInt64) : BaseIO UInt32: the task context of the realization handle `r`
   (`lean_io_new_realization_context`), 0 for 0 or another process's handle */
extern "C" LEAN_EXPORT uint32 lean_io_realization_context_of(uint64 r) {
    return r != 0 && static_cast<uint32>(r >> 32) == g_context_epoch ? static_cast<uint32>(r) : 0;
}

/* noteRealizationUse (r : UInt64) : BaseIO Unit: while effects are noted, records that the running task context used
   the realization with handle `r` (`lean_io_new_realization_context`); nothing for 0, for another process's handle,
   or outside any context */
extern "C" LEAN_EXPORT obj_res lean_io_note_context_use(uint64 r) {
    if (r == 0 || !g_effects_on.load(std::memory_order_relaxed)) return box(0);
    if (static_cast<uint32>(r >> 32) != g_context_epoch) return box(0);
    uint32 realization = static_cast<uint32>(r);
    uint32 ctx = get_task_context();
    if (ctx == 0 || ctx == LEAN_REF_ACCOUNTED || ctx == realization) return box(0);
    uint32 gen = g_context_uses_generation.load(std::memory_order_acquire);
    if (ctx == t_use_ctx && realization == t_use_realization && gen == t_use_gen) return box(0);
    {
        lock_guard<mutex> lock(*g_context_uses_mutex);
        (*g_context_uses)[ctx].insert(realization);
    }
    t_use_ctx = ctx;
    t_use_realization = realization;
    t_use_gen = gen;
    return box(0);
}

/* contextClosure (c : UInt32) : BaseIO (Array UInt32): `c` and the realization contexts its code used, directly or
   through other realizations (`lean_io_note_context_use`), `c` first */
extern "C" LEAN_EXPORT obj_res lean_io_context_closure(uint32 c) {
    std::vector<uint32> out{c};
    {
        lock_guard<mutex> lock(*g_context_uses_mutex);
        std::unordered_set<uint32> seen{c};
        for (size_t i = 0; i < out.size(); i++) {
            auto it = g_context_uses->find(out[i]);
            if (it == g_context_uses->end()) continue;
            for (uint32 u : it->second)
                if (seen.insert(u).second) out.push_back(u);
        }
    }
    object * r = lean_alloc_array(0, out.size());
    for (uint32 u : out) r = lean_array_push(r, lean_box_uint32(u));
    return r;
}

// the command and realization contexts and the import context that read a nondeterministic source while effects were
// noted (`note_nondeterministic_read`)
static std::unordered_set<uint32> * g_nondet_contexts = nullptr;
// bumped whenever `g_nondet_contexts` is cleared, invalidating each thread's `t_nondet_ctx`
static std::atomic<uint32> g_nondet_generation(0);
// the context and generation for which the thread last recorded a read, so that repeated reads skip the lock
static thread_local uint32 t_nondet_ctx = 0;
static thread_local uint32 t_nondet_gen = 0;
// while set, the thread's nondeterministic reads are not recorded (`lean_io_set_nondeterministic_reads_unrecorded`)
static thread_local bool t_nondet_unrecorded = false;

void note_nondeterministic_read() {
    uint32 ctx = effect_context();
    if (ctx == 0 || ctx == LEAN_REF_ACCOUNTED || t_nondet_unrecorded) return;
    uint32 gen = g_nondet_generation.load(std::memory_order_acquire);
    if (ctx == t_nondet_ctx && gen == t_nondet_gen) return;
    {
        lock_guard<mutex> lock(*g_effects_mutex);
        g_nondet_contexts->insert(ctx);
    }
    t_nondet_ctx = ctx;
    t_nondet_gen = gen;
}

void note_import_nondeterministic_read() {
    if (effect_context() == import_context) note_nondeterministic_read();
}

/* noteRandomGeneratorUse : BaseIO Unit: the running code uses the random generator state `IO.stdGenRef`, seeded when
   the process starts, a value with the same range in every run (`note_import_nondeterministic_read`) */
extern "C" LEAN_EXPORT obj_res lean_io_note_random_generator_use() {
    note_import_nondeterministic_read();
    return box(0);
}

/* readNondeterministic (ctx : UInt32) : BaseIO Bool: whether code of task context `ctx` read a value tied to this process
   or this moment, or for the import context also a value with the same range in every run, since effect notes were
   switched on (`note_nondeterministic_read`, `note_import_nondeterministic_read`) */
extern "C" LEAN_EXPORT uint8 lean_io_read_nondeterministic(uint32 ctx) {
    lock_guard<mutex> lock(*g_effects_mutex);
    return g_nondet_contexts->count(ctx) != 0;
}

/* setNondeterministicReadsUnrecorded (b : Bool) : BaseIO Bool: sets whether the running thread's nondeterministic reads
   are not recorded; returns the previous setting */
extern "C" LEAN_EXPORT uint8 lean_io_set_nondeterministic_reads_unrecorded(uint8 b) {
    bool prev = t_nondet_unrecorded;
    t_nondet_unrecorded = b != 0;
    return prev;
}

// while set, the thread's value reads are not recorded (`lean_io_set_value_reads_unrecorded`)
static thread_local bool t_value_reads_unrecorded = false;

static void note_value_read_core(std::string const & key, char const * value, uint32 ctx) {
    if (t_value_reads_unrecorded) return;
    auto it = g_value_reads->find(key);
    if (it == g_value_reads->end()) {
        it = g_value_reads->emplace(key, value_read{value != nullptr, value ? value : "", false, {}}).first;
    } else if (it->second.present != (value != nullptr) || (value && it->second.value != value)) {
        it->second.changed = true;
    }
    if (ctx == 0 || ctx == import_context) return;
    std::vector<uint32> & cs = it->second.contexts;
    auto pos = std::lower_bound(cs.begin(), cs.end(), ctx);
    if (pos == cs.end() || *pos != ctx) {
        cs.insert(pos, ctx);
        (*g_context_value_keys)[ctx].push_back(key);
    }
}

void note_value_read(std::string const & key, char const * value) {
    if (!g_effects_on.load(std::memory_order_relaxed)) return;
    uint32 ctx = get_task_context();
    lock_guard<mutex> lock(*g_effects_mutex);
    note_value_read_core(key, value, ctx);
}

// Appended after a context's first `max_effect_notes` distinct notes in place of the next distinct one: stands for it and
// every later one, which are dropped.
static char const * const g_more_effects_note = "has more effects than were noted";

static void note_effect_core(context_effects & e, std::string const & what) {
    if (e.notes.size() > max_effect_notes || std::find(e.notes.begin(), e.notes.end(), what) != e.notes.end())
        return;
    if (e.notes.size() == max_effect_notes)
        e.notes.push_back(g_more_effects_note);
    else
        e.notes.push_back(what);
}

void note_effect(uint32 ctx, std::string const & what) {
    lock_guard<mutex> lock(*g_effects_mutex);
    note_effect_core((*g_effects)[ctx], what);
}

static bool path_exists(char const * p) {
    struct stat st;
    return stat(p, &st) == 0;
}

/* Whether `p` has a `.`, `..` or empty component, through which it can name a file outside the directory it starts
   with. */
static bool has_dot_component(std::string const & p) {
    size_t start = 0;
    while (start <= p.size()) {
        size_t end = p.find('/', start);
        if (end == std::string::npos) end = p.size();
        size_t len = end - start;
        if ((len == 0 && start != 0) || (len == 1 && p[start] == '.') ||
            (len == 2 && p[start] == '.' && p[start + 1] == '.'))
            return true;
        start = end + 1;
    }
    return false;
}

/* Whether `p` is a path `e`'s context created, or lies in a directory it created; never a path with a `.`, `..` or
   empty component, nor on Windows one with a backslash, which separates components there too. */
static bool created_by(context_effects const & e, std::string const & p) {
    if (has_dot_component(p)) return false;
#if defined(LEAN_WINDOWS)
    if (p.find('\\') != std::string::npos) return false;
#endif
    if (e.created.count(p)) return true;
    for (std::string const & d : e.dirs)
        if (p.size() > d.size() && p.compare(0, d.size(), d) == 0 && p[d.size()] == '/') return true;
    return false;
}

/* For the effect context, notes `what p` unless `p` lies in what it created. */
static void note_path_use(char const * what, char const * p) {
    uint32 ctx = effect_context();
    if (ctx == 0) return;
    lock_guard<mutex> lock(*g_effects_mutex);
    context_effects & e = (*g_effects)[ctx];
    if (!created_by(e, p)) note_effect_core(e, std::string(what) + " " + p);
}

/* Whether the absolute path `p`, with its symbolic links resolved (its parent's, if it does not exist), is one of the
   pinned directories or lies in one. A relative path is not: it resolves against the working directory. */
static bool in_pinned_dirs(char const * p, std::vector<std::string> const & dirs) {
#if defined(LEAN_WINDOWS)
    return false;
#else
    if (dirs.empty() || p[0] != '/') return false;
    char buf[PATH_MAX];
    std::string r;
    if (realpath(p, buf)) {
        r = buf;
    } else {
        if (errno != ENOENT) return false;
        std::string s(p);
        size_t slash = s.find_last_of('/');
        std::string name = s.substr(slash + 1);
        if (name.empty() || name == "." || name == "..") return false;
        if (!realpath(slash == 0 ? "/" : s.substr(0, slash).c_str(), buf)) return false;
        r = std::string(buf) + "/" + name;
    }
    r += '/';
    for (std::string const & d : dirs)
        if (r.compare(0, d.size(), d) == 0) return true;
    return false;
#endif
}

/* `p` with its symbolic links resolved, empty if it does not resolve. */
static std::string resolved_path(char const * p) {
#if defined(LEAN_WINDOWS)
    return std::string();
#else
    char buf[PATH_MAX];
    return realpath(p, buf) ? std::string(buf) : std::string();
#endif
}

/* The stamp of the file at `p` as `Lean.ModuleUsage.fileStamp` gives it (device, inode, size, modification and
   status-change times), its fields separated by `:`; empty if `p` cannot be examined or its status-change time lies
   less than two seconds in the past: as for `Lean.ModuleUsage.fileDigestStamped`, only a settled stamp changes with
   every later change of the file, on file systems whose timestamps are coarse. The toolchain's directories are trusted
   not to be replaced while a module compiles, as the running Lean's own files are. */
static std::string file_stamp_string(char const * p) {
#if defined(LEAN_WINDOWS)
    return std::string();
#else
    struct stat st;
    if (stat(p, &st) != 0) return std::string();
#if defined(__APPLE__)
    struct timespec const & mt = st.st_mtimespec;
    struct timespec const & ct = st.st_ctimespec;
#else
    struct timespec const & mt = st.st_mtim;
    struct timespec const & ct = st.st_ctim;
#endif
    struct timespec now;
    if (clock_gettime(CLOCK_REALTIME, &now) != 0 || ct.tv_sec + 2 >= now.tv_sec) return std::string();
    uint64_t s[7] = {static_cast<uint64_t>(st.st_dev), static_cast<uint64_t>(st.st_ino),
        static_cast<uint64_t>(st.st_size), static_cast<uint64_t>(mt.tv_sec), static_cast<uint64_t>(mt.tv_nsec),
        static_cast<uint64_t>(ct.tv_sec), static_cast<uint64_t>(ct.tv_nsec)};
    std::string r;
    for (unsigned i = 0; i < 7; i++) {
        if (i > 0) r += ':';
        r += std::to_string(s[i]);
    }
    return r;
#endif
}

std::string note_process_spawn(char const * cmd, std::vector<std::string> const * files) {
    uint32 ctx = effect_context();
    if (ctx == 0) return std::string();
    std::string solver;
    {
        lock_guard<mutex> lock(*g_effects_mutex);
        solver = *g_pinned_solver;
    }
    // the solver, with no environment and plain file names (`lean_io_process_spawn`), reads and writes only the files
    // named on its command line, so those must be the context's
    bool trusted = files && cmd[0] == '/' && !solver.empty() && resolved_path(cmd) == solver;
    // the Lean githash does not pin the solver's bytes (the build copies any `cadical` it finds): the value records
    // the stamp of the file this spawn runs, which `Lean.ModuleUsage.recordedValue?` binds its digest to
    std::string stamp = trusted ? file_stamp_string(solver.c_str()) : std::string();
    lock_guard<mutex> lock(*g_effects_mutex);
    context_effects & e = (*g_effects)[ctx];
    if (trusted && !stamp.empty())
        for (std::string const & f : *files)
            if (!created_by(e, f)) { trusted = false; break; }
    if (!trusted || stamp.empty()) {
        note_effect_core(e, std::string("spawns the process ") + cmd);
        return std::string();
    }
    note_value_read_core("toolchain", g_pinned_root->c_str(), ctx);
    note_value_read_core("solver", (solver + "\n" + stamp).c_str(), ctx);
    return solver;
}

void note_path_read(char const * p) {
    uint32 ctx = effect_context();
    if (ctx == 0) return;
    std::vector<std::string> dirs;
    {
        lock_guard<mutex> lock(*g_effects_mutex);
        if (created_by((*g_effects)[ctx], p)) return;
        dirs = *g_pinned_dirs;
    }
    bool pinned = in_pinned_dirs(p, dirs);
    lock_guard<mutex> lock(*g_effects_mutex);
    if (pinned)
        note_value_read_core("toolchain", g_pinned_root->c_str(), ctx);
    else
        note_effect_core((*g_effects)[ctx], std::string("reads ") + p);
}

/* For the effect context, about to create `p` (a file, or a directory if `dir`): records it as the context's if it does
   not exist yet or lies in what the context created, else notes `what p`. */
static void note_path_create(char const * what, char const * p, bool dir) {
    uint32 ctx = effect_context();
    if (ctx == 0) return;
    lock_guard<mutex> lock(*g_effects_mutex);
    context_effects & e = (*g_effects)[ctx];
    if (created_by(e, p) || !path_exists(p)) {
        e.created.insert(p);
        if (dir) e.dirs.insert(p);
    } else {
        note_effect_core(e, std::string(what) + " " + p);
    }
}

void note_path_write(char const * p) {
    note_path_create("writes", p, false);
}

/* For the effect context, about to remove `p`: forgets it if the context created it, else notes `what p`. */
static void note_path_remove(char const * what, char const * p) {
    uint32 ctx = effect_context();
    if (ctx == 0) return;
    lock_guard<mutex> lock(*g_effects_mutex);
    context_effects & e = (*g_effects)[ctx];
    if (created_by(e, p)) {
        e.created.erase(p);
        e.dirs.erase(p);
    } else {
        note_effect_core(e, std::string(what) + " " + p);
    }
}

/* For the effect context, about to use handle `fp`, only to write or flush it if `writes`: notes it unless the context
   opened it. Writing a standard output or error is noted apart from its other uses (reading, locking, truncating,
   rewinding it), whose results or effects a later command can depend on. */
static void note_handle_use(FILE * fp, bool writes) {
    uint32 ctx = effect_context();
    if (ctx == 0) return;
    lock_guard<mutex> lock(*g_effects_mutex);
    auto it = g_handle_contexts->find(fp);
    if (it != g_handle_contexts->end() && it->second == ctx) return;
    char const * what = fp == stdin ? "uses the standard input"
        : fp == stdout ? (writes ? "uses the standard output" : "uses the standard output other than by writing")
        : fp == stderr ? (writes ? "uses the standard error" : "uses the standard error other than by writing")
        : "uses a file handle another context opened";
    note_effect_core((*g_effects)[ctx], what);
}

/* For the effect context, records `p` (a directory if `dir`), which it just created, as its own. */
static void note_path_created(char const * p, bool dir) {
    uint32 ctx = effect_context();
    if (ctx == 0) return;
    lock_guard<mutex> lock(*g_effects_mutex);
    context_effects & e = (*g_effects)[ctx];
    e.created.insert(p);
    if (dir) e.dirs.insert(p);
}

/* Records that the effect context opened `fp`. */
static void note_handle_open(FILE * fp) {
    uint32 ctx = effect_context();
    if (ctx == 0) return;
    lock_guard<mutex> lock(*g_effects_mutex);
    (*g_handle_contexts)[fp] = ctx;
}

void note_object_created(void const * o) {
    uint32 ctx = effect_context();
    if (ctx == 0) return;
    lock_guard<mutex> lock(*g_effects_mutex);
    (*g_object_contexts)[o] = ctx;
}

// Bumped whenever an object is forgotten: a thread's last checked use (below) then no longer stands for its address.
static std::atomic<uint64_t> g_object_gen(0);
// The last object a thread's context used, checked: an object's many uses in a row take the mutex once.
static thread_local void const * t_checked_object = nullptr;
static thread_local uint32 t_checked_ctx = 0;
static thread_local uint64_t t_checked_gen = 0;

void note_object_use(void const * o, char const * what) {
    uint32 ctx = effect_context();
    if (ctx == 0) return;
    uint64_t gen = g_object_gen.load(std::memory_order_acquire);
    if (o == t_checked_object && ctx == t_checked_ctx && gen == t_checked_gen) return;
    {
        lock_guard<mutex> lock(*g_effects_mutex);
        auto it = g_object_contexts->find(o);
        if (it == g_object_contexts->end() || it->second != ctx) note_effect_core((*g_effects)[ctx], what);
    }
    t_checked_object = o;
    t_checked_ctx = ctx;
    t_checked_gen = gen;
}

void forget_object(void const * o) {
    if (!g_effects_mutex) return;
    lock_guard<mutex> lock(*g_effects_mutex);
    g_object_contexts->erase(o);
    g_object_gen.fetch_add(1, std::memory_order_acq_rel);
}

/* Forgets `fp`, which is being closed. */
static void forget_handle(FILE * fp) {
    if (!g_effects_mutex) return;
    lock_guard<mutex> lock(*g_effects_mutex);
    g_handle_contexts->erase(fp);
}

/* setEffectRecording (on : Bool) (pinned : @& Array String) (root solver : @& String) : BaseIO Unit; switching it on
   forgets earlier notes, value reads, nondeterministic reads and uses of realizations, and pins the directories
   `pinned` (`in_pinned_dirs`) and the SAT solver `solver` (`note_process_spawn`), recorded as `root` when used */
extern "C" LEAN_EXPORT obj_res lean_io_set_effect_recording(uint8 on, b_obj_arg pinned, b_obj_arg root,
                                                           b_obj_arg solver) {
    if (on) {
        std::vector<std::string> dirs;
#if !defined(LEAN_WINDOWS)
        for (size_t i = 0; i < lean_array_size(pinned); i++) {
            char buf[PATH_MAX];
            if (realpath(string_cstr(lean_array_get_core(pinned, i)), buf)) dirs.push_back(std::string(buf) + "/");
        }
#endif
        std::string s = resolved_path(string_cstr(solver));
        lock_guard<mutex> lock(*g_effects_mutex);
        g_effects->clear();
        g_value_reads->clear();
        g_context_value_keys->clear();
        g_nondet_contexts->clear();
        g_nondet_generation.fetch_add(1, std::memory_order_release);
        *g_pinned_dirs = std::move(dirs);
        *g_pinned_root = string_cstr(root);
        *g_pinned_solver = std::move(s);
        {
            lock_guard<mutex> uses_lock(*g_context_uses_mutex);
            g_context_uses->clear();
        }
        g_context_uses_generation.fetch_add(1, std::memory_order_release);
    }
    g_effects_on.store(on != 0);
    return box(0);
}

/* takeEffects : BaseIO (Array (UInt32 × String)): the notes since the last call, with each path a context created and
   did not remove */
extern "C" LEAN_EXPORT obj_res lean_io_take_effects() {
    std::unordered_map<uint32, context_effects> effects;
    {
        lock_guard<mutex> lock(*g_effects_mutex);
        effects.swap(*g_effects);
    }
    std::vector<std::pair<uint32, std::string>> notes;
    for (auto & [ctx, e] : effects) {
        std::vector<std::string> left(e.created.begin(), e.created.end());
        std::sort(left.begin(), left.end());
        for (std::string const & p : left) note_effect_core(e, "leaves " + p + ", which it created");
        for (std::string const & w : e.notes) notes.push_back(std::make_pair(ctx, w));
    }
    std::sort(notes.begin(), notes.end());
    object * r = lean_alloc_array(0, notes.size());
    for (auto const & [ctx, w] : notes) {
        object * p = lean_alloc_ctor(0, 2, 0);
        lean_ctor_set(p, 0, lean_box_uint32(ctx));
        lean_ctor_set(p, 1, mk_string(w));
        r = lean_array_push(r, p);
    }
    return r;
}

/* takeValueReads : BaseIO (Array (String × Option String × Bool × Array UInt32)): the value reads since recording was
   switched on, sorted by key, each with its first value, whether a later read saw another, and the command and
   realization contexts that read it, sorted; clears them */
extern "C" LEAN_EXPORT obj_res lean_io_take_value_reads() {
    std::map<std::string, value_read> reads;
    {
        lock_guard<mutex> lock(*g_effects_mutex);
        reads.swap(*g_value_reads);
        g_context_value_keys->clear();
    }
    object * r = lean_alloc_array(0, reads.size());
    for (auto const & [key, v] : reads) {
        object * cmds = lean_alloc_array(0, v.contexts.size());
        for (uint32 ctx : v.contexts) cmds = lean_array_push(cmds, lean_box_uint32(ctx));
        object * last = lean_alloc_ctor(0, 2, 0);
        lean_ctor_set(last, 0, lean_box(v.changed));
        lean_ctor_set(last, 1, cmds);
        object * rest = lean_alloc_ctor(0, 2, 0);
        lean_ctor_set(rest, 0, v.present ? mk_option_some(mk_string(v.value)) : mk_option_none());
        lean_ctor_set(rest, 1, last);
        object * p = lean_alloc_ctor(0, 2, 0);
        lean_ctor_set(p, 0, mk_string(key));
        lean_ctor_set(p, 1, rest);
        r = lean_array_push(r, p);
    }
    return r;
}

/* contextValueKeys (cs : @& Array UInt32) : BaseIO (Array String): the process values one of the contexts `cs` read
   since recording was switched on, sorted by key, without taking them (`lean_io_take_value_reads`) */
extern "C" LEAN_EXPORT obj_res lean_io_context_value_keys(b_obj_arg cs) {
    std::vector<std::string> keys;
    {
        lock_guard<mutex> lock(*g_effects_mutex);
        for (size_t i = 0; i < lean_array_size(cs); i++) {
            auto it = g_context_value_keys->find(lean_unbox_uint32(lean_array_get_core(cs, i)));
            if (it != g_context_value_keys->end()) keys.insert(keys.end(), it->second.begin(), it->second.end());
        }
    }
    std::sort(keys.begin(), keys.end());
    keys.erase(std::unique(keys.begin(), keys.end()), keys.end());
    object * r = lean_alloc_array(0, keys.size());
    for (std::string const & k : keys) r = lean_array_push(r, mk_string(k));
    return r;
}

/* setValueReadsUnrecorded (b : Bool) : BaseIO Bool: while `b`, the running thread's value reads are not recorded;
   returns the previous setting */
extern "C" LEAN_EXPORT uint8 lean_io_set_value_reads_unrecorded(uint8 b) {
    bool prev = t_value_reads_unrecorded;
    t_value_reads_unrecorded = b;
    return prev;
}

/* markRefAccounted (r : @& IO.Ref α) : BaseIO Unit: writes to `r` are noted for no context */
extern "C" LEAN_EXPORT obj_res lean_io_mark_ref_accounted(b_obj_arg ref) {
    lean_to_ref(ref)->m_context = LEAN_REF_ACCOUNTED;
    return box(0);
}

/* For the effect context, about to write `ref`: notes it unless the context created it or it is accounted. Writes of
   the import context are not noted (`import_context`). */
static inline void note_ref_write(b_obj_arg ref) {
    if (LEAN_LIKELY(!g_effects_on.load(std::memory_order_relaxed))) return;
    uint32 ctx = get_task_context();
    uint32 owner = lean_to_ref(ref)->m_context;
    if (ctx != 0 && ctx != import_context && owner != ctx && owner != LEAN_REF_ACCOUNTED)
        note_effect(ctx, "writes a reference " + describe_context(owner) + " created");
}

extern "C" LEAN_EXPORT obj_res lean_st_mk_ref(obj_arg a) {
    lean_ref_object * o = (lean_ref_object*)lean_alloc_small_object(sizeof(lean_ref_object));
    lean_set_st_header((lean_object*)o, LeanRef, 0);
    o->m_value = a;
    o->m_context = get_task_context();
    return (lean_object*)o;
}

static inline atomic<object*> * mt_ref_val_addr(object * o) {
    return reinterpret_cast<atomic<object*> *>(&(lean_to_ref(o)->m_value));
}

/*
  Important: we have added support for initializing global constants
  at program startup. This feature is particularly useful for
  initializing `ST.Ref` values. Any `ST.Ref` value created during
  initialization will be marked as persistent. Thus, to make `ST.Ref`
  API thread-safe, we must treat persistent `ST.Ref` objects created
  during initialization as a multi-threaded object. Then, whenever we store
  a value `val` into a global `ST.Ref`, we have to mark `va`l as a multi-threaded
  object as we do for multi-threaded `ST.Ref`s. It makes sense since
  the global `ST.Ref` may be used to communicate data between threads.
*/
static inline bool ref_maybe_mt(b_obj_arg ref) { return lean_is_mt(ref) || lean_is_persistent(ref); }

/*
A multi-threaded `ST.Ref` is "locked" while its slot holds `nullptr` (another thread took the value).
The waiters used to spin on `exchange` with no backoff: when the holder is preempted (a loaded machine
with more runnable threads than cores), every waiter burns its whole timeslice hammering the cache line,
and the holder gets the CPU back later rather than sooner. Spin briefly for the common nanosecond-length
hold, then yield the processor to whoever holds the value.
*/
static inline void ref_spin_backoff(unsigned & spins) {
    if (++spins > 32) {
        std::this_thread::yield();
    }
}

extern "C" LEAN_EXPORT obj_res lean_st_ref_get(b_obj_arg ref) {
    if (ref_maybe_mt(ref)) {
        atomic<object *> * val_addr = mt_ref_val_addr(ref);
        unsigned spins = 0;
        while (true) {
            /*
              We cannot simply read `val` from the ref and `inc` it like in the `else` branch since someone else could
              write to the ref in between and remove the last owning reference to the object. Instead, we must take
              ownership of the RC token in the ref via `exchange`, duplicate it, then put one RC token back. */
            object * val = val_addr->exchange(nullptr);
            if (val != nullptr) {
                inc(val);
                object * tmp = val_addr->exchange(val);
                lean_assert(tmp == nullptr);
                (void)tmp;
                return val;
            }
            ref_spin_backoff(spins);
        }
    } else {
        object * val = lean_to_ref(ref)->m_value;
        lean_assert(val != nullptr);
        inc(val);
        return val;
    }
}

extern "C" LEAN_EXPORT obj_res lean_st_ref_take(b_obj_arg ref) {
    note_ref_write(ref);
    if (ref_maybe_mt(ref)) {
        atomic<object *> * val_addr = mt_ref_val_addr(ref);
        unsigned spins = 0;
        while (true) {
            object * val = val_addr->exchange(nullptr);
            if (val != nullptr)
                return val;
            ref_spin_backoff(spins);
        }
    } else {
        object * val = lean_to_ref(ref)->m_value;
        lean_assert(val != nullptr);
        lean_to_ref(ref)->m_value = nullptr;
        return val;
    }
}

static_assert(sizeof(atomic<unsigned short>) == sizeof(unsigned short), "`atomic<unsigned short>` and `unsigned short` must have the same size"); // NOLINT

extern "C" LEAN_EXPORT obj_res lean_st_ref_put(b_obj_arg ref, obj_arg a) {
    note_ref_write(ref);
    if (ref_maybe_mt(ref)) {
        /* We must mark `a` as multi-threaded if `ref` is marked as multi-threaded.
           Reason: our runtime relies on the fact that a single-threaded object
           cannot be reached from a multi-thread object. */
        mark_mt(a);
        atomic<object *> * val_addr = mt_ref_val_addr(ref);
        object * old_a = val_addr->exchange(a);
        lean_assert(old_a == nullptr);
        (void)old_a;
        return box(0);
    } else {
        if (lean_to_ref(ref)->m_value != nullptr)
            dec(lean_to_ref(ref)->m_value);
        lean_to_ref(ref)->m_value = a;
        return box(0);
    }
}

extern "C" LEAN_EXPORT obj_res lean_st_ref_swap(b_obj_arg ref, obj_arg a) {
    note_ref_write(ref);
    if (ref_maybe_mt(ref)) {
        /* See io_ref_write */
        mark_mt(a);
        atomic<object *> * val_addr = mt_ref_val_addr(ref);
        unsigned spins = 0;
        while (true) {
            object * old_a = val_addr->load();
            if (old_a != nullptr && val_addr->compare_exchange_strong(old_a, a))
                return old_a;
            ref_spin_backoff(spins);
        }
    } else {
        object * old_a = lean_to_ref(ref)->m_value;
        if (old_a == nullptr)
            lean_internal_panic("null reference read");
        lean_to_ref(ref)->m_value = a;
        return old_a;
    }
}

extern "C" LEAN_EXPORT uint8_t lean_st_ref_ptr_eq(b_obj_arg ref1, b_obj_arg ref2) {
    return lean_to_ref(ref1) == lean_to_ref(ref2);
}

/* {α : Type} (act : BaseIO α) (_ : IO.RealWorld) : α */
static obj_res lean_io_as_task_fn(obj_arg act, obj_arg) {
    object_ref r(apply_1(act, io_mk_world()));
    return object_ref(r.raw(), true).steal();
}

/* asTask {α : Type} (act : BaseIO α) (prio : Nat) : BaseIO (Task α) */
extern "C" LEAN_EXPORT obj_res lean_io_as_task(obj_arg act, obj_arg prio) {
    note_import_nondeterministic_read();
    object * c = lean_alloc_closure((void*)lean_io_as_task_fn, 2, 1);
    lean_closure_set(c, 0, act);
    object * t = lean_task_spawn_core(c, lean_unbox(prio), /* keep_alive */ true);
    return t;
}

/* {α β : Type} (f : α → BaseIO β) (a : α) : β */
static obj_res lean_io_bind_task_fn(obj_arg f, obj_arg a) {
    object_ref r(apply_2(f, a, io_mk_world()));
    return object_ref(r.raw(), true).steal();
}

/*  mapTask (f : α → BaseIO β) (t : Task α) (prio : Nat) (sync : Bool) : BaseIO (Task β) */
extern "C" LEAN_EXPORT obj_res lean_io_map_task(obj_arg f, obj_arg t, obj_arg prio, uint8 sync) {
    note_import_nondeterministic_read();
    object * c = lean_alloc_closure((void*)lean_io_bind_task_fn, 2, 1);
    lean_closure_set(c, 0, f);
    object * t2 = lean_task_map_core(c, t, lean_unbox(prio), sync, /* keep_alive */ true);
    return t2;
}

/*  bindTask (t : Task α) (f : α → BaseIO (Task β)) (prio : Nat) (sync : Bool) : BaseIO (Task β) */
extern "C" LEAN_EXPORT obj_res lean_io_bind_task(obj_arg t, obj_arg f, obj_arg prio, uint8 sync) {
    note_import_nondeterministic_read();
    object * c = lean_alloc_closure((void*)lean_io_bind_task_fn, 2, 1);
    lean_closure_set(c, 0, f);
    object * t2 = lean_task_bind_core(t, c, lean_unbox(prio), sync, /* keep_alive */ true);
    return t2;
}

extern "C" LEAN_EXPORT uint8_t lean_io_check_canceled() {
    note_import_nondeterministic_read();
    return lean_io_check_canceled_core();
}

extern "C" LEAN_EXPORT obj_res lean_io_cancel(b_obj_arg t) {
    // cancelling a finished task does nothing
    uint32 ctx = effect_context();
    if (ctx != 0 && !lean_to_task(t)->m_value)
        note_task_owner(ctx, lean_to_task(t), "cancels a task");
    lean_io_cancel_core(t);
    return box(0);
}

extern "C" LEAN_EXPORT uint8_t lean_io_get_task_state(b_obj_arg t) {
    note_import_nondeterministic_read();
    return lean_io_get_task_state_core(t);
}

extern "C" LEAN_EXPORT obj_res lean_io_wait(obj_arg t) {
    return lean_task_get_own(t);
}

extern "C" LEAN_EXPORT obj_res lean_io_wait_any(b_obj_arg task_list) {
    note_import_nondeterministic_read();
    object * t = lean_io_wait_any_core(task_list);
    object * v = lean_task_get(t);
    lean_inc(v);
    return v;
}

extern "C" LEAN_EXPORT obj_res lean_io_exit(uint8_t code) {
    exit(code);
}

extern "C" LEAN_EXPORT obj_res lean_io_force_exit(uint8_t code) {
    std::_Exit((int)code);
}

extern "C" LEAN_EXPORT obj_res lean_runtime_mark_multi_threaded(obj_arg a) {
    lean_mark_mt(a);
    return a;
}

extern "C" LEAN_EXPORT obj_res lean_runtime_mark_persistent(obj_arg a) {
    lean_mark_persistent(a);
    return a;
}

#if defined(__has_feature)
#if __has_feature(address_sanitizer)
#include <sanitizer/lsan_interface.h>
#endif
#endif

extern "C" LEAN_EXPORT obj_res lean_runtime_forget(obj_arg o) {
#if defined(__has_feature)
#if __has_feature(address_sanitizer)
    __lsan_ignore_object(o);
#endif
#endif
    return box(0);
}

extern "C" LEAN_EXPORT obj_res lean_option_get_or_block(obj_arg o_opt) {
    option_ref<object_ref> opt = option_ref<object_ref>(o_opt);
    if (opt) {
        return opt.get_val().steal();
    } else {
        lean_panic("PANIC: Promise.result!: promise has been dropped without ever being resolved",
          /* force_stderr */ true);
        // this is only reachable when using non-fatal panics
        while (true) {
            this_thread::sleep_for(std::chrono::seconds::max());
        }
    }
}

void initialize_io() {
    g_io_handle_external_class = lean_register_external_class(io_handle_finalizer, io_handle_foreach);
#if defined(LEAN_WINDOWS)
    _setmode(_fileno(stdout), _O_BINARY);
    _setmode(_fileno(stderr), _O_BINARY);
    _setmode(_fileno(stdin), _O_BINARY);
#endif
    g_stream_stdout = lean_stream_of_handle(io_wrap_handle(stdout));
    mark_persistent(g_stream_stdout);
    g_stream_stderr = lean_stream_of_handle(io_wrap_handle(stderr));
    mark_persistent(g_stream_stderr);
    g_stream_stdin  = lean_stream_of_handle(io_wrap_handle(stdin));
    mark_persistent(g_stream_stdin);
    g_effects_mutex = new mutex();
    g_effects = new std::unordered_map<uint32, context_effects>();
    g_handle_contexts = new std::unordered_map<FILE *, uint32>();
    g_object_contexts = new std::unordered_map<void const *, uint32>();
    g_value_reads = new std::map<std::string, value_read>();
    g_context_value_keys = new std::unordered_map<uint32, std::vector<std::string>>();
    g_nondet_contexts = new std::unordered_set<uint32>();
    g_live_tasks_mutex = new mutex();
    g_live_tasks = new std::unordered_map<uint32, int64_t>();
    g_context_uses_mutex = new mutex();
    g_context_uses = new std::unordered_map<uint32, std::unordered_set<uint32>>();
    try {
        std::random_device rd;
        g_context_epoch = rd();
    } catch (...) {
        g_context_epoch = static_cast<uint32>(std::chrono::steady_clock::now().time_since_epoch().count());
    }
    if (g_context_epoch == 0) g_context_epoch = 1;
    g_pinned_dirs = new std::vector<std::string>();
    g_pinned_root = new std::string();
    g_pinned_solver = new std::string();
#if !defined(LEAN_WINDOWS) && !defined(LEAN_EMSCRIPTEN)
    // We want to handle SIGPIPE ourselves
    lean_always_assert(signal(SIGPIPE, SIG_IGN) != SIG_ERR);
#endif
}

void finalize_io() {
}
}
