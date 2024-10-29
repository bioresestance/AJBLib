find_package(GTest REQUIRED)
include(GoogleTest)

add_executable(AJBLibTests)

# Glob all .cpp files in the tests directory
file(GLOB TEST_SOURCES "tests/*.cpp")

# Add the globbed source files to the test executable
target_sources(AJBLibTests PRIVATE ${TEST_SOURCES})

target_link_libraries(AJBLibTests PUBLIC GTest::gtest_main AJBLib)

gtest_discover_tests(AJBLibTests)