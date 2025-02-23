/**
 * @file Wait.cppm
 * @brief Module file for Unix wait operations.
 *
 * This file contains the implementation of the Unix wait operations from the POSIX libraries.
 */

module;

#ifdef __unix__
#include <sys/wait.h>
#endif

export module posix.sys.Wait;

/**
 * @brief Wrapper namespace for Unix POSIX operations.
 */
export namespace Posix::System {
    #ifdef __unix__
    using ::wait;
    using ::waitpid;
    using ::waitid;
    using ::wait3;
    using ::wait4;
    #endif
}
