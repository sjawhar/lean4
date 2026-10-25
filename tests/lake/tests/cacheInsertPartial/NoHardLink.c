#include <dlfcn.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <uv.h>

static void write_log(const char *path, const char *text) {
  int fd = open(path, O_WRONLY | O_CREAT | O_APPEND, 0600);
  if (fd >= 0) {
    write(fd, text, strlen(text));
    close(fd);
  }
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
