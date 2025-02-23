/**
 * @file FmtMsg.cppm
 * @brief Module file for Unix message display structure operations.
 *
 * This file contains the implementation of the Unix message display structure operations from the POSIX libraries.
 */

module;

#ifdef __unix__
#include <fmtmsg.h>
#endif

export module posix.FmtMsg;

/**
 * @brief Wrapper namespace for Unix POSIX operations.
 */
export namespace Posix {
    #ifdef __unix__
    using ::fmtmsg;
    using ::addseverity;
    #endif
}
