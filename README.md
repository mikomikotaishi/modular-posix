# openJuice

## Overview:
A modular C++ wrapper for the POSIX C library functions. Macros not included currently.

[![GPLv3](https://img.shields.io/badge/license-GPLv3-green)](#)

## Build:
Requires C++23, and a build system such as CMake (minimum version 3.28) or XMake. 

### CMake
Any way of calling CMake is fine, for example `cmake -S . -G Ninja -B build` to call Ninja to generate build files and `cmake --build build` to build.

### XMake
`xmake project -k compile_commands` to generate `compile_commands.json` (if using Clang).

`xmake` to build.

## Usage:
Import the library with `import posix;`.

## TODO:
* (Potentially) include macros by using `constexpr`
