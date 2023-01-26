#include <iostream>
using namespace std;
/*
 중복되지 않는 숫자 중 최대
 각 숫자의 빈도를 체크하고 
 뒤에서부터 탐색하면서 1개만 카운팅 된 숫자가 있으면 
 break하고 그 숫자를 출력  
*/
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
    int max_val = -1;
    for(int i = 1000; i >=0; i--) {
        if(arr[i] == 1) {
            max_val = i;
            break;
        }
    }
    cout << max_val; 
    return 0;
}