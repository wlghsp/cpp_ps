#include <iostream>
#include <climits>
using namespace std;

int main()
{
    freopen("input.txt", "rt", stdin);
    int n;
    cin >> n;
    int arr[n];
    int min_val = INT_MAX;
    int cnt = 0;
    for(int i = 0; i < n; i++) {
        int num;
        cin >> num;
        if(num < min_val) {
            min_val = num;
            cnt = 1;
        } else if (num == min_val) {
            cnt++;
        }
    }
    cout << min_val << " " << cnt;
    return 0;
}