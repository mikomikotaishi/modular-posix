/**
 * @file Msg.cppm
 * @brief Module file for Unix message queue operations.
 *
 * This file contains the implementation of the Unix message queue operations from the POSIX libraries.
 */

module;

#ifdef __unix__
#include <sys/msg.h>
#endif

export module posix.sys.Msg;

/**
 * @brief Wrapper namespace for Unix POSIX operations.
 */
export namespace Posix::System {
    #ifdef __unix__
    using MsgBuf = ::msgbuf;

    using ::msgctl;
    using ::msgget;
    using ::msgrcv;
    using ::msgsnd;
    #endif
}
