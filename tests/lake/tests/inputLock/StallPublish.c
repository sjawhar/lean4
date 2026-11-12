/* Stalls a Lake process at the point where it publishes the input-to-output mapping of a module,
   `outputs/<scope>/<inputHash>.json` in the Lake cache, after the module's artifacts are in the
   cache: each call that would create a path that contains `/outputs/` and ends in `.json` first
   creates the file named by `STALL_PUBLISH_MARKER` (holding that path), then sleeps for
   `STALL_PUBLISH_SECS` seconds (by default 600) and only then does the call. Without
   `STALL_PUBLISH_MARKER`, every call is passed through.

   At this source, Lake writes the mapping with `IO.FS.writeFile` (an `open` with
   `O_CREAT | O_TRUNC`) or `writeFileIfNew` (`.writeNew`, an `open` with `O_CREAT | O_EXCL`). In
   r19's Lake it writes it with `writeFileAtomic` (a temporary file renamed to the mapping) or
   `writeFileIfNew` (a temporary file hard-linked to the mapping). So `open`, `rename` and `link`
   are hooked. The temporary files end in `.tmp`, so only the call that creates the mapping itself
   stalls.
   The `*at`, `*64` and `renameat2` forms are hooked too, for a runtime or libc that routes
   through them.

   Build: cc -shared -fPIC -o stall-publish.so StallPublish.c -ldl */
#undef _FORTIFY_SOURCE
#define _GNU_SOURCE
#include <dlfcn.h>
#include <errno.h>
#include <fcntl.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <time.h>
#include <unistd.h>

typedef int (*open_fn)(const char *, int, ...);
typedef int (*openat_fn)(int, const char *, int, ...);
typedef int (*rename_fn)(const char *, const char *);
typedef int (*renameat_fn)(int, const char *, int, const char *);
typedef int (*renameat2_fn)(int, const char *, int, const char *, unsigned int);
typedef int (*link_fn)(const char *, const char *);
typedef int (*linkat_fn)(int, const char *, int, const char *, int);

static void *next(const char *name) {
  return dlsym(RTLD_NEXT, name);
}

static int is_mapping(const char *path) {
  size_t n;
  if (!path || !strstr(path, "/outputs/"))
    return 0;
  n = strlen(path);
  return n >= 5 && strcmp(path + n - 5, ".json") == 0;
}

/* Creates the marker and sleeps, if `path` is a mapping and a marker is named. */
static void stall(const char *path) {
  const char *marker = getenv("STALL_PUBLISH_MARKER");
  const char *secs_env = getenv("STALL_PUBLISH_SECS");
  struct timespec left;
  ssize_t written;
  int fd, saved_errno = errno;
  if (!marker || !is_mapping(path))
    return;
  fd = ((open_fn)next("open"))(marker, O_WRONLY | O_CREAT | O_TRUNC | O_CLOEXEC, 0644);
  if (fd >= 0) {
    written = write(fd, path, strlen(path));
    (void)written;
    close(fd);
  }
  left.tv_sec = secs_env ? strtol(secs_env, NULL, 10) : 600;
  left.tv_nsec = 0;
  /* A signal handler (the runtime's) may cut the sleep short; sleep out the rest */
  while (nanosleep(&left, &left) != 0 && errno == EINTR) {
  }
  errno = saved_errno;
}

static mode_t mode_arg(int flags, va_list ap) {
  if ((flags & O_CREAT) || (flags & O_TMPFILE) == O_TMPFILE)
    return (mode_t)va_arg(ap, int);
  return 0;
}

int open(const char *path, int flags, ...) {
  va_list ap;
  mode_t mode;
  va_start(ap, flags);
  mode = mode_arg(flags, ap);
  va_end(ap);
  if (flags & O_CREAT)
    stall(path);
  return ((open_fn)next("open"))(path, flags, mode);
}

int open64(const char *path, int flags, ...) {
  va_list ap;
  mode_t mode;
  va_start(ap, flags);
  mode = mode_arg(flags, ap);
  va_end(ap);
  if (flags & O_CREAT)
    stall(path);
  return ((open_fn)next("open64"))(path, flags, mode);
}

int openat(int dirfd, const char *path, int flags, ...) {
  va_list ap;
  mode_t mode;
  va_start(ap, flags);
  mode = mode_arg(flags, ap);
  va_end(ap);
  if (flags & O_CREAT)
    stall(path);
  return ((openat_fn)next("openat"))(dirfd, path, flags, mode);
}

int openat64(int dirfd, const char *path, int flags, ...) {
  va_list ap;
  mode_t mode;
  va_start(ap, flags);
  mode = mode_arg(flags, ap);
  va_end(ap);
  if (flags & O_CREAT)
    stall(path);
  return ((openat_fn)next("openat64"))(dirfd, path, flags, mode);
}

int rename(const char *oldpath, const char *newpath) {
  stall(newpath);
  return ((rename_fn)next("rename"))(oldpath, newpath);
}

int renameat(int olddirfd, const char *oldpath, int newdirfd, const char *newpath) {
  stall(newpath);
  return ((renameat_fn)next("renameat"))(olddirfd, oldpath, newdirfd, newpath);
}

int renameat2(int olddirfd, const char *oldpath, int newdirfd, const char *newpath,
              unsigned int flags) {
  stall(newpath);
  return ((renameat2_fn)next("renameat2"))(olddirfd, oldpath, newdirfd, newpath, flags);
}

int link(const char *oldpath, const char *newpath) {
  stall(newpath);
  return ((link_fn)next("link"))(oldpath, newpath);
}

int linkat(int olddirfd, const char *oldpath, int newdirfd, const char *newpath, int flags) {
  stall(newpath);
  return ((linkat_fn)next("linkat"))(olddirfd, oldpath, newdirfd, newpath, flags);
}
