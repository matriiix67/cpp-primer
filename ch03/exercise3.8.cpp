#include <string>
#include <iostream>

using namespace std;

int main()
{
  string str("abcdefghijklmnopq");
  cout << str << endl;

  //1
  char c;
  int i = 0;
  
  while(str[i]){
    str[i] = 'X';
    i++;
  }

  for(int i = 0; i < str.length; i++)
    str[i] = 'X';

  cout << str << endl;

  return 0;
}


// 自然是c++11的方式更好，更加的简洁。
