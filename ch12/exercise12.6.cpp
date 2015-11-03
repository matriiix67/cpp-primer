#include<iostream>
#include<string>
#include<vector>

using namespace std;

vector<int>* get_vector_int()
{
     vector<int>* vi = new vector<int>();
     return vi;
}

vector<int>* input_vector_int(vector<int>* vi)
{
     int i;
     while (cin >> i)
          vi->push_back(i);

     return vi;
}

void print_vector_int(vector<int>* vi)
{
     for(auto i : *vi)
          cout<< i << " ";
     cout<<endl;
}

int main()
{
     auto it = get_vector_int();
     input_vector_int(it);
     print_vector_int(it);

     delete it;

     return 0;
}
