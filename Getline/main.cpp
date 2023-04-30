//C++ Get line function
#include <iostream>

using namespace std;

int main()
{
    string name;

    cout << "Enter name: ";
    getline(cin, name);

    cout << name;

    return 0;
}
