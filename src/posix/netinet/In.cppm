/**
 * @file In.cppm
 * @brief Module file for Unix Internet protocol and address operations.
 *
 * This file contains the implementation of the Unix Internet protocol and address operations from the POSIX libraries.
 */

module;

#ifdef __unix__
#include <netinet/in.h>
#endif

export module posix.netinet.In;

/**
 * @brief Wrapper namespace for Unix POSIX operations.
 */
export namespace Posix::NetINet {
    #ifdef __unix__
    using InAddr = ::in_addr;
    using In6Addr = ::in6_addr;

    using ::in6addr_any;
    using ::in6addr_loopback;

    using IPMReq = ::ip_mreq;
    using IPMReqN = ::ip_mreqn;
    using IPMReqSource = ::ip_mreq_source;
    using IPV6MReq = ::ipv6_mreq;
    using GroupReq = ::group_req;
    using GroupSourceReq = ::group_source_req;
    using IPMSFilter = ::ip_msfilter;
    using GroupFilter = ::group_filter;

    using ::bindresvport;
    using ::bindresvport6;

    using CMsgHdr = ::cmsghdr;

    using In6PktInfo = ::in6_pktinfo;
    using IP6MTUInfo = ::ip6_mtuinfo;

    using ::inet6_option_space;
    using ::inet6_option_init;
    using ::inet6_option_append;
    using ::inet6_option_alloc;
    using ::inet6_option_next;
    using ::inet6_option_find;

    using ::inet6_opt_init;
    using ::inet6_opt_append;
    using ::inet6_opt_finish;
    using ::inet6_opt_set_val;
    using ::inet6_opt_next;
    using ::inet6_opt_find;
    using ::inet6_opt_get_val;

    using ::inet6_rth_space;
    using ::inet6_rth_init;
    using ::inet6_rth_add;
    using ::inet6_rth_reverse;
    using ::inet6_rth_segments;
    using ::inet6_rth_getaddr;

    using ::getipv4sourcefilter;
    using ::setipv4sourcefilter;
    using ::getsourcefilter;
    using ::setsourcefilter;
    #endif
}
