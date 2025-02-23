/**
 * @file If.cppm
 * @brief Module file for Unix local network interfacing operations.
 *
 * This file contains the implementation of the Unix local networking interfacing operations from the POSIX libraries.
 */

module;

#ifdef __unix__
#include <net/ppp_defs.h>
#endif

export module posix.net.PPPDefs;

/**
 * @brief Wrapper namespace for Unix POSIX operations.
 */
export namespace Posix::Networking {
    #ifdef __unix__
    using NPMode = ::NPmode;
    using PPPStat = ::pppstat;
    using VJStat = ::vjstat;
    using CompStat = ::compstat;
    using PPPStats = ::ppp_stats;
    using PPPCompStats = ::ppp_comp_stats;
    using PPPIdle = ::ppp_idle;
    using PPPIdle32 = ::ppp_idle32;
    using PPPIdle64 = ::ppp_idle64;
    #endif
}
