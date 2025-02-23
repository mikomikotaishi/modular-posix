/**
 * @file Spawn.cppm
 * @brief Module file for Unix process spawning operations.
 *
 * This file contains the implementation of the Unix process spawning operations from the POSIX libraries.
 */

module;

#ifdef __unix__
#include <spawn.h>
#endif

export module posix.Spawn;

/**
 * @brief Wrapper namespace for Unix POSIX operations.
 */
export namespace Posix {
    #ifdef __unix__
    using ::posix_spawn;
    using ::posix_spawnp;
    using ::posix_spawnattr_init;
    using ::posix_spawnattr_destroy;
    using ::posix_spawnattr_getsigdefault;
    using ::posix_spawnattr_setsigdefault;
    using ::posix_spawnattr_getsigmask;
    using ::posix_spawnattr_setsigmask;
    using ::posix_spawnattr_getflags;
    using ::posix_spawnattr_setflags;
    using ::posix_spawnattr_getpgroup;
    using ::posix_spawnattr_setpgroup;
    using ::posix_spawnattr_getschedpolicy;
    using ::posix_spawnattr_setschedpolicy;
    using ::posix_spawnattr_getschedparam;
    using ::posix_spawnattr_setschedparam;
    using ::posix_spawn_file_actions_init;
    using ::posix_spawn_file_actions_destroy;
    using ::posix_spawn_file_actions_addopen;
    using ::posix_spawn_file_actions_addclose;
    using ::posix_spawn_file_actions_adddup2;
    using ::posix_spawn_file_actions_addchdir_np;
    using ::posix_spawn_file_actions_addfchdir_np;
    using ::posix_spawn_file_actions_addclosefrom_np;
    using ::posix_spawn_file_actions_addtcsetpgrp_np;
    #endif
}
