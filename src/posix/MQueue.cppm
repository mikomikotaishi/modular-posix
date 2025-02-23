/**
 * @file Cpio.cppm
 * @brief Module file for Unix message queue operations.
 *
 * This file contains the implementation of the Unix message queue operations from the POSIX libraries.
 */

module;

#ifdef __unix__
#include <mqueue.h>
#endif

export module posix.MQueue;

/**
 * @brief Wrapper namespace for Unix POSIX operations.
 */
export namespace Posix {
    #ifdef __unix__
    using ::mq_open;
    using ::mq_close;
    using ::mq_getattr;
    using ::mq_setattr;
    using ::mq_unlink;
    using ::mq_notify;
    using ::mq_receive;
    using ::mq_send;
    using ::mq_timedreceive;
    using ::mq_timedsend;
    #endif
}
