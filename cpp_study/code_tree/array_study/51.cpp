#include <iostream>
#define N 4
using namespace std;
/*
특정 원소들의 합: 내 풀이
*/
int main()
{
    freopen("input.txt", "rt", stdin);
    int arr[N][N];
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            cin >> arr[i][j];
        }
    }
    int sum = 0;
    for(int i = 0; i < N; i++) {
        for(int j = 0; j <= i; j++) {
            sum += arr[i][j];
        }
    }
    cout << sum;
    return 0;
}