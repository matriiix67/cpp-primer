#include <iostream>
#include <initializer_list>
#include <typeinfo>

using namespace std;

int Sum(initializer_list<int> il_int)
{
     int sum = 0;
     for(auto it = il_int.begin(); it != il_int.end(); ++it)
     {
          sum += *it;
     }

     return sum;
}

int main()
{
     cout << Sum({1, 2, 3, 4, 5}) << endl;

     return 0;
}
