#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main(int argc, char *argv[])
{
    string str1, str2;
    str1 = "hello";
    str2 = "world";

    if(str1 == str2)
        cout << "equal" << endl;
    else
        cout << "not equal" << endl;

    const char cstr1[3] = "wo";
    const char cstr2[3] = "wo";

    if(0 != strcmp(cstr1, cstr2))
        cout << "not equal" << endl;
    else
        cout << "equal" << endl;
    
    return 0;
}
