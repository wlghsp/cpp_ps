#include <iostream>
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
    int cnt = 0;
    int ans;
    for(int i = 0; i < n; i++) {
        if(arr[i] == 2) cnt++;
        if(cnt == 3) {
            ans = i + 1;
            break;
        }
    }
    cout << ans;
    return 0;
}