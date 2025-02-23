/**
 * @file FTP.cppm
 * @brief Module file for Unix ARPA operations.
 *
 * This file contains the implementation of the Unix ARPA operations from the POSIX libraries.
 */

module;

#ifdef __unix__
#define FTP_NAMES

#include <arpa/ftp.h>
#endif

export module posix.arpa.FTP;

/**
 * @brief Wrapper namespace for Unix POSIX operations.
 */
export namespace Posix::ARPA {
    #ifdef __unix__
    using ::typenames;
    using ::formnames;
    using ::strunames;
    using ::modenames;
    #endif
}
