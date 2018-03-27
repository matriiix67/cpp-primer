//
// Created by Bourne on 2018/3/22.
//

#include <algorithm>
#include <functional>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool myNorm(string s, int len) {
    return s.size() >= len;
}

int main(int argc, char* argv[])
{
    vector<string> sv{"fox", "jumps", "over", "quick", "red", "red", "slow", "the", "the", "turtle"};
    auto end = partition(sv.begin(), sv.end(), bind(myNorm, placeholders::_1, 4));
    for(auto it = sv.begin(); it != end; ++it) {
        cout << *it << " ";
    }
    cout << endl;
    return 0;
}