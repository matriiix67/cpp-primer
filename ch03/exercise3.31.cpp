#include <iostream>

using namespace std;

int main()
{
  int ia[10];
  for(int i = 0; i < 10; i++)
    ia[i] = i;

  int ia2[10];
  for(auto i = 0; i < 10; i++)
    ia2[i] = ia[i];

  return 0;
}
