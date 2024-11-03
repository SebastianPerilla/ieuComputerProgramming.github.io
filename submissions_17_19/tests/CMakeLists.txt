include(FetchContent)
FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG v1.15.2
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

include(GoogleTest)

add_executable(test_split test_split.cpp)

target_include_directories(test_split PRIVATE ${CMAKE_SOURCE_DIR}/homework_oct)

# Link each executable to the necessary libraries
target_link_libraries(test_split PRIVATE GTest::gtest_main)

gtest_discover_tests(test_split)
