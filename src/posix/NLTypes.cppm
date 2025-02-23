/**
 * @file NLTypes.cppm
 * @brief Module file for Unix localisation message catalogue operations.
 *
 * This file contains the implementation of the Unix localisation message catalogue operations from the POSIX libraries.
 */

module;

#ifdef __unix__
#include <nl_types.h>
#endif

export module posix.NLTypes;

/**
 * @brief Wrapper namespace for Unix POSIX operations.
 */
export namespace Posix {
    #ifdef __unix__
    using ::catopen;
    using ::catgets;
    using ::catclose;
    #endif
}
