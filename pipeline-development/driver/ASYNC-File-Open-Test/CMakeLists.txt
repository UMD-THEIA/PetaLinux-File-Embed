project(recfile_open_test)

cmake_minimum_required(VERSION 3.5)

set(CMAKE_CXX_STANDARD 17)

find_package(MetavisionSDK COMPONENTS core driver ui REQUIRED)

set (sample recfile_open_test)
add_executable(${sample} ${sample}.cpp)
target_link_libraries(${sample} MetavisionSDK::core MetavisionSDK::driver MetavisionSDK::ui)
