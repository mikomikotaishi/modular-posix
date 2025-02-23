/**
 * @file Monetary.cppm
 * @brief Module file for Unix monetary unit string formatting operations.
 *
 * This file contains the implementation of the Unix monetary unit string formatting operations from the POSIX libraries.
 */

module;

#ifdef __unix__
#include <monetary.h>
#endif

export module posix.Monetary;

/**
 * @brief Wrapper namespace for Unix POSIX operations.
 */
export namespace Posix {
    #ifdef __unix__
    using ::strfmon;
    using ::strfmon_l;
    #endif
}
