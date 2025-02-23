/**
 * @file EPoll.cppm
 * @brief Module file for Unix operations.
 *
 * This file contains the implementation of the Unix operations from the POSIX libraries.
 */

module;

#ifdef __unix__
#include <sys/epoll.h>
#endif

export module posix.sys.EPoll;

/**
 * @brief Wrapper namespace for Unix POSIX operations.
 */
export namespace Posix::System {
    #ifdef __unix__
    using ::EPOLL_EVENTS;

    using EPollData = ::epoll_data;
    using EPollEvent = ::epoll_event;
    using EPollParams = ::epoll_params;

    using ::epoll_create;
    using ::epoll_create1;
    using ::epoll_ctl;
    using ::epoll_wait;
    using ::epoll_pwait;
    using ::epoll_pwait2;
    #endif
}
