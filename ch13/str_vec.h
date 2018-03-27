//
// Created by Bourne on 2018/1/2.
//

#ifndef CPP_PRIMER_STR_VEC_H
#define CPP_PRIMER_STR_VEC_H

#include <string>


class StrVec
{
public:
    StrVec() : elements_(nullptr), first_free_(nullptr), cap_(nullptr) {}
    StrVec(const StrVec &);
    StrVec(const StrVec &&) noexcept ;
    StrVec &operator=(const StrVec &);
    StrVec &operator=(const StrVec &&) noexcept;
    ~StrVec();

    void push_back(const std::string&);
    size_t size() const { return first_free_ - elements_; }
    size_t capacity() const { return cap_ - elements_; }
    std::string* begin() const { return elements_; }
    std::string* end() const { return first_free_; }

    std::string &operator[](std::size_t n) { return elements_[n]; }
    const std::string &operator[](std::size_t n) const { return elements_[n]; }

private:
    static std::allocator<std::string> alloc_;
    void chk_n_alloc() { if(size() == capacity()) reallocate() ; }
    std::pair<std::string*, std::string*> alloc_n_copy(const std::string *, const std::string *);

    void free();
    void reallocate();

    std::string *elements_;
    std::string *first_free_;
    std::string *cap_;
};


#endif //CPP_PRIMER_STR_VEC_H
