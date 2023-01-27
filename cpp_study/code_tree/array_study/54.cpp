#include <iostream>
using namespace std;
/*
아래로 사각형 채우기: 내 풀이
*/
int main()
{
    freopen("input.txt", "rt", stdin);

    int n;
    cin >> n;
    int arr[n][n];
    int num = 1;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            arr[j][i] = num++;
        }
    }
     for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << '\n';
    }

    return 0;
}