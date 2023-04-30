//C++ Factorial
#include <iostream>

using namespace std;

int main()
{
    long long num, fact=1;

    cout << "Enter a number: ";
    cin >> num;

    if(num == 0 || num == 1){
        cout << num << "!" << " = " << fact;
    } else if(num < 0){
        cout << "Error: Negative Number.";
    } else{
        for(long long i = num; i>=2; i--){
        fact*=i;
    }
        cout << num <<"!" << " = " << fact;
    }

    return 0;
}
