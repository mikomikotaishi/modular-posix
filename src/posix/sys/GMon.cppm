/**
 * @file GMon.cppm
 * @brief Module file for Unix operations.
 *
 * This file contains the implementation of the Unix operations from the POSIX libraries.
 */

module;

#ifdef __unix__
#include <sys/gmon.h>
#endif

export module posix.sys.GMon;

/**
 * @brief Wrapper namespace for Unix POSIX operations.
 */
export namespace Posix::System {
    #ifdef __unix__
    using ToStruct = ::tostruct;
    using RawArc = ::rawarc;
    using GMonParam = ::gmonparam;

    using ::monstartup;
    using ::_mcleanup;
    #endif
}
