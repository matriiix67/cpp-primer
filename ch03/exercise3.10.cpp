#include <string>
#include <iostream>

using namespace std;

int mai()
{
  cout << "Enter a string of characters including punctuation." << endl;
  for(string s; getline(cin, s); cout << endl)
    for(auto c : s)
      if(!ispunct(c))
        cout << c ;

  return 0;
}
