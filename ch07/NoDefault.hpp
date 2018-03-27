//
// Created by Bourne on 2018/3/21.
//

#ifndef CPP_PRIMER_NODEFAULT_HPP
#define CPP_PRIMER_NODEFAULT_HPP


class NoDefault
{
public:
    NoDefault(int i){}

};

class C {
public:
    C() : noDefault(0) {}
private:
    NoDefault noDefault;
};

#endif //CPP_PRIMER_NODEFAULT_HPP
