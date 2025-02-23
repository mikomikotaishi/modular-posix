/**
 * @file Select.cppm
 * @brief Module file for Unix fd_set type and select/pselect declaration operations.
 *
 * This file contains the implementation of the Unix fd_set type and select/pselect declaration operations from the POSIX libraries.
 */

module;

#ifdef __unix__
#include <sys/select.h>
#endif

export module posix.sys.Select;

/**
 * @brief Wrapper namespace for Unix POSIX operations.
 */
export namespace Posix::System {
    #ifdef __unix__
    using ::select;
    using ::pselect;
    #endif
}
