//C++ ATM Machine
#include <iostream>

using namespace std;

int main()
{
    int p1, p2, gcount, glim = 2;
    int choice, amnt;

    cout << "Enter 4-digit pin: "; 
    cin >> p1;
    cout << "Verify pin: ";
    cin >> p2;
    while(p1 != p2 && gcount<glim){
        cout << "Re-Verify pin: ";
        cin >> p2;
        gcount++;
    }
    if(p1 == p2){
        cout << "\nWELCOME!!!" << endl;
        cout << endl;
        cout << "1. Withdraw" << endl;
        cout << "2. Deposit" << endl;
        cout << "3. Check Balance" << endl;
        cout << "4. Quit" << endl;
        cout << endl;
        cout << "Enter a Number to select Transaction: ";
        cin >> choice;

        switch(choice){
        case 1:
            cout << "Enter an amount to withdraw: ";
            cin >> amnt;
            if(amnt<0){
                cout << "Error: Negative amount";
            } else if(amnt<100){
                cout << "Error: Amount too small to withdraw";
            } else{
                cout << amnt << "withdrawn successfully";
            }
            break;
        case 2:
            cout << "Enter an amount to deposit: ";
            cin >> amnt;
            if(amnt<0){
                cout << "Error: Negative amount";
            } else if(amnt<100){
                cout << "Error: Amount too small to deposit";
            } else{
                cout << "Deposition Successful";
            }
            break;
        case 3:
            cout << "Account Balance: " << 1000000;
            break;
        default:
            cout << "Thanks for using our service";
            break;
        }
        } else{
            cout << "Incorrect pin";
        }


    return 0;
}
