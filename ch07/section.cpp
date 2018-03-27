//
// Created by Bourne on 2018/3/20.
//

#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::cin;

typedef double Fire;
class Test{
public:
    Test() = default;
    int get() const {
        Fire test {11};
        return element; }
    void set() { element = 200; }

private:
    typedef int Fire;
    int element = 100;
};

int main(int argc, char* argv[])
{
    Test test;
    int result = test.get();
    cout << "reslut: " << result << endl;

    const Test ct;
    ct.get();

    int i;
    std::string str;
    cin >> i >> str;

    return 0;
}