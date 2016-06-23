// 定义一个static变量即可实现

#include <iostream>
using namespace std;

size_t generate()
{
    static size_t ctr = 0;
    return ctr++;
}
