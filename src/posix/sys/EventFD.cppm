/**
 * @file EventFD.cppm
 * @brief Module file for Unix operations.
 *
 * This file contains the implementation of the Unix operations from the POSIX libraries.
 */

module;

#ifdef __unix__
#include <sys/eventfd.h>
#endif

export module posix.sys.EventFD;

/**
 * @brief Wrapper namespace for Unix POSIX operations.
 */
export namespace Posix::System {
    #ifdef __unix__
    using ::eventfd;
    using ::eventfd_read;
    using ::eventfd_write;
    #endif
}
