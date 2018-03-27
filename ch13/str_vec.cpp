//
// Created by Bourne on 2018/1/2.
//

#include "str_vec.h"
#include <string>
using namespace std;

void StrVec::push_back(const string &s)
{
    chk_n_alloc();
    alloc_.construct(first_free_++, s);
}


std::pair<std::string*, std::string*> StrVec::alloc_n_copy(const std::string *b, const std::string *e)
{
    auto data = alloc_.allocate(e - b);
    return {data, uninitialized_copy(b, e, data)};
}


void StrVec::free()
{
    if(elements_) {
        for(auto p = first_free_; p != elements_; ) {
            alloc_.deallocate(--p);
        }

        alloc_.deallocate(elements_, cap - elements_);
    }
}


StrVec::StrVec(const StrVec &s)
{
    auto new_data = alloc_n_copy(s.begin(), s.end());
    elements_ = new_data.first;
    first_free_ = cap = new_data.second;
}

StrVec::StrVec(const StrVec &&s) noexcept : elements_(s.elements_), first_free_(s.first_free_), cap_(s.cap_)
{
    s.elements_ = s.first_free_ = s.cap_ = nullptr;
}

StrVec& StrVec::operator=(const StrVec &&rhs) noexcept
{
    if(this != *rhs) {
        free();
        elements_ = rhs.elements_;
        first_free_ = rhs.first_free_;
        cap_ = rhs.cap_;
        rhs.elements_ = rhs.first_free_ = rhs.cap_ = nullptr;
    }
    return *this;
}

StrVec::~StrVec()
{
    free();
}


void StrVec::reallocate()
{
    auto new_capacity = size() ? 2 * size() : 1;
    auto new_data = alloc_.allocate(new_capacity);
    auto dest = new_data;
    auto elem = elements_;
    for(size_t i = 0; i != size(); ++i) {
        alloc_.construct(dest++, std::move(*elem++));
    }
    free();
    elements_ = new_data;
    first_free_ = dest;
    cap = elements_ + new_capacity;
}