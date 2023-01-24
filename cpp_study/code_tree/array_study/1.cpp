#include <iostream>
using namespace std;

int main() {
    int arr[10];
    int sum_val = 0;
    for(int i =0; i < 10; i++) {
        int n;
        cin >> n;
        sum_val += n;
    }
    cout << sum_val;
    return 0;
}