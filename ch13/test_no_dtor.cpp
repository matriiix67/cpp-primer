//
// Created by Bourne on 2018/1/2.
//

#include "no_dtor.h"

int main(int argc, char* argv[])
{
    NoDtor *no_dtor = new NoDtor();
    delete no_dtor; // illegal
    return 0;
}