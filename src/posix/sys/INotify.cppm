/**
 * @file INotify.cppm
 * @brief Module file for Unix operations.
 *
 * This file contains the implementation of the Unix operations from the POSIX libraries.
 */

module;

#ifdef __unix__
#include <sys/inotify.h>
#endif

export module posix.sys.INotify;

/**
 * @brief Wrapper namespace for Unix POSIX operations.
 */
export namespace Posix::System {
    #ifdef __unix__
    using INotifyEvent = ::inotify_event;

    using ::inotify_init;
    using ::inotify_init1;
    using ::inotify_add_watch;
    using ::inotify_rm_watch;
    #endif
}
