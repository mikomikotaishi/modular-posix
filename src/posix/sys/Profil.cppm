/**
 * @file Profil.cppm
 * @brief Module file for Unix operations.
 *
 * This file contains the implementation of the Unix operations from the POSIX libraries.
 */

module;

#ifdef __unix__
#include <sys/profil.h>
#endif

export module posix.sys.Profil;

/**
 * @brief Wrapper namespace for Unix POSIX operations.
 */
export namespace Posix::System {
    #ifdef __unix__
    using Prof = ::prof;

    using ::sprofil;
    #endif
}
