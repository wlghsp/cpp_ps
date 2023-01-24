#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;
    double arr[n];
    double sum_val = 0.0;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        sum_val += arr[i];
    }
    double average = sum_val / n;
    cout << fixed;
    cout.precision(1);
    cout << average << '\n';
    string grade;
    if(average >= 4.0) grade = "Perfect";
    else if(average >= 3.0) grade = "Good";
    else grade = "Poor";
    cout << grade;


    return 0;
}