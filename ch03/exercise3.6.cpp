#include <string>
#include <iostream>

using namespace std;

int main()
{
  string str("abcdefghijklmnopq");
  cout << str << endl;

  //1
  for(decltype(str.size) i = 0; i < str.size(); ++i)
    str[i] = 'X';

  cout << str << endl;

  //2
  for(auto & c : str)
    c = 'X';

  cout << str << endl;

  return 0;
}
