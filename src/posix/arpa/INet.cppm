/**
 * @file INet.cppm
 * @brief Module file for Unix ARPA operations.
 *
 * This file contains the implementation of the Unix ARPA operations from the POSIX libraries.
 */

module;

#ifdef __unix__
#include <arpa/inet.h>
#endif

export module posix.arpa.INet;

/**
 * @brief Wrapper namespace for Unix POSIX operations.
 */
export namespace Posix::ARPA {
    #ifdef __unix__
    using ::inet_addr;
    using ::inet_lnaof;
    using ::inet_makeaddr;
    using ::inet_netof;
    using ::inet_network;
    using ::inet_ntoa;
    using ::inet_pton;
    using ::inet_ntop;
    using ::inet_aton;
    using ::inet_neta;
    using ::inet_net_ntop;
    using ::inet_net_pton;
    using ::inet_nsap_addr;
    using ::inet_nsap_ntoa;
    #endif
}
