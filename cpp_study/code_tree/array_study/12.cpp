#include <iostream>
using namespace std;

int main()
{
    //freopen("input.txt", "rt", stdin);
    int arr[10];
    int sum_val1 = 0, sum_val2 = 0;
    for(int i = 0; i < 10; i++) {
        cin >> arr[i];
    }
    for(int i = 0; i < 10; i++) {
        if((i + 1) % 2 == 0) sum_val1 += arr[i];
        if((i + 1) % 3 == 0) {
            sum_val2 += arr[i];
        }
    }
    cout << sum_val1 << " ";
    cout << fixed;
    cout.precision(1);
    cout << (double) sum_val2 / 3;
    return 0;
}