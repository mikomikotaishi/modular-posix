/**
 * @file NameSer.cppm
 * @brief Module file for Unix ARPA operations.
 *
 * This file contains the implementation of the Unix ARPA operations from the POSIX libraries.
 */

module;

#ifdef __unix__
#include <arpa/nameser.h>
#endif

export module posix.arpa.NameSer;

/**
 * @brief Wrapper namespace for Unix POSIX operations.
 */
export namespace Posix::ARPA {
    #ifdef __unix__
    using NSTSigKey = ::ns_tsig_key;
    using NSTCPTSigState = ::ns_tcp_tsig_state;

    using ::ns_msg_getflag;
    using ::ns_get16;
    using ::ns_get32;
    using ::ns_put16;
    using ::ns_put32;
    using ::ns_initparse;
    using ::ns_skiprr;
    using ::ns_parserr;
    using ::ns_sprintrr;
    using ::ns_sprintrrf;
    using ::ns_format_ttl;
    using ::ns_parse_ttl;
    using ::ns_datetosecs;
    using ::ns_name_ntol;
    using ::ns_name_ntop;
    using ::ns_name_pton;
    using ::ns_name_unpack;
    using ::ns_name_uncompress;
    using ::ns_name_compress;
    using ::ns_name_skip;
    using ::ns_name_rollback;
    using ::ns_samedomain;
    using ::ns_subdomain;
    using ::ns_makecanon;
    using ::ns_samename;
    #endif
}
