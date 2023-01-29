#include <iostream>
using namespace std;
/*
배열로 사각형 만들기
*/
int main()
{
    int n = 5;
    int arr[n][n] = {};
    // 첫 번째 행과 첫 번째 열은 1로 초기화
    for (int i = 0; i < n; i++)
    {
        arr[i][0] = 1;
        arr[0][i] = 1;
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            arr[i][j] = arr[i][j - 1] + arr[i - 1][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << '\n';
    }

    return 0;
}