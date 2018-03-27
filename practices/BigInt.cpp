//
// Created by Bourne on 2018/3/20.
//

#include "BigInt.hpp"
#include <cstring>


BigInt::BigInt() : positive(true), base(BigInt::default_base)
{

}

BigInt::BigInt(long long value)
{
    base = BigInt::default_base;
    if(value > 0) {
        positive = true;
    } else {
        positive = false;
        value *= -1;
    }

    while(value) {
        number.push_back(value % base);
        value /= base;
    }
}


BigInt::BigInt(std::string value)
{
    base = BigInt::default_base;
    positive = (value[0] != '-');

    int size = value.size();
    while(true) {
        if (size <= 0) break;
        if (!positive && size <= 1) break; // 只有一位符号位'-'，break

        int num = 0;
        int len = 0;
        int prefix = 1;
        for(int i = size - 1; i >= 0 && i >= size - 9; --i) {
            if(value[i] < '0' || value[i] > '9') break;
            num += (value[i] - '0') * prefix;
            prefix *= 10;
            ++len;
        }
        number.push_back(num);
        size -= len;
    }
}


BigInt BigInt::operator+(const BigInt& rhs) const
{
    BigInt res = *this;
    res += rhs;
    return res;
}


BigInt& BigInt::operator+=(const BigInt& rhs) // 如何this为负数，似乎处理不正确？
{
    if(!rhs.positive) {
        return *this -= rhs;
    }

    auto it1 = number.begin();
    auto it2 = rhs.number.begin();

    int sum = 0;
    while(it1 != number.end() || it2 != rhs.number.end()) {
        if(it1 != number.end()) {
            sum += *it1;
        } else {
            number.push_back(0);   //???
            it1 = number.end() - 1; //???
        }

        if (it2 != rhs.number.end()) {
            sum += *it2;
            ++it2;
        }

        *it1 = sum % base;
        ++it1;
        sum /= base;
    }
    if(sum) {
        number.push_back(1); // 进位
    }

    return *this;
}

//BigInt operator+(const long long value) const
//{
//
//}
//
//BigInt& operator+=(const long long value)
//{
//
//}