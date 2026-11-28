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
`uv_fs_link` and `uv_fs_stat` bind inside that library, where no preload can replace them. libuv
makes a hard link with `link`, and a `stat` with the `statx` system call through `syscall`.
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
    write(fd, line, strlen(line));
    write(fd, "\n", 1);
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

/* Whether a `stat` of `path` is held by LAKE_TEST_STAT_BARRIER: then it has waited until the
   barrier's release, and the caller reports that `path` does not exist. */
static int stat_held(const char *path) {
  const char *barrier = getenv("LAKE_TEST_STAT_BARRIER");
  if (barrier == NULL || path == NULL || !env_is("LAKE_TEST_STAT_PATH", path))
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

/* libuv's `stat` is `syscall(SYS_statx, dirfd, path, flags, mask, buf)`. Every other call passes
   on its six possible arguments, as the C library's `syscall` itself reads them. */
long syscall(long number, ...) {
  va_list args;
  va_start(args, number);
  long arg[6];
  for (int i = 0; i < 6; i++)
    arg[i] = va_arg(args, long);
  va_end(args);
#ifdef SYS_statx
  if (number == SYS_statx && stat_held((const char *)arg[1])) {
    errno = ENOENT;
    return -1;
  }
#endif
  return ((long (*)(long, ...))dlsym(RTLD_NEXT, "syscall"))(
    number, arg[0], arg[1], arg[2], arg[3], arg[4], arg[5]);
}

int link(const char *path, const char *new_path) {
  if (!env_prefixes("LAKE_TEST_FAIL_LINK", new_path))
    return ((int (*)(const char *, const char *))dlsym(RTLD_NEXT, "link"))(path, new_path);
  log_line("LAKE_TEST_LINK_LOG", new_path);
  errno = EPERM;
  return -1;
}
