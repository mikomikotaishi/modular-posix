/**
 * @file PTrace.cppm
 * @brief Module file for Unix ptrace debugger interface operations.
 *
 * This file contains the implementation of the Unix ptrace debugger interface operations from the POSIX libraries.
 */

module;

#ifdef __unix__
#include <sys/ptrace.h>
#endif

export module posix.sys.PTrace;

/**
 * @brief Wrapper namespace for Unix POSIX operations.
 */
export namespace Posix::System {
    #ifdef __unix__
    using ::ptrace;
    #endif
}
