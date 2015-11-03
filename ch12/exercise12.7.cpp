#include<iostream>
#include<vector>
#include<memory>

using namespace std;

shared_ptr<vector<int>> make_vi_dynamically()
{
     return make_shared<vector<int>>();
}


shared_ptr<vector<int>> populate(shared_ptr<vector<int>> vi)
{
     for(int i; cout<< "Enter a integer:", cin>>i; vi->push_back(i))
          ;
     return vi;
}

ostream& print_vi(shared_ptr<vector<int>> vi)
{
     for(auto i : *vi)
          cout<<i<<" ";
     return cout;
}

int main()
{
     auto it = populate(make_vi_dynamically());
     print_vi(it)<<endl;
     return 0;
}
