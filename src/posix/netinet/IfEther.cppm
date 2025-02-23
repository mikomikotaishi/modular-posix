/**
 * @file IfEther.cppm
 * @brief Module file for Unix operations.
 *
 * This file contains the implementation of the Unix operations from the POSIX libraries.
 */

module;

#ifdef __unix__
#include <netinet/if_ether.h>
#endif

export module posix.netinet.IfEther;

/**
 * @brief Wrapper namespace for Unix POSIX operations.
 */
export namespace Posix::NetINet {
    #ifdef __unix__
    using EtherARP = ::ether_arp;
    #endif
}
