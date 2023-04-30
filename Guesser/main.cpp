//C++ Guess the Secret Number
#include <iostream>

using namespace std;

int main(){
    int snum = 5;
    int glim = 3, gcount, guess;

    cout << "Enter Secret Number: ";
    cin >> guess;

    while(snum != guess && gcount < glim){
        if(gcount < glim){
            cout << "Try Again: ";
            cin >> guess;
            gcount++;
        }
    }if(snum == guess){
        cout << "Verified";
    } else{
        cout << "Incorrect";
    }

    return 0;
}
