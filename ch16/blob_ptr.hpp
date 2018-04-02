//
// Created by Bourne on 02/04/2018.
//

#ifndef CPP_PRIMER_BLOB_PTR_HPP
#define CPP_PRIMER_BLOB_PTR_HPP

#include "blob.h"

template <typename T>
class BlobPtr{
public:
    BlobPtr() : curr(0) {}
    BlobPtr(Blob<T>& a, size_t sz = 0) : wptr(a.data), curr(sz) {}
    T& operator*() const {
        auto p = check(crr, "dereference past end");
        return (*p)[curr];
    }

    BlobPtr& operator++();
    BlobPtr operator++(int);
    BlobPtr& operator--();

private:
    std::shared_ptr<std::vector<T>> check(std::size_t, const std::string&) const;
    std::weak_ptr<std::vector<T>> wptr;
    std::size_t curr;
};


template <typename T>
BlobPtr<T> BlobPtr<T>::operator++(int)
{
    BlobPtr ret = *this;
    ++*this;
    return ret;
}

#endif //CPP_PRIMER_BLOB_PTR_HPP
