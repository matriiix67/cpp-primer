//
// Created by Bourne on 2018/3/20.
//

#include "Person.hpp"

#include <iostream>
#include <string>

using namespace std;

int main(int argc, char* argv[])
{
    Person person;

    read(cin, person);
    print(cout, person);

    return 0;
}

