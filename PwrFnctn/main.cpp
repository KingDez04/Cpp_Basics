//C++ Power Function
#include <iostream>

using namespace std;

int power(int basen, int pown);

int main()
{
    int basen, pown;

    cout << "Enter Number Base: ";
    cin >> basen;

    cout << "Enter Number Power: ";
    cin >> pown;

    cout << basen << "^" << pown << " = " << power(basen, pown);

    return 0;
}

int power(int basen, int pown){
    int result=1;
    for(int i=0; i<pown; i++){
        result*=basen;
    }
    return result;
}
