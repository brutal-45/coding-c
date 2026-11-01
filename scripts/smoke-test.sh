#!/usr/bin/env bash
# ------------------------------------------------------------
# coding-c — smoke test: run every compiled binary with a safe
# piped input and a timeout; fail if any program crashes or hangs.
# ------------------------------------------------------------
set -u
OUT="bin"
fail=0
pass=0

for exe in $(find "$OUT" -type f 2>/dev/null | sort); do
    # generic numeric input covers all interactive programs:
    # 6 30 -> valid calendar start day + month length,
    # 3 -> calculator choice, 0 -> exit menu, rest -> spare ints
    out=$(printf '6\n30\n3\n0\n6\n12\n9\n' | timeout 5 "$exe" 2>&1)
    rc=$?
    if [ $rc -eq 0 ]; then
        echo "PASS $(basename "$exe")"
        pass=$((pass + 1))
    elif [ $rc -eq 124 ]; then
        echo "TIMEOUT  $exe (possible infinite loop)"
        fail=$((fail + 1))
    else
        echo "FAIL($rc) $exe"
        echo "$out" | head -5
        fail=$((fail + 1))
    fi
done

echo "-----------------------------"
echo "smoke test: $pass passed, $fail failed"
exit $fail
