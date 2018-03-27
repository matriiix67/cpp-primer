//
// Created by Bourne on 2018/1/3.
//

#include "bulk_quote.h"


double BulkQuote::net_price(std::size_t cnt) const
{
    if(cnt >= min_qty_) {
        return cnt * (1 - discount_) * price_;
    } else {
        return cnt * price_;
    }
}