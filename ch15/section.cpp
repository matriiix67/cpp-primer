//
// Created by Bourne on 2018/3/26.
//

#include <iostream>
#include <string>
using namespace std;


class Base {
public:
    Base() : test(10) {}
    virtual ~Base() = default;

    virtual void print(int i = 0) { cout << "hello Base! " << test; }
protected:
    int test;
};


class Derived : public Base {
public:
    Derived() : test(20) {};
    ~Derived() {};

    void print(int i = 1) override { cout << "hello Derived! " << Base::test; }

private:
    int test;
};


class Derived2 : public Derived {
public:
    Derived2(){}
    ~Derived2() {}
    void print(int i = 2) override { cout << "hello Derived2 !"; }
private:
    int d2test;
};

int main(int argc, char* argv[]) {
    Base base;
    Derived derived;

    Base* bp = &derived;
    bp->print();

    Derived* dp = &derived;
    dp->print();

    Derived2 derived2;
    Base* dp2 = &derived2;
    dp2->print();
    return 0;
}