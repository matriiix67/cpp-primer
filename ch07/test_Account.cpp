//
// Created by Bourne on 2018/3/21.
//

#include "Account.hpp"


int main(int argc, char* argv[])
{
    Account account;
    account.getTest();
    account.getInter();

    const Account ca{};
    ca.getTest();
    return 0;
}