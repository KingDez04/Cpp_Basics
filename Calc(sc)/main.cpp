//C++ Switch Case Calculator
#include <iostream>

using namespace std;

int main()
{
    int num1, num2;
    char op;

    cout << "Enter a number: ";
    cin >> num1;
    cout << "Enter a number: ";
    cin >> op;
    cout << "Enter a number: ";
    cin >> num2;

    switch(op){
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2;
            break;
        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2;
            break;
        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2;
            break;
        case '/':
            if(num2==0){
                cout << "Error: Divide by zero" << endl;
                return 0;
            }else{
                cout << num1 << " / " << num2 << " = " << num1 / num2;
            }
            break;
        case '%':
            cout << num1 << " % " << num2 << " = " << num1 % num2;
            break;
        default:
            cout << "Invalid Operator!";
            break;
    }

    return 0;
}
