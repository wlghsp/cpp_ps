#include <iostream>
using namespace std;
/*
두 개의 격자 비교하기: 내 풀이
*/
int main()
{
    freopen("input.txt", "rt", stdin);

    int N, M;    
    cin >> N >> M;
    int arr1[N][M];
    int arr2[N][M];

    for(int i = 0; i < N; i++) {
        for(int j = 0; j < M; j++) {
            cin >> arr1[i][j];
        }
    }
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < M; j++) {
            cin >> arr2[i][j];
        }
    }
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < M; j++) {
            cout << (arr1[i][j] == arr2[i][j] ? 0 : 1) << " ";
        
        }
        cout << '\n';
    }
    return 0;
}