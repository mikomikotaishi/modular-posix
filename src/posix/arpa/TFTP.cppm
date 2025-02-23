/**
 * @file TFTP.cppm
 * @brief Module file for Unix ARPA operations.
 *
 * This file contains the implementation of the Unix ARPA operations from the POSIX libraries.
 */

module;

#ifdef __unix__
#include <arpa/tftp.h>
#endif

export module posix.arpa.TFTP;

/**
 * @brief Wrapper namespace for Unix POSIX operations.
 */
export namespace Posix::ARPA {
    #ifdef __unix__
    using TFTPHdr = ::tftphdr;
    #endif
}
