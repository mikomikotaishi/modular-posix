/**
 * @file IOCtl.cppm
 * @brief Module file for Unix operations.
 *
 * This file contains the implementation of the Unix operations from the POSIX libraries.
 */

module;

#ifdef __unix__
#include <sys/ioctl.h>
#endif

export module posix.sys.IOCtl;

/**
 * @brief Wrapper namespace for Unix POSIX operations.
 */
export namespace Posix::System {
    #ifdef __unix__
    using ::ioctl;

    using WinSize = ::winsize;
    using TermIO = ::termio;
    #endif
}
