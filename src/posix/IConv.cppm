/**
 * @file IConv.cppm
 * @brief Module file for Unix codeset conversion operations.
 *
 * This file contains the implementation of the Unix codeset conversion operations from the POSIX libraries.
 */

module;

#ifdef __unix__
#include <iconv.h>
#endif

export module posix.IConv;

/**
 * @brief Wrapper namespace for Unix POSIX operations.
 */
export namespace Posix {
    #ifdef __unix__
    using ::iconv_close;
    using ::iconv_open;
    using ::iconv;
    #endif
}
