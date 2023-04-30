//C++ Method IF Calculator
#include <iostream>

using namespace std;

int addition(int num1, int num2);
int subtraction(int num1, int num2);
int multiplication(int num1, int num2);
int division(int num1, int num2);
int remainder(int num1, int num2);

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
        addition(num1, num2);
    } else if(op == '-'){
        subtraction(num1, num2);
    } else if(op == '*'){
        multiplication(num1, num2);
    } else if(op == '/'){
        division(num1, num2);
    } else if(op == '%'){
        remainder(num1, num2);
    } else{
        printf("Invalid Operator!");
    }

    return 0;
}
int addition(int num1, int num2){
    int result;
    result = cout << num1 << " + " << num2 << " = " << num1+num2;
    return result;
}
int subtraction(int num1, int num2){
    int result;
    result = cout << num1 << " - " << num2 << " = " << num1-num2;
    return result;
}
int multiplication(int num1, int num2){
    int result;
    result = cout << num1 << " * " << num2 << " = " << num1*num2;
    return result;
}
int division(int num1, int num2){
    int result;
    if(num2==0){
        result = cout << "Error: Divide by zero" << endl;
    } else{
        result = cout << num1 << " / " << num2 << " = " << num1/num2;
    }
    return result;
}
int remainder(int num1, int num2){
    int result;
    result = cout << num1 << " % " << num2 << " = " << num1%num2;
    return result;
}

