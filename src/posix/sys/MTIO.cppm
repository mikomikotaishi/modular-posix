/**
 * @file MTIO.cppm
 * @brief Module file for Unix magnetic tape I/O operations.
 *
 * This file contains the implementation of the Unix magnetic tape I/O operations from the POSIX libraries.
 */

module;

#ifdef __unix__
#include <sys/mtio.h>
#endif

export module posix.sys.MTIO;

/**
 * @brief Wrapper namespace for Unix POSIX operations.
 */
export namespace Posix::System {
    #ifdef __unix__
    using MTOp = ::mtop;
    using MTGet = ::mtget;
    using MTTapeInfo = ::mt_tape_info;
    using MTPos = ::mtpos;
    using MTConfigInfo = ::mtconfiginfo;
    #endif
}
