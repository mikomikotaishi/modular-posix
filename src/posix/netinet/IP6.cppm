/**
 * @file IP6.cppm
 * @brief Module file for Unix operations.
 *
 * This file contains the implementation of the Unix operations from the POSIX libraries.
 */

module;

#ifdef __unix__
#include <netinet/ip6.h>
#endif

export module posix.netinet.IP6;

/**
 * @brief Wrapper namespace for Unix POSIX operations.
 */
export namespace Posix::NetINet {
    #ifdef __unix__
    using IP6Hdr = ::ip6_hdr;
    using IP6Ext = ::ip6_ext;
    using IP6HBH = ::ip6_hbh;
    using IP6Dest = ::ip6_dest;
    using IP6RtHdr = ::ip6_rthdr;
    using IP6RtHdr0 = ::ip6_rthdr0;
    using IP6Frag = ::ip6_frag;
    using IP6Opt = ::ip6_opt;
    using IP6OptJumbo = ::ip6_opt_jumbo;
    using IP6OptNSAP = ::ip6_opt_nsap;
    using IP6OptTunnel = ::ip6_opt_tunnel;
    using IP6OptRouter = ::ip6_opt_router;
    #endif
}
