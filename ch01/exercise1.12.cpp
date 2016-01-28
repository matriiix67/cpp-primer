// 完成-100~100的和，sum的最终值是0

#include <iostream>

int main(int argc, char *argv[])
{
    int sum = 0;
    for(int i = -100; i <= 100; ++i)
        sum += i;

    std::cout << "Sum is " << sum << std::endl;
    
    return 0;
}

