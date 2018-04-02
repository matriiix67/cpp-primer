//
// Created by Bourne on 2018/1/3.
//

#ifndef CPP_PRIMER_QUOTE_H
#define CPP_PRIMER_QUOTE_H

#include <string>

class Quote
{
public:
    Quote() = default;
    Quote(const Quote&) = default;
    Quote(Quote&&) = default;
    Quote& operator=(const Quote&) = default;
    Quote& operator=(Quote&&) = default;
    Quote(const std::string &book, double sales_price) : book_no_(book), price_(sales_price) {}
    std::string isbn() const { return bookNo; }
    virtual double net_price(std::size_t n) const { return n * price_; }
    virtual  ~Quote() = default;
private:
    std::string book_no_;
protected:
    double price_ = 0.0;
};

double print_total(std::ostream& os, const Quote &item, size_t n) {
    double ret = item.net_price(n);
    os << "ISBN: " << item.isbn()
       << " # sold: " << n << " total due: " << ret << endl;
    return ret;
}


#endif //CPP_PRIMER_QUOTE_H
