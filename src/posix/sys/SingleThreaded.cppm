/**
 * @file SingleThreaded.cppm
 * @brief Module file for Unix single-threaded optimisation support.
 *
 * This file contains the implementation of the Unix single-threaded optimisation support from the POSIX libraries.
 */

module;

#ifdef __unix__
#include <sys/single_threaded.h>
#endif

export module posix.sys.SingleThreaded;

/**
 * @brief Wrapper namespace for Unix POSIX operations.
 */
export namespace Posix::System {
    #ifdef __unix__
    using ::__libc_single_threaded;
    #endif
}
