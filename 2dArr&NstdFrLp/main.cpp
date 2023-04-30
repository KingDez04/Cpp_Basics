//C++ 2D Array & Nested For Loops
#include <iostream>

using namespace std;

int main()
{
    int a = 3;
    int b = 2;

    int boy[a][b] = {
                       {1, 2},
                       {3, 4},
                       {5, 6},
                    };
    for(int i=0; i<a; i++){
        for(int j=0; j<b; j++){
            cout << boy[i][j];
        }
        cout << endl;
    }

    return 0;
}
