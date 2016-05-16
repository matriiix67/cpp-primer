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

  for(auto s : svec)
    cout << s << "";
  cout << endl;

  for(int i = 0; i < svec.size(); i++)
    cout << svec[i] << " ";
  cout << endl;

  return 0;
}
