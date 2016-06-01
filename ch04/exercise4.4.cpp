#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    // (12 / 3 * 4) + (5 * 15) + (24 % 4 / 2)
    int i = 12 / 3 *4 + 5 * 15 + 24 % 4 /2;
    int j = (12 / 3 * 4) + (5 * 15) + (24 % 4 / 2);

    cout << i << " " << j << endl;
    return 0;
}
