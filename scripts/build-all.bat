@echo off
REM ------------------------------------------------------------
REM  coding-c - compile every program (Windows + MinGW gcc)
REM  usage: scripts\build-all.bat
REM ------------------------------------------------------------
setlocal enabledelayedexpansion
if not exist bin mkdir bin
set /a count=0
set /a failed=0

for %%D in (unit-1-basics unit-2-operators unit-3-control-flow) do (
    for %%F in (%%D\*.c) do (
        gcc -Wall -Wextra -std=c99 "%%F" -o "bin\%%D\%%~nF.exe"
        if !errorlevel! equ 0 (
            echo OK    %%F
            set /a count+=1
        ) else (
            echo FAIL  %%F
            set /a failed+=1
        )
    )
)

echo -----------------------------
echo compiled: !count!, failed: !failed!
endlocal
