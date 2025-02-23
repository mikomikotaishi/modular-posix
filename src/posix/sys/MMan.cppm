/**
 * @file MMan.cppm
 * @brief Module file for Unix memory management operations.
 *
 * This file contains the implementation of the Unix memory management operations from the POSIX libraries.
 */

module;

#ifdef __unix__
#include <sys/mman.h>
#endif

export module posix.sys.MMan;

/**
 * @brief Wrapper namespace for Unix POSIX operations.
 */
export namespace Posix::System {
    #ifdef __unix__
    using ::mmap;
    using ::mmap64;
    using ::munmap;
    using ::mprotect;
    using ::msync;
    using ::madvise;
    using ::posix_madvise;
    using ::mlock;
    using ::munlock;
    using ::mlockall;
    using ::munlockall;
    using ::mincore;
    using ::mremap;
    using ::remap_file_pages;
    using ::shm_open;
    using ::shm_unlink;
    #endif
}
