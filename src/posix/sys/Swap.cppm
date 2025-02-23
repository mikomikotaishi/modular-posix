/**
 * @file Swap.cppm
 * @brief Module file for Unix swapping enable/disable operations.
 *
 * This file contains the implementation of the Unix swapping enable/disable operations from the POSIX libraries.
 */

module;

#ifdef __unix__
#include <sys/swap.h>
#endif

export module posix.sys.Swap;

/**
 * @brief Wrapper namespace for Unix POSIX operations.
 */
export namespace Posix::System {
    #ifdef __unix__
    using ::swapon;
    using ::swapoff;
    #endif
}
