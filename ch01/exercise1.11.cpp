#include <iostream>

int main(int argc, char *argv[])
{
    int start, end;
    std::cout << "Enter the start: ";
    std::cin >> start;
    std::cout << "Enter ther end: ";
    std::cin >> end;

    while (start <= end) {
        std::cout << start << " ";
        ++start;
    }

    std::cout << std::endl;
    
    return 0;
}
