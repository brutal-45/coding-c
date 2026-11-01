#!/usr/bin/env bash
# ------------------------------------------------------------
# coding-c — compile every program in the unit folders
# (fallback for systems without `make`; on Windows use build-all.bat)
# ------------------------------------------------------------
set -u

CC="gcc"
CFLAGS="-Wall -Wextra -std=c99"
OUT="bin"
count=0
failed=0

for src in unit-1-basics/*.c unit-2-operators/*.c unit-3-control-flow/*.c; do
    [ -e "$src" ] || continue
    exe="$OUT/${src%.c}"
    mkdir -p "$(dirname "$exe")"
    if $CC $CFLAGS "$src" -o "$exe"; then
        echo "OK   $src"
        count=$((count + 1))
    else
        echo "FAIL $src"
        failed=$((failed + 1))
    fi
done

echo "-----------------------------"
echo "compiled: $count, failed: $failed"
exit "$failed"
