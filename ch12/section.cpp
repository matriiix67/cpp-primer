//
// Created by Bourne on 2018/3/23.
//

#include <iostream>
#include <string>
#include <vector>
#include <memory>
using namespace std;


void process(std::shared_ptr<int> ptr)
{
    std::cout << "inside the process function:" << ptr.use_count() << "\n";
}

int main()
{

    auto sp = make_shared<int>();
    auto p = sp.get();
    delete p;

    return 0;
}