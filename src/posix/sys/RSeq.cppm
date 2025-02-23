/**
 * @file RSeq.cppm
 * @brief Module file for Unix restartable sequences operations.
 *
 * This file contains the implementation of the Unix restartable sequences operations from the POSIX libraries.
 */

module;

#ifdef __unix__
#include <sys/rseq.h>
#endif

export module posix.sys.RSeq;

/**
 * @brief Wrapper namespace for Unix POSIX operations.
 */
export namespace Posix::System {
    #ifdef __unix__
    using RSeqCPUIDState = ::rseq_cpu_id_state;
    using RSeqFlags = ::rseq_flags;
    using RSeqCSFlagsBit = ::rseq_cs_flags_bit;
    using RSeqCSFlags = ::rseq_cs_flags;
    using RSeqCS = ::rseq_cs;
    using RSeq = ::rseq;
    #endif
}
