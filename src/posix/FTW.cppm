/**
 * @file FTW.cppm
 * @brief Module file for Unix file tree traversal operations.
 *
 * This file contains the implementation of the Unix file tree traversal operations from the POSIX libraries.
 */

module;

#ifdef __unix__
#include <ftw.h>
#endif

export module posix.FTW;

/**
 * @brief Wrapper namespace for Unix POSIX operations.
 */
export namespace Posix {
    #ifdef __unix__
    using ::FTW;

    using ::ftw;
    using ::ftw64;
    using ::nftw;
    using ::nftw64;
    #endif
}
