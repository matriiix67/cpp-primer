cmake_minimum_required(VERSION 3.9)
project(cpp_primer)

set(CMAKE_CXX_STANDARD 11)

add_executable(test_section chapter07/section.cpp)
add_executable(test_Sales_data chapter07/test_Sales_data.cpp chapter07/Sales_data.cpp)
add_executable(test_Window_mgr chapter07/test_Window_mgr.cpp chapter07/Window_mgr.cpp)
add_executable(test_Screen chapter07/test_Screen.cpp chapter07/Screen.cpp chapter07/Window_mgr.cpp)
add_executable(test_Account chapter07/test_Account.cpp)

add_executable(test_Person chapter07/test_Person.cpp chapter07/Person.cpp)
add_executable(test_NoDefault chapter07/test_NoDefault.cpp chapter07/NoDefault.hpp)

add_executable(section08 chapter08/section.cpp)

add_executable(section10 chapter10/section.cpp)
add_executable(count chapter10/count.cpp)
add_executable(partition chapter10/partition.cpp)


add_executable(section11 chapter11/section.cpp)
add_executable(section12 chapter12/section.cpp)

add_executable(test_StrBlob chapter12/test_StrBlob.cpp chapter12/StrBlob.cpp)

add_executable(test_no_dtor chapter13/test_no_dtor.cpp chapter13/no_dtor.h)
add_executable(test_default_copy_control chapter13/test_default_copy_control.cpp chapter13/default_copy_control.h)

add_executable(section15 chapter15/section.cpp)



add_executable(test_BigInt practices/test_BigInt.cpp practices/BigInt.cpp)

