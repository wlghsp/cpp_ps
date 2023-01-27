#include <iostream>
#define N 3
using namespace std;
/*
두 배열의 곱: 내 풀이
*/
int main()
{
    freopen("input.txt", "rt", stdin);
    int arr1[N][N];
    int arr2[N][N];
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            cin >> arr1[i][j];
        }
    }
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            cin >> arr2[i][j];
        }
    }
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            cout << arr1[i][j] * arr2[i][j] << " ";
        
        }
        cout << '\n';
    }
    return 0;
}