/**
 * @file Sem.cppm
 * @brief Module file for Unix XSI semaphore operations.
 *
 * This file contains the implementation of the Unix XSI semaphore operations from the POSIX libraries.
 */

module;

#ifdef __unix__
#include <sys/sem.h>
#endif

export module posix.sys.Sem;

/**
 * @brief Wrapper namespace for Unix POSIX operations.
 */
export namespace Posix::System {
    #ifdef __unix__
    using SemInfo = ::seminfo;
    using SemBuf = ::sembuf;

    using ::semctl;
    using ::semget;
    using ::semop;
    using ::semtimedop;
    #endif
}
