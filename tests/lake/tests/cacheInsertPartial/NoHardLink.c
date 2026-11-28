/*
A preload for the Linux part of cacheInsertPartial/test.sh:
- LAKE_TEST_FAIL_LINK=<prefix>: a hard link to a path that starts with <prefix> fails with EPERM, as
  on a file system that cannot hard-link. LAKE_TEST_LINK_LOG=<file>: each such link is logged there.
- LAKE_TEST_FINAL_PATH=<path>, LAKE_TEST_OPEN_LOG=<file>: an open that may create <path> is logged
  to <file>, and the process then writes at most 13 bytes into any file (SIGXFSZ ignored), so a
  write into <path> fails part way.
- LAKE_TEST_CREATE_PREFIX=<prefix>, LAKE_TEST_CREATE_LOG=<file>: an open that may create a path
  that starts with <prefix> is logged to <file>.
- LAKE_TEST_STAT_PATH=<path>, LAKE_TEST_STAT_BARRIER=<dir>: a `stat` of <path> creates <dir>/<pid>,
  waits until <dir>/release exists, and reports that <path> does not exist.
It replaces functions of the C library, which a process calls through the dynamic linker, and not
libuv's: a release links libuv into libleanshared.so with -Bsymbolic, so the runtime's calls of
`uv_fs_link` and `uv_fs_stat` bind inside that library, where no preload can replace them.
- Hard links: Lean's `IO.FS.hardLink` calls libuv's synchronous `uv_fs_link`, which calls the C
  library's `link`, which this preload replaces. (A call of `linkat`, or libuv's asynchronous
  io_uring link, would not reach it; nothing this test runs makes one.)
- `stat`: libuv's `uv_fs_stat` calls `syscall(SYS_statx, ...)`. Where that fails with ENOSYS or
  EPERM (an old kernel, a seccomp filter), or libuv was built with another statx number, libuv
  calls the C library's `stat` instead: in a program built against glibc before 2.33 that is
  `__xstat64` (or `__xstat`), and from 2.33 `stat` (or `stat64`). The barrier holds a `stat` of its
  path in `syscall` for statx and in each of these entry points, and in `fstatat`, `fstatat64`,
  `__fxstatat`, `__fxstatat64` and the C library's own `statx`.
This file declares those entry points itself, with `void *` for the buffers it passes on untouched,
and does not include <sys/stat.h>, whose declarations differ between glibc versions.
*/
#define _GNU_SOURCE
#include <dlfcn.h>
#include <errno.h>
#include <fcntl.h>
#include <signal.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/resource.h>
#include <sys/syscall.h>
#include <unistd.h>

/* The statx system call's number, which libuv's `uv__statx` passes to `syscall`, and the glibc
   symbol versions of the pre-2.33 `stat` entry points (`__xstat`, `__xstat64`; `__fxstatat`,
   `__fxstatat64`), which glibc keeps from 2.33 under these versions only. */
#if defined(__x86_64__)
#define NHL_SYS_STATX 332
#define NHL_GLIBC_XSTAT "GLIBC_2.2.5"
#define NHL_GLIBC_FXSTATAT "GLIBC_2.4"
#elif defined(__aarch64__)
#define NHL_SYS_STATX 291
#define NHL_GLIBC_XSTAT "GLIBC_2.17"
#define NHL_GLIBC_FXSTATAT "GLIBC_2.17"
#else
#error "NoHardLink.c replaces syscall(2) on x86-64 and aarch64 Linux only"
#endif
#ifdef SYS_statx
_Static_assert(SYS_statx == NHL_SYS_STATX, "SYS_statx is not NHL_SYS_STATX");
#endif

static int env_is(const char *name, const char *path) {
  const char *value = getenv(name);
  return value != NULL && *value != '\0' && strcmp(value, path) == 0;
}

static int env_prefixes(const char *name, const char *path) {
  const char *value = getenv(name);
  return value != NULL && *value != '\0' && strncmp(value, path, strlen(value)) == 0;
}

