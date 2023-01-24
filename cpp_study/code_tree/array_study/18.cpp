#include <iostream>
using namespace std;

int main()
{
    //freopen("input.txt", "rt", stdin);
    int arr[11];
    cin >> arr[1] >> arr[2];
    for(int i = 3; i < 11; i++) {
        int temp = arr[i-2] + arr[i-1];
        arr[i] = temp % 10;
    }
    for(int i = 1; i < 11; i++) cout << arr[i] << " ";
    return 0;
}