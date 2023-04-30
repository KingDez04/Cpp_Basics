//C++ Method Switch Case Calculator
#include <iostream>

using namespace std;

int addition(int num1, int num2);
int subtraction(int num1, int num2);
int multiplication(int num1, int num2);
float division(int num1, int num2);
int remainder(int num1, int num2);

int main()
{
    int num1, num2;
    char op;

    cout << "Enter num1: ";
    cin >> num1;

    cout << "Enter num2: ";
    cin >> num2;	


    cout << "Enter an operator '+', '-', '*', '/', '%': ";
    cin >> op;

   

    switch(op){
    case '+':
      cout << num1 << " + " <<  num2 << " = " << addition(num1, num2)<<endl;
	break;
    case '-':
	 cout << num1 << " - " << num2 << " = " << subtraction(num1, num2)<<endl;
        break;
    case '*':
       cout << num1 << " * " <<  num2 << " = " << multiplication(num1, num2)<<endl;
        break;
    case '/':
	if (num1 == 0 || num2 == 0)
	cout << "Please Input a Value that is not Zero" <<endl;
        cout << num1 << " / " <<  num2 << " = " << division(num1, num2)<<endl;
        break;
    case '%':
        cout << num1 << " % " <<  num2 << " = " << remainder(num1, num2)<<endl;
        break;
    default:
        printf("Invalid Operator!");
        break;
    }

    return 0;
}

int addition(int num1, int num2){
    int result;
    result = num1+num2;
    return result;
}
int subtraction(int num1, int num2){
    int result;
    result = num1-num2;
    return result;
}
int multiplication(int num1, int num2){
    int result;
    result =num1*num2;
    return result;
}
float division(int num1, int num2){
   float result;
    result = float(num1) / float(num2);
    return result;
}
int remainder(int num1, int num2){
    int result;
    result = num1%num2;
    return result;
}
