/*
A preload for the Linux part of cacheRelinkFails/test.sh: a rename from a path that ends in
`.relink` fails with ESTALE, as Linux overlayfs fails the rename of Lake's relink step. Every other
rename runs.
*/
#define _GNU_SOURCE
#include <dlfcn.h>
#include <errno.h>
#include <string.h>

int rename(const char *from, const char *to) {
  static const char suffix[] = ".relink";
  size_t n = strlen(from), k = sizeof suffix - 1;
  if (n >= k && strcmp(from + n - k, suffix) == 0) {
    errno = ESTALE;
    return -1;
  }
  return ((int (*)(const char *, const char *))dlsym(RTLD_NEXT, "rename"))(from, to);
}
