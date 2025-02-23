/**
 * @file UDP.cppm
 * @brief Module file for Unix operations.
 *
 * This file contains the implementation of the Unix operations from the POSIX libraries.
 */

module;

#ifdef __unix__
#include <netinet/udp.h>
#endif

export module posix.netinet.UDP;

/**
 * @brief Wrapper namespace for Unix POSIX operations.
 */
export namespace Posix::NetINet {
    #ifdef __unix__
    using UDPHdr = ::udphdr;
    #endif
}
