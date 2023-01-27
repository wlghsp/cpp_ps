#include <iostream>
#define N 4
using namespace std;
/*
배열의 합: 내 풀이

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
    for(int i = 0; i < N; i++) {
        int sum = 0;
        for(int j = 0; j < N; j++) {
            sum += arr[i][j];
        }
        cout << sum << '\n';
    }
    return 0;
}