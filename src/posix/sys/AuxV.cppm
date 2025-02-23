/**
 * @file AuxV.cppm
 * @brief Module file for Unix auxilliary vector operations.
 *
 * This file contains the implementation of the Unix auxilliary vector operations from the POSIX libraries.
 */

module;

#ifdef __unix__
#include <sys/auxv.h>
#endif

export module posix.sys.AuxV;

/**
 * @brief Wrapper namespace for Unix POSIX operations.
 */
export namespace Posix::System {
    #ifdef __unix__
    using ::getauxval;
    #endif
}
