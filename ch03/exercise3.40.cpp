#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main(int argc, char *argv[])
{
    char cstr1[10] = "hello";
    char cstr2[10] = "world";

    char cstr12[20] = "";
    strcat(cstr12, cstr1);
    strcat(cstr12, cstr2);

    cout << cstr12 << endl;
    
    return 0;
}
