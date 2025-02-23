/**
 * @file IPICMP.cppm
 * @brief Module file for Unix operations.
 *
 * This file contains the implementation of the Unix operations from the POSIX libraries.
 */

module;

#ifdef __unix__
#include <netinet/ip_icmp.h>
#endif

export module posix.netinet.IPICMP;

/**
 * @brief Wrapper namespace for Unix POSIX operations.
 */
export namespace Posix::NetINet {
    #ifdef __unix__
    using ICMPHdr = ::icmphdr;
    using ICMPRAAddr = ::icmp_ra_addr;
    using ICMP = ::icmp;
    #endif
}
