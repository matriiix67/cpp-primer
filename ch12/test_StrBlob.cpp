//
// Created by Bourne on 2018/3/23.
//

#include <iostream>
#include "StrBlob.hpp"
using namespace std;

int main(int argc, char* argv[]) {
    StrBlob b1;
    {
        StrBlob b2 = {"a", "an", "the"};
        b1 = b2;
        b2.push_back("about");
    }

    const StrBlob cs = {"a"};
    cs.push_back("12");
    int res = cs.size();
    return 0;
}

