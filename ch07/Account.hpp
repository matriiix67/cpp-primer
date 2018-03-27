//
// Created by Bourne on 2018/3/21.
//

#ifndef CPP_PRIMER_ACCOUNT_HPP
#define CPP_PRIMER_ACCOUNT_HPP

class Account {
public:
    int getTest() const { return test; }
    int getInter() {return interestRate; }
    static double rate() { return interestRate; }

private:
    static int test;
    static constexpr int period = 30;
    double daily_tbl[period];
    static double interestRate;
};


int Account::test = 50;
double Account::interestRate = 100;


#endif //CPP_PRIMER_ACCOUNT_HPP
