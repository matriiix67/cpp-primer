//
// Created by Bourne on 2018/3/26.
//

#include <iostream>
#include <string>
using namespace std;


class Base {
public:
    Base() = default;
    virtual ~Base() = default;

    virtual void test1() { cout << "base test1 0" << endl; }
    virtual void test1(int i) { cout << "base test1: " << i << endl; }


protected:
    int test = 0;
    int m2 = 1;
};


class Derived : public Base {
public:
    Derived() = default;
    ~Derived() = default;
    using Base::test1;
};



int main(int argc, char* argv[]) {
    Base base;
    Derived derived;

    derived.test1(1);

    Base* bp = &derived;
    bp->test1(1);

    return 0;
}