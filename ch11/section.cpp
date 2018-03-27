//
// Created by Bourne on 2018/3/23.
//


#include <utility>
#include <vector>
#include <string>
#include <map>
#include <algorithm>
#include <iostream>
using namespace std;


int main(int argc, char* argv[])
{
    string str;
    int i;

    vector<pair<string, int>> vp;
    while(cin >> str >> i) {
        vp.push_back(make_pair(str, i));
    }



    return 0;
}