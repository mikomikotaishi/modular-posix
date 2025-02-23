/**
 * @file X86.cppm
 * @brief Module file for Unix resource usage operations.
 *
 * This file contains the implementation of the Unix resource usage operations from the POSIX libraries.
 */

module;

#ifdef __unix__
#include <sys/resource.h>
#endif

export module posix.sys.Resource;

/**
 * @brief Wrapper namespace for Unix POSIX operations.
 */
export namespace Posix::System {
    #ifdef __unix__
    using ::getrlimit;
    using ::getrlimit64;
    using ::setrlimit;
    using ::setrlimit64;
    using ::getrusage;
    using ::getpriority;
    using ::setpriority;
    #endif
}
