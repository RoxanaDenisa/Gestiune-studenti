add_library(Facultate
    src/Facultate.hpp
    src/Facultate.cpp
    

)

target_include_directories(Facultate PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/src")