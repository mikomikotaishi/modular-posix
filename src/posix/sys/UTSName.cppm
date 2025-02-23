/**
 * @file UTSName.cppm
 * @brief Module file for Unix operating system information operations.
 *
 * This file contains the implementation of the Unix operating system information operations from the POSIX libraries.
 */

module;

#ifdef __unix__
#include <sys/utsname.h>
#endif

export module posix.sys.UTSName;

/**
 * @brief Wrapper namespace for Unix POSIX operations.
 */
export namespace Posix::System {
    #ifdef __unix__
    using UTSName = ::utsname;

    using ::uname;
    #endif
}
