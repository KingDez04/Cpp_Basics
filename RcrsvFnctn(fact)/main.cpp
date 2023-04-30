//C++ Recursive Function(fact)
#include <iostream>

using namespace std;

long long fact(int n);

int main()
{
    int n;

    cout << "Enter a number: ";
    cin >> n;
    cout << n << "!" << " = " << fact(n);

    return 0;
}
long long fact(int n){
    if(n == 1 || n == 0)
        return 1;
    else if(n < 0)
        return 0;
    else
        return n*fact(n-1);
}
