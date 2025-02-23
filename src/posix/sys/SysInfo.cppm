/**
 * @file SysInfo.cppm
 * @brief Module file for Unix operations.
 *
 * This file contains the implementation of the Unix operations from the POSIX libraries.
 */

module;

#ifdef __unix__
#include <sys/sysinfo.h>
#endif

export module posix.sys.SysInfo;

/**
 * @brief Wrapper namespace for Unix POSIX operations.
 */
export namespace Posix::System {
    #ifdef __unix__
    using ::sysinfo;
    using ::get_nprocs_conf;
    using ::get_nprocs;
    using ::get_phys_pages;
    using ::get_avphys_pages;
    #endif
}
