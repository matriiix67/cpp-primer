#include <vector>
#include <string>
#include <iostream>

using namespace std;

int main()
{
  vector<string> svec;
  string str;
  while(cin>>str){
    svec.push_back(str);
  }

  cout << "size: " << svec.size() << endl;

  for(auto it = svec.cbegin(); it != svec.cend(); it++)
    cout << *it << " ";
  cout << endl;

  return 0;
}
