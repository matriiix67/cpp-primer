//
// Created by Bourne on 28/03/2018.
//

#include <iostream>
#include <string>
#include <vector>
#include <memory>
using namespace std;

template <typename T>int compare(const T& v1, const T& v2)
{
    if(less<T>()(v1, v2)) return -1;
    if(less<T>()(v2, v1)) return 1;
    return 0;
}


class DebugDelete {
public:
    DebugDelete(ostream &s = std::cerr) : os(s) {}
    template <typename T> void operator()(T *p) const {
        os << "deleting unique_ptr" << std::endl;
        delete p;
    }
private:
    ostream &os;
};


template <typename  ...Args> void g(Args ...args) {
    cout << sizeof...(Args) << endl;
    cout << sizeof...(args) << endl;
}





template <typename T, typename ...Args>
ostream& print(ostream &os, const T &t, const Args &...rest) {
    os << t << ", ";
    return print(os, rest...);
};

template <typename T>
ostream &print(ostream &os, const T &t) {
    return os << t;
}

int main(int argc, char* argv[]) {
    unique_ptr<int, DebugDelete> p(new int, DebugDelete());
    unique_ptr<string, DebugDelete> sp(new string, DebugDelete());

    return 0;
}