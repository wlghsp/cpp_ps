#include <iostream>
using namespace std;
/*
동전이 있는 위치: 내 풀이
*/
int main()
{
    freopen("input.txt", "rt", stdin);
    
    int n, m;
    cin >> n >> m;
    int arr[n+1][n+1] = {};
    int r, c;
    for(int i = 0; i < m; i++) {
        cin >> r >> c;
        arr[r][c] = 1;
    }
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << '\n';
    }

    return 0;
}