/**
 * @file FnMatch.cppm
 * @brief Module file for Unix filename matching operations.
 *
 * This file contains the implementation of the Unix filename matching operations from the POSIX libraries.
 */

module;

#ifdef __unix__
#include <fnmatch.h>
#endif

export module posix.FnMatch;

/**
 * @brief Wrapper namespace for Unix POSIX operations.
 */
export namespace Posix {
    #ifdef __unix__
    using ::fnmatch;
    #endif
}
