/**
 * @file Quota.cppm
 * @brief Module file for Unix operations.
 *
 * This file contains the implementation of the Unix operations from the POSIX libraries.
 */

module;

#ifdef __unix__
#include <sys/quota.h>
#endif

export module posix.sys.Quota;

/**
 * @brief Wrapper namespace for Unix POSIX operations.
 */
export namespace Posix::System {
    #ifdef __unix__
    using IfDQBlk = ::if_dqblk;
    using IfNextDqBlk = ::if_dqblk;
    using IfDQInfo = ::if_dqinfo;

    using DQBlk = ::dqblk;
    using DQInfo = ::dqinfo;

    using ::quotactl;
    #endif
}
