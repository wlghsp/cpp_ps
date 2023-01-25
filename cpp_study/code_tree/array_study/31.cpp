#include <iostream>
using namespace std;

int main()
{
    freopen("input.txt", "rt", stdin);
    int n, m;
    cin >> n >> m;
    int arr[n];
    for(int i =0; i < n; i++) {
        cin >> arr[i];
    }
    int cnt = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] == m) {
            cnt++;
        }
    }
    cout << cnt;

    return 0;
}