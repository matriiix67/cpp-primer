#include <iostream>

int main(int argc, char *argv[])
{
    int test1, test2;
    int *p;
    test1 = 5;
    p = &test1;
    *p = 8;
    test2 = 10;
    p = &test2;
    
    return 0;
}
