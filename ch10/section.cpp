//
// Created by Bourne on 2018/3/22.
//

#include <algorithm>
#include <fstream>
#include <iterator>
#include <iostream>
#include <vector>

using namespace std;

void elimDups(vector<string>& sv) {
    sort(sv.begin(), sv.end());
    auto end_unique = unique(sv.begin(), sv.end());
    sv.erase(end_unique, sv.end());
}

bool isShorter(const string& s1, const string& s2) {
    return s1.size() < s2.size();
}

int main(int argc, char* argv[])
{
    // 10.30/31

    istream_iterator<int> is_it(cin), is_eof;
    vector<int> ti;
    copy(is_it, is_eof, back_inserter(ti));
    sort(ti.begin(), ti.end());
    unique_copy(ti.begin(), ti.end(), ostream_iterator<int>(cout, " "));



    // 10.29
    ifstream ifs("txt");
    istream_iterator<string> ins_iter(ifs), end;
    vector<string> vs;
    copy(ins_iter, end, back_inserter(vs));

    std::copy(vs.cbegin(), vs.cend(), ostream_iterator<string>(std::cout, " "));

    istream_iterator<int> in_iter(cin), eof;
    vector<int> vec(in_iter, eof);


    // 10.28
    vector<int> iv {1, 2, 3, 4, 5, 6, 7, 8, 9};
    auto bi = back_inserter(iv);
    *bi = 10;
//    auto fi = front_inserter(iv);
//    *fi = 0;
    auto in = inserter(iv, find(iv.begin(), iv.end(), 5));
    *in = 5;

    ostream_iterator<int> out_it(cout, " ");
    copy(iv.begin(), iv.end(), out_it);

//    for_each(iv.begin(), iv.end(), [](int i) {cout << i << " ";});
//    cout << endl;


    vector<string> sv{"fox", "jumps", "over", "quick", "red", "red", "slow", "the", "the", "turtle", "intresting"};
    elimDups(sv);
    stable_sort(sv.begin(), sv.end(), isShorter);

    int res = count_if(sv.cbegin(), sv.cend(), [](const string& s) { return s.size() > 6; });

    auto f = [&res]()->bool {if(res > 0) --res; return res == 0;};
    res = f();

    cout << res << endl;
    for(const auto& s : sv) {
        cout << s << " ";
    }
    cout << endl;

    int other = 100;
    auto sum = [](int i1, int i2) {return i1 + i2; };
    auto sum2 = [other](int i2) {return other + i2; };
    auto total = sum2(1);
    cout << total << endl;


    return 0;
}
