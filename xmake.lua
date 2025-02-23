add_rules("mode.release", "mode.debug")
set_languages("c++23")

target("posix")
set_kind("shared")
add_files(
    "src/*.cppm",
    "src/posix/*.cppm",
    "src/posix/arpa/*.cppm",
    "src/posix/net/*.cppm",
    "src/posix/netinet/*.cppm",
    "src/posix/sys/*.cppm",
    "src/posix/sys/platform/*.cppm"
)
