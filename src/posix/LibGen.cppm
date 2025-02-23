/**
 * @file LibGen.cppm
 * @brief Module file for Unix pathname manipulation operations.
 *
 * This file contains the implementation of the Unix pathname manipulation operations from the POSIX libraries.
 */

module;

#ifdef __unix__
#include <libgen.h>
#endif

export module posix.LibGen;

/**
 * @brief Wrapper namespace for Unix POSIX operations.
 */
export namespace Posix {
    #ifdef __unix__
    using ::dirname;
    #endif
}
