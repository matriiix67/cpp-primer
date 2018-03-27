//
// Created by Bourne on 2017/12/6.
//
#include <string>
#include <iostream>
#include "Sales_data.h"

Sales_data::Sales_data(const std::string& s, unsigned n, double p) : bookNo(s), units_sold(n), revenue(p * n) {  }
Sales_data::Sales_data(const std::string& s) : bookNo(s) {}

Sales_data& Sales_data::combine(const Sales_data& rhs){
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;
    return *this;
}


double Sales_data::avg_price() const {
    if(units_sold) {
        return revenue / units_sold;
    } else {
        return 0;
    }
}

Sales_data add(const Sales_data& lhs, const Sales_data& rhs) {
    Sales_data result = lhs;
    result.combine(rhs);
    return result;
}


std::ostream& print(std::ostream& os, const Sales_data& rhs) {
    os << rhs.isbn() << " " << rhs.units_sold << " " << rhs.revenue << " " << rhs.avg_price();
    return os;
}


std::istream& read(std::istream& is, Sales_data& rhs) {
    double price = 0.0;
    is >> rhs.bookNo >> rhs.units_sold >> price;
    rhs.revenue = price * rhs.units_sold;
    return is;
}