/**
 * @file Grp.cppm
 * @brief Module file for Unix user group control operations.
 *
 * This file contains the implementation of the Unix user group control operations from the POSIX libraries.
 */

module;

#ifdef __unix__
#include <grp.h>
#endif

export module posix.Grp;

/**
 * @brief Wrapper namespace for Unix POSIX operations.
 */
export namespace Posix {
    #ifdef __unix__
    using Group = ::group;

    using ::setgrent;
    using ::endgrent;
    using ::getgrent;
    using ::fgetgrent;
    using ::putgrent;
    using ::getgrgid;
    using ::getgrnam;
    using ::getgrent_r;
    using ::getgrgid_r;
    using ::getgrnam_r;
    using ::fgetgrent_r;
    using ::setgroups;
    using ::getgrouplist;
    using ::initgroups;
    #endif
}
