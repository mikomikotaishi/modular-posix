/**
 * @file UTime.cppm
 * @brief Module file for Unix inode access operations.
 *
 * This file contains the implementation of the Unix inode access operations from the POSIX libraries.
 */

module;

#ifdef __unix__
#include <utime.h>
#endif

export module posix.UTime;

/**
 * @brief Wrapper namespace for Unix POSIX operations.
 */
export namespace Posix {
    #ifdef __unix__
    using UTimBuf = ::utimbuf;

    using ::utime;
    #endif
}
