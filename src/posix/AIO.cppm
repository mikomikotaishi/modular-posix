/**
 * @file AIO.cppm
 * @brief Module file for Unix asynchronous I/O operations.
 *
 * This file contains the implementation of the Unix asynchronous I/O operations from the POSIX libraries.
 */

module;

#ifdef __unix__
#include <aio.h>
#endif

export module posix.AIO;

/**
 * @brief Wrapper namespace for Unix POSIX operations.
 */
export namespace Posix {
    #ifdef __unix__
    using AIOCB = ::aiocb;
    using AIOCB64 = ::aiocb64;
    using AIOInit = ::aioinit;

    using ::aio_init;
    using ::aio_read;
    using ::aio_write;
    using ::lio_listio;
    using ::aio_error;
    using ::aio_return;
    using ::aio_cancel;
    using ::aio_suspend;
    using ::aio_fsync;

    using ::aio_read64;
    using ::aio_write64;
    using ::lio_listio64;
    using ::aio_error64;
    using ::aio_return64;
    using ::aio_cancel64;
    using ::aio_suspend64;
    using ::aio_fsync64;
    #endif
}
