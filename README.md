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

### Example
This is an example that lists all files in a directory with extension `.cpp`.
```cpp
import std;
import posix;

int main() {
    try {
        Posix::Glob_t globResult;
        int ret = Posix::glob("*.cpp", 0, nullptr, &globResult);
        if (ret != 0)
            throw std::runtime_error(std::format("glob() failed with return value {}", ret));

        for (size_t i = 0; i < globResult.gl_pathc; ++i)
            std::println("{}", globResult.gl_pathv[i]);

        Posix::globfree(&globResult);
    } catch (const std::exception& e) {
        std::println(stderr, "An error occurred: {}", e.what());
        Posix::globfree(&globResult);
        return 1;
    } catch (...) {
        std::println(stderr, "An unknown error occurred");
        Posix::globfree(&globResult);
        return -1;
    }
    return 0;
}
```

## TODO:
* Create C++-style classes for RAII
* (Potentially) include macros by using `constexpr`
