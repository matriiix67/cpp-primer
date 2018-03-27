cmake_minimum_required(VERSION 3.9)
project(cpp_primer)

set(CMAKE_CXX_STANDARD 11)

add_executable(test_section ch07/section.cpp)
add_executable(test_Sales_data ch07/test_Sales_data.cpp ch07/Sales_data.cpp)
add_executable(test_Window_mgr ch07/test_Window_mgr.cpp ch07/Window_mgr.cpp)
add_executable(test_Screen ch07/test_Screen.cpp ch07/Screen.cpp ch07/Window_mgr.cpp)
add_executable(test_Account ch07/test_Account.cpp)

add_executable(test_Person ch07/test_Person.cpp ch07/Person.cpp)
add_executable(test_NoDefault ch07/test_NoDefault.cpp ch07/NoDefault.hpp)

add_executable(section08 ch08/section.cpp)

add_executable(section10 ch10/section.cpp)
add_executable(count ch10/count.cpp)
add_executable(partition ch10/partition.cpp)


add_executable(section11 ch11/section.cpp)
add_executable(section12 ch12/section.cpp)

add_executable(test_no_dtor ch13/test_no_dtor.cpp ch13/no_dtor.h)
add_executable(test_default_copy_control ch13/test_default_copy_control.cpp ch13/default_copy_control.h)

add_executable(section15 ch15/section.cpp)



add_executable(test_BigInt practices/test_BigInt.cpp practices/BigInt.cpp)

