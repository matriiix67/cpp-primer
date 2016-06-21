#include <vector>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    vector<int> ivec = { 2, 3, 4, 5, 8, 12, 23, 15};

    for(auto & i : ivec)
        i % 2 == 1 ? i *= 2 : i;

    for(auto i : ivec)
        cout << i << " ";

    cout << endl;

    return 0;
}