static void log_line(const char *name, const char *line) {
  const char *log = getenv(name);
  if (log == NULL)
    return;
  int fd = ((int (*)(const char *, int, ...))dlsym(RTLD_NEXT, "open"))(
    log, O_WRONLY | O_CREAT | O_APPEND, 0600);
  if (fd >= 0) {
    // a failed write leaves the line missing from the log, which the test reads
    ssize_t n = write(fd, line, strlen(line));
    if (n >= 0)
      n = write(fd, "\n", 1);
    close(fd);
  }
}

static void after_open(const char *path, int flags, int fd) {
  if (fd < 0 || !(flags & O_CREAT))
    return;
  if (env_prefixes("LAKE_TEST_CREATE_PREFIX", path))
    log_line("LAKE_TEST_CREATE_LOG", path);
  if (!env_is("LAKE_TEST_FINAL_PATH", path))
    return;
  log_line("LAKE_TEST_OPEN_LOG", path);
  signal(SIGXFSZ, SIG_IGN);
  struct rlimit limit;
  getrlimit(RLIMIT_FSIZE, &limit);
  limit.rlim_cur = 13;
  setrlimit(RLIMIT_FSIZE, &limit);
}

int open(const char *path, int flags, ...) {
  va_list args;
  va_start(args, flags);
  mode_t mode = flags & O_CREAT ? va_arg(args, mode_t) : 0;
  va_end(args);
  int fd = ((int (*)(const char *, int, ...))dlsym(RTLD_NEXT, "open"))(path, flags, mode);
  after_open(path, flags, fd);
  return fd;
}

int open64(const char *path, int flags, ...) {
  va_list args;
  va_start(args, flags);
  mode_t mode = flags & O_CREAT ? va_arg(args, mode_t) : 0;
  va_end(args);
  int fd = ((int (*)(const char *, int, ...))dlsym(RTLD_NEXT, "open64"))(path, flags, mode);
  after_open(path, flags, fd);
  return fd;
}

/* Whether a `stat` of `path` (relative to the directory `dirfd`) is held by LAKE_TEST_STAT_BARRIER:
   then it has waited until the barrier's release, and the caller reports that `path` does not
   exist. Only a path relative to the working directory (AT_FDCWD) is held, as the test names it. */
static int stat_held(int dirfd, const char *path) {
  const char *barrier = getenv("LAKE_TEST_STAT_BARRIER");
  if (barrier == NULL || dirfd != AT_FDCWD || path == NULL || !env_is("LAKE_TEST_STAT_PATH", path))
    return 0;
  char marker[4096], release[4096];
  snprintf(marker, sizeof(marker), "%s/%ld", barrier, (long)getpid());
  snprintf(release, sizeof(release), "%s/release", barrier);
  int fd = open(marker, O_WRONLY | O_CREAT | O_EXCL, 0600);
  if (fd >= 0)
    close(fd);
  while (access(release, F_OK) != 0)
    usleep(1000);
  return 1;
}

static int not_found(void) {
  errno = ENOENT;
  return -1;
}

/* The C library's definition of `name` that this preload replaces (of symbol version `version`, if
   not NULL), or NULL with errno ENOSYS if it has none. */
static void *next(const char *name, const char *version) {
  void *f = version != NULL ? dlvsym(RTLD_NEXT, name, version) : dlsym(RTLD_NEXT, name);
  if (f == NULL)
    errno = ENOSYS;
  return f;
}

typedef int (*stat_fn)(const char *, void *);
typedef int (*fstatat_fn)(int, const char *, void *, int);
typedef int (*statx_fn)(int, const char *, int, unsigned int, void *);
typedef int (*xstat_fn)(int, const char *, void *);
typedef int (*fxstatat_fn)(int, int, const char *, void *, int);

/* The `stat` family of glibc 2.33 and later, and the C library's `statx` (glibc 2.28). */
int stat(const char *path, void *buf) {
  if (stat_held(AT_FDCWD, path))
    return not_found();
  stat_fn f = (stat_fn)next("stat", NULL);
  return f != NULL ? f(path, buf) : -1;
}

