//
// Created by Bourne on 30/03/2018.
//

#ifndef CPP_PRIMER_BULK_QUOTE_HPP
#define CPP_PRIMER_BULK_QUOTE_HPP

#include "disc_quote.hpp"

class Bulk_quote : public Disc_quote {
public:
    Bulk_quote() = default;
    Bulk_quote(const std::string& book, double price, std::size_t qty, double disc):
            Disc_quote(book, price, qty, disc) {}
    double net_price(std::size_t) const override;

};

#endif //CPP_PRIMER_BULK_QUOTE_HPP
