add_library(Universitate
    src/Universitate.hpp
    src/Universitate.cpp
)

target_include_directories(Universitate PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/src")