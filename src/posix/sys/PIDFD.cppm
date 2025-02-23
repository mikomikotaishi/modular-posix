/**
 * @file PIDFD.cppm
 * @brief Module file for Unix process function file descriptor operations.
 *
 * This file contains the implementation of the Unix process function file descriptor operations from the POSIX libraries.
 */

module;

#ifdef __unix__
#include <sys/pidfd.h>
#endif

export module posix.sys.PIDFD;

/**
 * @brief Wrapper namespace for Unix POSIX operations.
 */
export namespace Posix::System {
    #ifdef __unix__
    using ::pidfd_open;
    using ::pidfd_getfd;
    using ::pidfd_send_signal;
    using ::pidfd_getpid;
    #endif
}
