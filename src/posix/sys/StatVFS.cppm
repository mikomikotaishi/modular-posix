/**
 * @file StatVFS.cppm
 * @brief Module file for Unix filesystem information operations.
 *
 * This file contains the implementation of the Unix filesystem information operations from the POSIX libraries.
 */

module;

#ifdef __unix__
#include <sys/statvfs.h>
#endif

export module posix.sys.StatVFS;

/**
 * @brief Wrapper namespace for Unix POSIX operations.
 */
export namespace Posix::System {
    #ifdef __unix__
    using ::statvfs;
    using ::statvfs64;
    using ::fstatvfs;
    using ::fstatvfs64;
    #endif
}
