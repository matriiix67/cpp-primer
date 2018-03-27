//
// Created by Bourne on 2018/3/20.
//


#include "Screen.hpp"
#include <iostream>
#include <string>

int main(int argc, char* argv[])
{
    Screen myScreen(5, 5, 'X');
    myScreen.move(1, 2);
    std::cout << std::endl;
    myScreen.display(std::cout);
    std::cout << std::endl;
    return 0;
}
