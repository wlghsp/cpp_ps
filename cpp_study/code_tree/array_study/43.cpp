#include <iostream>
#include <climits>
using namespace std;
int main()
{
    freopen("input.txt", "rt", stdin);
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int max_val = INT_MIN;
    int max_idx = -1;
    int len = n;
    while(max_idx != 0) {
        for(int i = 0; i < len; i++) {
            if(arr[i] > max_val) {
                max_val = arr[i];
                max_idx = i;
            }
        }
        len = max_idx;
        max_val = INT_MIN;
        cout << max_idx + 1 << " ";
    }
    return 0;
}