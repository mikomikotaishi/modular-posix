/**
 * @file Acct.cppm
 * @brief Module file for Unix operations.
 *
 * This file contains the implementation of the Unix operations from the POSIX libraries.
 */

module;

#ifdef __unix__
#include <sys/acct.h>
#endif

export module posix.sys.Acct;

/**
 * @brief Wrapper namespace for Unix POSIX operations.
 */
export namespace Posix::System {
    #ifdef __unix__
    using AcctV3 = ::acct_v3;

    using ::acct;
    #endif
}
