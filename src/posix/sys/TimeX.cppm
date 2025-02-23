/**
 * @file TimeX.cppm
 * @brief Module file for Unix operations.
 *
 * This file contains the implementation of the Unix operations from the POSIX libraries.
 */

module;

#ifdef __unix__
#include <sys/timex.h>
#endif

export module posix.sys.TimeX;

/**
 * @brief Wrapper namespace for Unix POSIX operations.
 */
export namespace Posix::System {
    #ifdef __unix__
    using NTPTimeVal = ::ntptimeval;

    using ::adjtimex;
    using ::ntp_gettimex;
    using ::ntp_adjtime;
    #endif
}
