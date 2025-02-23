/**
 * @file IfPPP.cppm
 * @brief Module file for Unix local network interfacing operations.
 *
 * This file contains the implementation of the Unix local networking interfacing operations from the POSIX libraries.
 */

module;

#ifdef __unix__
#include <net/if_ppp.h>
#endif

export module posix.net.IfPPP;

/**
 * @brief Wrapper namespace for Unix POSIX operations.
 */
export namespace Posix::Networking {
    #ifdef __unix__
    using NPIOCtl = ::npioctl;
    using PPPOptionData = ::ppp_option_data;
    using IfPPPStatsReq = ::ifpppstatsreq;
    using IfPPPCStatsReq = ::ifpppcstatsreq;
    #endif
}
