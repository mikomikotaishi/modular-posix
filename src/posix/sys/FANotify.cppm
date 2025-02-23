/**
 * @file FANotify.cppm
 * @brief Module file for Unix operations.
 *
 * This file contains the implementation of the Unix operations from the POSIX libraries.
 */

module;

#ifdef __unix__
#include <sys/fanotify.h>
#endif

export module posix.sys.FANotify;

/**
 * @brief Wrapper namespace for Unix POSIX operations.
 */
export namespace Posix::System {
    #ifdef __unix__
    using ::fanotify_init;
    using ::fanotify_mark;
    #endif
}
