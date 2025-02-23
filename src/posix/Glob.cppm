/**
 * @file Glob.cppm
 * @brief Module file for Unix globbing operations.
 *
 * This file contains the implementation of the Unix globbing operations from the POSIX libraries.
 */

module;

#ifdef __unix__
#include <glob.h>
#endif

export module posix.Glob;

/**
 * @brief Wrapper namespace for Unix POSIX operations.
 */
export namespace Posix {
    #ifdef __unix__
    using Stat = ::stat;
    using Stat64 = ::stat64;

    using ::glob;
    using ::globfree;
    using ::glob64;
    using ::globfree64;

    using ::glob_pattern_p;
    #endif
}
