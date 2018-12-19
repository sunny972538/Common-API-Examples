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
 
add_executable(HelloWorldClient
    src/HelloWorldClient.cpp
    src-gen/v1_0/commonapi/HelloWorldDBusProxy.cpp
    src-gen/v1_0/commonapi/HelloWorldDBusDeployment.cpp
)
target_link_libraries(HelloWorldClient CommonAPI CommonAPI-DBus dbus-1)
 
add_executable(HelloWorldService
    src/HelloWorldService.cpp
    src/HelloWorldStubImpl.cpp
    src-gen/v1_0/commonapi/HelloWorldDBusStubAdapter.cpp
    src-gen/v1_0/commonapi/HelloWorldStubDefault.cpp
    src-gen/v1_0/commonapi/HelloWorldDBusDeployment.cpp
)
target_link_libraries(HelloWorldService CommonAPI CommonAPI-DBus dbus-1)