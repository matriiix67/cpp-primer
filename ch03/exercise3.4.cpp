#include <iostream>
#include <string>

using namespace std::cin;
using namespace std::cout;
using namespace std::endl;

int main()
{
  string str1, str2;
  cin >> str1, str2;

  if(str1 == str2)
    cout << str1 <<endl;
  else if( str1 > str2 )
    cout << str1 << endl;
  else
    cout << str2 << endl;
}
