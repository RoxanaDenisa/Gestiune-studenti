add_library(Student
    src/Student.hpp
    src/Student.cpp
    src/Bursier.hpp
    src/Bursier.cpp
)

target_include_directories(Student PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/src")