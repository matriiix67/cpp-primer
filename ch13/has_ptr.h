//
// Created by Bourne on 2018/1/2.
//

#ifndef CPP_PRIMER_HAS_PTR_H
#define CPP_PRIMER_HAS_PTR_H

#include <string>


class HasPtr
{
public:
    HasPtr(const std::string &s = std::string()) : ps_(new std::string(s)), i_(0) {}
    HasPtr(const HasPtr &p) : ps_(new std::string(*p.ps)), i_(p.i_) {}
    HasPtr& operator=(const HasPtr &);
    ~HasPtr() { delete  ps_; }
private:
    std::string *ps_;
    int i_;
};


#endif //CPP_PRIMER_HAS_PTR_H
