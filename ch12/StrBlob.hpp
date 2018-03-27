//
// Created by Bourne on 2018/3/23.
//

#ifndef CPP_PRIMER_STRBLOB_HPP
#define CPP_PRIMER_STRBLOB_HPP

#include <string>
#include <vector>
#include <memory>



class StrBlob {
    friend class StrBlobPtr;
public:
    typedef std::vector<std::string>::size_type  size_type;
    StrBlob();
    StrBlob(std::initializer_list<std::string> il);
    size_type size() const { return data->size(); }
    bool empty() const { return data->empty(); }
    void pop_back();

    void push_back(const std::string &) const;

    std::string& front();
    std::string& back();

    std::string& front() const;
    std::string& back() const;


    StrBlobPtr begin() { return StrBlobPtr(*this); }
    StrBlobPtr end() { auto ret = StrBlobPtr(*this, data->size()); return ret; }
private:
    std::shared_ptr<std::vector<std::string>> data;
    void check(size_type i, const std::string &msg) const;
};


class StrBlobPtr {
public:
    StrBlobPtr(): curr(0) {}
    StrBlobPtr(StrBlob &a, size_t sz = 0): wptr(a.data), curr(sz) {}
    std::string& deref() const;
    StrBlobPtr& incr();

private:
    std::shared_ptr<std::vector<std::string>> check(std::size_t, const std::string&) const;
    std::weak_ptr<std::vector<std::string>> wptr;
    std::size_t curr;
};

#endif //CPP_PRIMER_STRBLOB_HPP
