/**
 * @file Strings.cppm
 * @brief Module file for Unix string comparison operations.
 *
 * This file contains the implementation of the Unix string comparison operations from the POSIX libraries.
 */

module;

#ifdef __unix__
#include <strings.h>
#endif

export module posix.Strings;

/**
 * @brief Wrapper namespace for Unix POSIX operations.
 */
export namespace Posix {
    #ifdef __unix__
    using ::bcmp;
    using ::bcopy;
    using ::bzero;
    using ::index;
    using ::rindex;
    using ::ffs;
    using ::ffsl;
    using ::ffsll;
    using ::strcasecmp;
    using ::strncasecmp;
    using ::strcasecmp_l;
    using ::strncasecmp_l;
    #endif
}
