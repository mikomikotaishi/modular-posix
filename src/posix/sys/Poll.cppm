/**
 * @file Poll.cppm
 * @brief Module file for Unix System V poll interface compatibility operations.
 *
 * This file contains the implementation of the Unix System V poll interface compatibility operations from the POSIX libraries.
 */

module;

#ifdef __unix__
#include <sys/poll.h>
#endif

export module posix.sys.Poll;

/**
 * @brief Wrapper namespace for Unix POSIX operations.
 */
export namespace Posix::System {
    #ifdef __unix__
    using PollFD = ::pollfd;

    using ::poll;
    using ::ppoll;
    #endif
}
