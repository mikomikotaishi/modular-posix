/**
 * @file LangInfo.cppm
 * @brief Module file for Unix language information operations.
 *
 * This file contains the implementation of the Unix language information operations from the POSIX libraries.
 */

module;

#ifdef __unix__
#include <langinfo.h>
#endif

export module posix.LangInfo;

/**
 * @brief Wrapper namespace for Unix POSIX operations.
 */
export namespace Posix {
    #ifdef __unix__
    using ::nl_langinfo;
    using ::nl_langinfo_l;
    #endif
}
