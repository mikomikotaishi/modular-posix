/**
 * @file If.cppm
 * @brief Module file for Unix local network interfacing operations.
 *
 * This file contains the implementation of the Unix local networking interfacing operations from the POSIX libraries.
 */

module;

#ifdef __unix__
#include <net/if.h>
#endif

export module posix.net.If;

/**
 * @brief Wrapper namespace for Unix POSIX operations.
 */
export namespace Posix::Networking {
    #ifdef __unix__
    using IfAddr = ::ifaddr;
    using IfMap = ::ifmap;
    using IfReq = ::ifreq;
    using IfConf = ::ifconf;

    using ::if_nametoindex;
    using ::if_indextoname;
    using ::if_nameindex;
    using ::if_freenameindex;
    #endif
}
