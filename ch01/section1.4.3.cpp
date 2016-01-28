#include <iostream>

int main(int argc, char *argv[])
{
    int sum = 0, value = 0;
    while (std::cin >> value) // °´Ctrl + d ÍË³öÑ­»·
        sum += value;

    std::cout << "Sum is: " << sum << std::endl;
    
    return 0;
}
