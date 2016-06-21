#include <iostream>
#include <string>
#include <vector>

using namespace std;

string finalgrade2(int grade)
{
    string finalgrade;
    if(grade > 90)
        finalgrade = "high pass";
    else if(grade >= 60 && grade <= 70)
        finalgrade = "low pass";
    else if(grade < 60)
        finalgrade = "fail";
    else
        finalgrade = "pass";

    return finalgrade;
}


int main(int argc, char *argv[])
{
    int grade = 75;
    string finalgrade = (grade > 90) ? "high pass"
        : (grade >= 60) && (grade <=70) ? "low pass" : (grade < 60) ? "fail" : "pass" ;

    cout << finalgrade << endl;

    cout << finalgrade2(34) << endl;
    return 0;
}
