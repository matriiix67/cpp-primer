#include <iostream>
#include <typeinfo>
#include <string>
#include <initializer_list>

using namespace std;

void error_msg(initializer_list<string> il)
{
    for(auto beg = il.begin(); beg != il.end(); ++beg)
    {
        cout<<*beg<<" ";
    }
    cout<<endl;
}

int main()
{
    initializer_list<string> il{"begin", "endl"};
    error_msg(il);

    error_msg({"hello", "world"});

    return 0;
}
