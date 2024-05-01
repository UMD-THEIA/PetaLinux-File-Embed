project (recfile_open_test)
cmake_minimum_required (VERSION 3.5)
set (CMAKE_CXX_STANDARD 17)


set (MAIN recfile_open_test)
add_executable (${MAIN} ${MAIN}.cpp)
install (TARGETS ${MAIN} RUNTIME DESTINATION bin)


set(bbWORKDIR "/home/jmwul/Desktop/PetaLinux-Projects/crosscompile-bin-test/os/build/tmp/work/cortexa9t2hf-neon-xilinx-linux-gnueabi/scriptembed/2.2-r0")

set(MetavisionSDK_DIR "${bbWORKDIR}/scriptembed/2.2-r0/recipe-sysroot/usr/share/cmake/MetavisionSDK")
list(APPEND CMAKE_PREFIX_PATH ${MetavisionSDK_DIR})

find_package (MetavisionSDK COMPONENTS core driver ui REQUIRED)
target_link_libraries (
    ${MAIN}
    MetavisionSDK::core
    MetavisionSDK::driver
    MetavisionSDK::ui
    )

list(APPEND CMAKE_MODULE_PATH "${bbWORKDIR}/recipe-sysroot/usr/share/cmake-3.21/Modules/FindOpenGL.cmake")
find_package(OpenGL REQUIRED)
