//
// Created by Bourne on 2018/1/3.
//

#ifndef CPP_PRIMER_BLOB_H
#define CPP_PRIMER_BLOB_H

#include <vector>
#include <memory>

template <typename T>
class Blob
{
public:
    typedef T value_type;
    typedef typename std::vector<T>::size_type size_type;
    Blob();
    Blob(std::initializer_list<T> il);
    size_type size() const { return data_->size(); }
    bool empty() const { return data_->empty(); }
    void push_back(const T &t) { data_->push_back(t); }
    void push_back(T &&t) { data_->push_back(std::move(t)); }
    void pop_back();
    T& back();
    T& operator[](size_type i);
private:
    std::shared_ptr<std::vector<T>> data_;
    void check(size_type i, const std::string &msg) const;
};


#endif //CPP_PRIMER_BLOB_H

template <typename T>
void Blob<T>::check(size_type i, const std::string &msg) const
{
    if(i >= data_->size()) {
        throw std::out_of_range(msg);
    }
}

template <typename T>
T& Blob<T>::back()
{
    check(0, "back on empty blob");
    return data_->back();
}


template <typename T>
T& Blob<T>::operator[](_Up i)
{
    check(i, "subscript out of range");
    return (*data_)[i];
}


template <typename T>
void Blob<T>::pop_back()
{
    check(0, "pop_back on empty Blob");
    data_->pop_back();
}


template <typename T>
Blob<T>::Blob() : data_(std::make_shared<std::vector<T>>()) { }

template <typename T>
Blob<T>::Blob(std::initializer_list<T> il) : data_(std::make_shared<std::vector<T>>(il)) { }

