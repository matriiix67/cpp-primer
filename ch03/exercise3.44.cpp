#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int arr[3][4] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};

    using int_arr = int[4];

    for(int_arr & p : arr)
        for(int q : p)
            cout << q << " ";
    cout << endl;

    return 0;
}
