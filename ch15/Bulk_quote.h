//
// Created by Bourne on 2018/1/3.
//

#ifndef CPP_PRIMER_BULK_QUOTE_H
#define CPP_PRIMER_BULK_QUOTE_H

#include "quote.h"
#include <string>

class BulkQuote : public Quote
{
public:
    BulkQuote() = default;
    BulkQuote(const std::string &book, double p, std::size_t qty, double discount) : Quote(book, p), min_qty_(qty), discount_(discount) {}

    double net_price(std::size_t) const override;
private:
    std::size_t min_qty_ = 0;
    double discount_ = 0.0;
};


#endif //CPP_PRIMER_BULK_QUOTE_H
