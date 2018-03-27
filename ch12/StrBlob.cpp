//
// Created by Bourne on 2018/3/23.
//

#include "StrBlob.hpp"

#include <exception>

using namespace std;

StrBlob::StrBlob() : data(make_shared<vector<string>>()){}
StrBlob::StrBlob(std::initializer_list<std::string> il) :
data(make_shared<vector<string>>(il)){ }

string& StrBlob::front() {
    check(0, "front on empty StrBloB");
    return data->front();
}

string& StrBlob::back() {
    check(0, "back on empty StrBlob");
    return data->back();
}

string& StrBlob::front() const {
    check(0, "front on empty StrBloB");
    return data->front();
}

string& StrBlob::back() const {
    check(0, "back on empty StrBlob");
    return data->back();
}

void StrBlob::pop_back() {
    check(0, "pop_back on empty StrBlob");
    data->pop_back();
}


void StrBlob::push_back(const std::string &s) const
{
    data->push_back(s);
}


void StrBlob::check(size_type i, const string &msg) const {
    if (i >= data->size())
        throw out_of_range(msg);
}


// StrBlobPtr

shared_ptr<vector<string>> StrBlobPtr::check(std::size_t i, const std::string &msg) const {
    auto ret = wptr.lock();
    if(!ret) {
        throw std::runtime_error("unbound StrBlobPtr");
    }

    if(i >= ret->size())
        throw std::out_of_range(msg);

    return ret;
}


string& StrBlobPtr::deref() const {
    auto p = check(curr, "dereference past end");
    return (*p)[curr];
}


StrBlobPtr& StrBlobPtr::incr() {
    check(curr, "increment past end of StrBlobPtr");
    ++curr;
    return *this;
}