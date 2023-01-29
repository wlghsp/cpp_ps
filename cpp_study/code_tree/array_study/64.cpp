#include <iostream>
using namespace std;
/*
격자 모양 출력하기: 내 풀이
*/
int main()
{
    freopen("input.txt", "rt", stdin);
    
    int n, m;
    cin >> n >> m;
    int arr[n+1][n+1] = {};
    int r, c;
    for(int i = 1; i <= m; i++) {
        cin >> r >> c;
        arr[r][c] = r * c;
    }
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << '\n';
    }

    return 0;
}