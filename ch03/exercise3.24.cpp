#include <vector>
#include <iostream>

using namespace std;

int main()
{
  vector<int> ivec;

  int tmp;
  while(cin >> tmp)
    ivec.push_back(tmp);

  for(auto it = ivec.cbegin(); it != ivec.cend(); it += 2)
    cout << *it << " " << *(it + 1) << endl;

  for(auto begin = ivec.cbegin(), end = ivec.cend() - 1; begin <= end; begin++, end--)
    cout << *begin << " " << *end << endl; 

  return 0;
}
