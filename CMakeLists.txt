cmake_minimum_required(VERSION 3.25.0)

set (CMAKE_CXX_STANDARD 23)

project(Sivert
  LANGUAGES CXX
  VERSION 0.0.1
)

file(GLOB SOURCE "src/*.cpp")

add_executable(sivert ${SOURCE})

install(TARGETS sivert DESTINATION bin)

add_custom_target("uninstall" COMMENT "Uninstall installed files")
add_custom_command(
    TARGET "uninstall"
    POST_BUILD
    COMMENT "Uninstall files with install_manifest.txt"
    COMMAND xargs rm -vf < install_manifest.txt || echo Nothing in
            install_manifest.txt to be uninstalled!
)
