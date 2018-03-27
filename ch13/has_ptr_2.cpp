//
// Created by Bourne on 2018/1/2.
//

#include <string>
#include "has_ptr_2.h"
using namespace std;


HasPtr2::HasPtr2(const HasPtr2 &rhs)
{
    ++*rhs.use_;
    if(--*use_ == 0) {
        delete ps_;
        delete use_;
    }

    ps_ = rhs.ps_;
    i_ = rhs.i_;
    use_ = rhs.use_;
    return *this;
}


HasPtr2::~HasPtr2()
{
    if(--*use_ == 0) {
        delete ps_;
        delete use_;
    }
}