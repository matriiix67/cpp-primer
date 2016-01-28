#include <iostream>
#include "Sales_item.h"

int main(int argc, char *argv[])
{
    Sales_item book, sum;

    if(std::cin >> sum)
        ;
    
    while(std::cin >> book) {
        sum += book;
    }

    std::cout << sum << std::endl;
    
    return 0;
}

// 需要先输入sum，相当于是初始化sum的isbn，否则输出sum的时候isbn被初始化为空。

