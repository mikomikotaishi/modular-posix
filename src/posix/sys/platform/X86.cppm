/**
 * @file X86.cppm
 * @brief Module file for Unix operations.
 *
 * This file contains the implementation of the Unix operations from the POSIX libraries.
 */

module;

#ifdef __unix__
#include <sys/platform/x86.h>
#endif

export module posix.sys.platform.X86;

/**
 * @brief Wrapper namespace for Unix POSIX operations.
 */
export namespace Posix::System::X86 {
    #ifdef __unix__
    inline bool x86_cpu_present(unsigned int __index) {
        const struct cpuid_feature *__ptr = __x86_get_cpuid_feature_leaf
        (__index / (8 * sizeof (unsigned int) * 4));
        unsigned int __reg
            = __index & (8 * sizeof (unsigned int) * 4 - 1);
        unsigned int __bit = __reg & (8 * sizeof (unsigned int) - 1);
        __reg /= 8 * sizeof (unsigned int);

        return __ptr->cpuid_array[__reg] & (1 << __bit);
    }

    inline bool x86_cpu_active(unsigned int __index) {
        if (__index == x86_cpu_IBT || __index == x86_cpu_SHSTK)
            return x86_cpu_cet_active (__index);

        const struct cpuid_feature *__ptr = __x86_get_cpuid_feature_leaf
        (__index / (8 * sizeof (unsigned int) * 4));
        unsigned int __reg
            = __index & (8 * sizeof (unsigned int) * 4 - 1);
        unsigned int __bit = __reg & (8 * sizeof (unsigned int) - 1);
        __reg /= 8 * sizeof (unsigned int);

        return __ptr->active_array[__reg] & (1 << __bit);
    }
    #endif
}
