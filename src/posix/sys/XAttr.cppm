/**
 * @file XAttr.cppm
 * @brief Module file for Unix operations.
 *
 * This file contains the implementation of the Unix operations from the POSIX libraries.
 */

module;

#ifdef __unix__
#include <sys/xattr.h>
#endif

export module posix.sys.XAttr;

/**
 * @brief Wrapper namespace for Unix POSIX operations.
 */
export namespace Posix::System {
    #ifdef __unix__
    using ::setxattr;
    using ::lsetxattr;
    using ::fsetxattr;
    using ::getxattr;
    using ::lgetxattr;
    using ::fgetxattr;
    using ::listxattr;
    using ::llistxattr;
    using ::flistxattr;
    using ::removexattr;
    using ::lremovexattr;
    using ::fremovexattr;
    #endif
}
