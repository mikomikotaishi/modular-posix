/**
 * @file IfPacket.cppm
 * @brief Module file for Unix local network interfacing operations.
 *
 * This file contains the implementation of the Unix local networking interfacing operations from the POSIX libraries.
 */

module;

#ifdef __unix__
#include <net/if_packet.h>
#endif

export module posix.net.IfPacket;

/**
 * @brief Wrapper namespace for Unix POSIX operations.
 */
export namespace Posix::Networking {
    #ifdef __unix__
    using SockAddrPkt = ::sockaddr_pkt;
    #endif
}
