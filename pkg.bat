@echo off

@REM Simple script to package for distribution.

setlocal ENABLEDELAYEDEXPANSION

set basename=ddd-win32
if %1. NEQ . (
  set basename=ddd-%1-win32
)

@REM Ensure optimized build
bip clean
bip build --opt

if %ERRORLEVEL% NEQ 0 (
  exit /b 1
)

@REM Move everything into a folder for zipping
if exist pkgdata ( rmdir /s/q pkgdata )
mkdir pkgdata
if exist pkg ( rmdir /s/q pkg )
mkdir pkg
copy bin\ddd.exe pkgdata\ddd.exe
copy LICENSE pkgdata\LICENSE.txt
copy README.md pkgdata\README.md

@REM Create a zip archive and 7z archive
cd pkgdata
7z a ..\pkg\%basename%.zip *
7z a ..\pkg\%basename%.7z *
cd ..

@REM Cleanup
rmdir /s/q pkgdata

exit /b 0
