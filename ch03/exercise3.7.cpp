#include <string>
#include <iostream>

using namespace std;

int main()
{
  string str("abcdefghijklmnopq");
  cout << str << endl;

  //2
  for(char c : str)
    c = 'X';

  cout << str << endl;

  return 0;
}

// 引用变成char会c = 'X'未能改变str的值。

