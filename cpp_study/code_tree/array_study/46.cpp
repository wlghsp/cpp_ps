#include <iostream>
using namespace std;
/*
두 숫자의 차의 최솟값 : 내 풀이

*/
int main()
{
    freopen("input.txt", "rt", stdin);
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    int min_val = arr[1] - arr[0];
    for(int i = 1; i < n; i++) {
        int diff = arr[i] - arr[i-1];
        if(diff < min_val) min_val = diff;
    } 
    cout << min_val;
    return 0;
}