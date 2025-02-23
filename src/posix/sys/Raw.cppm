/**
 * @file Raw.cppm
 * @brief Module file for Unix operations.
 *
 * This file contains the implementation of the Unix operations from the POSIX libraries.
 */

module;

#ifdef __unix__
#include <sys/raw.h>
#endif

export module posix.sys.Raw;

/**
 * @brief Wrapper namespace for Unix POSIX operations.
 */
export namespace Posix::System {
    #ifdef __unix__
    using RawConfigRequest = ::raw_config_request;
    #endif
}
