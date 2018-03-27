//
// Created by Bourne on 2017/12/6.
//

#ifndef CPP_PRIMER_SALES_DATA_H
#define CPP_PRIMER_SALES_DATA_H

#include <string>
#include <iostream>

class Sales_data {
    friend Sales_data add(const Sales_data&, const Sales_data&);
    friend std::ostream& print(std::ostream&, const Sales_data&);
    friend std::istream& read(std::istream&, Sales_data&);

public:
    Sales_data(std::istream& is) { read(is, *this); }
    Sales_data(const std::string&, unsigned, double);
    Sales_data(const std::string&);
    Sales_data() = default;

    std::string isbn() const { return bookNo; }
    Sales_data& combine(const Sales_data&);

private:
    double avg_price() const;

    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

Sales_data add(const Sales_data&, const Sales_data&);
std::ostream& print(std::ostream&, const Sales_data&);
std::istream& read(std::istream&, Sales_data&);


#endif //CPP_PRIMER_SALES_DATA_H
