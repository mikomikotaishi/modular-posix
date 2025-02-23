/**
 * @file DLFCn.cppm
 * @brief Module file for Unix dynamic linking operations.
 *
 * This file contains the implementation of the Unix dynamic linking operations from the POSIX libraries.
 */

module;

#ifdef __unix__
#include <dlfcn.h>
#endif

export module posix.DLFCn;

/**
 * @brief Wrapper namespace for Unix POSIX operations.
 */
export namespace Posix {
    #ifdef __unix__
    using ::dlopen;
    using ::dlclose;
    using ::dlsym;
    using ::dlmopen;
    using ::dlvsym;
    using ::dlerror;
    using ::dladdr;
    using ::dladdr1;
    using ::dlinfo;

    using DLFindObject = ::dl_find_object;
    #endif
}
