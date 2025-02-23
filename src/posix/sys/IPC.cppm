/**
 * @file IPC.cppm
 * @brief Module file for Unix inter-process communication operations.
 *
 * This file contains the implementation of the Unix inter-process communicatoin operations from the POSIX libraries.
 */

module;

#ifdef __unix__
#include <sys/ipc.h>
#endif

export module posix.sys.IPC;

/**
 * @brief Wrapper namespace for Unix POSIX operations.
 */
export namespace Posix::System {
    #ifdef __unix__
    using ::ftok;
    #endif
}
