/**
 * @file SHM.cppm
 * @brief Module file for Unix XSI shared memory operations.
 *
 * This file contains the implementation of the Unix XSI shared memory operations from the POSIX libraries.
 */

module;

#ifdef __unix__
#include <sys/shm.h>
#endif

export module posix.sys.SHM;

/**
 * @brief Wrapper namespace for Unix POSIX operations.
 */
export namespace Posix::System {
    #ifdef __unix__
    using ::shmctl;
    using ::shmget;
    using ::shmat;
    using ::shmdt;
    #endif
}
