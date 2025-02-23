/**
 * @file ProcFS.cppm
 * @brief Module file for Unix core file/libthread_db operations.
 *
 * This file contains the implementation of the Unix core file/libthread_db operations from the POSIX libraries.
 */

module;

#ifdef __unix__
#include <sys/procfs.h>
#endif

export module posix.sys.ProcFS;

/**
 * @brief Wrapper namespace for Unix POSIX operations.
 */
export namespace Posix::System {
    #ifdef __unix__
    using ELFSigInfo = ::elf_siginfo;
    using ELFPRStatus = ::elf_prstatus;
    using ELFPRPSInfo = ::elf_prpsinfo;
    #endif
}
