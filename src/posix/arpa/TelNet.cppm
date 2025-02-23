/**
 * @file TelNet.cppm
 * @brief Module file for Unix ARPA operations.
 *
 * This file contains the implementation of the Unix ARPA operations from the POSIX libraries.
 */

module;

#ifdef __unix__
#define TELOPTS

#include <arpa/telnet.h>
#endif

export module posix.arpa.TelNet;

/**
 * @brief Wrapper namespace for Unix POSIX operations.
 */
export namespace Posix::ARPA {
    #ifdef __unix__
    using ::telcmds;
    using ::telopts;
    using ::slc_names;
    using ::authtype_names;
    using ::encrypt_names;
    using ::enctype_names;
    #endif
}
