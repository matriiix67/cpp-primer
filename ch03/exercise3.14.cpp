#include <vector>
#include <iostream>

using namespace std;

int main()
{
  vector<int> ivec;
  int in;
  while(cin>>in){
    ivec.push_back(in);
  }

  for(int i = 0; i < ivec.size(); i++)
    cout << ivec[i] << " " << endl;

  return 0;
}
