/**
 * @file TTYChars.cppm
 * @brief Module file for Unix terminal handling constants.
 *
 * This file contains the implementation of the Unix terminal handling constants from the POSIX libraries.
 */

module;

#ifdef __unix__
#include <sys/ttychars.h>
#endif

export module posix.sys.TTYChars;

/**
 * @brief Wrapper namespace for Unix POSIX operations.
 */
export namespace Posix::System {
    #ifdef __unix__
    using TTYChars = ::ttychars;
    #endif
}
