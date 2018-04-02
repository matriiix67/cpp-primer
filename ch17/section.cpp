//
// Created by Bourne on 29/03/2018.
//

#include <iostream>
#include <string>
#include <vector>
#include <tuple>
#include <list>
#include <random>
using namespace std;



int main(int argc, char* argv[]) {
    default_random_engine e;
    for(size_t i = 0; i < 10; ++i) {
        cout << e() << " ";
    }
    cout << endl;

    return 0;
}

