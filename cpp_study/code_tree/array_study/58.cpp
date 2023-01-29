#include <iostream>
using namespace std;
/*
격자 반대로 채우기: 내 풀이
*/
int main()
{
    freopen("input.txt", "rt", stdin);
    int n;
    cin >> n;
    int arr[n][n];
    int num = 1;
    for (int col = n - 1; col >= 0; col--)
    {
        if ((n - col - 1) % 2 == 0)
        {
            for (int row = n - 1; row >= 0; row--)
            {
                arr[row][col] = num++;
            }
        }
        else
        {
            for (int row = 0; row < n; row++)
            {
                arr[row][col] = num++;
            }
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