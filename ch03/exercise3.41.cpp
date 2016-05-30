#include <vector>
#include <iostream>


using namespace std;

int main(int argc, char *argv[])
{
    int int_arr[3] = {1, 2, 3};
    vector<int> ivec(begin(int_arr), end(int_arr));

    for(auto i : ivec)
        cout << i << " ";

    cout << endl;
    return 0;
}
