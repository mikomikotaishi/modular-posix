/**
 * @file PSXSysCall.cppm
 * @brief Module file for Unix POSIX syscalls for pthread operations.
 *
 * This file contains the implementation of the Unix POSIX syscalls for pthread operations from the POSIX libraries.
 */

module;

#ifdef __unix__
#include <sys/psx_syscall.h>
#endif

export module posix.sys.PSXSysCall;

/**
 * @brief Wrapper namespace for Unix POSIX operations.
 */
export namespace Posix::System {
    #ifdef __unix__
    using ::psx_load_syscalls;
    using ::psx_set_sensitivity;
    #endif
}
