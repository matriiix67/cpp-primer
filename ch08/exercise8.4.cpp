#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

void f(string file_name, vector<string> &vs)
{
    ifstream input(file_name);
    if (input){
        string buf;
        while(getline(input, buf))
            vs.push_back(buf);
    }
}

int main(int argc, char *argv[])
{
    vector<string> vs;
    f("exercise8.1.cpp", vs);

    for(auto s : vs)
        cout << s << endl;

    return 0;
}
