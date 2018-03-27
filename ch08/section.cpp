//
// Created by Bourne on 2018/3/21.
//

#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

struct PersonInfo {
    string name;
    vector<string> phones;
};

int main(int argc, char* argv[])
{
    string line, word;
    vector<PersonInfo> people;
    while(getline(cin, line)) {
        PersonInfo info;
        istringstream record(line);
        record >> info.name;
        while(record >> word)
            info.phones.push_back(word);
        people.push_back(info);
    }

    return 0;
}
