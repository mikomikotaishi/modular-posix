/**
 * @file IP.cppm
 * @brief Module file for Unix operations.
 *
 * This file contains the implementation of the Unix operations from the POSIX libraries.
 */

module;

#ifdef __unix__
#include <netinet/ip.h>
#endif

export module posix.netinet.IP;

/**
 * @brief Wrapper namespace for Unix POSIX operations.
 */
export namespace Posix::NetINet {
    #ifdef __unix__
    using TimeStamp = ::timestamp;
    using IPHdr = ::iphdr;
    using IP = ::ip;
    using IPTimeStamp = ::ip_timestamp;
    #endif
}
