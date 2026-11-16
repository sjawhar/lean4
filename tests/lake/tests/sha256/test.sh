#!/usr/bin/env bash
source ../common.sh

./clean.sh

# Test Lake's SHA-256 (`Lake.sha256Bytes` and `Lake.sha256File`), which names the artifacts
# of a remote cache. The checker `sha256` (`Main.lean`) links Lake.

# Keep the artifact cache inside the test directory
TEST_DIR="$(cd -- "$(dirname -- "${BASH_SOURCE[0]}")" &> /dev/null && pwd)"
export LAKE_CACHE_DIR="$(norm_path "$TEST_DIR")/.lake/cache"

if command -v sha256sum > /dev/null; then
  SHA256SUM=(sha256sum)
else
  SHA256SUM=(shasum -a 256)
fi

# Build a small package: a library (with its static and shared forms) and the checker,
# with the artifact cache on
test_run build Hello Hello:static Hello:shared sha256
SHA256=./.lake/build/bin/sha256

# The SHA-256 example vectors of NIST FIPS 180-4
test_cmd "$SHA256" --vectors

# Files whose sizes straddle the 64-byte block, the length padding (55/56 bytes), and the
# 64 KiB reads of `sha256File`, cut from the checker's own bytes
mkdir -p .lake/sizes
for n in 0 1 55 56 63 64 65 119 120 127 128 \
    65535 65536 65537 131071 131072 131073 1000000; do
  head -c "$n" "$SHA256" > ".lake/sizes/$n.bin"
  test_exp "$(wc -c < ".lake/sizes/$n.bin")" -eq "$n"
done

# Every artifact of the built package (its build directory and its cache artifacts), plus the
# files above: `sha256File` and `sha256Bytes` agree with each other and with `sha256sum`
find .lake/build .lake/cache/artifacts .lake/sizes -type f | LC_ALL=C sort > produced.files
cat produced.files
for ext in olean ilean c o a so; do
  test_cmd grep -q "^\.lake/cache/artifacts/.*\.$ext\$" produced.files
done
files=()
while IFS= read -r file; do files+=("$file"); done < produced.files
echo "\$ sha256 --check (${#files[@]} files)"
"$SHA256" --check "${files[@]}" > produced.lake.out
echo "\$ ${SHA256SUM[*]} (${#files[@]} files)"
"${SHA256SUM[@]}" "${files[@]}" > produced.sha256sum.out
check_diff_core produced.sha256sum.out produced.lake.out

# The streaming form gives the same digests without reading a file whole
"$SHA256" "${files[@]}" > produced.stream.out
check_diff_core produced.sha256sum.out produced.stream.out
