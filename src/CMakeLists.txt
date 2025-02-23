file(GLOB_RECURSE MODULES *.cppm)

add_library(modules SHARED)

set_target_properties(modules PROPERTIES OUTPUT_NAME "posix")

target_sources(modules
    PUBLIC
    FILE_SET CXX_MODULES FILES
    ${MODULES})