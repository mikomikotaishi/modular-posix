/**
 * @file TimeS.cppm
 * @brief Module file for Unix file access/modification times operations.
 *
 * This file contains the implementation of the Unix file access/modification times operations from the POSIX libraries.
 */

module;

#ifdef __unix__
#include <sys/times.h>
#endif

export module posix.sys.TimeS;

/**
 * @brief Wrapper namespace for Unix POSIX operations.
 */
export namespace Posix::System {
    #ifdef __unix__
    using Tms = ::tms;

    using ::times;
    #endif
}
