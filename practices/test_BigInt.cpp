//
// Created by Bourne on 2018/3/20.
//

#include "BigInt.hpp"

#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char* argv[])
{
    cout << "BigInt test ..." << endl;
    BigInt big1(12345);
    BigInt big2("12345678901234567890");
    BigInt big3("-12345678901234567890");

    BigInt res = big3 + big2;
    return 0;
}