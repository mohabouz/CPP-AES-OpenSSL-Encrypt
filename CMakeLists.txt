cmake_minimum_required(VERSION 3.0.0)
project(mb VERSION 0.1.0)

add_subdirectory(libs/b64)

find_package(OpenSSL REQUIRED)

add_executable(aes_test main.cpp utils.cpp)

target_include_directories(aes_test PRIVATE 
    libs/b64
)

target_link_libraries(aes_test 
    b64
    OpenSSL::SSL
)


