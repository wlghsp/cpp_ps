#include <iostream>
using namespace std;
/*
지그재그로 숫자 채우기: 내 풀이
*/
int main()
{
    freopen("input.txt", "rt", stdin);
    int n, m;
    cin >> n >> m;
    int arr[n][m];
    int num = 0;
    for(int i = 0; i < m; i++) {
        if(i % 2 == 0) {
            for(int j = 0; j < n; j++) {
                arr[j][i] = num;
                num++;   
            }
        } else {
            for(int j = n-1; j >=0; j--) {
                arr[j][i] = num;
                num++;   
            }
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