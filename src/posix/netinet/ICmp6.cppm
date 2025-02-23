/**
 * @file ICMP6.cppm
 * @brief Module file for Unix operations.
 *
 * This file contains the implementation of the Unix operations from the POSIX libraries.
 */

module;

#ifdef __unix__
#include <netinet/icmp6.h>
#endif

export module posix.netinet.ICMP6;

/**
 * @brief Wrapper namespace for Unix POSIX operations.
 */
export namespace Posix::NetINet {
    #ifdef __unix__
    using ICMP6Filter = ::icmp6_filter;
    using ICMP6Hdr = ::icmp6_hdr;
    using NDRouterSolicit = ::nd_router_solicit;
    using NDRouterAdvert = ::nd_router_advert;
    using NDNeighborSolicit = ::nd_neighbor_solicit;
    using NDNeighborAdvert = ::nd_neighbor_advert;
    using NDRedirect = ::nd_redirect;
    using NDOptHdr = ::nd_opt_hdr;
    using NDOptPrefixInfo = ::nd_opt_prefix_info;
    using NDOptRdHdr = ::nd_opt_rd_hdr;
    using NDOptMTU = ::nd_opt_mtu;
    using MLDHdr = ::mld_hdr;
    using ICMP6RouterREnum = ::icmp6_router_renum;
    using RRPCOMatch = ::rr_pco_match;
    using RRPCOUse = ::rr_pco_use;
    using RRResult = ::rr_result;
    using NDOptAdvInterval = ::nd_opt_adv_interval;
    using NDOptHomeAgentInfo = ::nd_opt_home_agent_info;
    #endif
}
