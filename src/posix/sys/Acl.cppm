/**
 * @file Acl.cppm
 * @brief Module file for Unix operations.
 *
 * This file contains the implementation of the Unix operations from the POSIX libraries.
 */

module;

#ifdef __unix__
#include <sys/acl.h>
#endif

export module posix.sys.Acl;

/**
 * @brief Wrapper namespace for Unix POSIX operations.
 */
export namespace Posix::System {
    #ifdef __unix__
    using ::acl_init;
    using ::acl_dup;
    using ::acl_free;
    using ::acl_valid;

    using ::acl_copy_entry;
    using ::acl_create_entry;
    using ::acl_delete_entry;
    using ::acl_get_entry;
    using ::acl_add_perm;
    using ::acl_calc_mask;
    using ::acl_clear_perms;
    using ::acl_delete_perm;
    using ::acl_get_permset;
    using ::acl_set_permset;

    using ::acl_get_qualifier;
    using ::acl_get_tag_type;
    using ::acl_set_qualifier;
    using ::acl_set_tag_type;

    using ::acl_copy_ext;
    using ::acl_copy_int;
    using ::acl_from_text;
    using ::acl_size;
    using ::acl_to_text;

    using ::acl_delete_def_file;
    using ::acl_get_fd;
    using ::acl_get_file;
    using ::acl_set_fd;
    using ::acl_set_file;
    #endif
}
