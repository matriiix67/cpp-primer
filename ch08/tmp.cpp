#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    cout << "hi!" << endl;
    cout << "hi!" << flush;
    cout << "hi!" << ends;

    cout << unitbuf;
    cout << nounitbuf;

    return 0;
}
