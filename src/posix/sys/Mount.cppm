/**
 * @file Mount.cppm
 * @brief Module file for Unix filesystem mounting/unmounting operations.
 *
 * This file contains the implementation of the Unix filesystem mounting/unmounting operations from the POSIX libraries.
 */

module;

#ifdef __unix__
#include <sys/mount.h>
#endif

export module posix.sys.Mount;

/**
 * @brief Wrapper namespace for Unix POSIX operations.
 */
export namespace Posix::System {
    #ifdef __unix__
    using MountAttr = ::mount_attr;
    using FSConfig = ::fsconfig_command;

    using ::mount;
    using ::umount;
    using ::umount2;
    using ::fsopen;
    using ::fsmount;
    using ::move_mount;
    using ::fsconfig;
    using ::fspick;
    using ::open_tree;
    using ::mount_setattr;
    #endif
}
