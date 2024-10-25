cmake_minimum_required(VERSION 3.28.0)
project(AJBLib VERSION 0.1.0 LANGUAGES C CXX)
cmake_policy(SET CMP0076 NEW) # Explicitly allow conversion from relative paths to absolute paths

add_library(AJBLib)
add_subdirectory(src) # src contains all of the lib code.
target_link_directories(AJBLib PUBLIC inc)

# Option to enable/disable unit tests
# option(ENABLE_TESTS "Enable unit tests" OFF)

# if(ENABLE_TESTS)
    enable_testing()
    add_subdirectory(test)
# endif()