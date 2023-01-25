#include <iostream>
#include <climits>
using namespace std;

int main()
{
    freopen("input.txt", "rt", stdin);
    int n;
    cin >> n;    
    int arr[n];
    int max_val = INT_MIN;
    int max_idx = -1;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        if(arr[i] > max_val) {
            max_val = arr[i];
            max_idx = i;
        }
    }
    int second_val = INT_MIN;
    for(int i = 0; i < n; i++) {
        if (i == max_idx) continue;
        if(arr[i] > second_val) second_val = arr[i];
    }
    cout << max_val << " " << second_val;
    return 0;
}