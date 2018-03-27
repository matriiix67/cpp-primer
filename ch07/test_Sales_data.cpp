//
// Created by Bourne on 2017/12/6.
//

#include "Sales_data.h"
#include <iostream>
using namespace std;


int main(int argc, char* argv[])
{
    Sales_data sd1;
    Sales_data sd2("isbn10001");
    Sales_data sd3("isbn10002", 100, 87.17);


    Sales_data total;
    if(read(cin, total)) {
        Sales_data trans;
        while(read(cin, trans)) {
            if(total.isbn() == trans.isbn()) {
                total.combine(trans);
            } else {
                print(cout, total) << endl;
                total = trans;
            }
        }
        print(cout, total);
    } else {
        cerr << "No data ?!" << endl;
    }

    return 0;
}