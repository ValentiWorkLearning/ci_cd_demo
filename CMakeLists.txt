project(factorial)

#Let's build factorial as a library target
add_library(factorial factorial.cpp)

# From:
# GoogleTest requires at least C++14
set(CMAKE_CXX_STANDARD 14)

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
  factorialTest
  factorialTest.cpp
)
target_link_libraries(
  factorialTest
  factorial
  GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(factorialTest)
