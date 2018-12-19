cmake_minimum_required(VERSION 2.8)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pthread -std=c++0x")
 
include_directories(
    src-gen
    ../common-api-runtime/include
    ../common-api-dbus-runtime/include
    ../dbus-1.8.20
)
  
link_directories(
    /home/yoctoadm/common-api/common-api-runtime/build
    /home/yoctoadm/common-api/common-api-dbus-runtime/build
    /home/yoctoadm/common-api/dbus-1.8.20/dbus/.libs
)
 
add_executable(CalculatorClient
    src/CalculatorClient.cpp
    src-gen/v1_0/commonapi/CalculatorDBusProxy.cpp
    src-gen/v1_0/commonapi/CalculatorDBusDeployment.cpp
)
target_link_libraries(CalculatorClient CommonAPI CommonAPI-DBus dbus-1)
 
add_executable(CalculatorService
    src/CalculatorService.cpp
    src/CalculatorStubImpl.cpp
    src-gen/v1_0/commonapi/CalculatorDBusStubAdapter.cpp
    src-gen/v1_0/commonapi/CalculatorStubDefault.cpp
    src-gen/v1_0/commonapi/CalculatorDBusDeployment.cpp
)
target_link_libraries(CalculatorService CommonAPI CommonAPI-DBus dbus-1)