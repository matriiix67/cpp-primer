#include <iostream>
#include <iterator>

using namespace std;

int main()
{
  constexpr size_t size = 10;
  int ia[size];

  for(int *beg = begin(ia); beg != end(ia); beg++)
    *beg = 0;

  for(auto i : ia)
    cout << i << " ";

  cout << endl;

  return 0;
}