int stat64(const char *path, void *buf) {
  if (stat_held(AT_FDCWD, path))
    return not_found();
  stat_fn f = (stat_fn)next("stat64", NULL);
  return f != NULL ? f(path, buf) : -1;
}

int fstatat(int dirfd, const char *path, void *buf, int flags) {
  if (stat_held(dirfd, path))
    return not_found();
  fstatat_fn f = (fstatat_fn)next("fstatat", NULL);
  return f != NULL ? f(dirfd, path, buf, flags) : -1;
}

int fstatat64(int dirfd, const char *path, void *buf, int flags) {
  if (stat_held(dirfd, path))
    return not_found();
  fstatat_fn f = (fstatat_fn)next("fstatat64", NULL);
  return f != NULL ? f(dirfd, path, buf, flags) : -1;
}

int statx(int dirfd, const char *path, int flags, unsigned int mask, void *buf) {
  if (stat_held(dirfd, path))
    return not_found();
  statx_fn f = (statx_fn)next("statx", NULL);
  return f != NULL ? f(dirfd, path, flags, mask, buf) : -1;
}

/* The entry points that `stat` and `fstatat` compile to against glibc before 2.33, found by their
   symbol version: from 2.33 glibc keeps them only under it, and `dlsym` does not return them. */
int __xstat(int ver, const char *path, void *buf) {
  if (stat_held(AT_FDCWD, path))
    return not_found();
  xstat_fn f = (xstat_fn)next("__xstat", NHL_GLIBC_XSTAT);
  return f != NULL ? f(ver, path, buf) : -1;
}

int __xstat64(int ver, const char *path, void *buf) {
  if (stat_held(AT_FDCWD, path))
    return not_found();
  xstat_fn f = (xstat_fn)next("__xstat64", NHL_GLIBC_XSTAT);
  return f != NULL ? f(ver, path, buf) : -1;
}

int __fxstatat(int ver, int dirfd, const char *path, void *buf, int flags) {
  if (stat_held(dirfd, path))
    return not_found();
  fxstatat_fn f = (fxstatat_fn)next("__fxstatat", NHL_GLIBC_FXSTATAT);
  return f != NULL ? f(ver, dirfd, path, buf, flags) : -1;
}

int __fxstatat64(int ver, int dirfd, const char *path, void *buf, int flags) {
  if (stat_held(dirfd, path))
    return not_found();
  fxstatat_fn f = (fxstatat_fn)next("__fxstatat64", NHL_GLIBC_FXSTATAT);
  return f != NULL ? f(ver, dirfd, path, buf, flags) : -1;
}

/*
`syscall(long number, ...)` is variadic, and this preload replaces it for every caller of the
process (libuv itself calls it with three arguments after the number for getrandom, and with five
for statx). Only `number` tells how many arguments follow and of which types, so `syscall`
here reads none of them: it is a few instructions (below) that leave the argument registers and the
stack as the caller set them, and
- for SYS_statx, jump to `nhl_statx_from_syscall`, whose parameters are the five arguments of
  libuv's `uv__statx`, with their types;
- for any other number, jump to the C library's `syscall`, which gets exactly what the caller passed.
Both jumps follow the processor's calling convention: on x86-64 (System V) and on aarch64 Linux
(AAPCS64), a variadic call passes its integer and pointer arguments in the same registers, in the
same order, as a call of a function prototyped with those parameter types, and a jump leaves the
caller's return address for the target. A constructor of another library can call `syscall` before
this preload's constructors would run, so the C library's `syscall` is looked up at the first call:
the instructions save the argument registers, call `nhl_resolve_syscall`, and restore them.
*/
typedef long (*syscall_fn)(long, ...);

/* The C library's `syscall` once looked up; the instructions below read it. */
__attribute__((visibility("hidden"))) syscall_fn nhl_real_syscall;

__attribute__((visibility("hidden"))) syscall_fn nhl_resolve_syscall(void) {
  syscall_fn f = (syscall_fn)dlsym(RTLD_NEXT, "syscall");
  __atomic_store_n(&nhl_real_syscall, f, __ATOMIC_RELEASE);
  return f;
}

