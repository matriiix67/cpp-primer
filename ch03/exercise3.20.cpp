#include <vector>
#include <iostream>

using namespace std;

int main()
{
  vector<int> ivec;

  int tmp;
  while(cin >> tmp)
    ivec.push_back(tmp);

  for(int i = 0; i < ivec.size(); i += 2)
    cout << ivec[i] << " " << ivec[i + 1] << endl;

  for(int i = 0; i < (ivec.size() + 1) / 2; i++)
    cout << ivec[i] << " " << ivec[ivec.size() - i - 1] << endl;

  return 0;
}
