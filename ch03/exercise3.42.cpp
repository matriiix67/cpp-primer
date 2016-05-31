#include <vector>
#include <iostream>


using namespace std;

int main(int argc, char *argv[])
{
    vector<int> ivec{1, 2, 3, 4, 5};
    int int_arr[5];

    for(int i = 0; i < 5; ++i)
        int_arr[i] = ivec[i];

    for(auto i : int_arr)
        cout << i << " " ;

    cout << endl;


    return 0;
}
