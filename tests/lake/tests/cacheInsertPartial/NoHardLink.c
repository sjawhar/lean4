#include <dlfcn.h>
#include <fcntl.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <uv.h>

static char tmp_path[4096];

static void write_log(const char *path, const char *text) {
  int fd = open(path, O_WRONLY | O_CREAT | O_APPEND, 0600);
  if (fd >= 0) {
    write(fd, text, strlen(text));
    close(fd);
  }
}

static void record_tmp_state(const char *path, int flags) {
  const char *target = getenv("LAKE_TEST_STAT_PATH");
  const char *log = getenv("LAKE_TEST_TMP_STATE_LOG");
  if (target != NULL && log != NULL && strcmp(path, target) == 0 && flags & O_EXCL)
    write_log(log, access(tmp_path, F_OK) == 0 ? "present\n" : "removed\n");
}

int open(const char *path, int flags, ...) {
  typedef int (*open_fn)(const char *, int, ...);
  open_fn real = (open_fn)dlsym(RTLD_NEXT, "open");
  va_list args;
  va_start(args, flags);
  mode_t mode = flags & O_CREAT ? va_arg(args, mode_t) : 0;
  va_end(args);
  record_tmp_state(path, flags);
  return real(path, flags, mode);
}

int open64(const char *path, int flags, ...) {
  typedef int (*open_fn)(const char *, int, ...);
  open_fn real = (open_fn)dlsym(RTLD_NEXT, "open64");
  va_list args;
  va_start(args, flags);
  mode_t mode = flags & O_CREAT ? va_arg(args, mode_t) : 0;
  va_end(args);
  record_tmp_state(path, flags);
  return real(path, flags, mode);
}

int uv_fs_stat(uv_loop_t *loop, uv_fs_t *req, const char *path, uv_fs_cb cb) {
  const char *target = getenv("LAKE_TEST_STAT_PATH");
  const char *barrier = getenv("LAKE_TEST_STAT_BARRIER");
  if (target == NULL || barrier == NULL || strcmp(path, target) != 0) {
    typedef int (*uv_fs_stat_fn)(uv_loop_t *, uv_fs_t *, const char *, uv_fs_cb);
    uv_fs_stat_fn real = (uv_fs_stat_fn)dlsym(RTLD_NEXT, "uv_fs_stat");
    return real(loop, req, path, cb);
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
  const char *log = getenv("LAKE_TEST_LINK_LOG");
  const char *target = getenv("LAKE_TEST_STAT_PATH");
  const char *barrier = getenv("LAKE_TEST_STAT_BARRIER");
  snprintf(tmp_path, sizeof(tmp_path), "%s", path);
  if (log != NULL)
    write_log(log, "1\n");
  if (target != NULL && barrier != NULL) {
    char first_path[4096], first[32];
    snprintf(first_path, sizeof(first_path), "%s/first", barrier);
    FILE *f = fopen(first_path, "r");
    if (f != NULL) {
      if (fgets(first, sizeof(first), f) != NULL && atol(first) != getpid())
        while (access(target, F_OK) != 0)
          usleep(1000);
      fclose(f);
    }
  }
  memset(req, 0, sizeof(*req));
  req->fs_type = UV_FS_LINK;
  req->result = UV_EPERM;
  return UV_EPERM;
}
