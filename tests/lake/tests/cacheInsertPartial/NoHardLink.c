/*
A preload for the Linux part of cacheInsertPartial/test.sh:
- LAKE_TEST_FAIL_LINK=<path>: a hard link to <path> fails with EPERM, as on a file system that
  cannot hard-link.
- LAKE_TEST_FINAL_PATH=<path>, LAKE_TEST_OPEN_LOG=<file>: an open that may create <path> is logged
  to <file>, and the process then writes at most 13 bytes into any file (SIGXFSZ ignored), so a
  write into <path> fails part way.
- LAKE_TEST_STAT_PATH=<path>, LAKE_TEST_STAT_BARRIER=<dir>: a `stat` of <path> creates <dir>/<pid>,
  waits until <dir>/release exists, and reports that <path> does not exist.
*/
#define _GNU_SOURCE
#include <dlfcn.h>
#include <fcntl.h>
#include <signal.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/resource.h>
#include <unistd.h>
#include <uv.h>

static int env_is(const char *name, const char *path) {
  const char *value = getenv(name);
  return value != NULL && *value != '\0' && strcmp(value, path) == 0;
}

static void after_open(const char *path, int flags, int fd) {
  if (fd < 0 || !(flags & O_CREAT) || !env_is("LAKE_TEST_FINAL_PATH", path))
    return;
  const char *log = getenv("LAKE_TEST_OPEN_LOG");
  if (log != NULL) {
    int lfd = ((int (*)(const char *, int, ...))dlsym(RTLD_NEXT, "open"))(
      log, O_WRONLY | O_CREAT | O_APPEND, 0600);
    if (lfd >= 0) {
      write(lfd, path, strlen(path));
      write(lfd, "\n", 1);
      close(lfd);
    }
  }
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

int uv_fs_stat(uv_loop_t *loop, uv_fs_t *req, const char *path, uv_fs_cb cb) {
  const char *barrier = getenv("LAKE_TEST_STAT_BARRIER");
  if (barrier == NULL || !env_is("LAKE_TEST_STAT_PATH", path)) {
    typedef int (*uv_fs_stat_fn)(uv_loop_t *, uv_fs_t *, const char *, uv_fs_cb);
    return ((uv_fs_stat_fn)dlsym(RTLD_NEXT, "uv_fs_stat"))(loop, req, path, cb);
  }
  char marker[4096], release[4096];
  snprintf(marker, sizeof(marker), "%s/%ld", barrier, (long)getpid());
  snprintf(release, sizeof(release), "%s/release", barrier);
  int fd = open(marker, O_WRONLY | O_CREAT | O_EXCL, 0600);
  if (fd >= 0)
    close(fd);
  while (access(release, F_OK) != 0)
    usleep(1000);
  memset(req, 0, sizeof(*req));
  req->fs_type = UV_FS_STAT;
  req->result = UV_ENOENT;
  return UV_ENOENT;
}

int uv_fs_link(uv_loop_t *loop, uv_fs_t *req, const char *path, const char *new_path, uv_fs_cb cb) {
  if (!env_is("LAKE_TEST_FAIL_LINK", new_path)) {
    typedef int (*uv_fs_link_fn)(uv_loop_t *, uv_fs_t *, const char *, const char *, uv_fs_cb);
    return ((uv_fs_link_fn)dlsym(RTLD_NEXT, "uv_fs_link"))(loop, req, path, new_path, cb);
  }
  memset(req, 0, sizeof(*req));
  req->fs_type = UV_FS_LINK;
  req->result = UV_EPERM;
  return UV_EPERM;
}
