#include <iostream>
using namespace std;
/*
파스칼의 삼각형: 해설 풀이
*/
int main()
{
    freopen("input.txt", "rt", stdin);
    int arr[15][15];

    int n;
    cin >> n;

    // 배열의 각 행의 첫 열과 마지막 열을 1로 초기화한다.
    for(int i = 0; i < n; i++) {
        arr[i][0] = 1;
        arr[i][i] = 1;
    }

    // 배열의 숫자를 채웁니다. 
    for(int i = 0; i < n; i++) {
        for(int j = 1; j < i; j++) {
            arr[i][j] = arr[i-1][j-1] + arr[i-1][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << '\n';
    }

    return 0;
}