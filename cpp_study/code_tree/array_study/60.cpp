#include <iostream>
using namespace std;
/*
파스칼의 삼각형: 내 풀이
*/
int main()
{
    freopen("input.txt", "rt", stdin);
    int n;
    cin >> n;
    int arr[n][n] = {};
    arr[0][0] = 1;
    // (i, j) = (i-1, j-1) + (i-1, j)
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if ((i - 1) >= 0 && (j - 1) >= 0)
            {
                arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
            }
            else
            {
                arr[i][j] = 1;
            }
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