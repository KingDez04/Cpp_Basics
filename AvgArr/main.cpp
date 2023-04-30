//C++ Array Average Score Calculation
#include <iostream>

using namespace std;

const int n = 5;
int main()
{
    int score[n];
    int sum = 0;
    double avg;

    for(int i=0; i<n; i++){
        cout << "Enter score: ";
        cin >> score[i];
        sum+=score[i];
    }
    avg = (double)sum/n;
    cout << "Total Score: " << sum << endl;
    cout << "Average Score: " << avg;


    return 0;
}
