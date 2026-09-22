cmake_minimum_required(VERSION 3.20)
project(XCODE LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

include(CTest)

add_library(xcode_core
  src/xcode/core/engine.cpp
  src/xcode/core/project.cpp
  src/xcode/graph/graph.cpp
  src/xcode/memory/memory.cpp
  src/xcode/protocol/protocol.cpp
  src/xcode/security/security.cpp
  src/xcode/tools/tool_registry.cpp
)

target_include_directories(xcode_core
  PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)

target_compile_features(xcode_core PUBLIC cxx_std_20)

add_executable(xcode_cli src/xcode/main.cpp)
target_link_libraries(xcode_cli PRIVATE xcode_core)

if(BUILD_TESTING)
  add_executable(xcode_tests tests/xcode_core_tests.cpp)
  target_link_libraries(xcode_tests PRIVATE xcode_core)
  add_test(NAME xcode_core_tests COMMAND xcode_tests)
endif()
