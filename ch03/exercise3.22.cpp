#include <vector>
#include <string>
#include <iostream>

using namespace std;

int main()
{
  vector<string> text;

  string tmp;
  while(getline(cin, tmp))
    text.push_back(tmp);

  for(auto it = text.begin(); it != text.end() && !it->empty(); ++it){
    for(auto &c : *it)
      if(isalpha(c))
        c = toupper(c);
    cout << *it << endl;
  }

  return 0;
}
