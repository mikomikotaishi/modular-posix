/**
 * @file TimerFD.cppm
 * @brief Module file for Unix operations.
 *
 * This file contains the implementation of the Unix operations from the POSIX libraries.
 */

module;

#ifdef __unix__
#include <sys/timerfd.h>
#endif

export module posix.sys.TimerFD;

/**
 * @brief Wrapper namespace for Unix POSIX operations.
 */
export namespace Posix::System {
    #ifdef __unix__
    using ::timerfd_create;
    using ::timerfd_settime;
    using ::timerfd_gettime;
    #endif
}
