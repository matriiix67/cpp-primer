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

// ��Ҫ������sum���൱���ǳ�ʼ��sum��isbn���������sum��ʱ��isbn����ʼ��Ϊ�ա�

