CPMAddPackage (
        NAME StableCoder-cmake-scripts
        GITHUB_REPOSITORY StableCoder/cmake-scripts
        GIT_TAG 1f822d1fc87c8d7720c074cde8a278b44963c354
)

message("I'm cmake/Tools.cmake")
include(${StableCoder-cmake-scripts_SOURCE_DIR}/c++-standards.cmake)
include(${StableCoder-cmake-scripts_SOURCE_DIR}/compiler-options.cmake)
