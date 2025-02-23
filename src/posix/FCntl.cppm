/**
 * @file FCntl.cppm
 * @brief Module file for Unix file control operations.
 *
 * This file contains the implementation of the Unix file control operations from the POSIX libraries.
 */

module;

#ifdef __unix__
#include <fcntl.h>
#endif

export module posix.FCntl;

/**
 * @brief Wrapper namespace for Unix POSIX operations.
 */
export namespace Posix {
    #ifdef __unix__
    using ::fcntl;
    using ::fcntl64;
    using ::open;
    using ::open64;
    using ::openat;
    using ::openat64;
    using ::creat;
    using ::creat64;
    using ::lockf;
    using ::lockf64;
    using ::posix_fadvise;
    using ::posix_fadvise64;
    using ::posix_fallocate;
    using ::posix_fallocate64;
    #endif
}
