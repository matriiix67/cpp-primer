//
// Created by Bourne on 2018/1/2.
//

#include <string>
#include "has_ptr.h"

using namespace std;

HasPtr& HasPtr::operator=(const HasPtr &rhs)
{
    auto new_p = new string(rhs.ps_);
    delete ps_;
    ps_ = new_p;
    i_ = rhs.i_;
    return *this;
}