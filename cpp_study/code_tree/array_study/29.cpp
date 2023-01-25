#include <iostream>
using namespace std;

int main()
{
    freopen("input.txt", "rt", stdin);
    int a, b;
    cin >> a >> b;
    int arr[10] = {};
    while (a > 1)
    {
        arr[a % b]++;
        a /= b;
    }
    int sum = 0;
    for(int i = 0; i < 10; i++) {
        if(arr[i] > 0) {
            sum += arr[i] * arr[i];
        }
    }
    cout << sum;

    return 0;
}