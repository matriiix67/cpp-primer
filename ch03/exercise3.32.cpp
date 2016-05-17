#include <iostream>
#include <vector>

using namespace std;

int main()
{
  int ia[10];
  for(int i = 0; i < 10; i++)
    ia[i] = i;

  int ia2[10];
  for(auto i = 0; i < 10; i++)
    ia2[i] = ia[i];

  vector<int> ivec;
  for(auto i = 0; i < 10; i++)
    ivec.push_back(i);

  vector<int> ivec2;
  for(auto i : ivec)
    ivec2.push_back(i);



  return 0;
}
