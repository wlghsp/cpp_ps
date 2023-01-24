#include <iostream>
using namespace std;

int main()
{
    freopen("input.txt", "rt", stdin);
    int arr[100];
    int count_arr[11] = {};
    int i = 0;
    while (true) {
        cin >> arr[i];
        if (arr[i] == 0) break;
        if (arr[i] < 10) continue;
        count_arr[arr[i] /  10]++;
        i++;
    }
    for(int i = 10; i >= 1; i--) {
        cout << i  << "0 - " << count_arr[i] << '\n';
    }
    return 0;
}