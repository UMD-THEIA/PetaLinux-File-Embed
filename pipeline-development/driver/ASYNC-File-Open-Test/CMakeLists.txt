project (recfile_open_test)
cmake_minimum_required (VERSION 3.5)
set (CMAKE_CXX_STANDARD 17)


set (MAIN recfile_open_test)
add_executable (${MAIN} ${MAIN}.cpp)
install (TARGETS ${MAIN} RUNTIME DESTINATION bin)


find_package (MetavisionSDK COMPONENTS core driver ui REQUIRED)
target_link_libraries (
    ${MAIN}
    MetavisionSDK::core
    MetavisionSDK::driver
    MetavisionSDK::ui
    )
