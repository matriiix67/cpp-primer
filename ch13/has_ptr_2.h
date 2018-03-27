//
// Created by Bourne on 2018/1/2.
//

#ifndef CPP_PRIMER_HAS_PTR_2_H
#define CPP_PRIMER_HAS_PTR_2_H

#include <string>


class HasPtr2
{
public:
    HasPtr2(const std::string &s = std::string()) : ps_(new std::string(s)), i_(0), use_(new std::size_t(1)) {}
    HasPtr2(const HasPtr2& rhs) : ps_(rhs.ps_), i_(rhs.i_), use_(rhs.use_) { ++*use_; }
    HasPtr2& operator=(const HasPtr2 &);
    ~HasPtr2();
private:
    std::string *ps_;
    int i_;
    std::size_t *use_;
};


#endif //CPP_PRIMER_HAS_PTR_2_H
