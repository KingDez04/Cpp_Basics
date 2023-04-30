//C++ Password
#include <iostream>

using namespace std;

int main(){

    int p1, p2, gcount = 1;
    int glim = 3;

    cout << "Enter a pin: ";
    cin >> p1;
    cout << "Verify pin: ";
    cin >> p2;

    while(p1 != p2 && gcount < glim){
        if(gcount < glim){
            cout << "Re-Verify pin: ";
            cin >> p2;
            gcount++;
        }
    }if(p1 == p2){
        cout << "Verified";
    }else{
        cout << "Incorrect";
    }

    return 0;
}
