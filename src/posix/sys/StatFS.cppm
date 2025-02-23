/**
 * @file StatFS.cppm
 * @brief Module file for Unix filesystem information retrieval operations.
 *
 * This file contains the implementation of the Unix filesystem information retrieval operations from the POSIX libraries.
 */

module;

#ifdef __unix__
#include <sys/statfs.h>
#endif

export module posix.sys.StatFS;

/**
 * @brief Wrapper namespace for Unix POSIX operations.
 */
export namespace Posix::System {
    #ifdef __unix__
    using ::statfs;
    using ::statfs64;
    using ::fstatfs;
    using ::fstatfs64;
    #endif
}
