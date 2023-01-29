#include <iostream>
using namespace std;
/*
숫자 직사각형: 내 풀이
*/
int main()
{
    freopen("input.txt", "rt", stdin);
    int n, m;
    cin >> n >> m;
    int arr[n][m];
    int num = 1;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            arr[i][j] = num++;
        }
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << arr[i][j] << " ";
        }
        cout << '\n';
    }
    return 0;
}