/* `syscall(SYS_statx, dirfd, path, flags, mask, buf)`, as libuv's `uv__statx` calls it */
__attribute__((visibility("hidden"))) long nhl_statx_from_syscall(long number, int dirfd,
    const char *path, int flags, unsigned int mask, void *buf) {
  if (stat_held(dirfd, path))
    return not_found();
  syscall_fn real = __atomic_load_n(&nhl_real_syscall, __ATOMIC_ACQUIRE);
  if (real == NULL)
    real = nhl_resolve_syscall();
  return real(number, dirfd, path, flags, mask, buf);
}

#define NHL_STR2(x) #x
#define NHL_STR(x) NHL_STR2(x)
#if defined(__x86_64__)
__asm__(
  "  .pushsection .text\n"
  "  .globl syscall\n"
  "  .type syscall, @function\n"
  "  .p2align 4\n"
  "syscall:\n"
  "  .byte 0xf3, 0x0f, 0x1e, 0xfa\n" /* endbr64 */
  "  cmpq $" NHL_STR(NHL_SYS_STATX) ", %rdi\n"
  "  je nhl_statx_from_syscall\n"
  "  movq nhl_real_syscall(%rip), %r11\n"
  "  testq %r11, %r11\n"
  "  jz 1f\n"
  "  jmp *%r11\n"
  "1:\n"
  /* the arguments are in rdi, rsi, rdx, rcx, r8 and r9, and the sixth after the number on the stack,
     above the return address; 6 pushes and 8 bytes align the stack to 16 bytes for the call */
  "  pushq %rdi\n"
  "  pushq %rsi\n"
  "  pushq %rdx\n"
  "  pushq %rcx\n"
  "  pushq %r8\n"
  "  pushq %r9\n"
  "  subq $8, %rsp\n"
  "  call nhl_resolve_syscall\n"
  "  addq $8, %rsp\n"
  "  popq %r9\n"
  "  popq %r8\n"
  "  popq %rcx\n"
  "  popq %rdx\n"
  "  popq %rsi\n"
  "  popq %rdi\n"
  "  jmp *%rax\n"
  "  .size syscall, .-syscall\n"
  "  .popsection\n");
#elif defined(__aarch64__)
__asm__(
  "  .pushsection .text\n"
  "  .globl syscall\n"
  "  .type syscall, %function\n"
  "  .p2align 2\n"
  "syscall:\n"
  "  hint #34\n" /* bti c */
  "  cmp x0, #" NHL_STR(NHL_SYS_STATX) "\n"
  "  b.eq nhl_statx_from_syscall\n"
  "  adrp x16, nhl_real_syscall\n"
  "  ldr x16, [x16, :lo12:nhl_real_syscall]\n"
  "  cbz x16, 1f\n"
  "  br x16\n"
  "1:\n"
  /* the arguments are in x0 to x6 */
  "  stp x29, x30, [sp, #-80]!\n"
  "  mov x29, sp\n"
  "  stp x0, x1, [sp, #16]\n"
  "  stp x2, x3, [sp, #32]\n"
  "  stp x4, x5, [sp, #48]\n"
  "  str x6, [sp, #64]\n"
  "  bl nhl_resolve_syscall\n"
  "  mov x16, x0\n"
  "  ldp x0, x1, [sp, #16]\n"
  "  ldp x2, x3, [sp, #32]\n"
  "  ldp x4, x5, [sp, #48]\n"
  "  ldr x6, [sp, #64]\n"
  "  ldp x29, x30, [sp], #80\n"
  "  br x16\n"
  "  .size syscall, .-syscall\n"
  "  .popsection\n");
#endif

int link(const char *path, const char *new_path) {
  if (!env_prefixes("LAKE_TEST_FAIL_LINK", new_path))
    return ((int (*)(const char *, const char *))dlsym(RTLD_NEXT, "link"))(path, new_path);
  log_line("LAKE_TEST_LINK_LOG", new_path);
  errno = EPERM;
  return -1;
}
