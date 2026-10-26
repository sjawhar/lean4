/* Pauses a Lake process at the filesystem operations of two races of the shared cache, so that
   `test.sh` can run the other process of the race in between. A pause creates the file named by
   `<X>_READY` and waits until the file named by `<X>_RELEASE` exists (at most 60 seconds).

   PROBE_ENTRY_READY, PROBE_ENTRY_RELEASE
     Pause before the first operation that takes a cache artifact away from its name: the
     `rename` of a file under `artifacts/` into `quarantine/` (what Lake does to capture an entry
     it found wrong), or the `unlink` of one that is not a temporary file (what Lake did before it
     captured by rename). A download's temporary file, and its rename onto its entry, do not pause.

   PROBE_MAPPING_READY, PROBE_MAPPING_RELEASE
     Pause after the first `open` that truncates an existing mapping in place: a `.json` file
     under `outputs/`, opened with `O_TRUNC` and without `O_EXCL` (a create-only write, which
     `O_EXCL` marks, and a temporary file, which is not a `.json`, never truncate a mapping).

   PROBE_MAPPING_RENAME
     Create this file when a `rename` puts a file under `outputs/` (a mapping published through a
     temporary file).

   Build: cc -shared -fPIC -o interpose.so Interpose.c -ldl */
#define _GNU_SOURCE
#include <dlfcn.h>
#include <fcntl.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <unistd.h>

static void touch(const char *path) {
  int fd = open(path, O_CREAT | O_WRONLY, 0600);
  if (fd >= 0) close(fd);
}

static void pause_once(const char *ready_var, const char *release_var, int *done) {
  const char *ready = getenv(ready_var), *release = getenv(release_var);
  if (*done || !ready || !release) return;
  *done = 1;
  touch(ready);
  for (int i = 0; i < 60000 && access(release, F_OK) != 0; i++) usleep(1000);
}

static int entry_paused, mapping_paused;

static int ends_with(const char *s, const char *suffix) {
  size_t n = strlen(s), m = strlen(suffix);
  return n >= m && strcmp(s + n - m, suffix) == 0;
}

int rename(const char *from, const char *to) {
  if (strstr(from, "/artifacts/") && strstr(to, "/quarantine/"))
    pause_once("PROBE_ENTRY_READY", "PROBE_ENTRY_RELEASE", &entry_paused);
  if (strstr(to, "/outputs/")) {
    const char *mark = getenv("PROBE_MAPPING_RENAME");
    if (mark) touch(mark);
  }
  return ((int (*)(const char *, const char *))dlsym(RTLD_NEXT, "rename"))(from, to);
}

/* `uv_fs_t` and `uv_loop_t` are only passed through, so they need no definition here. */
int uv_fs_unlink(void *loop, void *req, const char *path, void *cb) {
  if (strstr(path, "/artifacts/") && !ends_with(path, ".tmp"))
    pause_once("PROBE_ENTRY_READY", "PROBE_ENTRY_RELEASE", &entry_paused);
  return ((int (*)(void *, void *, const char *, void *))dlsym(RTLD_NEXT, "uv_fs_unlink"))(
      loop, req, path, cb);
}

static int open_flags(const char *path, int flags, int rc) {
  if (rc >= 0 && (flags & O_TRUNC) && !(flags & O_EXCL) && strstr(path, "/outputs/") &&
      ends_with(path, ".json"))
    pause_once("PROBE_MAPPING_READY", "PROBE_MAPPING_RELEASE", &mapping_paused);
  return rc;
}

int open(const char *path, int flags, ...) {
  va_list args;
  va_start(args, flags);
  mode_t mode = flags & O_CREAT ? va_arg(args, mode_t) : 0;
  va_end(args);
  int rc = ((int (*)(const char *, int, ...))dlsym(RTLD_NEXT, "open"))(path, flags, mode);
  return open_flags(path, flags, rc);
}

int open64(const char *path, int flags, ...) {
  va_list args;
  va_start(args, flags);
  mode_t mode = flags & O_CREAT ? va_arg(args, mode_t) : 0;
  va_end(args);
  int rc = ((int (*)(const char *, int, ...))dlsym(RTLD_NEXT, "open64"))(path, flags, mode);
  return open_flags(path, flags, rc);
}
