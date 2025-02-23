/**
 * @file WordExp.cppm
 * @brief Module file for Unix word expansion operations.
 *
 * This file contains the implementation of the Unix word expansion operations from the POSIX libraries.
 */

module;

#ifdef __unix__
#include <wordexp.h>
#endif

export module posix.WordExp;

/**
 * @brief Wrapper namespace for Unix POSIX operations.
 */
export namespace Posix {
    #ifdef __unix__
    using ::wordexp;
    using ::wordfree;
    #endif
}
