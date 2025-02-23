/**
 * @file UN.cppm
 * @brief Module file for Unix domain socket operations.
 *
 * This file contains the implementation of the Unix domain socket operations from the POSIX libraries.
 */

module;

#ifdef __unix__
#include <sys/un.h>
#endif

export module posix.sys.UN;

/**
 * @brief Wrapper namespace for Unix POSIX operations.
 */
export namespace Posix::System {
    #ifdef __unix__
    using SockAddrUN = ::sockaddr_un;
    #endif
}
