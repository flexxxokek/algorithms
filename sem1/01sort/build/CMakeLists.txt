cmake_minimum_required(VERSION 3.14)
project(my_project)

# GoogleTest requires at least C++14
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)



enable_testing()

add_executable(
        out1
        ../01sort_1.cc
        ../tests.cc
)

add_executable(
        out2
        ../01sort_2.cc
        ../tests.cc
)

target_link_libraries(
  out1
  GTest::gtest_main
)

target_link_libraries(
  out2
  GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(out1)
gtest_discover_tests(out2)

