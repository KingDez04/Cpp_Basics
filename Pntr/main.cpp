//C++ Working with Pointers
#include <iostream>

using namespace std;

int main(){
    int age;
    int* ptr;
    ptr = &age;
    //*ptr = age; NOTE: This assignment won't work;44

//Printing the age with the pointer variable
    cout << "Enter your age: ";
    cin >> *ptr;
    cout << "*ptr = " << *ptr << endl;

//Printing the address with the pointer variable
    cout << "ptr = " << ptr << endl;

//Printing the age with the age variable
    cout << "age = " << age << endl;

//Printing the address with the age variable
    cout << "&age = " << &age << endl;

    return 0;
}
