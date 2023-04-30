//C++ Average Score Calculation
#include <iostream>

using namespace std;

const int n = 5;
int main()
{
    double score, sum=0;

    for(int i=1; i<=n; i++){
        cout << "Enter your score: ";
        cin >> score;
        sum+=score;
      }
    double avg = sum/n;
    cout << "Total Score = " << sum << endl;
    cout << "Average score = " << avg << endl;

    return 0;
}
