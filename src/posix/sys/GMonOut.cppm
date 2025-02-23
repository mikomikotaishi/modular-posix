/**
 * @file GmonOut.cppm
 * @brief Module file for Unix operations.
 *
 * This file contains the implementation of the Unix operations from the POSIX libraries.
 */

module;

#ifdef __unix__
#include <sys/gmon_out.h>
#endif

export module posix.sys.GMonOut;

/**
 * @brief Wrapper namespace for Unix POSIX operations.
 */
export namespace Posix::System {
    #ifdef __unix__
    using GMonHdr = ::gmon_hdr;
    using GMonHistHdr = ::gmon_hist_hdr;
    using GMonCGArcRecord = ::gmon_cg_arc_record;
    #endif
}
