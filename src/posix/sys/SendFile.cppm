/**
 * @file SendFile.cppm
 * @brief Module file for Unix sendfile operations.
 *
 * This file contains the implementation of the Unix sendfile operations from the POSIX libraries.
 */

module;

#ifdef __unix__
#include <sys/sendfile.h>
#endif

export module posix.sys.SendFile;

/**
 * @brief Wrapper namespace for Unix POSIX operations.
 */
export namespace Posix::System {
    #ifdef __unix__
    using ::sendfile;
    using ::sendfile64;
    #endif
}
