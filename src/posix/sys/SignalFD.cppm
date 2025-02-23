/**
 * @file SignalFD.cppm
 * @brief Module file for Unix operations.
 *
 * This file contains the implementation of the Unix operations from the POSIX libraries.
 */

module;

#ifdef __unix__
#include <sys/signalfd.h>
#endif

export module posix.sys.SignalFD;

/**
 * @brief Wrapper namespace for Unix POSIX operations.
 */
export namespace Posix::System {
    #ifdef __unix__
    using SignalFDSigInfo = ::signalfd_siginfo;

    using ::signalfd;
    #endif
}
