//C++ IF Calculator
#include <iostream>

using namespace std;

int main()
{
    int num1, num2;
    char op;

    cout << "Enter a number: ";
    cin >> num1;

    cout << "Enter an operator: ";
    cin >> op;

    cout << "Enter a number: ";
    cin >> num2;

    if(op == '+'){
        cout << num1 << " + " << num2 << " = " << num1 + num2;
    } else if(op == '-'){
        cout << num1 << " - " << num2 << " = " << num1 - num2;
    } else if(op == '*'){
        cout << num1 << " * " << num2 << " = " << num1 * num2;
    } else if(op == '/'){
        if(num2 == 0){
            printf("Error: Divide by 0");
        } else{
            cout << num1 << " / " << num2 << " = " << num1 / num2;
        }
    } else if(op == '%'){
        cout << num1 << " % " << num2 << " = " << num1 % num2;
    } else{
        cout << "Invalid Operator";
    }

    return 0;
}
