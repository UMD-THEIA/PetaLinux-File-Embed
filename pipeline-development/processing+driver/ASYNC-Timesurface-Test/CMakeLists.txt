project (asynchronous_timesurface_test)
cmake_minimum_required (VERSION 3.5)
set (CMAKE_CXX_STANDARD 17)


set (MAIN asynchronous_timesurface_test)
add_executable (${MAIN} ${MAIN}.cpp)
install (TARGETS ${MAIN} RUNTIME DESTINATION bin)


set (TSLIB_HEADER "${CMAKE_CURRENT_SOURCE_DIR}/include/TimesurfaceLib.hpp")
set (TSLIB_EXEC "${CMAKE_CURRENT_SOURCE_DIR}/src/TimesurfaceLib.cpp")
add_library (tsLib ${TSLIB_EXEC} ${TSLIB_HEADER})
set_target_properties (tsLib PROPERTIES LINKER_LANGUAGE CXX)


add_subdirectory (src)


set(MetavisionSDK_DIR "/home/jmwul/Desktop/PetaLinux-Projects/crosscompile-bin-test/os/build/tmp/work/cortexa9t2hf-neon-xilinx-linux-gnueabi/scriptembed/0.1+gitAUTOINC+e5e5837d0f-r0/recipe-sysroot/usr/share/cmake/MetavisionSDK")
list(APPEND CMAKE_PREFIX_PATH ${MetavisionSDK_DIR})

find_package (MetavisionSDK COMPONENTS core driver REQUIRED)
target_link_libraries (
    ${MAIN}
    tsLib
    MetavisionSDK::core
    MetavisionSDK::driver
)