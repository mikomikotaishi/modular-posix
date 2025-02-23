/**
 * @file FSUID.cppm
 * @brief Module file for Unix operations.
 *
 * This file contains the implementation of the Unix operations from the POSIX libraries.
 */

module;

#ifdef __unix__
#include <sys/fsuid.h>
#endif

export module posix.sys.FSUID;

/**
 * @brief Wrapper namespace for Unix POSIX operations.
 */
export namespace Posix::System {
    #ifdef __unix__
    using ::setfsuid;
    using ::setfsgid;

    #endif
}
