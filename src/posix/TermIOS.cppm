/**
 * @file TermIOS.cppm
 * @brief Module file for Unix terminal I/O operations.
 *
 * This file contains the implementation of the Unix terminal I/O operations from the POSIX libraries.
 */

module;

#ifdef __unix__
#include <termios.h>
#endif

export module posix.TermIOS;

/**
 * @brief Wrapper namespace for Unix POSIX operations.
 */
export namespace Posix {
    #ifdef __unix__
    using ::cfgetospeed;
    using ::cfgetispeed;
    using ::cfsetospeed;
    using ::cfsetispeed;
    using ::cfsetspeed;
    using ::tcgetattr;
    using ::tcsetattr;
    using ::cfmakeraw;
    using ::tcsendbreak;
    using ::tcdrain;
    using ::tcflush;
    using ::tcflow;
    using ::tcgetsid;
    #endif
}
