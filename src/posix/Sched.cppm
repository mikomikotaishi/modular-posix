/**
 * @file Sched.cppm
 * @brief Module file for Unix execution scheduling operations.
 *
 * This file contains the implementation of the Unix executing scheduling operations from the POSIX libraries.
 */

module;

#ifdef __unix__
#include <sched.h>
#endif

export module posix.Sched;

/**
 * @brief Wrapper namespace for Unix POSIX operations.
 */
export namespace Posix {
    #ifdef __unix__
    using ::sched_setparam;
    using ::sched_getparam;
    using ::sched_setscheduler;
    using ::sched_getscheduler;
    using ::sched_yield;
    using ::sched_get_priority_max;
    using ::sched_get_priority_min;
    using ::sched_rr_get_interval;
    using ::sched_setaffinity;
    using ::sched_getaffinity;
    #endif
}
