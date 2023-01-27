#include <iostream>
#define N 5
#define M 3
using namespace std;
/*
대문자로 바꾸기: 내 풀이
*/
int main()
{
    freopen("input.txt", "rt", stdin);
    char arr[N][M];
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < M; j++) {
            cin >> arr[i][j];
        }
    }
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < M; j++) {
            arr[i][j] += 'A' - 'a';
            cout << arr[i][j] << " ";
            //cout << (char) (arr[i][j] - 32) << " ";
        }
        cout << '\n';
    }
    return 0;
}