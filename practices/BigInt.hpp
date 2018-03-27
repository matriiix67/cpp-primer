//
// Created by Bourne on 2018/3/20.
//

#ifndef CPP_PRIMER_BIGINT_HPP
#define CPP_PRIMER_BIGINT_HPP

#include <vector>
#include <string>


class BigInt
{
private:
    std::vector<int> number;
    bool positive; // 将这个符号位提取出来之后，加法只需要处理正数，而将负数加法，转换成减法来处理
    int base;
    static const int default_base=1000000000;

public:
    BigInt();
    BigInt(long long value);
    BigInt(std::string value);

    BigInt(const BigInt& rhs) = default;

    // adding
    BigInt operator+(const BigInt& rhs) const;
    BigInt& operator+=(const BigInt& rhs);
    BigInt operator+(const long long value) const;
    BigInt& operator+=(const long long value);

    // subtraction
    BigInt operator-(const BigInt& rhs) const;
    BigInt& operator-=(const BigInt& rhs);

    // multiplication

    //compare


    // 递增
    BigInt& operator++();
    BigInt& operator++(int);
};


#endif //CPP_PRIMER_BIGINT_HPP
