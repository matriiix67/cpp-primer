//
// Created by Bourne on 2018/3/22.
//

#include <vector>
#include <iterator>
#include <numeric>
#include <list>
#include <iostream>
#include <algorithm>
using namespace std;

template <typename it_start, typename it_end, typename value_type>
int count(it_start start, it_end end, value_type value)
{
    int res = 0;
    while(start++ != end) {
        if(*start == value) {
            res++;
        }
    }
    return res;
};



int main(int argc, char* argv[])
{
    vector<int> vec;
//    auto it = back_inserter(vec);
//    *it = 42;
//    fill_n(vec.begin(), 10, 1); 没有报错误。。。
    fill_n(back_inserter(vec), 10, 0);

    return 0;
}
