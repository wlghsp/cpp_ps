#include <iostream>
#include <climits>
using namespace std;

int main()
{
    freopen("input.txt", "rt", stdin);
    int n;
    cin >> n;
    int arr[1001] = {};
    for(int i = 0; i < n; i++) {
        int t;
        cin >> t;
        arr[t]++;
    }
    // 중복하지 않는 값이 존재하는가?
    bool exist = false;
    int max_val = 0;
    for(int i = 1000; i >=0; i--) {
        if(arr[i] == 1) {
            exist = true;
            max_val = i;
            break;
        }
    }
    cout << (exist ? max_val : -1); 
    return 0;
}