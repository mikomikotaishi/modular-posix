/**
 * @file IfTR.cppm
 * @brief Module file for Unix operations.
 *
 * This file contains the implementation of the Unix operations from the POSIX libraries.
 */

module;

#ifdef __unix__
#include <netinet/if_tr.h>
#endif

export module posix.netinet.IfTR;

/**
 * @brief Wrapper namespace for Unix POSIX operations.
 */
export namespace Posix::NetINet {
    #ifdef __unix__
    using TRHHdr = ::trh_hdr;
    using TRLLC = ::trllc;
    using TRStatistics = ::tr_statistics;
    using TRNHdr = ::trn_hdr;
    #endif
}
